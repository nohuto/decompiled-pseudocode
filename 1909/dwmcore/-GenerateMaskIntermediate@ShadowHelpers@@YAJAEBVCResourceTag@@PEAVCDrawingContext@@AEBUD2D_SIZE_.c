/*
 * XREFs of ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCSpriteVisualContent@@PEBVCShape@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCRenderTargetImageSource@@@Z @ 0x1802576E4
 * Callers:
 *     ?GenerateApproxBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@MAEBUD2D_SIZE_F@@AEAV?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@Z @ 0x1801EF750 (-GenerateApproxBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@MAEBUD2D_SIZE_F@@AEA.c)
 *     ?GenerateFastShadowIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801EFD90 (-GenerateFastShadowIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801F121C (-UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1801F1514 (-GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListB.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180050F4C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x180051B48 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E0B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z @ 0x1800BEF5C (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800C2114 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C31C4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?MarkCurrentState@CDrawingContext@@QEAAJXZ @ 0x18016E860 (-MarkCurrentState@CDrawingContext@@QEAAJXZ.c)
 *     ?PushClipShape@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z @ 0x18016EF68 (-PushClipShape@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z.c)
 *     ?RestoreStateToLastMark@CDrawingContext@@QEAAXXZ @ 0x18016FC90 (-RestoreStateToLastMark@CDrawingContext@@QEAAXXZ.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x180249C7C (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 *     ?ClipWithRect@CShape@@SAJAEBV1@AEBUtagRECT@@PEAPEAV1@@Z @ 0x180249E90 (-ClipWithRect@CShape@@SAJAEBV1@AEBUtagRECT@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall ShadowHelpers::GenerateMaskIntermediate(
        struct CResourceTag *a1,
        struct IRenderTarget **this,
        const struct D2D_SIZE_F *a3,
        __int64 *a4,
        struct CShape *a5,
        char a6,
        __int64 a7,
        struct CRenderTargetImageSource **a8)
{
  struct ID2D1Geometry *v8; // rsi
  signed int v12; // eax
  __int64 v13; // rcx
  signed int v14; // ebx
  struct IRenderTarget *v15; // rbx
  struct IRenderTarget *v16; // rax
  signed int v17; // eax
  __int64 v18; // rcx
  signed int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  signed int v23; // eax
  __int64 v24; // rcx
  signed int v25; // eax
  __int64 v26; // rcx
  signed int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 (__fastcall *v30)(__int64 *, struct IRenderTarget **, const struct D2D_SIZE_F *, _BYTE *, __int128 *); // rax
  signed int v31; // eax
  __int64 v32; // rcx
  CDrawingContext *v33; // rcx
  _BYTE v35[8]; // [rsp+30h] [rbp-71h] BYREF
  struct CRenderTargetImageSource *v36; // [rsp+38h] [rbp-69h] BYREF
  struct ID2D1Geometry *v37; // [rsp+40h] [rbp-61h] BYREF
  char v38; // [rsp+48h] [rbp-59h]
  struct CShape *v39[2]; // [rsp+50h] [rbp-51h] BYREF
  struct IRenderTarget *v40; // [rsp+60h] [rbp-41h] BYREF
  __int128 v41; // [rsp+68h] [rbp-39h] BYREF
  struct tagRECT v42; // [rsp+80h] [rbp-21h] BYREF

  v8 = a5;
  v40 = 0LL;
  v12 = CDrawingContext::PushOffScreenRenderingLayer(this, a1, a3, 0, &v40);
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xE6u, 0LL);
    goto LABEL_30;
  }
  v15 = v40;
  (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v40 + 128LL))(v40, 1LL);
  (*(void (__fastcall **)(struct IRenderTarget *, _QWORD))(*(_QWORD *)v15 + 240LL))(v15, (unsigned int)DisplayId::None);
  v16 = this[4];
  v36 = 0LL;
  v17 = CRenderTargetImageSource::Create(v15, 0, *((_QWORD *)v16 + 48), &v36);
  v14 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xF0u, 0LL);
    goto LABEL_25;
  }
  v19 = CDrawingContext::PushTransformInternal(
          (CDrawingContext *)this,
          0LL,
          (const struct CMILMatrix *)&CMILMatrix::Identity,
          0LL,
          1);
  v14 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xF2u, 0LL);
    goto LABEL_25;
  }
  v14 = CDrawingContext::MarkCurrentState((CDrawingContext *)this);
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v14, 0xF6u, 0LL);
    goto LABEL_10;
  }
  v37 = 0LL;
  v38 = 0;
  if ( !a5 )
  {
    if ( !a6 )
      goto LABEL_19;
    v25 = CShape::BuildFromRectFs((char *)a7, v21, v39);
    v14 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x10Bu, 0LL);
      goto LABEL_9;
    }
    goto LABEL_14;
  }
  if ( a6 )
  {
    LODWORD(v39[0]) = (int)*(float *)a7;
    HIDWORD(v39[0]) = (int)*(float *)(a7 + 4);
    LODWORD(v39[1]) = (int)*(float *)(a7 + 8);
    HIDWORD(v39[1]) = (int)*(float *)(a7 + 12);
    v42 = *(struct tagRECT *)v39;
    v23 = CShape::ClipWithRect(a5, &v42, v39);
    v14 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x100u, 0LL);
LABEL_9:
      CShapePtr::Release((CShapePtr *)&v37);
      CDrawingContext::RestoreStateToLastMark((CDrawingContext *)this);
LABEL_10:
      CDrawingContext::PopTransformInternal((CDrawingContext *)this, 1);
LABEL_25:
      if ( v36 )
        (*(void (__fastcall **)(struct CRenderTargetImageSource *))(*(_QWORD *)v36 + 16LL))(v36);
      v33 = (CDrawingContext *)this;
      goto LABEL_28;
    }
LABEL_14:
    CShapePtr::Release((CShapePtr *)&v37);
    v8 = v39[0];
    v38 = 1;
    goto LABEL_15;
  }
  CShapePtr::Release((CShapePtr *)&v37);
  v38 = 0;
LABEL_15:
  v37 = v8;
  if ( v8 )
  {
    v27 = CDrawingContext::PushClipShape((CDrawingContext *)this, &v37);
    v14 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x111u, 0LL);
      goto LABEL_9;
    }
  }
LABEL_19:
  v29 = *a4;
  v35[0] = 0;
  v30 = *(__int64 (__fastcall **)(__int64 *, struct IRenderTarget **, const struct D2D_SIZE_F *, _BYTE *, __int128 *))(v29 + 200);
  v41 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v31 = v30(a4, this, a3, v35, &v41);
  v14 = v31;
  if ( v31 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x116u, 0LL);
    goto LABEL_9;
  }
  *a8 = v36;
  CShapePtr::Release((CShapePtr *)&v37);
  CDrawingContext::RestoreStateToLastMark((CDrawingContext *)this);
  CDrawingContext::PopTransformInternal((CDrawingContext *)this, 1);
LABEL_28:
  CDrawingContext::PopLayer(v33);
LABEL_30:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v40);
  return (unsigned int)v14;
}
