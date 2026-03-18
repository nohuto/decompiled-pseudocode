/*
 * XREFs of HviEnterKernelAperture @ 0x14031B300
 * Callers:
 *     HviCopyMemory @ 0x14031B200 (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x14031B27C (HviCopyMemoryNonTemporal.c)
 * Callees:
 *     HvipApertureVmfuncSwitchEptp @ 0x1401CD5B0 (HvipApertureVmfuncSwitchEptp.c)
 *     HvipApertureDetectParameters @ 0x14031B3A8 (HvipApertureDetectParameters.c)
 *     HvipApertureDirectHypercall @ 0x14031B4BC (HvipApertureDirectHypercall.c)
 */

char HviEnterKernelAperture()
{
  char result; // al

  result = byte_14050EC6D;
  if ( !byte_14050EC6D )
    result = HvipApertureDetectParameters();
  _disable();
  if ( !byte_14042B72A )
  {
    if ( byte_14050EC6E )
      return HvipApertureVmfuncSwitchEptp();
    else
      return HvipApertureDirectHypercall(6LL, 1LL);
  }
  return result;
}
