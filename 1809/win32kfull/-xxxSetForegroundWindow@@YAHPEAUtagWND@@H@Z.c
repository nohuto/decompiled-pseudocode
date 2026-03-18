/*
 * XREFs of ?xxxSetForegroundWindow@@YAHPEAUtagWND@@H@Z @ 0x1C0009FEC
 * Callers:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C000B40C (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     xxxSysCommand @ 0x1C00DF300 (xxxSysCommand.c)
 *     xxxOldNextWindow @ 0x1C01DFA50 (xxxOldNextWindow.c)
 *     ?ForceForeground@CWindow@@QEAA_NXZ @ 0x1C022565C (-ForceForeground@CWindow@@QEAA_NXZ.c)
 * Callees:
 *     ?xxxSetForegroundWindowWithOptions@@YAHPEAUtagWND@@HK@Z @ 0x1C00D77CC (-xxxSetForegroundWindowWithOptions@@YAHPEAUtagWND@@HK@Z.c)
 */

__int64 __fastcall xxxSetForegroundWindow(struct tagWND *a1, int a2)
{
  return xxxSetForegroundWindowWithOptions(a1, a2, 0);
}
