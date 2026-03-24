/*
 * XREFs of KseRegisterShim @ 0x140728400
 * Callers:
 *     KseZeroPoolInitialize @ 0x1409AAE2C (KseZeroPoolInitialize.c)
 *     KseDriverScopeInitialize @ 0x1409AF73C (KseDriverScopeInitialize.c)
 *     KseVersionLieInitialize @ 0x1409AF7AC (KseVersionLieInitialize.c)
 *     KseInitialize @ 0x1409AF930 (KseInitialize.c)
 * Callees:
 *     KseRegisterShimEx @ 0x140728420 (KseRegisterShimEx.c)
 */

__int64 __fastcall KseRegisterShim(__int64 a1, __int64 a2, __int64 a3)
{
  return KseRegisterShimEx(a1, a2, a3, 0LL);
}
