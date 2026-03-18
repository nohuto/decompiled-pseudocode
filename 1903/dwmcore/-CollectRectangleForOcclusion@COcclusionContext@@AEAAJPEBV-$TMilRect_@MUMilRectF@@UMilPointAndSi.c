/*
 * XREFs of ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x18002E650
 * Callers:
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180013ED0 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@.c)
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180019604 (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18002E514 (-DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UtagMILCMD_RECTRESOURCE@@$0IK@@@@Z @ 0x18002E590 (-DrawRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180051B90 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18007AA20 (-AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CSpriteVisualContent@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1800BD840 (-AddOcclusionInformation@CSpriteVisualContent@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?DrawSolidRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801721D0 (-DrawSolidRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?AddOcclusionInformation@COverlayRenderTarget@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1801A4480 (-AddOcclusionInformation@COverlayRenderTarget@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CSnapshot@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1802180F0 (-AddOcclusionInformation@CSnapshot@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005C830 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

__int64 __fastcall COcclusionContext::CollectRectangleForOcclusion(__int64 a1, float *a2, __int64 a3, __m128 *a4)
{
  unsigned int v4; // ebx
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
  unsigned int v25; // ecx
  int v26; // eax
  __m128 v27; // [rsp+30h] [rbp-40h]
  __m128 v28; // [rsp+40h] [rbp-30h]
  __m128 v29; // [rsp+50h] [rbp-20h] BYREF
  int v30; // [rsp+60h] [rbp-10h]

  v4 = 0;
  if ( a2[2] > *a2 && a2[3] > a2[1] )
  {
    v30 = 0;
    v7 = *(_DWORD *)(a1 + 16);
    v8 = v7 ? (CMILMatrix *)(*(_QWORD *)(a1 + 32) + 68LL * (unsigned int)(v7 - 1)) : (CMILMatrix *)&CMILMatrix::Identity;
    CMILMatrix::Transform2DBoundsHelper<0>(v8);
    v9 = *(_DWORD *)(a1 + 128);
    if ( v9 )
    {
      v10 = (__m128)_mm_loadu_si128((const __m128i *)(*(_QWORD *)(a1 + 144) + 16LL * (unsigned int)(v9 - 1)));
      v27 = v10;
      v27.m128_i32[0] = v10.m128_i32[0];
      v11 = v10.m128_f32[0];
      if ( v28.m128_f32[0] > v10.m128_f32[0] )
      {
        v27.m128_i32[0] = v28.m128_i32[0];
        v11 = v28.m128_f32[0];
        v10 = v27;
      }
      v12 = _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
      if ( v28.m128_f32[1] > v12 )
      {
        v27.m128_i32[1] = v28.m128_i32[1];
        v12 = v28.m128_f32[1];
        v10 = v27;
      }
      v13 = _mm_shuffle_ps(v10, v10, 170).m128_f32[0];
      if ( v13 > v28.m128_f32[2] )
      {
        v27.m128_i32[2] = v28.m128_i32[2];
        v13 = v28.m128_f32[2];
        v10 = v27;
      }
      v14 = _mm_shuffle_ps(v10, v10, 255).m128_f32[0];
      if ( v14 > v28.m128_f32[3] )
      {
        v27.m128_i32[3] = v28.m128_i32[3];
        v14 = v28.m128_f32[3];
        v10 = v27;
      }
      if ( v13 <= v11 || v14 <= v12 )
        v10 = 0u;
    }
    else
    {
      v10 = v28;
    }
    v29 = v10;
    if ( a4 )
      *a4 = v29;
    v15 = *(_DWORD *)(a1 + 1088);
    v16 = -1;
    if ( v15 )
      v16 = *(_DWORD *)(*(_QWORD *)(a1 + 1104) + 4LL * (unsigned int)(v15 - 1));
    v17 = *(_DWORD *)(a1 + 648);
    v18 = 0;
    if ( v17 )
    {
      for ( i = (float *)(a1 + 780);
            ((v16 >> v18) & 1) == 0
         || (float)((float)(v10.m128_f32[3] - v10.m128_f32[1]) * (float)(v10.m128_f32[2] - v10.m128_f32[0])) <= (float)(*i * 0.25);
            ++i )
      {
        if ( ++v18 >= v17 )
          return v4;
      }
      v20 = *(unsigned int *)(a1 + 432);
      v21 = v20 + 1;
      if ( (int)v20 + 1 < (unsigned int)v20 )
      {
        v4 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024362, 0xB8u, 0LL);
      }
      else
      {
        if ( v21 <= *(_DWORD *)(a1 + 428) )
        {
          v22 = *(_QWORD *)(a1 + 408);
          v23 = 5 * v20;
          *(__m128 *)(v22 + 4 * v23) = v10;
          *(_DWORD *)(v22 + 4 * v23 + 16) = v30;
          *(_DWORD *)(a1 + 432) = v21;
          return v4;
        }
        v26 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 408, 20LL, 1LL, &v29);
        v4 = v26;
        if ( v26 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v26, 0xC3u, 0LL);
      }
      if ( (v4 & 0x80000000) != 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v4, 0x6D5u, 0LL);
    }
  }
  return v4;
}
