/*
 * XREFs of CmpCreateTemporaryHive @ 0x140802840
 * Callers:
 *     CmSaveKey @ 0x140801F30 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1408022FC (CmSaveMergedKeys.c)
 * Callees:
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     CmpCreateHive @ 0x1405A6574 (CmpCreateHive.c)
 */

ULONG_PTR __fastcall CmpCreateTemporaryHive(_OWORD *a1, _OWORD *a2)
{
  __int64 v4; // rsi
  ULONG_PTR v6[2]; // [rsp+60h] [rbp-188h] BYREF
  _BYTE v7[352]; // [rsp+70h] [rbp-178h] BYREF

  memset(v7, 0, sizeof(v7));
  v4 = 0LL;
  if ( (int)CmpCreateHive(v6, 0, 1u, 0, 0LL, 0LL, 0LL, 17956864, a1, a2, 0LL, (__int64)v7) >= 0 )
    return v6[0];
  return v4;
}
