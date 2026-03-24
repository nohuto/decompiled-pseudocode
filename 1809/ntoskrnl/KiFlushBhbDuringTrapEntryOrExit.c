/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1180
 * Callers:
 *     KxIsrLinkage @ 0x1401BF730 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1401C0A70 (KiApcInterrupt.c)
 *     KiHvInterrupt @ 0x1401C1160 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1401C1450 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1401C1740 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401C1A30 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1401C1D20 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x1401C2AA0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1401C31C0 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1401C3800 (KiIpiInterrupt.c)
 *     KyStartUserThread @ 0x1401C49F0 (KyStartUserThread.c)
 *     KiDivideErrorFault @ 0x1401C7F00 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x1401C8300 (KxDebugTrapOrFault.c)
 *     KiBreakpointTrap @ 0x1401C8BC0 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x1401C8F00 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x1401C9240 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1401C98C0 (KiInvalidOpcodeFault.c)
 *     KiNpxNotAvailableFault @ 0x1401C9F00 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x1401CA200 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x1401CA4C0 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x1401CA7C0 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x1401CAAC0 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x1401CAE80 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x1401CB1C0 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x1401CB500 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x1401CBCC0 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x1401CC080 (KiAlignmentFault.c)
 *     KxMcheckAlternateReturn @ 0x1401CCA00 (KxMcheckAlternateReturn.c)
 *     KiXmmException @ 0x1401CD040 (KiXmmException.c)
 *     KiVirtualizationException @ 0x1401CD400 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1401CDA40 (KiControlProtectionFault.c)
 *     KiRaiseSecurityCheckFailure @ 0x1401CE040 (KiRaiseSecurityCheckFailure.c)
 *     KiRaiseAssertion @ 0x1401CE380 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x1401CE6C0 (KiDebugServiceTrap.c)
 *     KiSystemService @ 0x1401CEA00 (KiSystemService.c)
 *     KiSystemCall32 @ 0x1401CEC40 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x1401CF100 (KiSystemCall64.c)
 *     KiSystemCall32Shadow @ 0x14032FE00 (KiSystemCall32Shadow.c)
 *     KiSystemCall64Shadow @ 0x140330140 (KiSystemCall64Shadow.c)
 * Callees:
 *     <none>
 */

char KiFlushBhbDuringTrapEntryOrExit()
{
  char result; // al

  if ( (KeGetPcr()->Prcb.BpbFeatures & 0x30) == 0 )
    __debugbreak();
  result = KeGetPcr()->Prcb.BpbFeatures & 0x30;
  switch ( result )
  {
    case 16:
      return KiFlushBhbDuringTrapEntryOrExitPreAlderLake(56026LL);
    case 32:
      return KiFlushBhbDuringTrapEntryOrExitAlderLake(56026LL);
    case 48:
      return KiFlushBhbDuringTrapEntryOrExitTsx(56026LL);
  }
  __debugbreak();
  return result;
}
