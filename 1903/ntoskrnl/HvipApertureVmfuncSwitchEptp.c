/*
 * XREFs of HvipApertureVmfuncSwitchEptp @ 0x1401CD5B0
 * Callers:
 *     HviEnterKernelAperture @ 0x14031B300 (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x14031B35C (HviLeaveKernelAperture.c)
 * Callees:
 *     <none>
 */

__int64 HvipApertureVmfuncSwitchEptp()
{
  __int64 result; // rax

  result = 0LL;
  __asm { vmfunc }
  return result;
}
