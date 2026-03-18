/*
 * XREFs of KzSetIrqlUnsafe @ 0x1402A4590
 * Callers:
 *     KiChainedDispatch @ 0x1401C4DA0 (KiChainedDispatch.c)
 *     KiScanInterruptObjectList @ 0x1401C5030 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1401C5210 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1401C5360 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1401C54B0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInterruptDispatch @ 0x1401C55C0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1401C5850 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401C5AE0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1401C5D70 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1401C5FF0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1401C6AD0 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1401C7B50 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1401C8F50 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1401C91F0 (KiVmbusInterruptDispatch.c)
 *     KiHvInterruptSubDispatch @ 0x1401C9470 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1401C95D0 (KiVmbusInterruptSubDispatch.c)
 *     KiSwInterrupt @ 0x1401C9730 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1401C9CF0 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1401CA1E0 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x1401CA740 (KiIpiInterruptSubDispatch.c)
 *     KiNmiInterruptStart @ 0x1401CEC40 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x1401D2540 (KiMcheckAbort.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int8 __fastcall KzSetIrqlUnsafe(unsigned __int8 a1)
{
  unsigned __int8 CurrentIrql; // di
  unsigned __int8 v3; // cl
  struct _KPRCB *CurrentPrcb; // rcx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > a1 )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a1 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(a1);
  }
  else
  {
    v3 = KeGetCurrentIrql();
    __writecr8(a1);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && a1 >= 2u && v3 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  }
  return CurrentIrql;
}
