/*
 * XREFs of PspInitializeNetRateControl @ 0x1409AECCC
 * Callers:
 *     PspInitPhase1 @ 0x1409AC320 (PspInitPhase1.c)
 * Callees:
 *     ExRegisterHost @ 0x14072885C (ExRegisterHost.c)
 */

char __fastcall PspInitializeNetRateControl(__int64 a1, __int64 a2)
{
  char v2; // bl
  int v4; // [rsp+20h] [rbp-38h] BYREF
  __int16 v5; // [rsp+24h] [rbp-34h]
  int v6; // [rsp+28h] [rbp-30h]
  __int64 v7; // [rsp+30h] [rbp-28h]
  __int64 v8; // [rsp+38h] [rbp-20h]
  __int64 v9; // [rsp+40h] [rbp-18h]

  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v2 = 1;
  v5 = 1;
  v6 = 1;
  v4 = 65540;
  if ( (int)ExRegisterHost(&PspNetRateControlExtensionHost, a2, (unsigned __int16 *)&v4) < 0 )
  {
    PspNetRateControlExtensionHost = 0LL;
    return 0;
  }
  return v2;
}
