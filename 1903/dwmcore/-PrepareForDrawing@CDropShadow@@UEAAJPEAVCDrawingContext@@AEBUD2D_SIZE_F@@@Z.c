/*
 * XREFs of ?PrepareForDrawing@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18000DE20
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x18000DEB4 (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 *     ?CanUseFastShadow@ShadowIntermediates@CDropShadow@@QEBA_NAEBUD2D_SIZE_F@@M@Z @ 0x18000E100 (-CanUseFastShadow@ShadowIntermediates@CDropShadow@@QEBA_NAEBUD2D_SIZE_F@@M@Z.c)
 *     ?SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCSpriteVisualContent@@@Z @ 0x18003030C (-SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCSpriteVisualContent@@@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x180077400 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?GetContentAsSpriteNoRef@CVisual@@QEBA_NPEAPEAVCSpriteVisualContent@@@Z @ 0x1800801C4 (-GetContentAsSpriteNoRef@CVisual@@QEBA_NPEAPEAVCSpriteVisualContent@@@Z.c)
 *     ?IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ @ 0x18008895C (-IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Try_emplace@AEBQEAVCVisual@@$$V@?$unordered_map@PEAVCVisual@@VShadowIntermediates@CDropShadow@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@5@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@_N@1@AEBQEAVCVisual@@@Z @ 0x1801C9F80 (--$_Try_emplace@AEBQEAVCVisual@@$$V@-$unordered_map@PEAVCVisual@@VShadowIntermediates@CDropShado.c)
 */

__int64 __fastcall CDropShadow::PrepareForDrawing(
        CDropShadow *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  char v3; // si
  CDropShadow::ShadowIntermediates *v7; // rbp
  CComposition *v8; // rcx
  __int64 v9; // rax
  int updated; // eax
  unsigned int v11; // ecx
  unsigned int v12; // edi
  CVisual *CurrentVisual; // rax
  int v15; // eax
  unsigned int v16; // ecx
  _QWORD v17[7]; // [rsp+30h] [rbp-38h] BYREF
  struct CSpriteVisualContent *v18; // [rsp+70h] [rbp+8h] BYREF
  CVisual *v19; // [rsp+88h] [rbp+20h] BYREF

  v3 = 1;
  if ( *((_DWORD *)this + 33) == 1 )
  {
    CurrentVisual = CDrawingContext::GetCurrentVisual((struct CDrawingContext *)((char *)a2 + 8));
    v18 = 0LL;
    v19 = CurrentVisual;
    CVisual::GetContentAsSpriteNoRef(CurrentVisual, &v18);
    std::unordered_map<CVisual *,CDropShadow::ShadowIntermediates>::_Try_emplace<CVisual * const &,>(
      (char *)this + 200,
      v17,
      &v19);
    v7 = (CDropShadow::ShadowIntermediates *)(v17[0] + 24LL);
    v15 = CDropShadow::ShadowIntermediates::SetMask((CDropShadow::ShadowIntermediates *)(v17[0] + 24LL), this, v18);
    v12 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x1CCu, 0LL);
      return v12;
    }
  }
  else
  {
    v7 = (CDropShadow *)((char *)this + 136);
  }
  v8 = (CComposition *)*((_QWORD *)this + 2);
  if ( !*((_DWORD *)v8 + 276)
    || !CComposition::IsOverdrawHeatMapEnabled(v8)
    || CDropShadow::ShadowIntermediates::CanUseFastShadow(v7, a3, *((float *)this + 24)) )
  {
    v3 = 0;
  }
  v9 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 264) = v3;
  if ( *(_DWORD *)(v9 + 1104) )
    return 0;
  updated = CDropShadow::ShadowIntermediates::UpdateIntermediates(v7, a2, a3, *((float *)this + 24));
  v12 = updated;
  if ( updated >= 0 )
    return 0;
  else
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, updated, 0x1DFu, 0LL);
  return v12;
}
