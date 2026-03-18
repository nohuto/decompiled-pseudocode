/*
 * XREFs of ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00C85E8
 * Callers:
 *     ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1C006E02C (-bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C00C8624 (-vMakeIso@DC@@QEAAXXZ.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C001F400 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall PDEVOBJ::ulLogPixelsY(PDEVOBJ *this)
{
  char CurrentThreadDpiAwarenessContext; // al
  bool v3; // cc
  __int64 result; // rax

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 1) == 0 )
    return *(unsigned int *)(*(_QWORD *)this + 2172LL);
  v3 = (CurrentThreadDpiAwarenessContext & 0xFu) - 1 <= 1;
  result = 96LL;
  if ( v3 )
    return *(unsigned int *)(*(_QWORD *)this + 2172LL);
  return result;
}
