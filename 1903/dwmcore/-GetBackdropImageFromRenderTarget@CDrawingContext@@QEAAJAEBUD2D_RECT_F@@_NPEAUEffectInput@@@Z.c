/*
 * XREFs of ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18006F20C
 * Callers:
 *     ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x180005314 (-GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x180076874 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003E4B0 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z @ 0x180047F78 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180051190 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180052140 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800535C0 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005C830 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071C38 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180072034 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800749E0 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x1800770E8 (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18007A960 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800EC4C7 (ceilf_0.c)
 *     floorf_0 @ 0x1800EC4DF (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@PEAPEAVIImageSource@@@Z @ 0x18017146C (-SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@PEAPEAV.c)
 */

__int64 __fastcall CDrawingContext::GetBackdropImageFromRenderTarget(
        CDrawingContext *this,
        const struct D2D_RECT_F *a2,
        bool a3,
        struct EffectInput *a4)
{
  struct CRenderTargetImageSource *v5; // r15
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
  float *v28; // rax
  __int128 v29; // xmm0
  bool v30; // zf
  int (__fastcall **v32)(struct IRenderTarget *, GUID *, struct CRenderTargetImageSource **); // rax
  signed int v33; // r12d
  int v34; // ebx
  struct _LUID v35; // rdi
  int (__fastcall **v36)(struct IRenderTarget *, GUID *, struct IImageSource **); // rax
  char v37; // al
  int v38; // edi
  int v39; // eax
  unsigned int v40; // ecx
  float *v41; // rax
  float *v42; // rax
  FLOAT v43; // xmm1_4
  int v44; // eax
  unsigned int v45; // ecx
  unsigned int v46; // [rsp+28h] [rbp-E0h]
  struct _LUID v47; // [rsp+48h] [rbp-C0h]
  __int64 v48; // [rsp+78h] [rbp-90h] BYREF
  struct IImageSource *v49; // [rsp+80h] [rbp-88h] BYREF
  struct CRenderTargetImageSource *v50[2]; // [rsp+88h] [rbp-80h] BYREF
  struct D2D_SIZE_F v51; // [rsp+98h] [rbp-70h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-68h] BYREF
  struct IRenderTarget *v53; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v54; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v55; // [rsp+B8h] [rbp-50h] BYREF
  int v56; // [rsp+C0h] [rbp-48h]
  __int64 v57; // [rsp+C4h] [rbp-44h]
  int v58; // [rsp+CCh] [rbp-3Ch]
  __int64 v59; // [rsp+D0h] [rbp-38h]
  int v60; // [rsp+D8h] [rbp-30h]
  __int128 v61; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v62; // [rsp+F8h] [rbp-10h]
  __int128 v63; // [rsp+108h] [rbp+0h]
  __int128 v64; // [rsp+118h] [rbp+10h]
  __int16 v65; // [rsp+128h] [rbp+20h]
  int v66; // [rsp+138h] [rbp+30h] BYREF
  int v67; // [rsp+13Ch] [rbp+34h]
  int v68; // [rsp+140h] [rbp+38h]
  int v69; // [rsp+144h] [rbp+3Ch]
  __int128 v70; // [rsp+148h] [rbp+40h] BYREF
  float v71; // [rsp+158h] [rbp+50h]
  float v72; // [rsp+15Ch] [rbp+54h]
  __int128 v73; // [rsp+160h] [rbp+58h] BYREF
  float v74; // [rsp+170h] [rbp+68h]
  float v75; // [rsp+174h] [rbp+6Ch]

