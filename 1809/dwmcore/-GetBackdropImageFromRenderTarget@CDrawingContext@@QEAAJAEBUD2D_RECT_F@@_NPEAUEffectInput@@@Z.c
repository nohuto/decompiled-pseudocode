/*
 * XREFs of ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18008DF04
 * Callers:
 *     ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x180002F58 (-GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x1800CB2C0 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@PEAPEAVIImageSource@@@Z @ 0x1800045B4 (-SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@PEAPEAV.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002F090 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x18002FC60 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800306CC (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x18004DED0 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008E394 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18008E430 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18008E53C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x18008E5DC (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x1800AE108 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B1E90 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800EFFF7 (ceilf_0.c)
 *     floorf_0 @ 0x1800F000F (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::GetBackdropImageFromRenderTarget(
        CDrawingContext *this,
        const struct D2D_RECT_F *a2,
        bool a3,
        struct EffectInput *a4)
{
  struct IImageSource *v5; // r15
  CMILMatrix *TopByReference; // rax
  float v10; // xmm9_4
  float v11; // xmm6_4
  float v12; // xmm7_4
  float v13; // xmm8_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float left; // xmm1_4
  float top; // xmm2_4
  const struct CMILMatrix *v19; // rax
  int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // ebx
  struct IRenderTarget *v23; // rsi
  int (__fastcall **v24)(struct IRenderTarget *, GUID *, struct IImageSource **); // rax
  int v25; // eax
  unsigned int v26; // ecx
  int (__fastcall **v27)(struct IRenderTarget *, GUID *, struct IImageSource **); // rax
  __int64 v28; // rax
  __int128 v29; // xmm0
  bool v30; // zf
  int (__fastcall **v32)(struct IRenderTarget *, GUID *, struct IImageSource **); // rax
  signed int v33; // r12d
  int v34; // ebx
  struct _LUID v35; // rdi
  int (__fastcall **v36)(struct IRenderTarget *, GUID *, struct IImageSource **); // rax
  char v37; // al
  int v38; // edi
  int v39; // eax
  unsigned int v40; // ecx
  __int64 v41; // rax
  __int64 v42; // rax
  FLOAT v43; // xmm1_4
  int v44; // eax
  unsigned int v45; // ecx
  unsigned int v46; // [rsp+28h] [rbp-E0h]
  struct _LUID v47; // [rsp+48h] [rbp-C0h]
  __int64 v48; // [rsp+78h] [rbp-90h] BYREF
  struct IImageSource *v49; // [rsp+80h] [rbp-88h] BYREF
  struct D2D_SIZE_F v50; // [rsp+88h] [rbp-80h] BYREF
  __int64 v51; // [rsp+90h] [rbp-78h] BYREF
  struct IRenderTarget *v52; // [rsp+98h] [rbp-70h] BYREF
  __int64 v53; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v54; // [rsp+A8h] [rbp-60h] BYREF
  int v55; // [rsp+B0h] [rbp-58h]
  __int64 v56; // [rsp+B4h] [rbp-54h]
  int v57; // [rsp+BCh] [rbp-4Ch]
  __int64 v58; // [rsp+C0h] [rbp-48h]
  int v59; // [rsp+C8h] [rbp-40h]
  __int128 v60; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v61; // [rsp+E8h] [rbp-20h]
  __int128 v62; // [rsp+F8h] [rbp-10h]
  __int128 v63; // [rsp+108h] [rbp+0h]
  __int16 v64; // [rsp+118h] [rbp+10h]
  int v65; // [rsp+128h] [rbp+20h] BYREF
  int v66; // [rsp+12Ch] [rbp+24h]
  int v67; // [rsp+130h] [rbp+28h]
  int v68; // [rsp+134h] [rbp+2Ch]
  __int128 v69; // [rsp+138h] [rbp+30h] BYREF
  float v70; // [rsp+148h] [rbp+40h]
  float v71; // [rsp+14Ch] [rbp+44h]
  struct IImageSource *v72[2]; // [rsp+150h] [rbp+48h] BYREF
  int v73; // [rsp+160h] [rbp+58h]
  int v74; // [rsp+164h] [rbp+5Ch]
  const char *v75; // [rsp+168h] [rbp+60h] BYREF
  int v76; // [rsp+170h] [rbp+68h]
  float v77; // [rsp+174h] [rbp+6Ch]
  float v78; // [rsp+178h] [rbp+70h]
  float v79; // [rsp+17Ch] [rbp+74h]

  v53 = 0LL;
  v52 = 0LL;
  v5 = 0LL;
  v51 = 0LL;
  v49 = 0LL;
  EffectInput::Reset(a4);
  *((_BYTE *)a4 + 44) = 1;
  v69 = (__int128)*a2;
  TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
  CMILMatrix::Transform2DBoundsHelper<0>(TopByReference);
  CScopedClipStack::GetClipBoundsWorld((CDrawingContext *)((char *)this + 1008), (__int64)&v69);
  v10 = *(float *)&v69;
  v11 = *((float *)&v69 + 1);
  v12 = *((float *)&v69 + 2);
  v13 = *((float *)&v69 + 3);
  if ( *(float *)&v65 > *(float *)&v69 )
    v10 = *(float *)&v65;
  v14 = *((float *)&v69 + 1);
  if ( *(float *)&v66 > *((float *)&v69 + 1) )
  {
    v11 = *(float *)&v66;
    v14 = *(float *)&v66;
  }
  v15 = *((float *)&v69 + 2);
  if ( *((float *)&v69 + 2) > *(float *)&v67 )
  {
    v12 = *(float *)&v67;
    v15 = *(float *)&v67;
  }
  v16 = *((float *)&v69 + 3);
  if ( *((float *)&v69 + 3) > *(float *)&v68 )
  {
    v13 = *(float *)&v68;
    v16 = *(float *)&v68;
  }
  if ( v15 > v10 && v16 > v14 )
  {
    left = a2->left;
    v61 = _xmm;
    top = a2->top;
    v60 = _xmm;
    v62 = _xmm;
    v63 = _xmm;
    v64 = 32085;
    CMILMatrix::Translate((CMILMatrix *)&v60, left, top);
    v19 = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
    CMILMatrix::Multiply((CMILMatrix *)&v60, v19);
    v56 = v61;
    v54 = v60;
    v57 = HIDWORD(v61);
    v58 = v63;
    v55 = HIDWORD(v60);
    v59 = HIDWORD(v63);
    *(_WORD *)((char *)a4 + 101) = 257;
    v65 = (int)floorf_0(v10);
    v66 = (int)floorf_0(v11);
    v67 = (int)ceilf_0(v12);
    v68 = (int)ceilf_0(v13);
    v20 = CDrawingContext::FlushD2D(this);
    v22 = v20;
    if ( v20 < 0 )
    {
      v46 = 2458;
      goto LABEL_47;
    }
    v23 = (struct IRenderTarget *)*((_QWORD *)this + 44);
    if ( !a3 )
    {
      v24 = *(int (__fastcall ***)(struct IRenderTarget *, GUID *, struct IImageSource **))v23;
      v49 = 0LL;
      if ( (*v24)(v23, &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb, &v49) < 0 )
      {
        v32 = *(int (__fastcall ***)(struct IRenderTarget *, GUID *, struct IImageSource **))v23;
        v72[0] = 0LL;
        a3 = (*v32)(v23, &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3, v72) < 0;
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)v72);
      }
      else
      {
        v25 = (*(__int64 (__fastcall **)(struct IImageSource *, __int64 *))(*(_QWORD *)v49 + 520LL))(v49, &v48);
        v22 = v25;
        if ( v25 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x9A6u);
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v49);
          goto LABEL_24;
        }
        a3 = (_BYTE)v48 == 0;
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v49);
    }
    v27 = *(int (__fastcall ***)(struct IRenderTarget *, GUID *, struct IImageSource **))v23;
    if ( a3 )
    {
      ((void (__fastcall *)(struct IRenderTarget *, __int128 *))v27[3])(v23, &v69);
      v33 = v67 - v65;
      v34 = *((_DWORD *)this + 100);
      v35 = (struct _LUID)*((_QWORD *)this + 49);
      LODWORD(v49) = v68 - v66;
      v75 = "Backdrop effect input";
      v36 = *(int (__fastcall ***)(struct IRenderTarget *, GUID *, struct IImageSource **))v23;
      v72[0] = (struct IImageSource *)1;
      v76 = 21;
      v37 = ((__int64 (__fastcall *)(struct IRenderTarget *))v36[18])(v23);
      v47 = v35;
      v38 = (int)v49;
      v20 = CD3DDeviceManager::CreateRenderTargetBitmap(
              (__int64)&qword_180308A48,
              (__int64)&v75,
              v33,
              (unsigned int)v49,
              (__int64)v72[0],
              0,
              (__int64)&v69,
              1,
              v47,
              v34,
              v37,
              0,
              0,
              &v52);
      v22 = v20;
      if ( v20 < 0 )
      {
        v46 = 2507;
        goto LABEL_47;
      }
      v20 = (*(__int64 (__fastcall **)(struct IRenderTarget *, __int64 *))(*(_QWORD *)v23 + 72LL))(v23, &v53);
      v22 = v20;
      if ( v20 < 0 )
      {
        v46 = 2510;
        goto LABEL_47;
      }
      v39 = (*(__int64 (__fastcall **)(struct IRenderTarget *, __int64 *))(*(_QWORD *)v52 + 72LL))(v52, &v51);
      v22 = v39;
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0x9CFu);
        goto LABEL_24;
      }
      v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, int *))(*(_QWORD *)v51 + 64LL))(v51, 0LL, v53, &v65);
      v22 = v20;
      if ( v20 < 0 )
      {
        v46 = 2515;
        goto LABEL_47;
      }
      v23 = v52;
      (*(void (__fastcall **)(__int64, struct D2D_SIZE_F *))(*(_QWORD *)v51 + 32LL))(v51, &v50);
      HIDWORD(v75) = 0;
      v76 = 0;
      *(float *)&v75 = 1.0 / v50.width;
      v77 = 1.0 / v50.height;
      v78 = 0.0 - (float)((float)(1.0 / v50.width) * 0.0);
      v79 = 0.0 - (float)((float)(1.0 / v50.height) * 0.0);
      v73 = COERCE_UNSIGNED_INT((float)v65) ^ _xmm;
      v74 = COERCE_UNSIGNED_INT((float)v66) ^ _xmm;
      *(_OWORD *)v72 = _xmm;
      v41 = Matrix3x3::operator*(&v54, &v60, v72);
      v42 = Matrix3x3::operator*(v41, &v54, &v75);
      v72[0] = 0LL;
      *((_OWORD *)a4 + 3) = *(_OWORD *)v42;
      *((_OWORD *)a4 + 4) = *(_OWORD *)(v42 + 16);
      *((_DWORD *)a4 + 20) = *(_DWORD *)(v42 + 32);
      *((float *)&v72[1] + 1) = (float)v38;
      *(float *)&v72[1] = (float)v33;
      v29 = *(_OWORD *)v72;
    }
    else
    {
      ((void (__fastcall *)(struct IRenderTarget *, const char **))v27[7])(v23, &v75);
      *(_QWORD *)((char *)&v69 + 4) = 0LL;
      *(float *)&v69 = 1.0 / (float)v76;
      *((float *)&v69 + 3) = 1.0 / (float)SLODWORD(v77);
      v70 = 0.0 - (float)(*(float *)&v69 * 0.0);
      v71 = 0.0 - (float)(*((float *)&v69 + 3) * 0.0);
      v28 = Matrix3x3::operator*(&v54, &v60, &v69);
      *((_OWORD *)a4 + 3) = *(_OWORD *)v28;
      *((_OWORD *)a4 + 4) = *(_OWORD *)(v28 + 16);
      *((_DWORD *)a4 + 20) = *(_DWORD *)(v28 + 32);
      *(float *)&v69 = (float)v65;
      *((float *)&v69 + 1) = (float)v66;
      *((float *)&v69 + 2) = (float)v67;
      *((float *)&v69 + 3) = (float)v68;
      v29 = v69;
    }
    v30 = !g_LockAndReadBackdropTexture;
    *(_OWORD *)((char *)a4 + 84) = v29;
    if ( !v30 )
      (*(void (__fastcall **)(struct IRenderTarget *, _QWORD, unsigned __int64))(*(_QWORD *)v23 + 216LL))(
        v23,
        *((_QWORD *)this + 48),
        ((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
    v20 = CRenderTargetImageSource::Create(v23, 1, v72);
    v22 = v20;
    if ( v20 >= 0 )
    {
      v5 = v72[0];
LABEL_23:
      v20 = CDrawListBitmap::FromImageSource(a4, v5, this, 0);
      v22 = v20;
      if ( v20 >= 0 )
        goto LABEL_24;
      v46 = 2583;
      goto LABEL_47;
    }
    v46 = 2568;
LABEL_47:
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, v46);
    goto LABEL_24;
  }
  v43 = a2->bottom - a2->top;
  v50.width = a2->right - a2->left;
  v50.height = v43;
  v44 = CDrawingContext::SetEffectInputToTransparentBlack(this, &v50, a4, &v49);
  v22 = v44;
  if ( v44 >= 0 )
  {
    v5 = v49;
    goto LABEL_23;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v44, 0xA13u);
  v5 = v49;
LABEL_24:
  if ( v53 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
  if ( v51 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
  if ( v52 )
    (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v52 + 16LL))(v52);
  if ( v5 )
    (*(void (__fastcall **)(struct IImageSource *))(*(_QWORD *)v5 + 16LL))(v5);
  return v22;
}
