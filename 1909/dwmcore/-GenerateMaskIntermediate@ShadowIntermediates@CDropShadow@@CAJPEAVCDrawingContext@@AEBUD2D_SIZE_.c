/*
 * XREFs of ?GenerateMaskIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCSpriteVisualContent@@PEAPEAVCRenderTargetImageSource@@@Z @ 0x180010530
 * Callers:
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x18000FDB4 (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 *     ?UpdateMaskIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801C90F4 (-UpdateMaskIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18003F9A0 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180050F4C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x180051B48 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E0B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z @ 0x1800BEF5C (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800C2114 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropShadow::ShadowIntermediates::GenerateMaskIntermediate(
        struct CDrawingContext *this,
        const struct D2D_SIZE_F *a2,
        struct CSpriteVisualContent *a3,
        struct CRenderTargetImageSource **a4)
{
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  struct IRenderTarget *v11; // rbx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rax
  __int64 (__fastcall *v20)(struct CSpriteVisualContent *, struct CDrawingContext *, const struct D2D_SIZE_F *, _BYTE *, __int128 *); // rax
  int v21; // eax
  unsigned int v22; // ecx
  _BYTE v23[8]; // [rsp+30h] [rbp-38h] BYREF
  struct IRenderTarget *v24; // [rsp+38h] [rbp-30h] BYREF
  struct CRenderTargetImageSource *v25; // [rsp+40h] [rbp-28h] BYREF
  __int128 v26; // [rsp+48h] [rbp-20h] BYREF

  v24 = 0LL;
  *(_QWORD *)&v26 = "DWM DropShadow Mask";
  DWORD2(v26) = 19;
  v8 = CDrawingContext::PushOffScreenRenderingLayer(this, (const struct CResourceTag *)&v26, a2, 0, &v24);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x37Bu, 0LL);
    goto LABEL_7;
  }
  v11 = v24;
  (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v24 + 128LL))(v24, 1LL);
  (*(void (__fastcall **)(struct IRenderTarget *, _QWORD))(*(_QWORD *)v11 + 240LL))(v11, (unsigned int)DisplayId::None);
  v25 = 0LL;
  v12 = CRenderTargetImageSource::Create(v11, 0, 0LL, &v25);
  v10 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x384u, 0LL);
    goto LABEL_14;
  }
  if ( a3
    && !(*(unsigned __int8 (__fastcall **)(struct CSpriteVisualContent *, __int64))(*(_QWORD *)a3 + 48LL))(a3, 19LL) )
  {
    v17 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
    v10 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x38Du, 0LL);
    }
    else
    {
      v19 = *(_QWORD *)a3;
      v23[0] = 0;
      v20 = *(__int64 (__fastcall **)(struct CSpriteVisualContent *, struct CDrawingContext *, const struct D2D_SIZE_F *, _BYTE *, __int128 *))(v19 + 200);
      v26 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      v21 = v20(a3, this, a2, v23, &v26);
      v10 = v21;
      if ( v21 >= 0 )
      {
        CDrawingContext::PopTransformInternal(this, 1);
        goto LABEL_5;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x392u, 0LL);
      CDrawingContext::PopTransformInternal(this, 1);
    }
LABEL_14:
    if ( v25 )
      (*(void (__fastcall **)(struct CRenderTargetImageSource *))(*(_QWORD *)v25 + 16LL))(v25);
    goto LABEL_6;
  }
  v14 = CDrawingContext::Clear(this, &stru_1802A1C78);
  v10 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x389u, 0LL);
    goto LABEL_14;
  }
LABEL_5:
  *a4 = v25;
LABEL_6:
  CDrawingContext::PopLayer(this);
LABEL_7:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v24);
  return v10;
}
