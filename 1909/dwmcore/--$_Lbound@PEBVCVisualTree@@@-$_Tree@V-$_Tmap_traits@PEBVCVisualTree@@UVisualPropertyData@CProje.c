/*
 * XREFs of ??$_Lbound@PEBVCVisualTree@@@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@1@AEBQEBVCVisualTree@@@Z @ 0x18000665C
 * Callers:
 *     ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z @ 0x18000424C (-UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z.c)
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x180006370 (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 *     ?at@?$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@@std@@QEBAAEBUVisualPropertyData@CProjectedShadowCaster@@AEBQEBVCVisualTree@@@Z @ 0x18000662C (-at@-$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$less@PEBVCVisualTree@@.c)
 *     ?ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z @ 0x18007B264 (-ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z.c)
 *     ?CalculateBounds@CProjectedShadow@@AEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MPEBVCVisualTree@@@Z @ 0x1801EE858 (-CalculateBounds@CProjectedShadow@@AEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801EEC40 (-Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRect.c)
 *     ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1801F0274 (-GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z.c)
 *     ?UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801F121C (-UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Lbound<CVisualTree const *>(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 *v2; // r8
  __int64 *v3; // rax

  v2 = (__int64 *)*a1;
  v3 = *(__int64 **)(*a1 + 8);
  while ( !*((_BYTE *)v3 + 25) )
  {
    if ( (unsigned __int64)v3[4] < *a2 )
    {
      v3 = (__int64 *)v3[2];
    }
    else
    {
      v2 = v3;
      v3 = (__int64 *)*v3;
    }
  }
  return v2;
}
