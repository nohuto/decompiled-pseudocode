/*
 * XREFs of ?TraceLoggingWinPHotKeyEvent@@YAXXZ @ 0x1C01CF8E8
 * Callers:
 *     ?WinlogonHotkeyCallback@@YAX_K_J@Z @ 0x1C01DC020 (-WinlogonHotkeyCallback@@YAX_K_J@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void TraceLoggingWinPHotKeyEvent(void)
{
  __int64 v0; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v2; // [rsp+58h] [rbp-20h]
  int v3; // [rsp+60h] [rbp-18h]
  int v4; // [rsp+64h] [rbp-14h]

  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v4 = 0;
      v2 = &v0;
      v0 = 0x1000000LL;
      v3 = 8;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E685F, 0LL, 0LL, 3u, &pData);
    }
  }
}
