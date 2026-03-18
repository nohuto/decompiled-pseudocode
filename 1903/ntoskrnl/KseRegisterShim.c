/*
 * XREFs of KseRegisterShim @ 0x140759380
 * Callers:
 *     KseDriverScopeInitialize @ 0x140A02AC8 (KseDriverScopeInitialize.c)
 *     KseVersionLieInitialize @ 0x140A02B38 (KseVersionLieInitialize.c)
 *     KseInitialize @ 0x140A02BAC (KseInitialize.c)
 * Callees:
 *     KseRegisterShimEx @ 0x1407593A0 (KseRegisterShimEx.c)
 */

__int64 __fastcall KseRegisterShim(__int64 a1, __int64 a2, __int64 a3)
{
  return KseRegisterShimEx(a1, a2, a3, 0LL);
}
