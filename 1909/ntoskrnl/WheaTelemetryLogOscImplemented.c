/*
 * XREFs of WheaTelemetryLogOscImplemented @ 0x140199DDC
 * Callers:
 *     WheaLogInternalEvent @ 0x140199CC0 (WheaLogInternalEvent.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

void WheaTelemetryLogOscImplemented()
{
  __int64 v0; // r9
  __int64 v1; // r10
  int v2; // [rsp+30h] [rbp-19h] BYREF
  int v3; // [rsp+34h] [rbp-15h] BYREF
  __int64 v4; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v6; // [rsp+60h] [rbp+17h]
  __int64 v7; // [rsp+68h] [rbp+1Fh]
  int *v8; // [rsp+70h] [rbp+27h]
  __int64 v9; // [rsp+78h] [rbp+2Fh]
  int *v10; // [rsp+80h] [rbp+37h]
  __int64 v11; // [rsp+88h] [rbp+3Fh]

  if ( stru_140426FC8.LevelPlus1 > 4 )
  {
    if ( TlgKeywordOn(&stru_140426FC8, 0x200000000000uLL) )
    {
      v2 = *(unsigned __int8 *)(v0 + 32);
      v3 = *(unsigned __int8 *)(v0 + 33);
      v6 = &v4;
      v8 = &v2;
      v10 = &v3;
      v4 = 0x1000000LL;
      v7 = 8LL;
      v9 = v1;
      v11 = v1;
      TlgWrite(&stru_140426FC8, &unk_140394C1C, 0LL, 0LL, 5u, &pData);
    }
  }
}
