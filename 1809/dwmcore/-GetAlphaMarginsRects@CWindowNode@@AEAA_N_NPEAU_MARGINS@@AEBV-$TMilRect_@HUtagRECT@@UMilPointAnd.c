/*
 * XREFs of ?GetAlphaMarginsRects@CWindowNode@@AEAA_N_NPEAU_MARGINS@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEAV3@3@Z @ 0x1801B9580
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@@Z @ 0x1800AF8B0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?IsInfinite@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180017588 (-IsInfinite@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180068F08 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IntersectWithMaximizedClip@CWindowNode@@AEBAXAEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801B9864 (-IntersectWithMaximizedClip@CWindowNode@@AEBAXAEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CM.c)
 */

char __fastcall CWindowNode::GetAlphaMarginsRects(_DWORD *a1, char a2, _DWORD *a3, __int64 a4, int *a5, int *a6)
{
  char v10; // r12
  int v11; // edx
  int v12; // r9d
  int v13; // ecx
  int v14; // ecx
  int v15; // r8d
  int v16; // edx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  int v22; // edx
  int v23; // r8d
  char v24; // r10

  v10 = 0;
  *(_OWORD *)a5 = *(_OWORD *)a4;
  *(_OWORD *)a6 = *(_OWORD *)a4;
  CWindowNode::IntersectWithMaximizedClip(a1, a5);
  if ( a3 && (*a3 || a3[2] || a3[1] || a3[3]) )
  {
    v10 = 1;
    v11 = a6[3];
    v12 = *a3 + *a6;
    v13 = a6[2];
    *a6 = v12;
    v14 = v13 - a3[1];
    a6[2] = v14;
    v15 = a6[1] + a3[2];
    a6[1] = v15;
    v16 = v11 - a3[3];
    a6[3] = v16;
    if ( a2 )
    {
      v12 -= *(_DWORD *)a4;
      *a6 = v12;
      v15 -= *(_DWORD *)(a4 + 4);
      a6[1] = v15;
      v14 += a1[184] - a1[182] - *(_DWORD *)(a4 + 8);
      a6[2] = v14;
      v16 += a1[185] - a1[183] - *(_DWORD *)(a4 + 12);
      a6[3] = v16;
    }
    if ( v14 <= v12 )
      v14 = v12;
    a6[2] = v14;
    if ( v16 <= v15 )
      v16 = v15;
    a6[3] = v16;
  }
  if ( *a5 > *a6 )
    *a6 = *a5;
  v17 = a5[1];
  if ( v17 > a6[1] )
    a6[1] = v17;
  v18 = a5[2];
  v19 = a6[2];
  if ( v18 < v19 )
  {
    a6[2] = v18;
    v19 = v18;
  }
  v20 = a5[3];
  v21 = a6[3];
  if ( v20 < v21 )
  {
    a6[3] = v20;
    v21 = v20;
    v19 = a6[2];
  }
  v22 = *a6;
  if ( v19 <= *a6 || (v23 = a6[1], v21 <= v23) )
  {
    a6[3] = 0;
    v22 = 0;
    a6[2] = 0;
    v19 = 0;
    a6[1] = 0;
    v21 = 0;
    *a6 = 0;
    v23 = 0;
  }
  if ( !v10
    || v22 == *a5 && v23 == a5[1] && v19 == a5[2] && v21 == a5[3]
    || TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(a6)
    && TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(a5)
    || TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsInfinite(a6)
    && TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsInfinite(a5) )
  {
    return 0;
  }
  return v24;
}
