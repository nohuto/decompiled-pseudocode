/*
 * XREFs of ?GenerateWhiteColorIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIImageSource@@PEAPEAVCRenderTargetImageSource@@@Z @ 0x180257A10
 * Callers:
 *     ?UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801F121C (-UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x180010434 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180050F4C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x180051B48 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z @ 0x1800BEF5C (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShadowHelpers::GenerateWhiteColorIntermediate(
        ShadowHelpers *this,
        struct IRenderTarget **a2,
        struct D2D_SIZE_F *a3,
        const struct D2D_SIZE_F *a4,
        struct IImageSource *a5)
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
  struct IRenderTarget *v21; // rcx
  signed int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rbx
  signed int v25; // eax
  __int64 v26; // rcx
  signed int v27; // eax
  __int64 v28; // rcx
  signed int v29; // eax
  __int64 v30; // rcx
  unsigned int v32; // [rsp+20h] [rbp-91h]
  __int64 v33; // [rsp+30h] [rbp-81h] BYREF
  struct CRenderTargetImageSource *v34; // [rsp+38h] [rbp-79h] BYREF
  __int64 v35; // [rsp+40h] [rbp-71h] BYREF
  int v36; // [rsp+48h] [rbp-69h] BYREF
  __int64 v37; // [rsp+50h] [rbp-61h] BYREF
  struct IRenderTarget *v38; // [rsp+58h] [rbp-59h] BYREF
  _BYTE v39[60]; // [rsp+60h] [rbp-51h] BYREF
  __int64 v40; // [rsp+9Ch] [rbp-15h]
  __int64 v41; // [rsp+A4h] [rbp-Dh]
  int v42; // [rsp+ACh] [rbp-5h]

  memset_0(v39, 0, sizeof(v39));
  v40 = 0x3F8000003F800000LL;
  v41 = 0x3F8000003F800000LL;
  v42 = 0;
  v38 = 0LL;
  v9 = CDrawingContext::PushOffScreenRenderingLayer(a2, this, a3, 0, &v38);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x17Fu, 0LL);
    goto LABEL_28;
  }
  v12 = v38;
  (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v38 + 128LL))(v38, 1LL);
  (*(void (__fastcall **)(struct IRenderTarget *, _QWORD))(*(_QWORD *)v12 + 240LL))(v12, (unsigned int)DisplayId::None);
  v13 = a2[4];
  v34 = 0LL;
  v14 = CRenderTargetImageSource::Create(v12, 0, *((_QWORD *)v13 + 48), &v34);
  v11 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x189u, 0LL);
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
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x18Du, 0LL);
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
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x194u, 0LL);
    goto LABEL_14;
  }
  v21 = a2[48];
  v37 = 0LL;
  v22 = (*(__int64 (__fastcall **)(struct IRenderTarget *, _QWORD, __int64 *))(*(_QWORD *)v21 + 224LL))(v21, 0LL, &v37);
  v11 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x197u, 0LL);
    goto LABEL_14;
  }
  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v37 + 112LL))(v37, 0LL, v35, 1LL);
  v24 = v37;
  v36 = 1;
  v25 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, int *, int))(*(_QWORD *)v37 + 72LL))(
          v37,
          1LL,
          0LL,
          &v36,
          4);
  v11 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x19Cu, 0LL);
    goto LABEL_13;
  }
  v27 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _BYTE *, int))(*(_QWORD *)v37 + 72LL))(
          v37,
          0LL,
          0LL,
          v39,
          80);
  v11 = v27;
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x19Du, 0LL);
    goto LABEL_13;
  }
  v36 = 1;
  v29 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, int *, int))(*(_QWORD *)v37 + 72LL))(
          v37,
          2LL,
          0LL,
          &v36,
          4);
  v11 = v29;
  if ( v29 < 0 )
  {
    v32 = 414;
    goto LABEL_12;
  }
  v29 = CDrawingContext::FillEffect((CDrawingContext *)a2, v37, 0LL, 0LL, 1);
  v11 = v29;
  if ( v29 < 0 )
  {
    v32 = 420;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, v32, 0LL);
LABEL_13:
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v24 + 112LL))(v24, 0LL, 0LL, 1LL);
LABEL_14:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v35);
LABEL_15:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v33);
    goto LABEL_24;
  }
  *(_QWORD *)a5 = v34;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v24 + 112LL))(v24, 0LL, 0LL, 1LL);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v35);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v33);
LABEL_26:
  CDrawingContext::PopLayer((CDrawingContext *)a2);
LABEL_28:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v38);
  return v11;
}
