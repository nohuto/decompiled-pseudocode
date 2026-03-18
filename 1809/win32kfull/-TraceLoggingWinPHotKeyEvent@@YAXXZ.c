/*
 * XREFs of ?TraceLoggingWinPHotKeyEvent@@YAXXZ @ 0x1C01BB4B0
 * Callers:
 *     ?WinlogonHotkeyCallback@@YAX_K_J@Z @ 0x1C01C8A90 (-WinlogonHotkeyCallback@@YAX_K_J@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void TraceLoggingWinPHotKeyEvent(void)
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D43A8, 0LL, 0LL, 2u, &pData);
  }
}
