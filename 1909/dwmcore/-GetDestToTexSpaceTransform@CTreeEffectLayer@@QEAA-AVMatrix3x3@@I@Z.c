/*
 * XREFs of ?GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA?AVMatrix3x3@@I@Z @ 0x18000DDB0
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18003C54C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ @ 0x18000E11C (-GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ.c)
 *     ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x1800176E8 (-Invert@Matrix3x2F@D2D1@@QEAA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180017B68 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800350E8 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180066EA0 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

float *__fastcall CTreeEffectLayer::GetDestToTexSpaceTransform(__int64 a1, float *a2, unsigned int a3)
{
  float v6; // xmm9_4
  float v7; // xmm10_4
  float v8; // xmm6_4
  float v9; // xmm7_4
  __int64 v10; // rax
  int v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm3_4
  int v14; // xmm4_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  __int64 v18; // [rsp+28h] [rbp-79h] BYREF
  float v19; // [rsp+30h] [rbp-71h] BYREF
  int v20; // [rsp+34h] [rbp-6Dh]
  int v21; // [rsp+38h] [rbp-69h]
  float v22; // [rsp+3Ch] [rbp-65h]
  float v23; // [rsp+40h] [rbp-61h]
  float v24; // [rsp+44h] [rbp-5Dh]
  __int128 v25; // [rsp+48h] [rbp-59h] BYREF
  __int64 v26; // [rsp+58h] [rbp-49h]
  __int128 v27; // [rsp+60h] [rbp-41h] BYREF
  float v28; // [rsp+70h] [rbp-31h]
  float v29; // [rsp+74h] [rbp-2Dh]
  _BYTE v30[24]; // [rsp+78h] [rbp-29h] BYREF

  v18 = 0LL;
  v6 = 0.0;
  v7 = 0.0;
  if ( (*(int (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 8) + 232LL))(*(_QWORD *)(a1 + 8), &v18) >= 0 )
  {
    v6 = (float)*(int *)(v18 + 128);
    v7 = (float)*(int *)(v18 + 132);
  }
  v8 = (float)(*(float *)(a1 + 188) - (float)*(int *)(a1 + 16)) * *(float *)(a1 + 272);
  v9 = (float)(*(float *)(a1 + 192) - (float)*(int *)(a1 + 20)) * *(float *)(a1 + 276);
  if ( CLayerVisual::GetAutomaticBoundsExpansion(*(CLayerVisual **)(a1 + 248)) )
  {
    v8 = *(float *)(a1 + 220) - (float)*(int *)(a1 + 16);
    v9 = *(float *)(a1 + 224) - (float)*(int *)(a1 + 20);
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 240) + 104LL) + 24LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 240) + 104LL),
          a3);
  v25 = *(_OWORD *)v10;
  v26 = *(_QWORD *)(v10 + 16);
  if ( !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&v25) )
  {
    D2D1::Matrix3x2F::Invert((D2D1::Matrix3x2F *)&v25);
    v8 = v8 + *(float *)&v26;
    v9 = v9 + *((float *)&v26 + 1);
    v26 = 0LL;
  }
  v20 = 0;
  v21 = 0;
  v19 = 1.0 / v6;
  v22 = 1.0 / v7;
  v23 = 0.0 - (float)((float)(1.0 / v6) * 0.0);
  v24 = 0.0 - (float)((float)(1.0 / v7) * 0.0);
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)v30,
    (const struct D2D1::Matrix3x2F *)&v19,
    (const struct D2D1::Matrix3x2F *)&v25);
  v28 = v8 / v6;
  v29 = v9 / v7;
  v27 = _xmm;
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)&v19,
    (const struct D2D1::Matrix3x2F *)v30,
    (const struct D2D1::Matrix3x2F *)&v27);
  v11 = v21;
  v12 = v22;
  v13 = v19;
  v14 = v20;
  a2[2] = 0.0;
  a2[5] = 0.0;
  *((_DWORD *)a2 + 3) = v11;
  v15 = v23;
  a2[4] = v12;
  v16 = v24;
  a2[6] = v15;
  a2[7] = v16;
  *a2 = v13;
  *((_DWORD *)a2 + 1) = v14;
  a2[8] = 1.0;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v18);
  return a2;
}
