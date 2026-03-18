/*
 * XREFs of HviEnterKernelAperture @ 0x14031AD50
 * Callers:
 *     HviCopyMemory @ 0x14031AC50 (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x14031ACCC (HviCopyMemoryNonTemporal.c)
 * Callees:
 *     HvipApertureVmfuncSwitchEptp @ 0x1401CE130 (HvipApertureVmfuncSwitchEptp.c)
 *     HvipApertureDetectParameters @ 0x14031ADF8 (HvipApertureDetectParameters.c)
 *     HvipApertureDirectHypercall @ 0x14031AF0C (HvipApertureDirectHypercall.c)
 */

char HviEnterKernelAperture()
{
  char result; // al

  result = byte_14050E9AD;
  if ( !byte_14050E9AD )
    result = HvipApertureDetectParameters();
  _disable();
  if ( !byte_14042B72A )
  {
    if ( byte_14050E9AE )
      return HvipApertureVmfuncSwitchEptp();
    else
      return HvipApertureDirectHypercall(6LL, 1LL);
  }
  return result;
}
