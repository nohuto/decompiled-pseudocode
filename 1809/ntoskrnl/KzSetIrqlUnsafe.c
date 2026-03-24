/*
 * XREFs of KzSetIrqlUnsafe @ 0x14028DA60
 * Callers:
 *     KiChainedDispatch @ 0x1401BD200 (KiChainedDispatch.c)
 *     KiScanInterruptObjectList @ 0x1401BD5E0 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1401BD7C0 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1401BD910 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1401BDA60 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInterruptDispatch @ 0x1401BDB70 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1401BDF50 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401BE330 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1401BE710 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1401BEAF0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1401BF730 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1401C0A70 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1401C2010 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1401C2400 (KiVmbusInterruptDispatch.c)
 *     KiHvInterruptSubDispatch @ 0x1401C27E0 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1401C2940 (KiVmbusInterruptSubDispatch.c)
 *     KiSwInterrupt @ 0x1401C2AA0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1401C31C0 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1401C3800 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x1401C3EC0 (KiIpiInterruptSubDispatch.c)
 *     KiNmiInterruptStart @ 0x1401C8700 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x1401CC3C0 (KiMcheckAbort.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
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
