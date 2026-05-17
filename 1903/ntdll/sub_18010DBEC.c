/*
 * XREFs of sub_18010DBEC @ 0x18010DBEC
 * Callers:
 *     sub_180005210 @ 0x180005210 (sub_180005210.c)
 * Callees:
 *     sub_1800041A8 @ 0x1800041A8 (sub_1800041A8.c)
 *     RtlUnicodeToMultiByteN @ 0x180062440 (RtlUnicodeToMultiByteN.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_18010DD34 @ 0x18010DD34 (sub_18010DD34.c)
 */

__int64 __fastcall sub_18010DBEC(__int64 a1, __int64 a2, int a3)
{
  int v4; // edi
  __int64 result; // rax
  __int64 v7; // rax
  __int64 **v8; // rsi
  __int64 *v9; // rbx
  _DWORD v10[4]; // [rsp+40h] [rbp-358h] BYREF
  _BYTE v11[272]; // [rsp+50h] [rbp-348h] BYREF
  unsigned int v12[132]; // [rsp+160h] [rbp-238h] BYREF

  v4 = a3 - *(_DWORD *)(a2 + 48);
  result = sub_1800041A8(
             L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion",
             L"BuildLabEx",
             v12,
             0x104u);
  if ( (int)result >= 0 )
  {
    result = RtlUnicodeToMultiByteN(v11, 0x104u, 0LL, v12, 0x208u);
    if ( (int)result >= 0 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( v11[v7] );
      result = sub_18010DD34(a2, 66LL, a2 + 88, v11, (int)v7 + 1, v4, v10);
      if ( (int)result < 0 )
        return result;
      result = (v10[0] + 7) & 0xFFFFFFF8;
      v4 -= result;
    }
  }
  v8 = (__int64 **)(a1 + 464);
  v9 = *v8;
  while ( v9 != (__int64 *)v8 )
  {
    result = sub_18010DD34(a2, 64LL, a2 + 88, (char *)v9 + 28, *((_DWORD *)v9 + 5) - 4, v4, v10);
    if ( (int)result < 0 )
      break;
    v9 = (__int64 *)*v9;
    result = (v10[0] + 7) & 0xFFFFFFF8;
    v4 -= result;
  }
  return result;
}
