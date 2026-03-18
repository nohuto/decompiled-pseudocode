/*
 * XREFs of _EnablePerMonitorMenuScaling @ 0x1C01E5640
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall EnablePerMonitorMenuScaling(__int64 a1, __int64 a2)
{
  if ( (W32GetCurrentThreadDpiAwarenessContext(a1, a2) & 0xF) != 2 )
    return 0LL;
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 812LL) |= 0x80000u;
  return 1LL;
}
