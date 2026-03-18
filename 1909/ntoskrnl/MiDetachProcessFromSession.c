/*
 * XREFs of MiDetachProcessFromSession @ 0x1401262F8
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140048180 (MiTrimOrAgeWorkingSet.c)
 *     MiDereferenceSessionFinal @ 0x140728ECC (MiDereferenceSessionFinal.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDetachProcessFromSession(int a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdx
  int v4; // r8d
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  bool v9; // zf
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v11[8]; // [rsp+0h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = (_QWORD *)(8 * (((unsigned __int64)qword_1404656D8 >> 39) & 0x1FF) - 0x90482413000LL);
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  if ( MiPteInShadowRange((unsigned __int64)v2) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v4 = 1;
      if ( HIBYTE(word_1404658EC) )
        goto LABEL_2;
      v9 = (v3 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_2;
      v9 = (v3 & 1) == 0;
    }
    if ( !v9 )
      v3 |= 0x8000000000000000uLL;
  }
LABEL_2:
  *v2 = v3;
  if ( v4 )
    MiWritePteShadow((__int64)v2);
  v5 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1];
  if ( a1 == 1 )
  {
    v6 = *(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(v5 + 430));
    _InterlockedOr(v11, 0);
    *(_DWORD *)(v6 + 7824) = KiTbFlushTimeStamp;
    KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1] = 0LL;
  }
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
  return result;
}
