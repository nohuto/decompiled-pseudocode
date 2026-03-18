/*
 * XREFs of xxxMinMaximize @ 0x1C00B937C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 * Callees:
 *     xxxMinMaximizeEx @ 0x1C00B7604 (xxxMinMaximizeEx.c)
 */

__int64 __fastcall xxxMinMaximize(struct tagWND *a1, unsigned int a2, int a3)
{
  return xxxMinMaximizeEx(a1, a2, a3, 0LL, 0LL, 0LL);
}
