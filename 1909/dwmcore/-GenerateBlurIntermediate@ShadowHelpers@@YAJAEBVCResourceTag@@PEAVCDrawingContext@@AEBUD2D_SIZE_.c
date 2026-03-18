/*
 * XREFs of ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIImageSource@@AEBUD2D_POINT_2F@@MPEAPEAVCRenderTargetImageSource@@@Z @ 0x180257360
 * Callers:
 *     ?GenerateApproxBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@MAEBUD2D_SIZE_F@@AEAV?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@Z @ 0x1801EF750 (-GenerateApproxBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@MAEBUD2D_SIZE_F@@AEA.c)
 *     ?GenerateFastShadowIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801EFD90 (-GenerateFastShadowIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801F0BA8 (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x180010434 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180050F4C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x180051B48 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z @ 0x1800BEF5C (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShadowHelpers::GenerateBlurIntermediate(
        ShadowHelpers *this,
        struct IRenderTarget **a2,
        const struct D2D_SIZE_F *a3,
        const struct D2D_SIZE_F *a4,
        struct IImageSource *a5,
        const struct D2D_POINT_2F *a6,
        struct CRenderTargetImageSource **a7)
{
  signed int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // edi
  struct IRenderTarget *v12; // rbx
  struct IRenderTarget *v13; // rax
  signed int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  signed int v17; // eax
  __int64 v18; // rcx
  signed int v19; // eax
  __int64 v20; // rcx
  signed int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rbx
  signed int v24; // eax
  __int64 v25; // rcx
  signed int v26; // eax
  __int64 v27; // rcx
  signed int v28; // eax
  __int64 v29; // rcx
  unsigned int v31; // [rsp+20h] [rbp-40h]
  float v32; // [rsp+30h] [rbp-30h] BYREF
  __int64 v33; // [rsp+38h] [rbp-28h] BYREF
  struct CRenderTargetImageSource *v34; // [rsp+40h] [rbp-20h] BYREF
  __int64 v35; // [rsp+48h] [rbp-18h] BYREF
  __int64 v36; // [rsp+50h] [rbp-10h] BYREF
  struct IRenderTarget *v37; // [rsp+58h] [rbp-8h] BYREF

  v37 = 0LL;
  v9 = CDrawingContext::PushOffScreenRenderingLayer(a2, this, a3, 0, &v37);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x133u, 0LL);
    goto LABEL_28;
  }
  v12 = v37;
  (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v37 + 128LL))(v37, 1LL);
  (*(void (__fastcall **)(struct IRenderTarget *, _QWORD))(*(_QWORD *)v12 + 240LL))(v12, (unsigned int)DisplayId::None);
  v13 = a2[4];
  v34 = 0LL;
  v14 = CRenderTargetImageSource::Create(v12, 0, *((_QWORD *)v13 + 48), &v34);
  v11 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x13Du, 0LL);
LABEL_24:
    if ( v34 )
      (*(void (__fastcall **)(struct CRenderTargetImageSource *))(*(_QWORD *)v34 + 16LL))(v34);
    goto LABEL_26;
  }
  v16 = (__int64)*a4;
  v33 = 0LL;
  v17 = (*(__int64 (__fastcall **)(const struct D2D_SIZE_F *, __int64 *))(v16 + 80))(a4, &v33);
  v11 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x141u, 0LL);
    goto LABEL_15;
  }
  v35 = 0LL;
  v19 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v33 + 136LL))(
          v33,
          (char *)a2 + 392,
          0LL,
          0LL,
          &v35);
  v11 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x148u, 0LL);
    goto LABEL_14;
  }
  v21 = (*(__int64 (__fastcall **)(struct IRenderTarget *, __int64, __int64 *))(*(_QWORD *)a2[48] + 224LL))(
          a2[48],
          6LL,
          &v36);
  v11 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x14Cu, 0LL);
    goto LABEL_14;
  }
  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v36 + 112LL))(v36, 0LL, v35, 1LL);
  v23 = v36;
  v32 = *(float *)&a6 / 3.0;
  v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, float *, int))(*(_QWORD *)v36 + 72LL))(
          v36,
          0LL,
          0LL,
          &v32,
          4);
  v11 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x152u, 0LL);
    goto LABEL_13;
  }
  LODWORD(v32) = 1;
  v26 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, float *, int))(*(_QWORD *)v36 + 72LL))(
          v36,
          1LL,
          0LL,
          &v32,
          4);
  v11 = v26;
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x153u, 0LL);
    goto LABEL_13;
  }
  v32 = 0.0;
  v28 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, float *, int))(*(_QWORD *)v36 + 72LL))(
          v36,
          2LL,
          0LL,
          &v32,
          4);
  v11 = v28;
  if ( v28 < 0 )
  {
    v31 = 340;
    goto LABEL_12;
  }
  v28 = CDrawingContext::FillEffect((CDrawingContext *)a2, v36, 0LL, (__int64)a5, 1);
  v11 = v28;
  if ( v28 < 0 )
  {
    v31 = 346;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, v31, 0LL);
LABEL_13:
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v23 + 112LL))(v23, 0LL, 0LL, 1LL);
LABEL_14:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v35);
LABEL_15:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v33);
    goto LABEL_24;
  }
  *a7 = v34;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v23 + 112LL))(v23, 0LL, 0LL, 1LL);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v35);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v33);
LABEL_26:
  CDrawingContext::PopLayer((CDrawingContext *)a2);
LABEL_28:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v37);
  return v11;
}
