/*
 * XREFs of WINRT_GetLastError @ 0x18008AB0E
 * Callers:
 *     ?throw_last_error@winrt@@YAXXZ @ 0x1800C5130 (-throw_last_error@winrt@@YAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
DWORD __stdcall WINRT_GetLastError()
{
  return GetLastError();
}
