/*
 * XREFs of ?xxxStubSetForegroundWindow@@YAHPEAUtagWND@@@Z @ 0x1C01308F0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0018C90 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 */

_BOOL8 __fastcall xxxStubSetForegroundWindow(struct tagWND *a1)
{
  return xxxSetForegroundWindowWithOptions((__int64)a1, 2u, 0, 1) != 0;
}
