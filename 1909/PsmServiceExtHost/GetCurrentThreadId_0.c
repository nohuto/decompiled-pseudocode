/*
 * XREFs of GetCurrentThreadId_0 @ 0x1800481D6
 * Callers:
 *     ?GetCurrentDesktopName@@YAHPEAGI@Z @ 0x1800805B0 (-GetCurrentDesktopName@@YAHPEAGI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
DWORD __stdcall GetCurrentThreadId_0()
{
  return GetCurrentThreadId();
}
