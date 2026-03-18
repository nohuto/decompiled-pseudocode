/*
 * XREFs of ?Get3DContentBounds@CSpatialVisual@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B2B74
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180041660 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Get3DBounds@CSpatialVisualContent@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801DB140 (-Get3DBounds@CSpatialVisualContent@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMil3DRect@MV-$TMilRect_@MUMilRec.c)
 */

__int64 __fastcall CSpatialVisual::Get3DContentBounds(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  if ( !*(_QWORD *)(a1 + 256) )
  {
    a2[4] = 0;
    a2[5] = 0;
    a2[3] = 0;
    a2[2] = 0;
    a2[1] = 0;
    *a2 = 0;
    return 0;
  }
  v2 = CSpatialVisualContent::Get3DBounds(*(CSpatialVisualContent **)(a1 + 256), (struct D2D_SIZE_F *)(a1 + 132));
  v4 = v2;
  if ( v2 >= 0 )
    return 0;
  MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x50u);
  return v4;
}
