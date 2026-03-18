/*
 * XREFs of NtGdiGetGlyphIndicesW @ 0x1C011B020
 * Callers:
 *     <none>
 * Callees:
 *     NtGdiGetGlyphIndicesWInternal @ 0x1C011B050 (NtGdiGetGlyphIndicesWInternal.c)
 */

__int64 __fastcall NtGdiGetGlyphIndicesW(__int64 a1, __int64 a2)
{
  return NtGdiGetGlyphIndicesWInternal(a1, a2);
}
