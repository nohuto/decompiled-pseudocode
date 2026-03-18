/*
 * XREFs of ?ClipAgainstMargins@CWindowNode@@QEAAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800681F0
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x180068B40 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800487D8 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800698D0 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

char __fastcall CWindowNode::ClipAgainstMargins(__int64 a1)
{
  int v1; // eax
  float v2; // xmm1_4
  int v3; // eax
  float v4; // xmm4_4
  int v5; // eax
  float v6; // xmm5_4
  int v7; // eax
  float v8; // xmm6_4
  float v9; // xmm2_4
  float v10; // xmm3_4
  _DWORD *v11; // rax
  _DWORD *v12; // r8
  __int128 v14; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v15[16]; // [rsp+30h] [rbp-30h] BYREF

  v1 = *(_DWORD *)(a1 + 844);
  v14 = *(_OWORD *)(a1 + 140);
  v2 = *(float *)&v14;
  if ( v1 > 0 )
  {
    v2 = *(float *)&v14 + (float)v1;
    *(float *)&v14 = v2;
  }
  v3 = *(_DWORD *)(a1 + 848);
  v4 = *((float *)&v14 + 2);
  if ( v3 > 0 )
  {
    v4 = *((float *)&v14 + 2) - (float)v3;
    *((float *)&v14 + 2) = v4;
  }
  v5 = *(_DWORD *)(a1 + 852);
  v6 = *((float *)&v14 + 1);
  if ( v5 > 0 )
  {
    v6 = *((float *)&v14 + 1) + (float)v5;
    *((float *)&v14 + 1) = v6;
  }
  v7 = *(_DWORD *)(a1 + 856);
  v8 = *((float *)&v14 + 3);
  if ( v7 > 0 )
  {
    v8 = *((float *)&v14 + 3) - (float)v7;
    *((float *)&v14 + 3) = v8;
  }
  if ( *(_BYTE *)(a1 + 947) )
  {
    LODWORD(v9) = COERCE_UNSIGNED_INT((float)*(int *)(a1 + 948)) ^ _xmm;
    LODWORD(v10) = COERCE_UNSIGNED_INT((float)*(int *)(a1 + 952)) ^ _xmm;
    *(float *)&v14 = (float)(v9 + v2) + v9;
    *((float *)&v14 + 1) = (float)(v10 + v6) + v10;
    *((float *)&v14 + 2) = (float)(v9 + v4) + v9;
    *((float *)&v14 + 3) = (float)(v10 + v8) + v10;
  }
  v11 = (_DWORD *)CMilRectLFromMilRectF(v15, &v14);
  return TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IntersectUnsafe(v12, v11);
}
