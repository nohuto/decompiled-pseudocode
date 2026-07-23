/*
 * XREFs of MiUnlockNestedPageTableWritePte @ 0x140098414
 * Callers:
 *     MiClearPteAccessed @ 0x14006B770 (MiClearPteAccessed.c)
 *     MiEvictPageTableLock @ 0x1400982E0 (MiEvictPageTableLock.c)
 *     MiWsleFlush @ 0x1400B3250 (MiWsleFlush.c)
 *     MiRewritePteWithLockBit @ 0x1402BF86C (MiRewritePteWithLockBit.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     MiWriteValidPteNewProtection @ 0x140087960 (MiWriteValidPteNewProtection.c)
 *     MiShouldLockPteDirectly @ 0x140098600 (MiShouldLockPteDirectly.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     PsGetCurrentProcess @ 0x1400F13B0 (PsGetCurrentProcess.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140121FC0 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnlockNestedPageTableWritePte(__int64 a1, volatile __int64 *a2, __int64 a3, int a4)
{
  volatile __int64 *v6; // rdi
  int v8; // esi
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v15; // rcx
  struct _KLOCK_QUEUE_HANDLE v16[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(v16, 0, 24);
  v6 = a2;
  if ( (((unsigned __int64)a2 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
  {
    v8 = 1;
    if ( !a4 )
      KeAcquireInStackQueuedSpinLock(&qword_14043BF40, v16);
  }
  else
  {
    v8 = 0;
  }
  v9 = 0LL;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0
    && (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v6 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(PsGetCurrentProcess(0LL, a2) + 1296) + 552LL);
  }
  result = 0xFFFFF6FB7DBEDF68uLL;
  if ( v6 == (volatile __int64 *)0xFFFFF6FB7DBEDF68LL )
  {
    result = MI_INTERLOCKED_EXCHANGE_PTE(0xFFFFF6FB7DBEDF68uLL, a3);
    goto LABEL_18;
  }
  if ( v9 )
  {
    if ( (a3 & 1) != 0 )
      goto LABEL_18;
    goto LABEL_13;
  }
  if ( !(unsigned int)MiShouldLockPteDirectly(a1, v6) )
  {
    if ( (a3 & 1) != 0 )
    {
      result = (__int64)MiWriteValidPteNewProtection((unsigned __int64)v6, a3);
      goto LABEL_18;
    }
LABEL_13:
    result = MiPteInShadowRange((unsigned __int64)v6);
    if ( (_DWORD)result )
    {
      result = MiPteHasShadow(v12, v11);
      if ( (_DWORD)result )
        LODWORD(v11) = 1;
    }
    *v6 = a3;
    if ( (_DWORD)v11 )
      result = MiWritePteShadow(v6);
    goto LABEL_18;
  }
  _InterlockedExchange64(v6, a3);
  result = MiPteInShadowRange((unsigned __int64)v6);
  if ( (_DWORD)result )
    result = MiWritePteShadow(v15);
  v6 = 0LL;
LABEL_18:
  if ( v8 && !a4 )
  {
    KxReleaseQueuedSpinLock(v16);
    OldIrql = v16[0].OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v16[0].OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = OldIrql;
    __writecr8(OldIrql);
  }
  if ( v6 )
    return MiUnlockPageTableInternal(a1, v6);
  return result;
}
