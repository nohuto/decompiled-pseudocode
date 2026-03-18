/*
 * XREFs of ?CalculateBounds@CProjectedShadow@@AEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MPEBVCVisualTree@@@Z @ 0x1801EFFC8
 * Callers:
 *     ?AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV?$ComPtr@VCNineGridBrush@@@WRL@Microsoft@@@Z @ 0x1801EFC28 (-AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV-$ComPtr@VCNineGridBrush@@@.c)
 *     ?AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV?$ComPtr@VCSurfaceBrush@@@WRL@Microsoft@@@Z @ 0x1801EFE68 (-AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV-$ComPtr@VCSurfaceBrush@@@WR.c)
 * Callees:
 *     ??$_Lbound@PEBVCVisualTree@@@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@1@AEBQEBVCVisualTree@@@Z @ 0x180007EFC (--$_Lbound@PEBVCVisualTree@@@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProje.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005C830 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 */

float *__fastcall CProjectedShadow::CalculateBounds(__int64 a1, float *a2, float a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 *v6; // rax
  unsigned __int64 v7; // r9
  __int64 v8; // r10
  _DWORD *v9; // r11
  __m128i v10; // xmm0
  int v11; // xmm1_4
  int v12; // xmm1_4
  __m128i v14; // [rsp+20h] [rbp-60h] BYREF
  _DWORD v15[8]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v16; // [rsp+50h] [rbp-30h]
  int v17; // [rsp+60h] [rbp-20h]
  int v18; // [rsp+64h] [rbp-1Ch]
  int v19; // [rsp+68h] [rbp-18h]
  int v20; // [rsp+6Ch] [rbp-14h]
  int v21; // [rsp+70h] [rbp-10h]
  __int64 v22; // [rsp+90h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a1 + 64);
  v22 = a4;
  v6 = std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Lbound<CVisualTree const *>(
         (__int64 *)(v4 + 72),
         &v22);
  if ( v6 == *(__int64 **)(v8 + 72) || v7 < v6[4] )
    v6 = *(__int64 **)(v8 + 72);
  v10 = _mm_loadu_si128((const __m128i *)((char *)v6 + 60));
  v15[2] = 0;
  v15[6] = 0;
  v19 = 0;
  v21 = 0;
  v14 = v10;
  *(float *)v14.m128i_i32 = *(float *)v10.m128i_i32 - a3;
  *(float *)&v14.m128i_i32[2] = *(float *)&v10.m128i_i32[2] + a3;
  v15[1] = v9[42];
  v15[3] = v9[43];
  v11 = v9[45];
  *(float *)&v14.m128i_i32[1] = *(float *)&v10.m128i_i32[1] - a3;
  v15[5] = v11;
  v16 = _xmm;
  v12 = v9[48];
  *(float *)&v14.m128i_i32[3] = *(float *)&v10.m128i_i32[3] + a3;
  v15[0] = v9[41];
  v15[4] = v9[44];
  v15[7] = v9[46];
  v17 = v9[47];
  v20 = v9[49];
  v18 = v12;
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v15, (__int64)&v14, a2);
  return a2;
}
