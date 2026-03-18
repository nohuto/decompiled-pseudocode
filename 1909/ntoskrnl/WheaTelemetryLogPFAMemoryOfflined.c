/*
 * XREFs of WheaTelemetryLogPFAMemoryOfflined @ 0x140341EDC
 * Callers:
 *     WheaLogInternalEvent @ 0x140199CC0 (WheaLogInternalEvent.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1400D6128 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

void WheaTelemetryLogPFAMemoryOfflined()
{
  __int64 v0; // r9
  const CHAR *v1; // r10
  int v2; // [rsp+30h] [rbp-39h] BYREF
  __int64 v3; // [rsp+38h] [rbp-31h] BYREF
  __int64 v4; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v6; // [rsp+70h] [rbp+7h]
  __int64 v7; // [rsp+78h] [rbp+Fh]
  int *v8; // [rsp+80h] [rbp+17h]
  __int64 v9; // [rsp+88h] [rbp+1Fh]
  __int64 *v10; // [rsp+90h] [rbp+27h]
  __int64 v11; // [rsp+98h] [rbp+2Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp+37h] BYREF

  if ( stru_140426FC8.LevelPlus1 > 4 )
  {
    if ( TlgKeywordOn(&stru_140426FC8, 0x200000000000uLL) )
    {
      v2 = *(unsigned __int8 *)(v0 + 36);
      v4 = *(unsigned int *)(v0 + 37);
      v6 = &v3;
      v8 = &v2;
      v10 = &v4;
      v3 = 0x1000000LL;
      v7 = 8LL;
      v9 = 4LL;
      v11 = 8LL;
      TlgCreateSz(&pDesc, v1);
      TlgWrite(&stru_140426FC8, &unk_140394AF3, 0LL, 0LL, 6u, &pData);
    }
  }
}
