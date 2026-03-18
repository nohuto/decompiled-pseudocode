/*
 * XREFs of ?IsValid@CProjectedShadow@@AEAA_NPEBVCVisualTree@@@Z @ 0x1801CBC7C
 * Callers:
 *     ?DrawAsDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1801C8900 (-DrawAsDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?at@?$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@@std@@QEBAAEBUVisualPropertyData@CProjectedShadowCaster@@AEBQEBVCVisualTree@@@Z @ 0x1801AE650 (-at@-$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$less@PEBVCVisualTree@@.c)
 *     ?IsValidVisual@CProjectedShadow@@AEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1801CBD40 (-IsValidVisual@CProjectedShadow@@AEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 */

char __fastcall CProjectedShadow::IsValid(CProjectedShadow *this, const struct CVisualTree *a2)
{
  char v3; // di
  __int64 v5; // rcx
  struct CVisual *v7; // rbx
  struct CVisual *v8; // r14
  struct CVisual *v9; // r15
  CProjectedShadow *v10; // rcx
  __int64 *v11; // rcx
  CProjectedShadow *v12; // rcx
  CProjectedShadow *v13; // rcx
  const struct CVisualTree *v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v5 = *(_QWORD *)(*((_QWORD *)this + 11) + 88LL);
  if ( !v5 )
    return 0;
  v7 = *(struct CVisual **)(*((_QWORD *)this + 9) + 56LL);
  v8 = *(struct CVisual **)(*((_QWORD *)this + 10) + 56LL);
  v9 = (struct CVisual *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 168LL))(v5);
  if ( CProjectedShadow::IsValidVisual(v10, a2, v7) )
  {
    v11 = (__int64 *)(*((_QWORD *)this + 9) + 96LL);
    v14 = a2;
    if ( *((_BYTE *)std::map<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData>::at(v11, &v14) + 17) )
    {
      if ( CProjectedShadow::IsValidVisual(v12, a2, v8) )
        return CProjectedShadow::IsValidVisual(v13, a2, v9);
    }
  }
  return v3;
}
