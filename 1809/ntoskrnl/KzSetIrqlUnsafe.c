/*
 * XREFs of KzSetIrqlUnsafe @ 0x14028D960
 * Callers:
 *     KiChainedDispatch @ 0x1401BD1E0 (KiChainedDispatch.c)
 *     KiScanInterruptObjectList @ 0x1401BD5C0 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1401BD7A0 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1401BD8F0 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1401BDA40 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInterruptDispatch @ 0x1401BDB50 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1401BDF30 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401BE310 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1401BE6F0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1401BEAD0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1401BF710 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1401C0A50 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1401C1FF0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1401C23E0 (KiVmbusInterruptDispatch.c)
 *     KiHvInterruptSubDispatch @ 0x1401C27C0 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1401C2920 (KiVmbusInterruptSubDispatch.c)
 *     KiSwInterrupt @ 0x1401C2A80 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1401C31A0 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1401C37E0 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x1401C3EA0 (KiIpiInterruptSubDispatch.c)
 *     KiNmiInterruptStart @ 0x1401C8600 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x1401CC2C0 (KiMcheckAbort.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
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
