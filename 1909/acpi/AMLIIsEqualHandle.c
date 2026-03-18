/*
 * XREFs of AMLIIsEqualHandle @ 0x1C006308C
 * Callers:
 *     CacheBBNResult @ 0x1C0024580 (CacheBBNResult.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C002C91C (ACPIBuildDevicePowerNodes.c)
 *     ACPIEcStartDevice @ 0x1C0053640 (ACPIEcStartDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall AMLIIsEqualHandle(_QWORD *a1, _QWORD *a2)
{
  bool result; // al

  result = 0;
  if ( !a1 )
    return a2 == 0LL;
  if ( a2 )
    return *a1 == *a2;
  return result;
}
