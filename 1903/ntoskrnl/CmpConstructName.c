/*
 * XREFs of CmpConstructName @ 0x140655720
 * Callers:
 *     CmpDoQueryKeyName @ 0x140092BC0 (CmpDoQueryKeyName.c)
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 *     CmLoadAppKey @ 0x14063744C (CmLoadAppKey.c)
 *     CmQueryKey @ 0x140654E60 (CmQueryKey.c)
 *     CmpLoadHiveVolatile @ 0x14083BD70 (CmpLoadHiveVolatile.c)
 * Callees:
 *     CmpConstructNameWithStatus @ 0x140655750 (CmpConstructNameWithStatus.c)
 */

__int64 __fastcall CmpConstructName(__int64 a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  CmpConstructNameWithStatus(a1, &v2);
  return v2;
}
