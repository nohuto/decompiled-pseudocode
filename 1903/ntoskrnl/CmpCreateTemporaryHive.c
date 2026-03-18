/*
 * XREFs of CmpCreateTemporaryHive @ 0x14083BCB8
 * Callers:
 *     CmSaveKey @ 0x14083B43C (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14083B80C (CmSaveMergedKeys.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpCreateHive @ 0x14065E124 (CmpCreateHive.c)
 */

ULONG_PTR __fastcall CmpCreateTemporaryHive(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  ULONG_PTR v6[2]; // [rsp+60h] [rbp-188h] BYREF
  _BYTE v7[352]; // [rsp+70h] [rbp-178h] BYREF

  memset(v7, 0, sizeof(v7));
  v4 = 0LL;
  if ( (int)CmpCreateHive(v6, 0, 1, 0, 0LL, 0LL, 0LL, 0x1000000, a1, a2, 0LL, (__int64)v7) >= 0 )
    return v6[0];
  return v4;
}
