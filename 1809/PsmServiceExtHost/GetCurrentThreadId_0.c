/*
 * XREFs of GetCurrentThreadId_0 @ 0x180048776
 * Callers:
 *     ?GetCurrentDesktopName@@YAHPEAGI@Z @ 0x1800745A4 (-GetCurrentDesktopName@@YAHPEAGI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
DWORD __stdcall GetCurrentThreadId_0()
{
  return GetCurrentThreadId();
}
