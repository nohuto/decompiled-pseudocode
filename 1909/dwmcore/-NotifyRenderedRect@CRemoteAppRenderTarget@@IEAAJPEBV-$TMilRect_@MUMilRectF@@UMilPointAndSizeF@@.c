/*
 * XREFs of ?NotifyRenderedRect@CRemoteAppRenderTarget@@IEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A42AC
 * Callers:
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ @ 0x1801A4ABC (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x180022AA8 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x18003A410 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18008C3D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::NotifyRenderedRect(__int64 a1, FLOAT *a2)
{
  unsigned int v2; // edi
  __m128i v4; // xmm3
  __m128i v5; // xmm1
  float v6; // xmm2_4
  float v7; // xmm0_4
  float v8; // xmm3_4
  float v9; // xmm1_4
  FLOAT v10; // xmm4_4
  float v11; // xmm4_4
  float v12; // xmm4_4
  float v13; // xmm4_4
  __int64 v14; // rax
  FLOAT v15; // ecx
  __int64 v16; // rcx
  signed int v17; // eax
  __int64 v18; // rcx
  struct D2D_RECT_F v20; // [rsp+30h] [rbp-50h] BYREF
  float v21[4]; // [rsp+40h] [rbp-40h] BYREF
  struct D2D_RECT_F v22; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v23[16]; // [rsp+60h] [rbp-20h] BYREF

  v2 = 0;
  v4 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 296));
  v5 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 300));
  v6 = (float)*(int *)(a1 + 288);
  v7 = (float)*(int *)(a1 + 292);
  v20.left = v6;
  v20.top = v7;
  LODWORD(v8) = _mm_cvtepi32_ps(v4).m128_u32[0];
  LODWORD(v9) = _mm_cvtepi32_ps(v5).m128_u32[0];
  v20.right = v8;
  v20.bottom = v9;
  if ( a2 )
  {
    v10 = *a2;
    if ( *a2 > v6 )
    {
      v20.left = *a2;
      v6 = v10;
    }
    v11 = a2[1];
    if ( v11 > v7 )
    {
      v20.top = a2[1];
      v7 = v11;
    }
    v12 = a2[2];
    if ( v8 > v12 )
    {
      v20.right = a2[2];
      v8 = v12;
    }
    v13 = a2[3];
    if ( v9 > v13 )
    {
      v20.bottom = a2[3];
      v9 = v13;
    }
    if ( v8 <= v6 || v9 <= v7 )
    {
      v20.bottom = 0.0;
      v20.right = 0.0;
      v20.top = 0.0;
      v20.left = 0.0;
    }
  }
  if ( !IsEmpty(&v20) )
  {
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)(a1 + 208), (__int64)&v20, v21);
    v14 = PixelAlign((__int64)v23, (__int64)v21);
    v20.left = *(FLOAT *)v14;
    v20.top = *(FLOAT *)(v14 + 4);
    v15 = *(float *)(v14 + 8);
    v20.bottom = *(FLOAT *)(v14 + 12);
    v20.right = v15;
    v16 = *(_QWORD *)(a1 + 176);
    v22 = v20;
    v17 = (*(__int64 (__fastcall **)(__int64, struct D2D_RECT_F *))(*(_QWORD *)v16 + 168LL))(v16, &v22);
    v2 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x176u, 0LL);
  }
  return v2;
}
