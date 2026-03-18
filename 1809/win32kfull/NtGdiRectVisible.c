/*
 * XREFs of NtGdiRectVisible @ 0x1C009F210
 * Callers:
 *     <none>
 * Callees:
 *     GreRectVisible @ 0x1C009F264 (GreRectVisible.c)
 */

__int64 __fastcall NtGdiRectVisible(HDC a1)
{
  return GreRectVisible(a1);
}
