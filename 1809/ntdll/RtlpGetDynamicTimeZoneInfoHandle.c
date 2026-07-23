/*
 * XREFs of RtlpGetDynamicTimeZoneInfoHandle @ 0x180053260
 * Callers:
 *     RtlpCheckDynamicTimeZoneInformation @ 0x180053010 (RtlpCheckDynamicTimeZoneInformation.c)
 * Callees:
 *     RtlStringCbCatW @ 0x1800533D8 (RtlStringCbCatW.c)
 *     RtlStringLengthWorkerW @ 0x1800534A8 (RtlStringLengthWorkerW.c)
 *     RtlpGetRegistryHandle @ 0x180053FCC (RtlpGetRegistryHandle.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpGetDynamicTimeZoneInfoHandle(_WORD *a1, __int64 a2)
{
  __int64 v3; // r8
  _WORD *v4; // rdx
  int v5; // r10d
  signed __int64 v6; // r9
  __int16 v7; // ax
  __int64 result; // rax
  int v9; // r11d
  char *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  signed __int64 v13; // r8
  __int16 v14; // dx
  __int64 v15; // [rsp+20h] [rbp-228h] BYREF
  _WORD v16[256]; // [rsp+30h] [rbp-218h] BYREF

  if ( !*a1 )
    return 3221225485LL;
  v3 = 256LL;
  v4 = v16;
  v5 = 0;
  v6 = (char *)L"Time Zones\\" - (char *)v16;
  while ( v3 != -2147483390 )
  {
    v7 = *(_WORD *)((char *)v4 + v6);
    if ( !v7 )
      break;
    *v4++ = v7;
    if ( !--v3 )
    {
      --v4;
      v5 = -2147483643;
      break;
    }
  }
  *v4 = 0;
  if ( v5 < 0 )
    return (unsigned int)v5;
  result = RtlStringCbCatW(v16, 512LL, a1, v6);
  if ( (int)result >= 0 )
  {
    v9 = RtlStringLengthWorkerW(v16, 256LL, &v15);
    if ( v9 >= 0 )
    {
      v9 = 0;
      v10 = (char *)&v16[v15];
      v11 = 256 - v15;
      if ( 256 == v15 )
        goto LABEL_15;
      v12 = 2147483646LL;
      v13 = (char *)L"\\Dynamic DST" - v10;
      while ( v12 )
      {
        v14 = *(_WORD *)&v10[v13];
        if ( !v14 )
          break;
        *(_WORD *)v10 = v14;
        --v12;
        v10 += 2;
        if ( !--v11 )
          goto LABEL_15;
      }
      if ( !v11 )
      {
LABEL_15:
        v10 -= 2;
        v9 = -2147483643;
      }
      *(_WORD *)v10 = 0;
    }
    if ( v9 < 0 )
      return (unsigned int)v9;
    else
      return RtlpGetRegistryHandle(3LL, v16, 0LL, a2);
  }
  return result;
}
