/*
 * XREFs of NtGdiExtSelectClipRgn @ 0x1C0078A80
 * Callers:
 *     <none>
 * Callees:
 *     GreExtSelectClipRgnInternal @ 0x1C013BA84 (GreExtSelectClipRgnInternal.c)
 */

__int64 __fastcall NtGdiExtSelectClipRgn(HDC a1)
{
  return GreExtSelectClipRgnInternal(a1);
}
