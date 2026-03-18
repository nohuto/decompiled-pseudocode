/*
 * XREFs of ?ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ @ 0x180088924
 * Callers:
 *     ?DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180079C90 (-DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x1800888D0 (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 * Callees:
 *     ?IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ @ 0x18008895C (-IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOptions@CComposition@@XZ @ 0x18016FCD8 (-GetTopByReference@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOpt.c)
 *     ?IsCloseColorF@@YA_NAEBU_D3DCOLORVALUE@@0@Z @ 0x1801C67E0 (-IsCloseColorF@@YA_NAEBU_D3DCOLORVALUE@@0@Z.c)
 */

void __fastcall CPrimitiveGroup::ProcessHeatMapChanges(CComposition **this)
{
  CPrimitiveGroup *v1; // r9
  __int64 v2; // r10
  const struct _D3DCOLORVALUE *v3; // rdx
  __int64 v4; // r9
  char v5; // r11

  if ( CComposition::IsOverdrawHeatMapEnabled(this[2]) )
  {
    v3 = (const struct _D3DCOLORVALUE *)(CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(v2 + 1104)
                                       + 4);
    if ( *(_BYTE *)(v4 + 577) == v5 || !IsCloseColorF((const struct _D3DCOLORVALUE *)(v4 + 656), v3) )
    {
      *(_BYTE *)(v4 + 577) = 1;
      *(struct _D3DCOLORVALUE *)(v4 + 656) = *(const struct _D3DCOLORVALUE *)&v3->r;
      CPrimitiveGroup::BuildHeatMap((CPrimitiveGroup *)v4);
    }
  }
  else if ( *((_BYTE *)v1 + 577) )
  {
    *((_BYTE *)v1 + 577) = 0;
    CPrimitiveGroup::ReleaseHeatMap(v1);
  }
}
