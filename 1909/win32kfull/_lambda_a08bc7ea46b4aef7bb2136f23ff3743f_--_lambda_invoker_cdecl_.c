/*
 * XREFs of _lambda_a08bc7ea46b4aef7bb2136f23ff3743f_::_lambda_invoker_cdecl_ @ 0x1C00791E0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     xxxClientEnableMMCSS @ 0x1C0079254 (xxxClientEnableMMCSS.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 lambda_a08bc7ea46b4aef7bb2136f23ff3743f_::_lambda_invoker_cdecl_()
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  const char *v2; // [rsp+50h] [rbp-28h]
  int v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+5Ch] [rbp-1Ch]

  if ( W32GetThreadWin32Thread(KeGetCurrentThread()) != gTermIO[2] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(gTermIO[0]);
  if ( dword_1C03202C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C03202C0, 2uLL) )
  {
    v4 = 0;
    v2 = "EnableMMCSS";
    v3 = 12;
    TlgWrite((TraceLoggingHProvider)&dword_1C03202C0, &unk_1C02E767C, 0LL, 0LL, 3u, &pData);
  }
  return xxxClientEnableMMCSS((*gpsi >> 12) & 1);
}
