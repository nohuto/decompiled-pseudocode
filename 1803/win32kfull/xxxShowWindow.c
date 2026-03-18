/*
 * XREFs of xxxShowWindow @ 0x1C0073948
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 *     xxxSysCommand @ 0x1C00F50F8 (xxxSysCommand.c)
 * Callees:
 *     xxxShowWindowEx @ 0x1C0075774 (xxxShowWindowEx.c)
 */

__int64 __fastcall xxxShowWindow(struct tagWND *a1)
{
  return xxxShowWindowEx(a1);
}
