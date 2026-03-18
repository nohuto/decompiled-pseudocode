/*
 * XREFs of ?GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVID2DContext@@PEAVID2DContextOwner@@AEBUtagRECT@@PEAVCCompositionSurfaceBitmap@@PEAPEAUID2D1Effect@@@Z @ 0x180197CA0
 * Callers:
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@PEAPEAUID2D1Effect@@@Z @ 0x1801979D0 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x1800E5B18 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180192178 (-GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@QEAAJPEAVID2DContextOwner@@PE.c)
 */

__int64 __fastcall CFilterEffect::GetInputEffectForAtlasedSurface(
        CFilterEffect *this,
        struct ID2DContext *a2,
        struct ID2DContextOwner *a3,
        const struct tagRECT *a4,
        struct CCompositionSurfaceBitmap *a5,
        struct ID2D1Effect **a6)
{
  struct ID2D1Effect *v7; // rsi
  ID2D1Effect *v9; // rdi
  int D2DBitmapRealizationForContextOwner; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  _QWORD **v13; // rbx
  _QWORD **v14; // rbx
  __int64 (__fastcall *v15)(struct ID2D1Effect *, _QWORD, _QWORD, __int128 *, int); // rax
  float top; // xmm1_4
  __m128i v17; // xmm0
  float bottom; // xmm1_4
  int v19; // eax
  __int64 v20; // rcx
  __int64 (__fastcall *v21)(ID2D1Effect *, __int64, _QWORD, __int128 *, int); // rax
  unsigned int v23; // [rsp+20h] [rbp-50h]
  struct ID2D1Bitmap1 *v24; // [rsp+30h] [rbp-40h] BYREF
  _QWORD **v25; // [rsp+38h] [rbp-38h] BYREF
  _QWORD **v26; // [rsp+40h] [rbp-30h] BYREF
  __int128 v27; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v28; // [rsp+58h] [rbp-18h]

  v25 = 0LL;
  v26 = 0LL;
  v7 = 0LL;
  v24 = 0LL;
  v9 = 0LL;
  D2DBitmapRealizationForContextOwner = CCompositionSurfaceBitmap::GetD2DBitmapRealizationForContextOwner(a5, a3, &v24);
  v12 = D2DBitmapRealizationForContextOwner;
  if ( D2DBitmapRealizationForContextOwner < 0 )
  {
    v23 = 821;
  }
  else
  {
    D2DBitmapRealizationForContextOwner = (*(__int64 (__fastcall **)(struct ID2DContext *, GUID *, _QWORD ***))(*(_QWORD *)a2 + 256LL))(
                                            a2,
                                            &CLSID_D2D1Crop,
                                            &v25);
    v12 = D2DBitmapRealizationForContextOwner;
    if ( D2DBitmapRealizationForContextOwner < 0 )
    {
      v23 = 823;
    }
    else
    {
      D2DBitmapRealizationForContextOwner = (*(__int64 (__fastcall **)(struct ID2DContext *, GUID *, _QWORD ***))(*(_QWORD *)a2 + 256LL))(
                                              a2,
                                              &CLSID_D2D12DAffineTransform,
                                              &v26);
      v12 = D2DBitmapRealizationForContextOwner;
      if ( D2DBitmapRealizationForContextOwner < 0 )
      {
        v23 = 824;
      }
      else
      {
        v13 = v25;
        (*(void (__fastcall **)(_QWORD *))(*v25[13] + 8LL))(v25[13]);
        v7 = (struct ID2D1Effect *)v13[13];
        v14 = v26;
        (*(void (__fastcall **)(_QWORD *))(*v26[13] + 8LL))(v26[13]);
        v9 = (ID2D1Effect *)v14[13];
        v15 = *(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, __int128 *, int))(*(_QWORD *)v7 + 72LL);
        top = (float)a4->top;
        *(float *)&v27 = (float)a4->left;
        v17 = _mm_cvtsi32_si128(a4->right);
        *((float *)&v27 + 1) = top;
        bottom = (float)a4->bottom;
        DWORD2(v27) = _mm_cvtepi32_ps(v17).m128_u32[0];
        *((float *)&v27 + 3) = bottom;
        v19 = v15(v7, 0LL, 0LL, &v27, 16);
        v12 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x340u);
          goto LABEL_13;
        }
        v21 = *(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, __int128 *, int))(*(_QWORD *)v9 + 72LL);
        v28 = _mm_unpacklo_ps(
                _mm_xor_ps((__m128)COERCE_UNSIGNED_INT((float)a4->left), (__m128)_xmm),
                _mm_xor_ps((__m128)COERCE_UNSIGNED_INT((float)a4->top), (__m128)_xmm)).m128_u64[0];
        v27 = _xmm;
        D2DBitmapRealizationForContextOwner = v21(v9, 2LL, 0LL, &v27, 24);
        v12 = D2DBitmapRealizationForContextOwner;
        if ( D2DBitmapRealizationForContextOwner >= 0 )
        {
          (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v7 + 112LL))(
            v7,
            0LL,
            v24,
            1LL);
          ID2D1Effect::SetInputEffect(v9, 0, v7);
          *a6 = v9;
          v9 = 0LL;
          goto LABEL_13;
        }
        v23 = 840;
      }
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, D2DBitmapRealizationForContextOwner, v23);
LABEL_13:
  if ( v24 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v7 )
    (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v25 )
    ((void (__fastcall *)(_QWORD **))(*v25)[2])(v25);
  if ( v26 )
    ((void (__fastcall *)(_QWORD **))(*v26)[2])(v26);
  if ( v9 )
    (*(void (__fastcall **)(ID2D1Effect *))(*(_QWORD *)v9 + 16LL))(v9);
  return v12;
}
