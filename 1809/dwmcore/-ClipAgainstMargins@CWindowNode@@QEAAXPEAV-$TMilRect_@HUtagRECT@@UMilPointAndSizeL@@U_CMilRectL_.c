/*
 * XREFs of ?ClipAgainstMargins@CWindowNode@@QEAAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800ADFE8
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@@Z @ 0x1800AF8B0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800B10A8 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowNode::ClipAgainstMargins(__int64 a1)
{
  int v1; // eax
  float v2; // xmm3_4
  int v3; // eax
  float v4; // xmm4_4
  int v5; // eax
  float v6; // xmm5_4
  int v7; // eax
  float v8; // xmm6_4
  _DWORD *v9; // rax
  _DWORD *v10; // r8
  __int64 v11; // r9
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  __int64 result; // rax
  float v17; // xmm2_4
  float v18; // xmm1_4
  __int128 v19; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v20[16]; // [rsp+30h] [rbp-30h] BYREF

  v1 = *(_DWORD *)(a1 + 860);
  v19 = *(_OWORD *)(a1 + 140);
  v2 = *(float *)&v19;
  if ( v1 > 0 )
  {
    v2 = *(float *)&v19 + (float)v1;
    *(float *)&v19 = v2;
  }
  v3 = *(_DWORD *)(a1 + 864);
  v4 = *((float *)&v19 + 2);
  if ( v3 > 0 )
  {
    v4 = *((float *)&v19 + 2) - (float)v3;
    *((float *)&v19 + 2) = v4;
  }
  v5 = *(_DWORD *)(a1 + 868);
  v6 = *((float *)&v19 + 1);
  if ( v5 > 0 )
  {
    v6 = *((float *)&v19 + 1) + (float)v5;
    *((float *)&v19 + 1) = v6;
  }
  v7 = *(_DWORD *)(a1 + 872);
  v8 = *((float *)&v19 + 3);
  if ( v7 > 0 )
  {
    v8 = *((float *)&v19 + 3) - (float)v7;
    *((float *)&v19 + 3) = v8;
  }
  if ( *(_BYTE *)(a1 + 965) )
  {
    LODWORD(v17) = COERCE_UNSIGNED_INT((float)*(int *)(a1 + 972)) ^ _xmm;
    LODWORD(v18) = COERCE_UNSIGNED_INT((float)*(int *)(a1 + 968)) ^ _xmm;
    *((float *)&v19 + 1) = v6 + v17;
    *(float *)&v19 = v2 + v18;
    *((float *)&v19 + 2) = v4 + v18;
    *((float *)&v19 + 3) = v8 + v17;
  }
  v9 = (_DWORD *)CMilRectLFromMilRectF(v20, &v19);
  if ( *v9 > *v10 )
    *v10 = *v9;
  v12 = v9[1];
  if ( v12 > v10[1] )
    v10[1] = v12;
  v13 = v9[2];
  v14 = v10[2];
  if ( v13 < v14 )
  {
    v10[2] = v13;
    v14 = v13;
  }
  v15 = v9[3];
  result = (unsigned int)v10[3];
  if ( v15 < (int)result )
  {
    v10[3] = v15;
    result = (unsigned int)v15;
    v14 = v10[2];
  }
  if ( v14 <= *v10 || (int)result <= v10[1] )
  {
    *((_QWORD *)v10 + 1) = v11;
    *(_QWORD *)v10 = v11;
  }
  return result;
}
