/*
 * XREFs of HvipApertureVmfuncSwitchEptp @ 0x1401CE130
 * Callers:
 *     HviEnterKernelAperture @ 0x14031AD50 (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x14031ADAC (HviLeaveKernelAperture.c)
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
