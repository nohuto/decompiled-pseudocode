/*
 * XREFs of WheaTelemetryLogInfo @ 0x140341CF4
 * Callers:
 *     WheaLogInternalEvent @ 0x140199CC0 (WheaLogInternalEvent.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1400D6128 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

void WheaTelemetryLogInfo()
{
  const CHAR *v0; // r9
  __int64 v1; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v3; // [rsp+60h] [rbp-38h]
  int v4; // [rsp+68h] [rbp-30h]
  int v5; // [rsp+6Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-28h] BYREF

  if ( stru_140426FC8.LevelPlus1 > 4 )
  {
    if ( TlgKeywordOn(&stru_140426FC8, 0x200000000000uLL) )
    {
      v5 = 0;
      v3 = &v1;
      v1 = 0x1000000LL;
      v4 = 8;
      TlgCreateSz(&pDesc, v0);
      TlgWrite(&stru_140426FC8, &unk_140394B50, 0LL, 0LL, 4u, &pData);
    }
  }
}
