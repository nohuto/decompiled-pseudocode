/*
 * XREFs of VfUtilGetDriverName @ 0x140327630
 * Callers:
 *     <none>
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140973FBC (VfTargetDriversGetVerifierData.c)
 */

__int64 VfUtilGetDriverName()
{
  __int64 result; // rax

  result = VfTargetDriversGetVerifierData();
  if ( result )
    return *(_QWORD *)(*(_QWORD *)result + 32LL);
  return result;
}
