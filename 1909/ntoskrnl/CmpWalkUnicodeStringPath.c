/*
 * XREFs of CmpWalkUnicodeStringPath @ 0x14076A0F8
 * Callers:
 *     CmpWalkPath @ 0x14076A0B0 (CmpWalkPath.c)
 *     CmpFindHiveSubKey @ 0x140A13A20 (CmpFindHiveSubKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1407140D0 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpGetNextName @ 0x14076A1A0 (CmpGetNextName.c)
 */

__int64 __fastcall CmpWalkUnicodeStringPath(__int64 a1, unsigned int a2, __int128 *a3)
{
  __int128 v3; // xmm0
  __int64 v6; // rax
  _QWORD v8[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v9; // [rsp+30h] [rbp-10h] BYREF
  char v10; // [rsp+68h] [rbp+28h] BYREF
  unsigned int v11; // [rsp+70h] [rbp+30h] BYREF
  int v12; // [rsp+78h] [rbp+38h] BYREF
  int v13; // [rsp+7Ch] [rbp+3Ch]

  v3 = *a3;
  v12 = -1;
  v8[0] = 0LL;
  v9 = v3;
  v8[1] = 0LL;
  v13 = 0;
  while ( 1 )
  {
    CmpGetNextName(&v9, v8, &v10);
    if ( !LOWORD(v8[0]) )
      break;
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, a2, &v12);
    if ( v6 )
    {
      CmpFindSubKeyByNameWithStatus(a1, v6, (unsigned __int16 *)v8, &v11);
      a2 = v11;
      (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v12);
      if ( a2 != -1 )
        continue;
    }
    return 0xFFFFFFFFLL;
  }
  return a2;
}
