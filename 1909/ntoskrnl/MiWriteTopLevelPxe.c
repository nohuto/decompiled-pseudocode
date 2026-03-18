/*
 * XREFs of MiWriteTopLevelPxe @ 0x14017A800
 * Callers:
 *     MiLinkPoolCommitChain @ 0x1400231B0 (MiLinkPoolCommitChain.c)
 *     MiDeletePteRun @ 0x140028050 (MiDeletePteRun.c)
 *     MiDeleteVa @ 0x14004B520 (MiDeleteVa.c)
 *     MiMapNewSession @ 0x14074270C (MiMapNewSession.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiWriteTopLevelPxe(_QWORD *a1, __int64 a2)
{
  BOOL v4; // eax
  int v5; // edx
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v4 = MiPteInShadowRange((unsigned __int64)a1);
  v5 = 0;
  if ( (a2 & 1) != 0 )
  {
    if ( !v4 )
      goto LABEL_3;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v5 = 1;
      if ( HIBYTE(word_1404658EC) )
        goto LABEL_3;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
    {
      goto LABEL_3;
    }
    a2 |= 0x8000000000000000uLL;
  }
  else if ( v4 )
  {
    if ( (unsigned int)MiPteHasShadow() )
      v5 = 1;
  }
LABEL_3:
  *a1 = a2;
  if ( v5 )
    MiWritePteShadow((__int64)a1);
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
