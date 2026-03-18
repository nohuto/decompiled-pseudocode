/*
 * XREFs of AMLIIsEqualHandle @ 0x1C006110C
 * Callers:
 *     ACPIBuildDevicePowerNodes @ 0x1C0015A94 (ACPIBuildDevicePowerNodes.c)
 *     CacheBBNResult @ 0x1C00303FC (CacheBBNResult.c)
 *     ACPIEcStartDevice @ 0x1C0051CA0 (ACPIEcStartDevice.c)
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
