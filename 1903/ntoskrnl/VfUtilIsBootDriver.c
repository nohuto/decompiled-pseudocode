/*
 * XREFs of VfUtilIsBootDriver @ 0x140327670
 * Callers:
 *     <none>
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140973FBC (VfTargetDriversGetVerifierData.c)
 */

__int64 VfUtilIsBootDriver()
{
  __int64 result; // rax

  result = VfTargetDriversGetVerifierData();
  if ( result )
    return (*(_DWORD *)(result + 32) >> 1) & 1;
  return result;
}
