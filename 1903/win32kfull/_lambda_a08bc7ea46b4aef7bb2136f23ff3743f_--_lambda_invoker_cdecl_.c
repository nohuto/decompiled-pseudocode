/*
 * XREFs of _lambda_a08bc7ea46b4aef7bb2136f23ff3743f_::_lambda_invoker_cdecl_ @ 0x1C00D8A80
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     xxxClientEnableMMCSS @ 0x1C00D8AF4 (xxxClientEnableMMCSS.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall lambda_a08bc7ea46b4aef7bb2136f23ff3743f_::_lambda_invoker_cdecl_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  const char *v6; // [rsp+50h] [rbp-28h]
  int v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+5Ch] [rbp-1Ch]

  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4) != gTermIO[2] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(gTermIO[0]);
  if ( dword_1C03222C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C03222C0, 2uLL) )
  {
    v8 = 0;
    v6 = "EnableMMCSS";
    v7 = 12;
    TlgWrite((TraceLoggingHProvider)&dword_1C03222C0, &unk_1C02E80BC, 0LL, 0LL, 3u, &pData);
  }
  return xxxClientEnableMMCSS((*gpsi >> 12) & 1);
}
