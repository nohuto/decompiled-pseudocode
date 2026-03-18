/*
 * XREFs of NtGdiRectVisible @ 0x1C01254D0
 * Callers:
 *     <none>
 * Callees:
 *     GreRectVisible @ 0x1C0125534 (GreRectVisible.c)
 */

__int64 __fastcall NtGdiRectVisible(HDC a1)
{
  return GreRectVisible(a1);
}
