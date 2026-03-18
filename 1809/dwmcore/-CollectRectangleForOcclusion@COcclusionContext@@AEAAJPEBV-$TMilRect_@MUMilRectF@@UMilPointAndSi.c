/*
 * XREFs of ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x1800B1484
 * Callers:
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180012C70 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@.c)
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180019B9C (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1800291F0 (-AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CSpriteVisualContent@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18005AC20 (-AddOcclusionInformation@CSpriteVisualContent@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18005E8B0 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0HJ@@@@Z @ 0x18006A760 (-DrawRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18006F8F0 (-DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?AddOcclusionInformation@COverlayRenderTarget@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18015E300 (-AddOcclusionInformation@COverlayRenderTarget@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?DrawSolidRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180176F80 (-DrawSolidRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?AddOcclusionInformation@CSnapshot@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1801B27D0 (-AddOcclusionInformation@CSnapshot@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall COcclusionContext::CollectRectangleForOcclusion(__int64 a1, float *a2, __int64 a3, __m128 *a4)
{
  int v4; // ebx
  int v7; // eax
  CMILMatrix *v8; // rcx
  int v9; // eax
  __m128 v10; // xmm0
  float v11; // xmm3_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm4_4
  int v15; // eax
  unsigned int v16; // r9d
  unsigned int v17; // r8d
  unsigned int v18; // ecx
  float *i; // rdx
  __int64 v20; // rax
  unsigned int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rdx
  int v25; // eax
  __m128 v26; // [rsp+30h] [rbp-40h]
  __m128 v27; // [rsp+40h] [rbp-30h]
  __m128 v28; // [rsp+50h] [rbp-20h] BYREF
  int v29; // [rsp+60h] [rbp-10h]

  v4 = 0;
  if ( a2[2] > *a2 && a2[3] > a2[1] )
  {
    v29 = 0;
    v7 = *(_DWORD *)(a1 + 8);
    v8 = v7 ? (CMILMatrix *)(*(_QWORD *)(a1 + 24) + 68LL * (unsigned int)(v7 - 1)) : (CMILMatrix *)&CMILMatrix::Identity;
    CMILMatrix::Transform2DBoundsHelper<0>(v8);
    v9 = *(_DWORD *)(a1 + 120);
    if ( v9 )
    {
      v10 = (__m128)_mm_loadu_si128((const __m128i *)(*(_QWORD *)(a1 + 136) + 16LL * (unsigned int)(v9 - 1)));
      v26 = v10;
      v26.m128_i32[0] = v10.m128_i32[0];
      v11 = v10.m128_f32[0];
      if ( v27.m128_f32[0] > v10.m128_f32[0] )
      {
        v26.m128_i32[0] = v27.m128_i32[0];
        v11 = v27.m128_f32[0];
        v10 = v26;
      }
      v12 = _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
      if ( v27.m128_f32[1] > v12 )
      {
        v26.m128_i32[1] = v27.m128_i32[1];
        v12 = v27.m128_f32[1];
        v10 = v26;
      }
      v13 = _mm_shuffle_ps(v10, v10, 170).m128_f32[0];
      if ( v13 > v27.m128_f32[2] )
      {
        v26.m128_i32[2] = v27.m128_i32[2];
        v13 = v27.m128_f32[2];
        v10 = v26;
      }
      v14 = _mm_shuffle_ps(v10, v10, 255).m128_f32[0];
      if ( v14 > v27.m128_f32[3] )
      {
        v26.m128_i32[3] = v27.m128_i32[3];
        v14 = v27.m128_f32[3];
        v10 = v26;
      }
      if ( v13 <= v11 || v14 <= v12 )
        v10 = 0u;
    }
    else
    {
      v10 = v27;
    }
    v28 = v10;
    if ( a4 )
      *a4 = v28;
    v15 = *(_DWORD *)(a1 + 1080);
    v16 = -1;
    if ( v15 )
      v16 = *(_DWORD *)(*(_QWORD *)(a1 + 1096) + 4LL * (unsigned int)(v15 - 1));
    v17 = *(_DWORD *)(a1 + 640);
    v18 = 0;
    if ( v17 )
    {
      for ( i = (float *)(a1 + 772);
            ((v16 >> v18) & 1) == 0
         || (float)((float)(v10.m128_f32[3] - v10.m128_f32[1]) * (float)(v10.m128_f32[2] - v10.m128_f32[0])) <= (float)(*i * 0.25);
            ++i )
      {
        if ( ++v18 >= v17 )
          return (unsigned int)v4;
      }
      v20 = *(unsigned int *)(a1 + 424);
      v21 = v20 + 1;
      v4 = (int)v20 + 1 < (unsigned int)v20 ? 0x80070216 : 0;
      if ( (int)v20 + 1 < (unsigned int)v20 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v4, 0xB5u);
      }
      else if ( v21 > *(_DWORD *)(a1 + 420) )
      {
        v25 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 400, 20, 1, &v28);
        v4 = v25;
        if ( v25 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v25, 0xC0u);
      }
      else
      {
        v22 = *(_QWORD *)(a1 + 400);
        v23 = 5 * v20;
        *(__m128 *)(v22 + 4 * v23) = v10;
        *(_DWORD *)(v22 + 4 * v23 + 16) = v29;
        *(_DWORD *)(a1 + 424) = v21;
      }
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v4, 0x724u);
    }
  }
  return (unsigned int)v4;
}
