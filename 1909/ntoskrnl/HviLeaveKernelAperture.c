/*
 * XREFs of HviLeaveKernelAperture @ 0x14031ADAC
 * Callers:
 *     HviCopyMemory @ 0x14031AC50 (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x14031ACCC (HviCopyMemoryNonTemporal.c)
 * Callees:
 *     HvipApertureVmfuncSwitchEptp @ 0x1401CE130 (HvipApertureVmfuncSwitchEptp.c)
 *     HvipApertureDirectHypercall @ 0x14031AF0C (HvipApertureDirectHypercall.c)
 */

__int64 HviLeaveKernelAperture()
{
  __int64 result; // rax

  if ( !byte_14042B72A )
  {
    if ( byte_14050E9AE )
      result = HvipApertureVmfuncSwitchEptp();
    else
      result = HvipApertureDirectHypercall(6LL, 0LL);
  }
  _mm_lfence();
  _enable();
  return result;
}
