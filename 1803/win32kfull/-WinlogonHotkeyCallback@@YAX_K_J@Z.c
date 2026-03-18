/*
 * XREFs of ?WinlogonHotkeyCallback@@YAX_K_J@Z @ 0x1C01A6A70
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceLoggingWinPHotKeyEvent@@YAXXZ @ 0x1C019A2AC (-TraceLoggingWinPHotKeyEvent@@YAXXZ.c)
 */

void __fastcall WinlogonHotkeyCallback(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( a1 == 10 )
  {
    v2 = 15LL;
    v3 = 1026LL;
  }
  else
  {
    if ( a1 == 7 )
      TraceLoggingWinPHotKeyEvent();
    if ( a1 == 11 )
      xxxDisplayDiagBlackScreenDetected(8u, 1u, 0);
    v2 = (unsigned int)a1;
    v3 = 1028LL;
  }
  PostWinlogonMessage(v3, v2);
}
