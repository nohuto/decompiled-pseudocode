/*
 * XREFs of sub_18007ED94 @ 0x18007ED94
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     sub_180069B28 @ 0x180069B28 (sub_180069B28.c)
 *     LdrSetDefaultDllDirectories @ 0x18007EF00 (LdrSetDefaultDllDirectories.c)
 */

__int64 sub_18007ED94()
{
  __int64 result; // rax
  __int128 *v1; // rcx
  char v2; // dl
  __int128 v3; // xmm0
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int16 v7; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+38h] [rbp-30h] BYREF
  __int16 v9; // [rsp+40h] [rbp-28h] BYREF
  __int64 v10; // [rsp+48h] [rbp-20h] BYREF
  _WORD v11[12]; // [rsp+50h] [rbp-18h] BYREF
  int v12; // [rsp+80h] [rbp+18h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF
  __int16 v14; // [rsp+90h] [rbp+28h] BYREF
  __int64 v15; // [rsp+98h] [rbp+30h] BYREF

  result = (__int64)NtCurrentPeb();
  v1 = (__int128 *)(*(_QWORD *)(result + 32) + 80LL);
  xmmword_180164390 = 0uLL;
  xmmword_180164380 = 0uLL;
  v2 = *(_BYTE *)(result + 3);
  if ( (v2 & 0x10) != 0 && *(_WORD *)v1 )
  {
    v3 = *v1;
    dword_180162714 = 41;
    xmmword_180164390 = v3;
    xmmword_180164380 = v3;
    if ( (int)sub_180069B28((__int64)v1, 4, &v12, &v14, &v13) < 0 || v12 == 262145 )
      LdrSetDefaultDllDirectories(4096LL);
    else
      dword_180162714 &= ~1u;
    if ( (int)sub_180069B28(v4, 7, &v12, &v7, &v15) >= 0 && v12 == 458753 )
      dword_180162714 |= 2u;
    if ( (int)sub_180069B28(v5, 19, &v12, &v9, &v8) >= 0 && v12 == 1245185 )
      dword_180162714 |= 0x40u;
    result = (unsigned int)sub_180069B28(v6, 32, &v12, v11, &v10) | 0x10000000;
    if ( (int)result >= 0 && v12 == 2097153 )
      dword_180162714 |= 4u;
  }
  else if ( (v2 & 2) != 0 )
  {
    *(_WORD *)v1 = 0;
  }
  else if ( *(_WORD *)v1 )
  {
    return LdrSetDllDirectory();
  }
  return result;
}
