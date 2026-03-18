/*
 * XREFs of ?GenerateBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801C949C
 * Callers:
 *     ?InitializeFastShadow@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801CB520 (-InitializeFastShadow@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?UpdateBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801CC640 (-UpdateBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18000EB24 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B8B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18002EACC (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x18004DED0 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180064348 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??$?4VCRenderTargetImageSource@@@?$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VCRenderTargetImageSource@@@12@@Z @ 0x1801AC638 (--$-4VCRenderTargetImageSource@@@-$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV-$ComPt.c)
 */

__int64 __fastcall CProjectedShadow::GenerateBlurIntermediate(
        CProjectedShadow *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  __int64 v6; // r14
  int v7; // eax
  __int64 v8; // rcx
  int v9; // ebx
  struct IRenderTarget *v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v19; // [rsp+20h] [rbp-40h]
  __int64 v20; // [rsp+30h] [rbp-30h] BYREF
  __int64 v21; // [rsp+38h] [rbp-28h] BYREF
  struct CRenderTargetImageSource *v22; // [rsp+40h] [rbp-20h] BYREF
  struct IRenderTarget *v23; // [rsp+48h] [rbp-18h] BYREF
  const char *v24; // [rsp+50h] [rbp-10h] BYREF
  int v25; // [rsp+58h] [rbp-8h]
  __int64 v26; // [rsp+98h] [rbp+38h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+48h] BYREF

  v23 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v6 = *((_QWORD *)a2 + 48);
  v27 = 0LL;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v23);
  v25 = 24;
  v24 = "DWM ProjectedShadow Blur";
  v7 = CDrawingContext::PushOffScreenRenderingLayer(
         (struct IRenderTarget **)a2,
         (const struct CResourceTag *)&v24,
         a3,
         0,
         &v23);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x2E5u);
    goto LABEL_18;
  }
  v10 = v23;
  (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v23 + 128LL))(v23, 1LL);
  (*(void (__fastcall **)(struct IRenderTarget *, _QWORD))(*(_QWORD *)v10 + 240LL))(v10, DisplayId::None);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v22);
  v11 = CRenderTargetImageSource::Create(v10, 0, &v22);
  v9 = v11;
  if ( v11 < 0 )
  {
    v19 = 750;
    goto LABEL_15;
  }
  v26 = *(_QWORD *)(*((_QWORD *)this + 9) + 128LL);
  v13 = v26;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v26);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v21);
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 80LL))(v13, &v21);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v26);
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v9, 0x2F1u);
LABEL_16:
    CDrawingContext::PopLayer(a2);
    goto LABEL_18;
  }
  v15 = v21;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v20);
  v11 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v15 + 136LL))(
          v15,
          (char *)a2 + 392,
          0LL,
          0LL,
          &v20);
  v9 = v11;
  if ( v11 < 0 )
  {
    v19 = 759;
    goto LABEL_15;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v6 + 224LL))(v6, 6LL, &v27);
  v9 = v11;
  if ( v11 < 0 )
  {
    v19 = 762;
    goto LABEL_15;
  }
  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v27 + 112LL))(v27, 0LL, v20, 1LL);
  *(float *)&v26 = *((float *)this + 24) / 3.0;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *, int))(*(_QWORD *)v27 + 72LL))(v27, 0LL, 0LL, &v26, 4);
  LODWORD(v26) = 1;
  (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64 *, int))(*(_QWORD *)v27 + 72LL))(v27, 1LL, 0LL, &v26, 4);
  LODWORD(v26) = 0;
  (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64 *, int))(*(_QWORD *)v27 + 72LL))(v27, 2LL, 0LL, &v26, 4);
  LODWORD(v26) = *((_DWORD *)this + 24);
  HIDWORD(v26) = v26;
  v11 = CDrawingContext::FillEffect(a2, v27, 0LL, (__int64)&v26, 1);
  v9 = v11;
  if ( v11 < 0 )
  {
    v19 = 775;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, v19);
    goto LABEL_16;
  }
  v16 = CDrawingContext::PopLayer(a2);
  v9 = v16;
  if ( v16 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x30Cu);
  else
    Microsoft::WRL::ComPtr<IImageSource>::operator=<CRenderTargetImageSource>((__int64 *)this + 48, (__int64 *)&v22);
LABEL_18:
  if ( v27 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v27 + 112LL))(v27, 0LL, 0LL, 1LL);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v21);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v22);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v23);
  return (unsigned int)v9;
}
