/*
 * XREFs of ?DrawAsDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18007AB10
 * Callers:
 *     ?Draw@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18019FFF0 (-Draw@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18007A200 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18007A99C (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?IsEmptyDrawing@CAtlasedRectsGroup@@UEBA_NXZ @ 0x18007B4B0 (-IsEmptyDrawing@CAtlasedRectsGroup@@UEBA_NXZ.c)
 *     McTemplateU0qq @ 0x18015F794 (McTemplateU0qq.c)
 */

__int64 __fastcall CAtlasedRectsGroup::DrawAsDrawList(
        CAtlasedRectsGroup *a1,
        unsigned int *a2,
        FLOAT *a3,
        __int64 a4,
        __int64 a5,
        CDrawListCache *a6)
{
  unsigned int v10; // edi

  if ( CAtlasedRectsGroup::IsEmptyDrawing(a1) )
    return 0LL;
  if ( !CDrawingContext::IsBounding((CDrawingContext *)a2) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qq(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Start, 7LL, a2[1572]);
  v10 = CContent::DrawAsDrawList((CComposition **)a1, (__int64)a2, a3, a4, a5, a6);
  if ( !CDrawingContext::IsBounding((CDrawingContext *)a2) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qq(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 7LL, a2[1572]);
  return v10;
}
