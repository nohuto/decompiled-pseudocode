/*
 * XREFs of _EnablePerMonitorMenuScaling @ 0x1C020B580
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall EnablePerMonitorMenuScaling(__int64 a1, __int64 a2)
{
  if ( (W32GetCurrentThreadDpiAwarenessContext(a1, a2) & 0xF) != 2 )
    return 0LL;
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 820LL) |= 0x80000u;
  return 1LL;
}
