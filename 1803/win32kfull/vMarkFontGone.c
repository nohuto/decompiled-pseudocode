/*
 * XREFs of vMarkFontGone @ 0x1C0217898
 * Callers:
 *     ttfdSemQueryAdvanceWidths @ 0x1C02173A0 (ttfdSemQueryAdvanceWidths.c)
 *     ttfdSemQueryFontData @ 0x1C0217470 (ttfdSemQueryFontData.c)
 *     ttfdSemQueryGlyphAttrs @ 0x1C02175E0 (ttfdSemQueryGlyphAttrs.c)
 *     ttfdSemQueryTrueTypeOutline @ 0x1C0217690 (ttfdSemQueryTrueTypeOutline.c)
 *     ttfdSemQueryTrueTypeTable @ 0x1C0217770 (ttfdSemQueryTrueTypeTable.c)
 *     ttfdQueryFontTree @ 0x1C02209FC (ttfdQueryFontTree.c)
 *     ttfdOpenFontContext @ 0x1C02231EC (ttfdOpenFontContext.c)
 * Callees:
 *     <none>
 */

void __fastcall vMarkFontGone(__int64 a1, int a2)
{
  unsigned int i; // edi
  __int64 v4; // rsi
  void *v5; // rcx
  void *v6; // rcx

  if ( a2 == -1073741818 )
  {
    *(_DWORD *)(a1 + 4) |= 1u;
    for ( i = 0; i < *(_DWORD *)(a1 + 12); ++i )
    {
      v4 = *(_QWORD *)(a1 + 16 * (i + 3LL));
      v5 = *(void **)(v4 + 24);
      if ( v5 )
      {
        EngFreeMem(v5);
        *(_QWORD *)(v4 + 24) = 0LL;
      }
      v6 = *(void **)(v4 + 40);
      if ( v6 )
      {
        EngFreeMem(v6);
        *(_QWORD *)(v4 + 40) = 0LL;
      }
    }
  }
}
