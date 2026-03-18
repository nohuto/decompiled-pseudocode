/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@0_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x1800128C4
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CTreeEffect@@QEAA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@0_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x180012878 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CTreeEffect@@QEAA_NAEBV-$TMil3DRect@MV.c)
 * Callees:
 *     ?Get2DBoundsUsing2DInverse@CMILMatrix@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180012A9C (-Get2DBoundsUsing2DInverse@CMILMatrix@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?GetSourceInputBounds@CEffectBrush@@AEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEAV?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@@Z @ 0x180012CEC (-GetSourceInputBounds@CEffectBrush@@AEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800600B0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180085BC4 (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CEffectBrush::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  int SourceInputBounds; // eax
  unsigned int v12; // ecx
  int v13; // esi
  int v14; // eax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  unsigned int v18; // ecx
  int v19; // eax
  unsigned int v20; // ecx
  __int128 v21; // xmm0
  __m128 v22; // xmm2
  __int128 v23; // xmm1
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm2_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm1_4
  float v32; // xmm0_4
  float v33; // xmm2_4
  float v34; // xmm1_4
  __int128 v35; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B0h]
  int v37; // [rsp+58h] [rbp-A8h]
  _OWORD v38[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v39; // [rsp+A0h] [rbp-60h]
  __int128 v40; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v41; // [rsp+C0h] [rbp-40h]
  __int128 v42; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v43; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v44; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v45; // [rsp+F8h] [rbp-8h]
  _BYTE v46[16]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v47; // [rsp+110h] [rbp+10h]

  if ( *(_QWORD *)(a1 + 104) )
  {
    v36 = 0LL;
    v37 = 0;
    v35 = 0LL;
    SourceInputBounds = CEffectBrush::GetSourceInputBounds(a1, a2, a3, &v35);
    v13 = SourceInputBounds;
    if ( SourceInputBounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, SourceInputBounds, 0x2B8u, 0LL);
    }
    else
    {
      v14 = *(_DWORD *)(a4 + 64);
      v15 = *(_OWORD *)(a4 + 16);
      v38[0] = *(_OWORD *)a4;
      v16 = *(_OWORD *)(a4 + 32);
      v39 = v14;
      v38[1] = v15;
      v17 = *(_OWORD *)(a4 + 48);
      v38[2] = v16;
      v38[3] = v17;
      if ( !(unsigned __int8)CMILMatrix::Get2DBoundsUsing2DInverse(v38, a5, v46) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024809, 0x2CAu, 0LL);
        DynArrayImpl<0>::~DynArrayImpl<0>(&v35);
        return 0;
      }
      v19 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64, _QWORD, int, __int128 *, __int128 *))(**(_QWORD **)(a1 + 104) + 96LL))(
              *(_QWORD *)(a1 + 104),
              v46,
              a2,
              v35,
              v37,
              &v42,
              &v43);
      v13 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x2C6u, 0LL);
      }
      else
      {
        v21 = v42;
        if ( a6 )
        {
          v23 = v43;
        }
        else
        {
          v22 = (__m128)*(unsigned int *)(a2 + 20);
          v45 = _mm_unpacklo_ps((__m128)*(unsigned int *)(a2 + 16), v22).m128_u64[0];
          v40 = v43;
          v44 = v42;
          v41 = _mm_unpacklo_ps((__m128)*(unsigned int *)(a2 + 16), v22).m128_u64[0];
          CMILMatrix::Transform3DBoundsHelper<1>((CMILMatrix *)a4);
          CMILMatrix::Transform3DBoundsHelper<1>((CMILMatrix *)a4);
          v21 = v47;
          v23 = v44;
        }
        *(_OWORD *)a7 = v21;
        *(_OWORD *)a8 = v23;
        if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(a7) )
        {
          if ( *(float *)a5 > *(float *)a7 )
            *(_DWORD *)a7 = *(_DWORD *)a5;
          v25 = *(float *)(a5 + 4);
          if ( v25 > *(float *)(a7 + 4) )
            *(float *)(a7 + 4) = v25;
          v26 = *(float *)(a5 + 8);
          v27 = *(float *)(a7 + 8);
          if ( v27 > v26 )
          {
            *(float *)(a7 + 8) = v26;
            v27 = v26;
          }
          v28 = *(float *)(a5 + 12);
          v29 = *(float *)(a7 + 12);
          if ( v29 > v28 )
          {
            *(float *)(a7 + 12) = v28;
            v29 = v28;
            v27 = *(float *)(a7 + 8);
          }
          if ( v27 <= *(float *)a7 || v29 <= *(float *)(a7 + 4) )
          {
            *(_QWORD *)(a7 + 8) = 0LL;
            *(_QWORD *)a7 = 0LL;
          }
        }
        if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(a8) )
        {
          if ( *(float *)a5 > *(float *)a8 )
            *(_DWORD *)a8 = *(_DWORD *)a5;
          v30 = *(float *)(a5 + 4);
          if ( v30 > *(float *)(a8 + 4) )
            *(float *)(a8 + 4) = v30;
          v31 = *(float *)(a5 + 8);
          v32 = *(float *)(a8 + 8);
          if ( v32 > v31 )
          {
            *(float *)(a8 + 8) = v31;
            v32 = v31;
          }
          v33 = *(float *)(a5 + 12);
          v34 = *(float *)(a8 + 12);
          if ( v34 > v33 )
          {
            *(float *)(a8 + 12) = v33;
            v34 = v33;
            v32 = *(float *)(a8 + 8);
          }
          if ( v32 <= *(float *)a8 || v34 <= *(float *)(a8 + 4) )
          {
            *(_QWORD *)(a8 + 8) = 0LL;
            *(_QWORD *)a8 = 0LL;
          }
        }
      }
    }
    DynArrayImpl<0>::~DynArrayImpl<0>(&v35);
  }
  else
  {
    v13 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x2F6u, 0LL);
  }
  return v13 >= 0;
}
