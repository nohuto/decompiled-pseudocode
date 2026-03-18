/*
 * XREFs of xxxShowWindow @ 0x1C00225BC
 * Callers:
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     xxxSysCommand @ 0x1C0111880 (xxxSysCommand.c)
 * Callees:
 *     xxxShowWindowEx @ 0x1C002372C (xxxShowWindowEx.c)
 */

__int64 __fastcall xxxShowWindow(struct tagWND *a1)
{
  return xxxShowWindowEx(a1);
}
