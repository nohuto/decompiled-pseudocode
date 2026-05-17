/*
 * XREFs of sub_180002FD8 @ 0x180002FD8
 * Callers:
 *     RtlpCheckDynamicTimeZoneInformation @ 0x180002D90 (RtlpCheckDynamicTimeZoneInformation.c)
 * Callees:
 *     sub_180003144 @ 0x180003144 (sub_180003144.c)
 *     sub_180003214 @ 0x180003214 (sub_180003214.c)
 *     sub_180003D40 @ 0x180003D40 (sub_180003D40.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180002FD8(_WORD *a1, __int64 a2)
{
  __int64 v3; // r8
  signed __int64 v4; // r9
  _WORD *v5; // rdx
  __int16 v6; // ax
  _WORD *v7; // rax
  __int64 result; // rax
  char *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  signed __int64 v12; // r8
  __int16 v13; // dx
  char *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // [rsp+20h] [rbp-228h] BYREF
  _WORD v17[256]; // [rsp+30h] [rbp-218h] BYREF

  if ( !*a1 )
    return 3221225485LL;
  v3 = 256LL;
  v4 = (char *)L"Time Zones\\" - (char *)v17;
  v5 = v17;
  do
  {
    if ( v3 == -2147483390 )
      break;
    v6 = *(_WORD *)((char *)v5 + v4);
    if ( !v6 )
      break;
    *v5++ = v6;
    --v3;
  }
  while ( v3 );
  v7 = v5 - 1;
  if ( v3 )
    v7 = v5;
  *v7 = 0;
  result = v3 == 0 ? 0x80000005 : 0;
  if ( v3 )
  {
    result = sub_180003144(v17, 512LL, a1, v4);
    if ( (int)result >= 0 )
    {
      result = sub_180003214(v17, 256LL, &v16);
      if ( (int)result >= 0 )
      {
        v9 = (char *)&v17[v16];
        v10 = 256 - v16;
        if ( 256 != v16 )
        {
          v11 = 2147483646LL;
          v12 = (char *)L"\\Dynamic DST" - v9;
          do
          {
            if ( !v11 )
              break;
            v13 = *(_WORD *)&v9[v12];
            if ( !v13 )
              break;
            *(_WORD *)v9 = v13;
            --v11;
            v9 += 2;
            --v10;
          }
          while ( v10 );
        }
        v14 = v9 - 2;
        if ( v10 )
          v14 = v9;
        v15 = -v10;
        *(_WORD *)v14 = 0;
        result = v15 == 0 ? 0x80000005 : 0;
        if ( v15 )
          return sub_180003D40(3LL, v17, 0LL, a2);
      }
    }
  }
  return result;
}
