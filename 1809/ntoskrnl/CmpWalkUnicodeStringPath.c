/*
 * XREFs of CmpWalkUnicodeStringPath @ 0x14073E8BC
 * Callers:
 *     CmpWalkPath @ 0x14073E880 (CmpWalkPath.c)
 *     CmpFindHiveSubKey @ 0x1409CDDF4 (CmpFindHiveSubKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x14073E2EC (CmpFindSubKeyByNameWithStatus.c)
 *     CmpGetNextName @ 0x14073E95C (CmpGetNextName.c)
 */

__int64 __fastcall CmpWalkUnicodeStringPath(__int64 a1, unsigned int a2, __int128 *a3)
{
  __int128 v3; // xmm0
  __int64 v6; // rax
  unsigned __int16 v8[8]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v9; // [rsp+30h] [rbp-10h] BYREF
  char v10; // [rsp+68h] [rbp+28h] BYREF
  unsigned int v11; // [rsp+70h] [rbp+30h] BYREF
  int v12; // [rsp+78h] [rbp+38h] BYREF
  int v13; // [rsp+7Ch] [rbp+3Ch]

  v3 = *a3;
  v12 = -1;
  v13 = 0;
  v9 = v3;
  while ( 1 )
  {
    CmpGetNextName(&v9, v8, &v10);
    if ( !v8[0] )
      break;
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, a2, &v12);
    if ( v6 )
    {
      CmpFindSubKeyByNameWithStatus(a1, v6, v8, &v11);
      a2 = v11;
      (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v12);
      if ( a2 != -1 )
        continue;
    }
    return 0xFFFFFFFFLL;
  }
  return a2;
}
