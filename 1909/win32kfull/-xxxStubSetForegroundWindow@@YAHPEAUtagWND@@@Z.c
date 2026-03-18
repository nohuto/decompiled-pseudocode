/*
 * XREFs of ?xxxStubSetForegroundWindow@@YAHPEAUtagWND@@@Z @ 0x1C010B440
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0133E20 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 */

_BOOL8 __fastcall xxxStubSetForegroundWindow(struct tagWND *a1)
{
  return (unsigned __int8)xxxSetForegroundWindowWithOptions(a1, 2LL, 0LL) != 0;
}
