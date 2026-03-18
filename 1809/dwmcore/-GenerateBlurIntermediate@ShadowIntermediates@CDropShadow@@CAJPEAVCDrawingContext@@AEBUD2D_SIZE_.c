/*
 * XREFs of ?GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCRenderTargetImageSource@@MPEAPEAV5@@Z @ 0x18000E870
 * Callers:
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x18000E500 (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 *     ?UpdateBlurIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x1801948AC (-UpdateBlurIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18000EB24 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18002EACC (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x18004DED0 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180064348 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CDropShadow::ShadowIntermediates::GenerateBlurIntermediate(
        struct CDrawingContext *this,
        const struct D2D_SIZE_F *a2,
        struct CRenderTargetImageSource *a3,
        double a4,
        struct CRenderTargetImageSource **a5)
{
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // edi
  struct IRenderTarget *v10; // rbx
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // rbx
  int v21; // eax
  unsigned int v22; // ecx
  struct CRenderTargetImageSource *v23; // rcx
  float v25; // [rsp+30h] [rbp-50h] BYREF
  struct CRenderTargetImageSource *v26; // [rsp+38h] [rbp-48h] BYREF
  int v27; // [rsp+40h] [rbp-40h]
  __int64 v28; // [rsp+48h] [rbp-38h] BYREF
  __int64 v29; // [rsp+50h] [rbp-30h] BYREF
  __int64 v30; // [rsp+58h] [rbp-28h] BYREF
  struct IRenderTarget *v31[2]; // [rsp+60h] [rbp-20h] BYREF

  v31[0] = 0LL;
  v27 = 19;
  v26 = (struct CRenderTargetImageSource *)"DWM DropShadow Blur";
  v7 = CDrawingContext::PushOffScreenRenderingLayer(this, (const struct CResourceTag *)&v26, a2, 0, v31);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x3B4u);
  }
  else
  {
    v10 = v31[0];
    (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v31[0] + 128LL))(v31[0], 1LL);
    (*(void (__fastcall **)(struct IRenderTarget *, _QWORD))(*(_QWORD *)v10 + 240LL))(v10, DisplayId::None);
    v26 = 0LL;
    v11 = CRenderTargetImageSource::Create(v10, 0, &v26);
    v9 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x3BDu);
    }
    else
    {
      v13 = *(_QWORD *)a3;
      v28 = 0LL;
      v14 = (*(__int64 (__fastcall **)(struct CRenderTargetImageSource *, __int64 *))(v13 + 80))(a3, &v28);
      v9 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x3C1u);
      }
      else
      {
        v29 = 0LL;
        v16 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v28 + 136LL))(
                v28,
                (char *)this + 392,
                0LL,
                0LL,
                &v29);
        v9 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x3C8u);
        }
        else
        {
          v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**((_QWORD **)this + 48) + 224LL))(
                  *((_QWORD *)this + 48),
                  6LL,
                  &v30);
          v9 = v18;
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x3CCu);
          }
          else
          {
            (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v30 + 112LL))(v30, 0LL, v29, 1LL);
            v20 = v30;
            v25 = *(float *)&a4 / 3.0;
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD, float *, int))(*(_QWORD *)v30 + 72LL))(
              v30,
              0LL,
              0LL,
              &v25,
              4);
            LODWORD(v25) = 1;
            (*(void (__fastcall **)(__int64, __int64, _QWORD, float *, int))(*(_QWORD *)v30 + 72LL))(
              v30,
              1LL,
              0LL,
              &v25,
              4);
            v25 = 0.0;
            (*(void (__fastcall **)(__int64, __int64, _QWORD, float *, int))(*(_QWORD *)v30 + 72LL))(
              v30,
              2LL,
              0LL,
              &v25,
              4);
            v31[1] = (struct IRenderTarget *)_mm_unpacklo_ps(*(__m128 *)&a4, *(__m128 *)&a4).m128_u64[0];
            v21 = CDrawingContext::FillEffect(this, 1);
            v9 = v21;
            if ( v21 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x3DBu);
            }
            else
            {
              v23 = v26;
              v26 = 0LL;
              *a5 = v23;
            }
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v20 + 112LL))(v20, 0LL, 0LL, 1LL);
          }
        }
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v29);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v28);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v26);
    CDrawingContext::PopLayer(this);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v31);
  return v9;
}
