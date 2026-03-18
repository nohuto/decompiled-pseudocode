/*
 * XREFs of ?GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA?AVMatrix3x3@@I@Z @ 0x18000FE00
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x1800CB2C0 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ @ 0x1800102E0 (-GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ.c)
 *     ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x180015D2C (-Invert@Matrix3x2F@D2D1@@QEAA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800183E0 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800288C4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x18002AFB0 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
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
  _BYTE v19[24]; // [rsp+30h] [rbp-71h] BYREF
  float v20; // [rsp+48h] [rbp-59h] BYREF
  int v21; // [rsp+4Ch] [rbp-55h]
  int v22; // [rsp+50h] [rbp-51h]
  float v23; // [rsp+54h] [rbp-4Dh]
  float v24; // [rsp+58h] [rbp-49h]
  float v25; // [rsp+5Ch] [rbp-45h]
  __int128 v26; // [rsp+60h] [rbp-41h] BYREF
  __int64 v27; // [rsp+70h] [rbp-31h]
  __int128 v28; // [rsp+78h] [rbp-29h] BYREF
  float v29; // [rsp+88h] [rbp-19h]
  float v30; // [rsp+8Ch] [rbp-15h]

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
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 240) + 96LL) + 24LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 240) + 96LL),
          a3);
  v26 = *(_OWORD *)v10;
  v27 = *(_QWORD *)(v10 + 16);
  if ( !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&v26) )
  {
    D2D1::Matrix3x2F::Invert((D2D1::Matrix3x2F *)&v26);
    v8 = v8 + *(float *)&v27;
    v9 = v9 + *((float *)&v27 + 1);
    v27 = 0LL;
  }
  v21 = 0;
  v22 = 0;
  v28 = _xmm;
  v20 = 1.0 / v6;
  v23 = 1.0 / v7;
  v24 = 0.0 - (float)((float)(1.0 / v6) * 0.0);
  v29 = v8 / v6;
  v30 = v9 / v7;
  v25 = 0.0 - (float)((float)(1.0 / v7) * 0.0);
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)v19,
    (const struct D2D1::Matrix3x2F *)&v20,
    (const struct D2D1::Matrix3x2F *)&v26);
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)&v20,
    (const struct D2D1::Matrix3x2F *)v19,
    (const struct D2D1::Matrix3x2F *)&v28);
  v11 = v22;
  v12 = v23;
  v13 = v20;
  v14 = v21;
  a2[2] = 0.0;
  a2[5] = 0.0;
  *((_DWORD *)a2 + 3) = v11;
  v15 = v24;
  a2[4] = v12;
  v16 = v25;
  a2[6] = v15;
  a2[7] = v16;
  *a2 = v13;
  *((_DWORD *)a2 + 1) = v14;
  a2[8] = 1.0;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v18);
  return a2;
}
