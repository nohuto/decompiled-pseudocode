/*
 * XREFs of MiUnlockNestedPageTableWritePte @ 0x14005E380
 * Callers:
 *     MiWsleFlush @ 0x140025220 (MiWsleFlush.c)
 *     MiClearPteAccessed @ 0x14004D4C0 (MiClearPteAccessed.c)
 *     MiEvictPageTableLock @ 0x14005E204 (MiEvictPageTableLock.c)
 *     MiRewritePteWithLockBit @ 0x1402D8C90 (MiRewritePteWithLockBit.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiShouldLockPteDirectly @ 0x14005E530 (MiShouldLockPteDirectly.c)
 *     MiWriteValidPteNewProtection @ 0x14005E890 (MiWriteValidPteNewProtection.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140129B04 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnlockNestedPageTableWritePte(__int64 a1, volatile __int64 *a2, __int64 a3, int a4)
{
  volatile __int64 *v4; // rdi
  int v8; // esi
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rcx
  unsigned __int8 OldIrql; // bl
  __int64 v13; // rcx
  __int64 v14; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v4 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (((unsigned __int64)a2 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
  {
    v8 = 1;
    if ( !a4 )
      KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  }
  else
  {
    v8 = 0;
  }
  v9 = 0LL;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0
    && (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v4 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v9 = *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14] + 608LL);
  }
  result = 0xFFFFF6FB7DBEDF68uLL;
  if ( v4 == (volatile __int64 *)0xFFFFF6FB7DBEDF68LL )
  {
    result = MI_INTERLOCKED_EXCHANGE_PTE(0xFFFFF6FB7DBEDF68uLL, a3);
    goto LABEL_11;
  }
  if ( v9 )
  {
    if ( (a3 & 1) != 0 )
      goto LABEL_11;
    result = MiPteInShadowRange((unsigned __int64)v4);
    if ( (_DWORD)result )
    {
      result = MiPteHasShadow(v14);
      if ( (_DWORD)result )
      {
LABEL_32:
        *v4 = a3;
        result = MiWritePteShadow(v4, a3);
        goto LABEL_11;
      }
    }
LABEL_23:
    *v4 = a3;
    goto LABEL_11;
  }
  if ( !(unsigned int)MiShouldLockPteDirectly(a1, v4) )
  {
    if ( (a3 & 1) != 0 )
    {
      result = MiWriteValidPteNewProtection(v4, a3);
      goto LABEL_11;
    }
    result = MiPteInShadowRange((unsigned __int64)v4);
    if ( (_DWORD)result )
    {
      result = MiPteHasShadow(v13);
      if ( (_DWORD)result )
        goto LABEL_32;
    }
    goto LABEL_23;
  }
  _InterlockedExchange64(v4, a3);
  result = MiPteInShadowRange((unsigned __int64)v4);
  if ( (_DWORD)result )
    result = MiWritePteShadow(v11, a3);
  v4 = 0LL;
LABEL_11:
  if ( v8 && !a4 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = OldIrql;
    __writecr8(OldIrql);
  }
  if ( v4 )
    return MiUnlockPageTableInternal(a1);
  return result;
}
