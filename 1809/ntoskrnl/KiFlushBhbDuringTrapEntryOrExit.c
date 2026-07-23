/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280
 * Callers:
 *     KxIsrLinkage @ 0x1401BF890 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1401C0BD0 (KiApcInterrupt.c)
 *     KiHvInterrupt @ 0x1401C12C0 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1401C15B0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1401C18A0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401C1B90 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1401C1E80 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x1401C2C00 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1401C3320 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1401C3960 (KiIpiInterrupt.c)
 *     KyStartUserThread @ 0x1401C4B50 (KyStartUserThread.c)
 *     KiDivideErrorFault @ 0x1401C8000 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x1401C8400 (KxDebugTrapOrFault.c)
 *     KiBreakpointTrap @ 0x1401C8CC0 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x1401C9000 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x1401C9340 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1401C99C0 (KiInvalidOpcodeFault.c)
 *     KiNpxNotAvailableFault @ 0x1401CA000 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x1401CA300 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x1401CA5C0 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x1401CA8C0 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x1401CABC0 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x1401CAF80 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x1401CB2C0 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x1401CB600 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x1401CBDC0 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x1401CC180 (KiAlignmentFault.c)
 *     KxMcheckAlternateReturn @ 0x1401CCB00 (KxMcheckAlternateReturn.c)
 *     KiXmmException @ 0x1401CD140 (KiXmmException.c)
 *     KiVirtualizationException @ 0x1401CD500 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1401CDB40 (KiControlProtectionFault.c)
 *     KiRaiseSecurityCheckFailure @ 0x1401CE140 (KiRaiseSecurityCheckFailure.c)
 *     KiRaiseAssertion @ 0x1401CE480 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x1401CE7C0 (KiDebugServiceTrap.c)
 *     KiSystemService @ 0x1401CEB00 (KiSystemService.c)
 *     KiSystemCall32 @ 0x1401CED40 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x1401CF200 (KiSystemCall64.c)
 *     KiSystemCall32Shadow @ 0x140330E00 (KiSystemCall32Shadow.c)
 *     KiSystemCall64Shadow @ 0x140331140 (KiSystemCall64Shadow.c)
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
