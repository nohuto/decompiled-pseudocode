/*
 * XREFs of PopDiagTraceDisplayBurstWin32kCallout @ 0x14087351C
 * Callers:
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void PopDiagTraceDisplayBurstWin32kCallout()
{
  char v0; // r9
  char v1; // [rsp+30h] [rbp-19h] BYREF
  char v2; // [rsp+31h] [rbp-18h] BYREF
  char v3; // [rsp+32h] [rbp-17h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  char *v5; // [rsp+60h] [rbp+17h]
  __int64 v6; // [rsp+68h] [rbp+1Fh]
  char *v7; // [rsp+70h] [rbp+27h]
  __int64 v8; // [rsp+78h] [rbp+2Fh]
  char *v9; // [rsp+80h] [rbp+37h]
  __int64 v10; // [rsp+88h] [rbp+3Fh]

  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
    {
      v1 = PopLidOpened;
      v2 = PopConsoleExternalDisplayConnected;
      v5 = &v1;
      v7 = &v2;
      v9 = &v3;
      v3 = v0;
      v6 = 1LL;
      v8 = 1LL;
      v10 = 1LL;
      TlgWrite(&pCallbackContext, &unk_140370FD7, 0LL, 0LL, 5u, &pData);
    }
  }
}
