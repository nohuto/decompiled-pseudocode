/*
 * XREFs of KseRegisterShim @ 0x1407295F0
 * Callers:
 *     KseZeroPoolInitialize @ 0x1409ABE2C (KseZeroPoolInitialize.c)
 *     KseDriverScopeInitialize @ 0x1409B073C (KseDriverScopeInitialize.c)
 *     KseVersionLieInitialize @ 0x1409B07AC (KseVersionLieInitialize.c)
 *     KseInitialize @ 0x1409B0930 (KseInitialize.c)
 * Callees:
 *     KseRegisterShimEx @ 0x140729610 (KseRegisterShimEx.c)
 */

__int64 __fastcall KseRegisterShim(__int64 a1, __int64 a2, __int64 a3)
{
  return KseRegisterShimEx(a1, a2, a3, 0LL);
}
