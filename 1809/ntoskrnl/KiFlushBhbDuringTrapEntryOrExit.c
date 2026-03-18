/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1080
 * Callers:
 *     KxIsrLinkage @ 0x1401BF710 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1401C0A50 (KiApcInterrupt.c)
 *     KiHvInterrupt @ 0x1401C1140 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1401C1430 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1401C1720 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401C1A10 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1401C1D00 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x1401C2A80 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1401C31A0 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1401C37E0 (KiIpiInterrupt.c)
 *     KyStartUserThread @ 0x1401C49D0 (KyStartUserThread.c)
 *     KiDivideErrorFault @ 0x1401C7E00 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x1401C8200 (KxDebugTrapOrFault.c)
 *     KiBreakpointTrap @ 0x1401C8AC0 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x1401C8E00 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x1401C9140 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1401C97C0 (KiInvalidOpcodeFault.c)
 *     KiNpxNotAvailableFault @ 0x1401C9E00 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x1401CA100 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x1401CA3C0 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x1401CA6C0 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x1401CA9C0 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x1401CAD80 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x1401CB0C0 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x1401CB400 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x1401CBBC0 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x1401CBF80 (KiAlignmentFault.c)
 *     KxMcheckAlternateReturn @ 0x1401CC900 (KxMcheckAlternateReturn.c)
 *     KiXmmException @ 0x1401CCF40 (KiXmmException.c)
 *     KiVirtualizationException @ 0x1401CD300 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1401CD940 (KiControlProtectionFault.c)
 *     KiRaiseSecurityCheckFailure @ 0x1401CDF40 (KiRaiseSecurityCheckFailure.c)
 *     KiRaiseAssertion @ 0x1401CE280 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x1401CE5C0 (KiDebugServiceTrap.c)
 *     KiSystemService @ 0x1401CE900 (KiSystemService.c)
 *     KiSystemCall32 @ 0x1401CEB40 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x1401CF000 (KiSystemCall64.c)
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
