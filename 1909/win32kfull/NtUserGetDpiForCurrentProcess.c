/*
 * XREFs of NtUserGetDpiForCurrentProcess @ 0x1C00E0B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserGetDpiForCurrentProcess(__int64 a1, __int64 a2)
{
  return *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(a1, a2) + 284);
}
