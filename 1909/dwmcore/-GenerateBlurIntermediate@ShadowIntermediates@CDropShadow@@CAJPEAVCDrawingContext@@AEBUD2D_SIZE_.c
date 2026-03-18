/*
 * XREFs of ?GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCRenderTargetImageSource@@MPEAPEAV5@@Z @ 0x1800101BC
 * Callers:
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x18000FDB4 (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 *     ?UpdateBlurIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x1801C8EB0 (-UpdateBlurIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 * Callees:
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x180010434 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180050F4C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x180051B48 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z @ 0x1800BEF5C (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
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
  float v24; // [rsp+30h] [rbp-50h] BYREF
  __int64 v25; // [rsp+38h] [rbp-48h] BYREF
  struct CRenderTargetImageSource *v26; // [rsp+40h] [rbp-40h] BYREF
  int v27; // [rsp+48h] [rbp-38h]
  __int64 v28; // [rsp+50h] [rbp-30h] BYREF
  __int64 v29; // [rsp+58h] [rbp-28h] BYREF
  struct IRenderTarget *v30[2]; // [rsp+60h] [rbp-20h] BYREF

  v30[0] = 0LL;
  v27 = 19;
  v26 = (struct CRenderTargetImageSource *)"DWM DropShadow Blur";
  v7 = CDrawingContext::PushOffScreenRenderingLayer(this, (const struct CResourceTag *)&v26, a2, 0, v30);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x3B2u, 0LL);
    goto LABEL_9;
  }
  v10 = v30[0];
  (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v30[0] + 128LL))(v30[0], 1LL);
  (*(void (__fastcall **)(struct IRenderTarget *, _QWORD))(*(_QWORD *)v10 + 240LL))(v10, (unsigned int)DisplayId::None);
  v26 = 0LL;
  v11 = CRenderTargetImageSource::Create(v10, 0, 0LL, &v26);
  v9 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x3BBu, 0LL);
LABEL_17:
    if ( v26 )
      (*(void (__fastcall **)(struct CRenderTargetImageSource *))(*(_QWORD *)v26 + 16LL))(v26);
    goto LABEL_8;
  }
  v13 = *(_QWORD *)a3;
  v25 = 0LL;
  v14 = (*(__int64 (__fastcall **)(struct CRenderTargetImageSource *, __int64 *))(v13 + 80))(a3, &v25);
  v9 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x3BFu, 0LL);
    goto LABEL_14;
  }
  v28 = 0LL;
  v16 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v25 + 136LL))(
          v25,
          (char *)this + 392,
          0LL,
          0LL,
          &v28);
  v9 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x3C6u, 0LL);
    goto LABEL_12;
  }
  v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**((_QWORD **)this + 48) + 224LL))(
          *((_QWORD *)this + 48),
          6LL,
          &v29);
  v9 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x3CAu, 0LL);
    goto LABEL_12;
  }
  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v29 + 112LL))(v29, 0LL, v28, 1LL);
  v20 = v29;
  v24 = *(float *)&a4 / 3.0;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, float *, int))(*(_QWORD *)v29 + 72LL))(v29, 0LL, 0LL, &v24, 4);
  LODWORD(v24) = 1;
  (*(void (__fastcall **)(__int64, __int64, _QWORD, float *, int))(*(_QWORD *)v29 + 72LL))(v29, 1LL, 0LL, &v24, 4);
  v24 = 0.0;
  (*(void (__fastcall **)(__int64, __int64, _QWORD, float *, int))(*(_QWORD *)v29 + 72LL))(v29, 2LL, 0LL, &v24, 4);
  v30[1] = (struct IRenderTarget *)_mm_unpacklo_ps(*(__m128 *)&a4, *(__m128 *)&a4).m128_u64[0];
  v21 = CDrawingContext::FillEffect(this, 1);
  v9 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x3D9u, 0LL);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v20 + 112LL))(v20, 0LL, 0LL, 1LL);
LABEL_12:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v28);
LABEL_14:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v25);
    goto LABEL_17;
  }
  *a5 = v26;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v20 + 112LL))(v20, 0LL, 0LL, 1LL);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v28);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v25);
LABEL_8:
  CDrawingContext::PopLayer(this);
LABEL_9:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v30);
  return v9;
}
