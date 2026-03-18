/*
 * XREFs of xxxMinMaximize @ 0x1C0084170
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 * Callees:
 *     xxxMinMaximizeEx @ 0x1C00841D4 (xxxMinMaximizeEx.c)
 */

__int64 __fastcall xxxMinMaximize(struct tagWND *a1, __int64 a2)
{
  return xxxMinMaximizeEx(a1, a2, 0LL, 0LL);
}
