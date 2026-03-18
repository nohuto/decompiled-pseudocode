/*
 * XREFs of KseRegisterShim @ 0x14075DC10
 * Callers:
 *     KseDriverScopeInitialize @ 0x140A02FE4 (KseDriverScopeInitialize.c)
 *     KseVersionLieInitialize @ 0x140A03054 (KseVersionLieInitialize.c)
 *     KseInitialize @ 0x140A030C8 (KseInitialize.c)
 * Callees:
 *     KseRegisterShimEx @ 0x14075DC30 (KseRegisterShimEx.c)
 */

__int64 __fastcall KseRegisterShim(__int64 a1, __int64 a2, __int64 a3)
{
  return KseRegisterShimEx(a1, a2, a3, 0LL);
}