  v54 = 0LL;
  v53 = 0LL;
  v5 = 0LL;
  v52 = 0LL;
  v49 = 0LL;
  EffectInput::Reset(a4);
  *((_BYTE *)a4 + 44) = 1;
  v70 = (__int128)*a2;
  TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
  CMILMatrix::Transform2DBoundsHelper<0>(TopByReference, (__int64)&v70, (float *)&v66);
  CScopedClipStack::GetClipBoundsWorld((char *)this + 1008, &v70);
  v10 = *(float *)&v70;
  v11 = *((float *)&v70 + 1);
  v12 = *((float *)&v70 + 2);
  v13 = *((float *)&v70 + 3);
  if ( *(float *)&v66 > *(float *)&v70 )
    v10 = *(float *)&v66;
  v14 = *((float *)&v70 + 1);
  if ( *(float *)&v67 > *((float *)&v70 + 1) )
  {
    v11 = *(float *)&v67;
    v14 = *(float *)&v67;
  }
  v15 = *((float *)&v70 + 2);
  if ( *((float *)&v70 + 2) > *(float *)&v68 )
  {
    v12 = *(float *)&v68;
    v15 = *(float *)&v68;
  }
  v16 = *((float *)&v70 + 3);
  if ( *((float *)&v70 + 3) > *(float *)&v69 )
  {
    v13 = *(float *)&v69;
    v16 = *(float *)&v69;
  }
  if ( v15 > v10 && v16 > v14 )
  {
    left = a2->left;
    v62 = _xmm;
    top = a2->top;
    v61 = _xmm;
    v63 = _xmm;
    v64 = _xmm;
    v65 = 32085;
    CMILMatrix::Translate((CMILMatrix *)&v61, left, top);
    v19 = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
    CMILMatrix::Multiply((CMILMatrix *)&v61, v19);
    v57 = v62;
    v55 = v61;
    v58 = HIDWORD(v62);
    v59 = v64;
    v56 = HIDWORD(v61);
    v60 = HIDWORD(v64);
    *(_WORD *)((char *)a4 + 101) = 257;
    v66 = (int)floorf_0(v10);
    v67 = (int)floorf_0(v11);
    v68 = (int)ceilf_0(v12);
    v69 = (int)ceilf_0(v13);
    v20 = CDrawingContext::FlushD2D(this);
    v22 = v20;
    if ( v20 < 0 )
    {
      v46 = 2519;
      goto LABEL_47;
    }
    v23 = (struct IRenderTarget *)*((_QWORD *)this + 44);
    if ( !a3 )
    {
      v24 = *(int (__fastcall ***)(struct IRenderTarget *, GUID *, struct IImageSource **))v23;
      v49 = 0LL;
      if ( (*v24)(v23, &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb, &v49) < 0 )
      {
        v32 = *(int (__fastcall ***)(struct IRenderTarget *, GUID *, struct CRenderTargetImageSource **))v23;
        v50[0] = 0LL;
        a3 = (*v32)(v23, &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3, v50) < 0;
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)v50);
      }
      else
      {
        v25 = (*(__int64 (__fastcall **)(struct IImageSource *, __int64 *))(*(_QWORD *)v49 + 528LL))(v49, &v48);
        v22 = v25;
        if ( v25 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x9E3u, 0LL);
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
      ((void (__fastcall *)(struct IRenderTarget *, __int128 *))v27[3])(v23, &v70);
      v33 = v68 - v66;
      v34 = *((_DWORD *)this + 100);
      v35 = (struct _LUID)*((_QWORD *)this + 49);
      LODWORD(v49) = v69 - v67;
      *(_QWORD *)&v73 = "Backdrop effect input";
      v36 = *(int (__fastcall ***)(struct IRenderTarget *, GUID *, struct IImageSource **))v23;
      v50[0] = (struct CRenderTargetImageSource *)1;
      DWORD2(v73) = 21;
      v37 = ((__int64 (__fastcall *)(struct IRenderTarget *))v36[18])(v23);
      v47 = v35;
      v38 = (int)v49;
      v20 = CD3DDeviceManager::CreateRenderTargetBitmap(
              (__int64)&qword_180340368,
              (__int64)&v73,
              v33,
              (unsigned int)v49,
              (__int64)v50[0],
              0,
              (__int64)&v70,
              1,
              v47,
              v34,
              v37,
              0,
              0,
              &v53);
      v22 = v20;
      if ( v20 < 0 )
      {
        v46 = 2568;
        goto LABEL_47;
      }
      v20 = (*(__int64 (__fastcall **)(struct IRenderTarget *, __int64 *))(*(_QWORD *)v23 + 72LL))(v23, &v54);
      v22 = v20;
      if ( v20 < 0 )
      {
        v46 = 2571;
        goto LABEL_47;
      }
      v39 = (*(__int64 (__fastcall **)(struct IRenderTarget *, __int64 *))(*(_QWORD *)v53 + 72LL))(v53, &v52);
      v22 = v39;
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0xA0Cu, 0LL);
        goto LABEL_24;
      }
      v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, int *))(*(_QWORD *)v52 + 64LL))(v52, 0LL, v54, &v66);
      v22 = v20;
      if ( v20 < 0 )
      {
        v46 = 2576;
        goto LABEL_47;
      }
      v23 = v53;
      (*(void (__fastcall **)(__int64, struct D2D_SIZE_F *))(*(_QWORD *)v52 + 32LL))(v52, &v51);
      LODWORD(v74) = COERCE_UNSIGNED_INT((float)v66) ^ _xmm;
      LODWORD(v75) = COERCE_UNSIGNED_INT((float)v67) ^ _xmm;
      v73 = _xmm;
      v41 = Matrix3x3::operator*((float *)&v55, (float *)&v61, (float *)&v73);
      *(_QWORD *)((char *)&v73 + 4) = 0LL;
      *(float *)&v73 = 1.0 / v51.width;
      *((float *)&v73 + 3) = 1.0 / v51.height;
      v74 = 0.0 - (float)((float)(1.0 / v51.width) * 0.0);
      v75 = 0.0 - (float)((float)(1.0 / v51.height) * 0.0);
      v42 = Matrix3x3::operator*(v41, (float *)&v55, (float *)&v73);
      v50[0] = 0LL;
      *((_OWORD *)a4 + 3) = *(_OWORD *)v42;
      *((_OWORD *)a4 + 4) = *((_OWORD *)v42 + 1);
      *((float *)a4 + 20) = v42[8];
      *((float *)&v50[1] + 1) = (float)v38;
      *(float *)&v50[1] = (float)v33;
      v29 = *(_OWORD *)v50;
    }
    else
    {
      ((void (__fastcall *)(struct IRenderTarget *, __int128 *))v27[7])(v23, &v73);
      *(_QWORD *)((char *)&v70 + 4) = 0LL;
      *(float *)&v70 = 1.0 / (float)SDWORD2(v73);
      *((float *)&v70 + 3) = 1.0 / (float)SHIDWORD(v73);
      v71 = 0.0 - (float)(*(float *)&v70 * 0.0);
      v72 = 0.0 - (float)(*((float *)&v70 + 3) * 0.0);
      v28 = Matrix3x3::operator*((float *)&v55, (float *)&v61, (float *)&v70);
      *((_OWORD *)a4 + 3) = *(_OWORD *)v28;
      *((_OWORD *)a4 + 4) = *((_OWORD *)v28 + 1);
      *((float *)a4 + 20) = v28[8];
      *(float *)&v70 = (float)v66;
      *((float *)&v70 + 1) = (float)v67;
      *((float *)&v70 + 2) = (float)v68;
      *((float *)&v70 + 3) = (float)v69;
      v29 = v70;
    }
    v30 = !g_LockAndReadBackdropTexture;
    *(_OWORD *)((char *)a4 + 84) = v29;
    if ( !v30 )
      (*(void (__fastcall **)(struct IRenderTarget *, _QWORD, unsigned __int64))(*(_QWORD *)v23 + 216LL))(
        v23,
        *((_QWORD *)this + 48),
        ((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
    v20 = CRenderTargetImageSource::Create(v23, 1, 0LL, v50);
    v22 = v20;
    if ( v20 >= 0 )
    {
      v5 = v50[0];
LABEL_23:
      v20 = CDrawListBitmap::FromImageSource((struct IImageSource **)a4, v5, this, 0);
      v22 = v20;
      if ( v20 >= 0 )
        goto LABEL_24;
      v46 = 2645;
      goto LABEL_47;
    }
    v46 = 2630;
LABEL_47:
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, v46, 0LL);
    goto LABEL_24;
  }
  v43 = a2->bottom - a2->top;
  v51.width = a2->right - a2->left;
  v51.height = v43;
  v44 = CDrawingContext::SetEffectInputToTransparentBlack(this, &v51, a4, &v49);
  v22 = v44;
  if ( v44 >= 0 )
  {
    v5 = v49;
    goto LABEL_23;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v44, 0xA51u, 0LL);
  v5 = v49;
LABEL_24:
  if ( v54 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
  if ( v52 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
  if ( v53 )
    (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v53 + 16LL))(v53);
  if ( v5 )
    (*(void (__fastcall **)(struct CRenderTargetImageSource *))(*(_QWORD *)v5 + 16LL))(v5);
  return v22;
}
