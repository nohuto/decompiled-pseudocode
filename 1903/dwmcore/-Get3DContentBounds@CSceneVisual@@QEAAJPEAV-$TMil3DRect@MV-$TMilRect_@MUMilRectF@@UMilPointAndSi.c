/*
 * XREFs of ?Get3DContentBounds@CSceneVisual@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C6E78
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180061D00 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Get3DBounds@CSceneWorld@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180205A20 (-Get3DBounds@CSceneWorld@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPo.c)
 */

__int64 __fastcall CSceneVisual::Get3DContentBounds(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rcx
  signed int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  v2 = *(_QWORD *)(a1 + 256);
  if ( !v2 )
  {
    a2[4] = 0;
    a2[5] = 0;
    a2[3] = 0;
    a2[2] = 0;
    a2[1] = 0;
    *a2 = 0;
    return 0;
  }
  v3 = CSceneWorld::Get3DBounds(v2, a2, a2);
  v5 = v3;
  if ( v3 >= 0 )
    return 0;
  MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x48u, 0LL);
  return v5;
}
