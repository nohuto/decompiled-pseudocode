/*
 * XREFs of KzSetIrqlUnsafe @ 0x1402A42F0
 * Callers:
 *     KiChainedDispatch @ 0x1401C5920 (KiChainedDispatch.c)
 *     KiScanInterruptObjectList @ 0x1401C5BB0 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1401C5D90 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1401C5EE0 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1401C6030 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInterruptDispatch @ 0x1401C6140 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1401C63D0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401C6660 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1401C68F0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1401C6B70 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1401C7650 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1401C86D0 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1401C9AD0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1401C9D70 (KiVmbusInterruptDispatch.c)
 *     KiHvInterruptSubDispatch @ 0x1401C9FF0 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1401CA150 (KiVmbusInterruptSubDispatch.c)
 *     KiSwInterrupt @ 0x1401CA2B0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1401CA870 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1401CAD60 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x1401CB2C0 (KiIpiInterruptSubDispatch.c)
 *     KiNmiInterruptStart @ 0x1401CF840 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x1401D3140 (KiMcheckAbort.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
