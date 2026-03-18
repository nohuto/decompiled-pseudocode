/*
 * XREFs of HviLeaveKernelAperture @ 0x14031B35C
 * Callers:
 *     HviCopyMemory @ 0x14031B200 (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x14031B27C (HviCopyMemoryNonTemporal.c)
 * Callees:
 *     HvipApertureVmfuncSwitchEptp @ 0x1401CD5B0 (HvipApertureVmfuncSwitchEptp.c)
 *     HvipApertureDirectHypercall @ 0x14031B4BC (HvipApertureDirectHypercall.c)
 */

__int64 HviLeaveKernelAperture()
{
  __int64 result; // rax

  if ( !byte_14042B72A )
  {
    if ( byte_14050EC6E )
      result = HvipApertureVmfuncSwitchEptp();
    else
      result = HvipApertureDirectHypercall(6LL, 0LL);
  }
  _mm_lfence();
  _enable();
  return result;
}
