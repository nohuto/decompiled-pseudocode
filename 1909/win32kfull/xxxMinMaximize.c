/*
 * XREFs of xxxMinMaximize @ 0x1C0012B9C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 * Callees:
 *     xxxMinMaximizeEx @ 0x1C00132A4 (xxxMinMaximizeEx.c)
 */

__int64 __fastcall xxxMinMaximize(struct tagWND *a1, __int64 a2)
{
  return xxxMinMaximizeEx(a1, a2, 0LL, 0LL);
}
