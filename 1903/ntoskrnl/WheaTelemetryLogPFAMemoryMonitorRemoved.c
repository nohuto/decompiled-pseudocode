/*
 * XREFs of WheaTelemetryLogPFAMemoryMonitorRemoved @ 0x14034234C
 * Callers:
 *     WheaLogInternalEvent @ 0x140199660 (WheaLogInternalEvent.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1400ED314 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

void WheaTelemetryLogPFAMemoryMonitorRemoved()
{
  const CHAR *v0; // r9
  unsigned int *v1; // r10
  __int64 v2; // [rsp+30h] [rbp-49h] BYREF
  __int64 v3; // [rsp+38h] [rbp-41h] BYREF
  __int64 v4; // [rsp+40h] [rbp-39h] BYREF
  __int64 v5; // [rsp+48h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v7; // [rsp+70h] [rbp-9h]
  __int64 v8; // [rsp+78h] [rbp-1h]
  __int64 *v9; // [rsp+80h] [rbp+7h]
  __int64 v10; // [rsp+88h] [rbp+Fh]
  __int64 *v11; // [rsp+90h] [rbp+17h]
  __int64 v12; // [rsp+98h] [rbp+1Fh]
  __int64 *v13; // [rsp+A0h] [rbp+27h]
  __int64 v14; // [rsp+A8h] [rbp+2Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp+37h] BYREF

  if ( stru_140426FC8.LevelPlus1 > 4 )
  {
    if ( TlgKeywordOn(&stru_140426FC8, 0x200000000000uLL) )
    {
      v3 = v1[11];
      v4 = v1[9];
      v5 = v1[10];
      v7 = &v2;
      v9 = &v3;
      v11 = &v4;
      v13 = &v5;
      v2 = 0x1000000LL;
      v8 = 8LL;
      v10 = 8LL;
      v12 = 8LL;
      v14 = 8LL;
      TlgCreateSz(&pDesc, v0);
      TlgWrite(&stru_140426FC8, &unk_1403946B0, 0LL, 0LL, 7u, &pData);
    }
  }
}
