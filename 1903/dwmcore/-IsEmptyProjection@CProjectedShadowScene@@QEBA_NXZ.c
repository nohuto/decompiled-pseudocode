/*
 * XREFs of ?IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ @ 0x1800085A4
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180008230 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x180066580 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006AA20 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?HasNonEmptyContent@CVisual@@UEAA_NXZ @ 0x1800A1DC0 (-HasNonEmptyContent@CVisual@@UEAA_NXZ.c)
 *     ?HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ @ 0x1800AF390 (-HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ.c)
 *     ?HasNonEmptyContent@CWindowNode@@UEAA_NXZ @ 0x1800BA750 (-HasNonEmptyContent@CWindowNode@@UEAA_NXZ.c)
 * Callees:
 *     ?CalculateOpacity@CProjectedShadowScene@@AEBAMM@Z @ 0x180008618 (-CalculateOpacity@CProjectedShadowScene@@AEBAMM@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CProjectedShadowScene::IsEmptyProjection(CProjectedShadowScene *this)
{
  __int64 v2; // rcx
  float v3; // xmm2_4
  bool result; // al

  result = 1;
  if ( *((_QWORD *)this + 8) )
  {
    if ( *((_QWORD *)this + 10) )
    {
      v2 = *((_QWORD *)this + 11);
      if ( v2 )
      {
        if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 208LL))(v2) )
        {
          v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(CProjectedShadowScene::CalculateOpacity(this, 0.0)) & _xmm);
          if ( v3 >= 0.0000011920929 )
            return 0;
        }
      }
    }
  }
  return result;
}
