/*
 * XREFs of ?RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18017B634
 * Callers:
 *     ?RestoreState@CColorTransformLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18017BA10 (-RestoreState@CColorTransformLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18000EB24 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180055A60 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180145780 (McTemplateU0.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180165BA0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 */

__int64 __fastcall CColorTransformLayer::RenderLayer(CColorTransformLayer *this, struct CDrawingContext *a2)
{
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  __int64 v6; // rcx
  __m128i v7; // xmm0
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __m128 v17; // xmm2
  __m128 v18; // xmm3
  __m128 v19; // xmm7
  __m128 v20; // xmm4
  __m128 v21; // xmm5
  __m128 v22; // xmm6
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v31; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v34[2]; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD v35[40]; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v36[4]; // [rsp+F8h] [rbp-10h] BYREF
  _DWORD v37[15]; // [rsp+108h] [rbp+0h] BYREF
  unsigned __int32 v38; // [rsp+144h] [rbp+3Ch]
  __int32 v39; // [rsp+148h] [rbp+40h]
  unsigned __int32 v40; // [rsp+14Ch] [rbp+44h]
  unsigned __int32 v41; // [rsp+150h] [rbp+48h]
  unsigned __int32 v42; // [rsp+154h] [rbp+4Ch]
  _BYTE v43[16]; // [rsp+158h] [rbp+50h] BYREF

  v33 = 0LL;
  memset_0(v35, 0, 0x28uLL);
  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 4));
  v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 5));
  v6 = *((_QWORD *)this + 1);
  v31 = 0LL;
  v36[0] = 0;
  v36[1] = 0;
  v34[0] = _mm_cvtepi32_ps(v4).m128_u32[0];
  v7 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v34[1] = _mm_cvtepi32_ps(v5).m128_u32[0];
  *(float *)&v36[2] = (float)*((int *)this + 6);
  v36[3] = _mm_cvtepi32_ps(v7).m128_u32[0];
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 72LL))(v6, &v33);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x64u);
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**((_QWORD **)a2 + 48) + 224LL))(
            *((_QWORD *)a2 + 48),
            0LL,
            &v31);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x69u);
    }
    else
    {
      v35[0] = 10;
      v35[1] = -16777216;
      v35[2] = 1;
      v13 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)v35, 1);
      v10 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x7Au);
      }
      else
      {
        v15 = *((_QWORD *)this + 14);
        v16 = *((_QWORD *)this + 1);
        v17 = *(__m128 *)(v15 + 56);
        v18 = *(__m128 *)(v15 + 72);
        v19 = *(__m128 *)(v15 + 136);
        v20 = *(__m128 *)(v15 + 88);
        v21 = *(__m128 *)(v15 + 104);
        v22 = *(__m128 *)(v15 + 120);
        v37[0] = v17.m128_i32[0];
        v37[1] = _mm_shuffle_ps(v17, v17, 85).m128_u32[0];
        v37[4] = _mm_shuffle_ps(v18, v18, 85).m128_u32[0];
        v37[8] = _mm_shuffle_ps(v20, v20, 170).m128_u32[0];
        v37[11] = _mm_shuffle_ps(v21, v21, 85).m128_u32[0];
        v37[2] = _mm_shuffle_ps(v17, v17, 170).m128_u32[0];
        v37[14] = _mm_shuffle_ps(v22, v22, 85).m128_u32[0];
        v37[5] = _mm_shuffle_ps(v18, v18, 170).m128_u32[0];
        v37[7] = v20.m128_i32[0];
        v37[10] = v21.m128_i32[0];
        v37[13] = v22.m128_i32[0];
        v39 = v19.m128_i32[0];
        v37[3] = _mm_shuffle_ps(v17, v17, 255).m128_u32[0];
        v37[6] = _mm_shuffle_ps(v18, v18, 255).m128_u32[0];
        v37[9] = _mm_shuffle_ps(v20, v20, 255).m128_u32[0];
        v37[12] = _mm_shuffle_ps(v21, v21, 255).m128_u32[0];
        v40 = _mm_shuffle_ps(v19, v19, 85).m128_u32[0];
        v41 = _mm_shuffle_ps(v19, v19, 170).m128_u32[0];
        v42 = _mm_shuffle_ps(v19, v19, 255).m128_u32[0];
        v38 = _mm_shuffle_ps(v22, v22, 170).m128_u32[0];
        if ( *(_DWORD *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v16 + 24LL))(v16, v43) + 4) == 3 )
        {
          v38 = 0;
          v42 = LODWORD(FLOAT_1_0);
        }
        v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _DWORD *, int))(*(_QWORD *)v31 + 72LL))(
                v31,
                0LL,
                0LL,
                v37,
                80);
        v10 = v23;
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0xA7u);
        }
        else
        {
          LODWORD(v32) = 2;
          v25 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *, int))(*(_QWORD *)v31 + 72LL))(
                  v31,
                  1LL,
                  0LL,
                  &v32,
                  4);
          v10 = v25;
          if ( v25 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0xACu);
          }
          else
          {
            (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v31 + 112LL))(v31, 0LL, v33, 1LL);
            if ( g_LockAndReadLayer )
              (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64))(**((_QWORD **)this + 1) + 216LL))(
                *((_QWORD *)this + 1),
                *((_QWORD *)a2 + 48),
                ((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL));
            v27 = CDrawingContext::FillEffect(a2, v31, (__int64)v36, (__int64)v34, 1);
            v10 = v27;
            if ( v27 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0xC4u);
            }
            else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            {
              McTemplateU0(
                Microsoft_Windows_Dwm_Core_Provider_Context,
                &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Stop,
                v29);
            }
          }
        }
        CDrawingContext::PopRenderOptionsInternal(a2, 1);
      }
    }
  }
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  if ( v31 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v31 + 112LL))(v31, 0LL, 0LL, 1LL);
  return v10;
}
