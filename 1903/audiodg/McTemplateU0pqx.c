/*
 * XREFs of McTemplateU0pqx @ 0x14005369C
 * Callers:
 *     ?Reset@CCrossProcessControl@@UEAAJXZ @ 0x140053080 (-Reset@CCrossProcessControl@@UEAAJXZ.c)
 *     ?Start@CCrossProcessControl@@UEAAJXZ @ 0x1400533F0 (-Start@CCrossProcessControl@@UEAAJXZ.c)
 *     ?Stop@CCrossProcessControl@@UEAAJXZ @ 0x140053520 (-Stop@CCrossProcessControl@@UEAAJXZ.c)
 *     ?Reset@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14005D7F0 (-Reset@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?Start@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14005D950 (-Start@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?Stop@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14005DA50 (-Stop@CSpatialCrossProcessControl@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x14002BE40 (McGenEventWrite.c)
 */

__int64 __fastcall McTemplateU0pqx(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // [rsp+38h] [rbp-11h] BYREF
  char v6[16]; // [rsp+48h] [rbp-1h] BYREF
  __int64 *v7; // [rsp+58h] [rbp+Fh]
  __int64 v8; // [rsp+60h] [rbp+17h]
  int *v9; // [rsp+68h] [rbp+1Fh]
  __int64 v10; // [rsp+70h] [rbp+27h]
  __int64 *v11; // [rsp+78h] [rbp+2Fh]
  __int64 v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+B8h] [rbp+6Fh] BYREF
  int v14; // [rsp+C0h] [rbp+77h] BYREF

  v14 = a4;
  v13 = a3;
  v8 = 8LL;
  v5 = 0LL;
  v7 = &v13;
  v9 = &v14;
  v11 = &v5;
  v10 = 4LL;
  v12 = 8LL;
  return McGenEventWrite(a1, (__int64)&AudioCore_AEControl, a3, 4, (__int64)v6);
}
