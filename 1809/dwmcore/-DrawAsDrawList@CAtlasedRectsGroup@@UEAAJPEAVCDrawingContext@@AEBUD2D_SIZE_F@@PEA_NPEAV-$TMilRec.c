/*
 * XREFs of ?DrawAsDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008DC10
 * Callers:
 *     ?Draw@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180174FA0 (-Draw@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18008DCB4 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?IsEmptyDrawing@CAtlasedRectsGroup@@UEBA_NXZ @ 0x18008DCE0 (-IsEmptyDrawing@CAtlasedRectsGroup@@UEBA_NXZ.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800B3200 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     McTemplateU0qq @ 0x180148FA4 (McTemplateU0qq.c)
 */

__int64 __fastcall CAtlasedRectsGroup::DrawAsDrawList(
        CAtlasedRectsGroup *a1,
        unsigned int *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v10; // edi

  if ( CAtlasedRectsGroup::IsEmptyDrawing(a1) )
    return 0LL;
  if ( !CDrawingContext::IsBounding((CDrawingContext *)a2) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qq(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Start, 7LL, a2[1572]);
  v10 = CContent::DrawAsDrawList(a1, a2, a3, a4, a5, a6);
  if ( !CDrawingContext::IsBounding((CDrawingContext *)a2) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qq(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 7LL, a2[1572]);
  return v10;
}
