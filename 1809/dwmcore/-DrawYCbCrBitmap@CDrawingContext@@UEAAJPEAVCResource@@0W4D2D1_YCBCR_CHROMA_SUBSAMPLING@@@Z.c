/*
 * XREFs of ?DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z @ 0x180164C00
 * Callers:
 *     ?Draw@CYCbCrSurface@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BA400 (-Draw@CYCbCrSurface@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@.c)
 * Callees:
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180038F00 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?GetD2DInterpolationMode@CDrawingContext@@QEBA?AW4D2D1_INTERPOLATION_MODE@@XZ @ 0x1800EE430 (-GetD2DInterpolationMode@CDrawingContext@@QEBA-AW4D2D1_INTERPOLATION_MODE@@XZ.c)
 *     ?GetOpacity@CDrawingContext@@QEBAMXZ @ 0x1800EE474 (-GetOpacity@CDrawingContext@@QEBAMXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180192178 (-GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@QEAAJPEAVID2DContextOwner@@PE.c)
 */

__int64 __fastcall CDrawingContext::DrawYCbCrBitmap(
        CDrawingContext *this,
        struct CResource *a2,
        struct CResource *a3,
        enum D2D1_YCBCR_CHROMA_SUBSAMPLING a4)
{
  __int64 v4; // rax
  int D2DBitmapRealizationForContextOwner; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  CDrawingContext *v16; // rcx
  float Opacity; // xmm0_4
  __int64 v18; // r9
  int v19; // r8d
  int v20; // r10d
  __int64 v21; // r11
  int v22; // eax
  __int64 v23; // rcx
  struct ID2D1Bitmap1 *v25; // [rsp+50h] [rbp-30h] BYREF
  struct ID2D1Bitmap1 *v26; // [rsp+58h] [rbp-28h] BYREF
  _DWORD v27[2]; // [rsp+60h] [rbp-20h] BYREF
  _DWORD v28[4]; // [rsp+68h] [rbp-18h] BYREF

  v4 = *(_QWORD *)a2;
  v25 = 0LL;
  v26 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(v4 + 48))(a2, 37LL)
    && (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a3 + 48LL))(a3, 37LL) )
  {
    D2DBitmapRealizationForContextOwner = CCompositionSurfaceBitmap::GetD2DBitmapRealizationForContextOwner(
                                            a2,
                                            (struct ID2DContextOwner *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL)),
                                            &v25);
    v11 = D2DBitmapRealizationForContextOwner;
    if ( D2DBitmapRealizationForContextOwner < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, D2DBitmapRealizationForContextOwner, 0xF5Du);
    }
    else
    {
      v12 = CCompositionSurfaceBitmap::GetD2DBitmapRealizationForContextOwner(
              a3,
              (struct ID2DContextOwner *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL)),
              &v26);
      v11 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xF5Eu);
      }
      else
      {
        (*(void (__fastcall **)(struct ID2D1Bitmap1 *, _DWORD *))(*(_QWORD *)v25 + 40LL))(v25, v27);
        v28[0] = 0;
        v28[1] = 0;
        *(float *)&v28[2] = (float)v27[0];
        *(float *)&v28[3] = (float)v27[1];
        v14 = CDrawingContext::ApplyRenderStateInternal(this, 0);
        v11 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xF68u);
        }
        else
        {
          CDrawingContext::GetD2DInterpolationMode(this);
          Opacity = CDrawingContext::GetOpacity(v16);
          v22 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, struct ID2D1Bitmap1 *, struct ID2D1Bitmap1 *, enum D2D1_YCBCR_CHROMA_SUBSAMPLING, _DWORD *, _DWORD, int, int))(v18 + 152))(
                  v21,
                  ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
                  v25,
                  v26,
                  a4,
                  v28,
                  LODWORD(Opacity),
                  v19,
                  v20);
          v11 = v22;
          if ( v22 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0xF71u);
        }
      }
    }
  }
  else
  {
    v11 = -2147024809;
  }
  if ( v25 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v26 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v26 + 16LL))(v26);
  return v11;
}
