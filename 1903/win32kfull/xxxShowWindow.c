/*
 * XREFs of xxxShowWindow @ 0x1C002CA38
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     xxxSysCommand @ 0x1C0137980 (xxxSysCommand.c)
 * Callees:
 *     xxxShowWindowEx @ 0x1C002E00C (xxxShowWindowEx.c)
 */

__int64 __fastcall xxxShowWindow(struct tagWND *a1)
{
  return xxxShowWindowEx(a1);
}
