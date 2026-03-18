/*
 * XREFs of xxxShowWindow @ 0x1C011E440
 * Callers:
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     xxxSysCommand @ 0x1C00DF300 (xxxSysCommand.c)
 * Callees:
 *     xxxShowWindowEx @ 0x1C006B634 (xxxShowWindowEx.c)
 */

__int64 __fastcall xxxShowWindow(ULONG_PTR a1, int a2)
{
  return xxxShowWindowEx(a1, a2, a2 & 0x10000);
}
