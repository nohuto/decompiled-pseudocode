/*
 * XREFs of HvipApertureVmfuncSwitchEptp @ 0x1401C7140
 * Callers:
 *     HviCopyMemory @ 0x1402FC8F4 (HviCopyMemory.c)
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
