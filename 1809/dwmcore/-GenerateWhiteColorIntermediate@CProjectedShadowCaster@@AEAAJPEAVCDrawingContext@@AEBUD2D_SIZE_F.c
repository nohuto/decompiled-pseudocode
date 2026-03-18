/*
 * XREFs of ?GenerateWhiteColorIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801AD478
 * Callers:
 *     ?GenerateMaskIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@_N@Z @ 0x1801AD134 (-GenerateMaskIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@_N@Z.c)
 * Callees:
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18000EB24 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18002EACC (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x18004DED0 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180064348 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??$?4VCRenderTargetImageSource@@@?$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VCRenderTargetImageSource@@@12@@Z @ 0x1801AC638 (--$-4VCRenderTargetImageSource@@@-$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV-$ComPt.c)
 */

__int64 __fastcall CProjectedShadowCaster::GenerateWhiteColorIntermediate(
        CProjectedShadowCaster *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  __int64 v3; // r14
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  struct IRenderTarget *v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v22; // [rsp+20h] [rbp-79h]
  int v23; // [rsp+30h] [rbp-69h] BYREF
  __int64 v24; // [rsp+38h] [rbp-61h] BYREF
  __int64 v25; // [rsp+40h] [rbp-59h] BYREF
  __int64 v26; // [rsp+48h] [rbp-51h] BYREF
  struct CRenderTargetImageSource *v27; // [rsp+50h] [rbp-49h] BYREF
  struct IRenderTarget *v28; // [rsp+58h] [rbp-41h] BYREF
  const char *v29; // [rsp+60h] [rbp-39h] BYREF
  int v30; // [rsp+68h] [rbp-31h]
  _BYTE v31[60]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v32; // [rsp+ACh] [rbp+13h]
  __int64 v33; // [rsp+B4h] [rbp+1Bh]
  int v34; // [rsp+BCh] [rbp+23h]

  v3 = *((_QWORD *)a2 + 48);
  v28 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  memset_0(v31, 0, sizeof(v31));
  v32 = 0x3F8000003F800000LL;
  v34 = 0;
  v33 = 0x3F8000003F800000LL;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v28);
  v30 = 25;
  v29 = "DWM ProjectedShadow Color";
  v7 = CDrawingContext::PushOffScreenRenderingLayer(
         (struct IRenderTarget **)a2,
         (const struct CResourceTag *)&v29,
         a3,
         0,
         &v28);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x286u);
    goto LABEL_24;
  }
  v10 = v28;
  (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v28 + 128LL))(v28, 1LL);
  (*(void (__fastcall **)(struct IRenderTarget *, _QWORD))(*(_QWORD *)v10 + 240LL))(v10, DisplayId::None);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v27);
  v11 = CRenderTargetImageSource::Create(v10, 0, &v27);
  v9 = v11;
  if ( v11 < 0 )
  {
    v22 = 655;
    goto LABEL_21;
  }
  v13 = *((_QWORD *)this + 16);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v26);
  v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 80LL))(v13, &v26);
  v9 = v11;
  if ( v11 < 0 )
  {
    v22 = 658;
    goto LABEL_21;
  }
  v14 = v26;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v25);
  v11 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v14 + 136LL))(
          v14,
          (char *)a2 + 392,
          0LL,
          0LL,
          &v25);
  v9 = v11;
  if ( v11 < 0 )
  {
    v22 = 664;
    goto LABEL_21;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 224LL))(v3, 0LL, &v24);
  v9 = v11;
  if ( v11 < 0 )
  {
    v22 = 666;
    goto LABEL_21;
  }
  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v24 + 112LL))(v24, 0LL, v25, 1LL);
  v23 = 1;
  v15 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, int *, int))(*(_QWORD *)v24 + 72LL))(
          v24,
          1LL,
          0LL,
          &v23,
          4);
  v9 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x29Cu);
    goto LABEL_22;
  }
  v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _BYTE *, int))(*(_QWORD *)v24 + 72LL))(
          v24,
          0LL,
          0LL,
          v31,
          80);
  v9 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x29Du);
LABEL_22:
    CDrawingContext::PopLayer(a2);
    goto LABEL_24;
  }
  v23 = 1;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, int *, int))(*(_QWORD *)v24 + 72LL))(
          v24,
          2LL,
          0LL,
          &v23,
          4);
  v9 = v11;
  if ( v11 < 0 )
  {
    v22 = 670;
    goto LABEL_21;
  }
  v11 = CDrawingContext::FillEffect(a2, v24, 0LL, 0LL, 1);
  v9 = v11;
  if ( v11 < 0 )
  {
    v22 = 676;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, v22);
    goto LABEL_22;
  }
  v19 = CDrawingContext::PopLayer(a2);
  v9 = v19;
  if ( v19 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x2A8u);
  else
    Microsoft::WRL::ComPtr<IImageSource>::operator=<CRenderTargetImageSource>((__int64 *)this + 16, (__int64 *)&v27);
LABEL_24:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v25);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v26);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v27);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v28);
  return v9;
}
