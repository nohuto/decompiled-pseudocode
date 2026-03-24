/*
 * XREFs of MiAttachSession @ 0x140125B14
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14006D580 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     KeFlushTb @ 0x1400755B0 (KeFlushTb.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     MiCompareTbFlushTimeStamp @ 0x14009831C (MiCompareTbFlushTimeStamp.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC760 (KxReleaseQueuedSpinLock.c)
 *     MiWritePteShadow @ 0x140120E70 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120ED0 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiAttachSession(unsigned __int64 a1)
{
  __int64 v2; // rdx
  __int64 *v3; // r8
  int v4; // r9d
  unsigned __int8 OldIrql; // bl
  char result; // al
  bool v7; // zf
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_14043AE80, &LockHandle);
  KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] = a1;
  if ( MiPteInShadowRange(8 * (((unsigned __int64)qword_140439FC0 >> 39) & 0x1FF) - 0x90482413000LL) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v4 = 1;
      if ( HIBYTE(word_14043A1AC) )
        goto LABEL_2;
      v7 = (v2 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_2;
      v7 = (v2 & 1) == 0;
    }
    if ( !v7 )
      v2 |= 0x8000000000000000uLL;
  }
LABEL_2:
  *v3 = v2;
  if ( v4 )
    MiWritePteShadow((__int64)v3, v2);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  result = MiCompareTbFlushTimeStamp(dword_140438F60, 0xFFFFFFFFLL);
  if ( result )
    return KeFlushTb(1u, 0);
  return result;
}
