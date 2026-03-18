/*
 * XREFs of NtGdiRectVisible @ 0x1C0075A20
 * Callers:
 *     <none>
 * Callees:
 *     GreRectVisible @ 0x1C0075A84 (GreRectVisible.c)
 */

__int64 __fastcall NtGdiRectVisible(HDC a1)
{
  return GreRectVisible(a1);
}
