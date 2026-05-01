/*
 * XREFs of GetTickCount_0 @ 0x180048782
 * Callers:
 *     ?ReportHangInternal@@YAJPEAUHWND__@@PEAKKKKPEBG@Z @ 0x18007461C (-ReportHangInternal@@YAJPEAUHWND__@@PEAKKKKPEBG@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
DWORD __stdcall GetTickCount_0()
{
  return GetTickCount();
}
