/*
 * XREFs of WheaTelemetryLogErrorSourceAddRemove @ 0x14034214C
 * Callers:
 *     WheaLogInternalEvent @ 0x140199660 (WheaLogInternalEvent.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1400ED314 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

BOOLEAN WheaTelemetryLogErrorSourceAddRemove()
{
  BOOLEAN result; // al
  _DWORD *v1; // r9
  char v2; // r10
  CHAR *v3; // rdx
  int v4; // [rsp+30h] [rbp-69h] BYREF
  int v5; // [rsp+34h] [rbp-65h] BYREF
  int v6; // [rsp+38h] [rbp-61h] BYREF
  int v7; // [rsp+3Ch] [rbp-5Dh] BYREF
  int v8; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-29h] BYREF
  int *v11; // [rsp+80h] [rbp-19h]
  __int64 v12; // [rsp+88h] [rbp-11h]
  int *v13; // [rsp+90h] [rbp-9h]
  __int64 v14; // [rsp+98h] [rbp-1h]
  int *v15; // [rsp+A0h] [rbp+7h]
  __int64 v16; // [rsp+A8h] [rbp+Fh]
  int *v17; // [rsp+B0h] [rbp+17h]
  __int64 v18; // [rsp+B8h] [rbp+1Fh]
  int *v19; // [rsp+C0h] [rbp+27h]
  __int64 v20; // [rsp+C8h] [rbp+2Fh]
  CHAR psz[8]; // [rsp+D0h] [rbp+37h] BYREF
  __int64 v22; // [rsp+D8h] [rbp+3Fh] BYREF

  strcpy(psz, "Remove");
  result = 0;
  v22 = 6579265LL;
  psz[7] = 0;
  if ( stru_140426FC8.LevelPlus1 > 4 )
  {
    result = TlgKeywordOn(&stru_140426FC8, 0x200000000000uLL);
    if ( result )
    {
      v3 = (CHAR *)&v22;
      v4 = v1[251];
      v5 = v1[10];
      v6 = v1[11];
      v7 = v1[17];
      v8 = v1[15];
      if ( v2 )
        v3 = psz;
      TlgCreateSz(&pDesc, v3);
      v12 = 4LL;
      v13 = &v5;
      v11 = &v4;
      v15 = &v6;
      v17 = &v7;
      v19 = &v8;
      v14 = 4LL;
      v16 = 4LL;
      v18 = 4LL;
      v20 = 4LL;
      return TlgWrite(&stru_140426FC8, &unk_1403947CD, 0LL, 0LL, 8u, &pData);
    }
  }
  return result;
}
