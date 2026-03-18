/*
 * XREFs of ?xxxStubSetForegroundWindow@@YAHPEAUtagWND@@@Z @ 0x1C00D77B0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetForegroundWindowWithOptions@@YAHPEAUtagWND@@HK@Z @ 0x1C00D77CC (-xxxSetForegroundWindowWithOptions@@YAHPEAUtagWND@@HK@Z.c)
 */

__int64 __fastcall xxxStubSetForegroundWindow(struct tagWND *a1)
{
  return xxxSetForegroundWindowWithOptions(a1, 1, 0);
}
