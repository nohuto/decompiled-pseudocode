/*
 * XREFs of ?WinlogonHotkeyCallback@@YAX_K_J@Z @ 0x1C01DC020
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceLoggingWinPHotKeyEvent@@YAXXZ @ 0x1C01CF8E8 (-TraceLoggingWinPHotKeyEvent@@YAXXZ.c)
 */

void __fastcall WinlogonHotkeyCallback(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  if ( a1 == 10 )
  {
    v3 = 15LL;
    v4 = 1026LL;
  }
  else
  {
    if ( a1 == 7 )
      TraceLoggingWinPHotKeyEvent();
    if ( a1 == 11 )
    {
      LOBYTE(a2) = 1;
      xxxDisplayDiagBlackScreenDetected(8LL, a2, 0LL, 0LL, 0LL);
    }
    v3 = (unsigned int)a1;
    v4 = 1028LL;
  }
  PostWinlogonMessage(v4, v3);
}
