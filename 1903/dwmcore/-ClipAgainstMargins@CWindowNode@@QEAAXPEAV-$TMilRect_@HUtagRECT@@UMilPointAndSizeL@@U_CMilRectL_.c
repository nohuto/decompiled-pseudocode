/*
 * XREFs of ?ClipAgainstMargins@CWindowNode@@QEAAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18004ED8C
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x18004F6E0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800444E8 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x180050470 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

char __fastcall CWindowNode::ClipAgainstMargins(__int64 a1, __int64 a2)
{
  int v2; // eax
  float v3; // xmm1_4
  int v4; // eax
  float v5; // xmm4_4
  int v6; // eax
  float v7; // xmm5_4
  int v8; // eax
  float v9; // xmm6_4
  float v10; // xmm2_4
  float v11; // xmm3_4
  _DWORD *v12; // rax
  _DWORD *v13; // r8
  __int128 v15; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v16[16]; // [rsp+30h] [rbp-30h] BYREF

  v2 = *(_DWORD *)(a1 + 844);
  v15 = *(_OWORD *)(a1 + 140);
  v3 = *(float *)&v15;
  if ( v2 > 0 )
  {
    v3 = *(float *)&v15 + (float)v2;
    *(float *)&v15 = v3;
  }
  v4 = *(_DWORD *)(a1 + 848);
  v5 = *((float *)&v15 + 2);
  if ( v4 > 0 )
  {
    v5 = *((float *)&v15 + 2) - (float)v4;
    *((float *)&v15 + 2) = v5;
  }
  v6 = *(_DWORD *)(a1 + 852);
  v7 = *((float *)&v15 + 1);
  if ( v6 > 0 )
  {
    v7 = *((float *)&v15 + 1) + (float)v6;
    *((float *)&v15 + 1) = v7;
  }
  v8 = *(_DWORD *)(a1 + 856);
  v9 = *((float *)&v15 + 3);
  if ( v8 > 0 )
  {
    v9 = *((float *)&v15 + 3) - (float)v8;
    *((float *)&v15 + 3) = v9;
  }
  if ( *(_BYTE *)(a1 + 947) )
  {
    LODWORD(v10) = COERCE_UNSIGNED_INT((float)*(int *)(a1 + 948)) ^ _xmm;
    LODWORD(v11) = COERCE_UNSIGNED_INT((float)*(int *)(a1 + 952)) ^ _xmm;
    *(float *)&v15 = (float)(v10 + v3) + v10;
    *((float *)&v15 + 1) = (float)(v11 + v7) + v11;
    *((float *)&v15 + 2) = (float)(v10 + v5) + v10;
    *((float *)&v15 + 3) = (float)(v11 + v9) + v11;
  }
  v12 = (_DWORD *)CMilRectLFromMilRectF(v16, &v15, a2);
  return TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IntersectUnsafe(v13, v12);
}
