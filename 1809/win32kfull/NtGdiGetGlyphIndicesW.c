/*
 * XREFs of NtGdiGetGlyphIndicesW @ 0x1C0114F80
 * Callers:
 *     <none>
 * Callees:
 *     NtGdiGetGlyphIndicesWInternal @ 0x1C0114FB0 (NtGdiGetGlyphIndicesWInternal.c)
 */

__int64 __fastcall NtGdiGetGlyphIndicesW(__int64 a1, __int64 a2)
{
  return NtGdiGetGlyphIndicesWInternal(a1, a2);
}
