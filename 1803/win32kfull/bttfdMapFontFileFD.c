/*
 * XREFs of bttfdMapFontFileFD @ 0x1C0217020
 * Callers:
 *     ttfdSemQueryAdvanceWidths @ 0x1C02173A0 (ttfdSemQueryAdvanceWidths.c)
 *     ttfdSemQueryFontData @ 0x1C0217470 (ttfdSemQueryFontData.c)
 *     ttfdSemQueryFontTree @ 0x1C0217550 (ttfdSemQueryFontTree.c)
 *     ttfdSemQueryGlyphAttrs @ 0x1C02175E0 (ttfdSemQueryGlyphAttrs.c)
 *     ttfdSemQueryTrueTypeOutline @ 0x1C0217690 (ttfdSemQueryTrueTypeOutline.c)
 *     ttfdSemQueryTrueTypeTable @ 0x1C0217770 (ttfdSemQueryTrueTypeTable.c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C00BF524 (EngMapFontFileFDInternal.c)
 */

__int64 __fastcall bttfdMapFontFileFD(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return EngMapFontFileFDInternal(
             *(struct _FILEVIEW **)(*(_QWORD *)(a1 + 48) + 56LL),
             (_QWORD *)(a1 + 16),
             (_DWORD *)(a1 + 24),
             1);
  return result;
}
