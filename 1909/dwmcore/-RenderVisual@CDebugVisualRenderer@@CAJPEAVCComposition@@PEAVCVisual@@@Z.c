/*
 * XREFs of ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18018AFBC
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800716E0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z @ 0x180024408 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180024E70 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180026E1C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180027964 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180027B70 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x18002AC5C (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ??$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z @ 0x18002ADF8 (--$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180036740 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x180048964 (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x18005200C (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x180052D80 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800530F8 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180058954 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@2PEAVCRenderTarget@@@Z @ 0x180059100 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33PEBV3@333@Z @ 0x18005C990 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18007DF3C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E0B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007FDD0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ??$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z @ 0x1800AD534 (--$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x1800AE8B0 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?IsInfinite@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x1801592F8 (-IsInfinite@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetPixelInfo@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAUPixelFormatInfo@@@Z @ 0x18018AED4 (-GetPixelInfo@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAUPixelFormatInfo@@@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z @ 0x180221310 (-HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z.c)
 */

__int64 __fastcall CDebugVisualRenderer::RenderVisual(struct CComposition *a1, struct CVisual *a2, __int64 a3)
{
  CDisplayManager *v4; // rcx
  CSystemMemoryBitmap *v5; // rdi
  unsigned int v6; // ebx
  unsigned int v7; // r9d
  int VisualTree; // eax
  struct CVisualTree *v9; // r14
  struct CDisplay *v10; // rsi
  __int64 v11; // xmm1_8
  __int128 v12; // xmm0
  float v13; // xmm1_4
  float v14; // xmm6_4
  float v15; // xmm2_4
  float v16; // xmm7_4
  float v17; // xmm0_4
  unsigned int *DisplayId; // rax
  int v19; // r8d
  int v20; // r11d
  struct _LUID v21; // r10
  CDrawingContext *v22; // rsi
  __int64 i; // rax
  CSystemMemoryBitmap *v24; // rax
  unsigned int v26; // [rsp+28h] [rbp-E0h]
  bool v27; // [rsp+28h] [rbp-E0h]
  __int64 v28; // [rsp+78h] [rbp-90h] BYREF
  __int64 v29; // [rsp+80h] [rbp-88h] BYREF
  struct IRenderTarget *v30; // [rsp+88h] [rbp-80h] BYREF
  CDrawingContext *v31; // [rsp+90h] [rbp-78h] BYREF
  CDisplaySet *v32; // [rsp+98h] [rbp-70h] BYREF
  struct CDisplay *v33; // [rsp+A0h] [rbp-68h] BYREF
  struct CVisualTree *v34; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v35[4]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v36[4]; // [rsp+B4h] [rbp-54h] BYREF
  _BYTE v37[4]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v38[4]; // [rsp+BCh] [rbp-4Ch] BYREF
  _BYTE v39[8]; // [rsp+C0h] [rbp-48h] BYREF
  _OWORD v40[4]; // [rsp+C8h] [rbp-40h] BYREF
  __int16 v41; // [rsp+108h] [rbp+0h]
  __int64 v42; // [rsp+118h] [rbp+10h] BYREF
  int v43; // [rsp+120h] [rbp+18h]
  int v44; // [rsp+124h] [rbp+1Ch]
  __int128 v45; // [rsp+128h] [rbp+20h] BYREF
  __int128 v46; // [rsp+138h] [rbp+30h] BYREF
  __int64 v47; // [rsp+148h] [rbp+40h]
  __int64 v48; // [rsp+150h] [rbp+48h] BYREF
  unsigned int v49; // [rsp+158h] [rbp+50h]
  unsigned int v50; // [rsp+15Ch] [rbp+54h]
  __int128 v51; // [rsp+160h] [rbp+58h] BYREF
  _DWORD v52[4]; // [rsp+170h] [rbp+68h] BYREF
  __int128 v53; // [rsp+180h] [rbp+78h] BYREF

  v4 = CDebugVisualRenderer::s_pVisual;
  v5 = 0LL;
  v40[0] = _xmm;
  v40[1] = _xmm;
  v40[2] = _xmm;
  v40[3] = _xmm;
  v41 = 32085;
  v34 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  if ( !CDebugVisualRenderer::s_pVisual )
  {
    v6 = -2147467259;
    v26 = 131;
LABEL_3:
    v7 = v6;
LABEL_53:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v4, 0LL, 0, v7, v26, 0LL);
    goto LABEL_54;
  }
  *(_QWORD *)&v45 = 1LL;
  VisualTree = CVisual::GetVisualTree((struct CComposition **)CDebugVisualRenderer::s_pVisual, &v34, a3, 0);
  v6 = VisualTree;
  if ( VisualTree < 0 )
  {
    v26 = 139;
    goto LABEL_52;
  }
  v9 = v34;
  VisualTree = CVisualTree::PreCompute((__int64)v34, 0LL);
  v6 = VisualTree;
  if ( VisualTree < 0 )
  {
    v26 = 141;
    goto LABEL_52;
  }
  VisualTree = CDisplayManager::GetCurrentDisplaySet(v4, &v32);
  v6 = VisualTree;
  if ( VisualTree < 0 )
  {
    v26 = 143;
    goto LABEL_52;
  }
  VisualTree = CDisplaySet::GetPrimaryDisplay(v32, &v33);
  v6 = VisualTree;
  if ( VisualTree < 0 )
  {
    v26 = 145;
    goto LABEL_52;
  }
  v10 = v33;
  v11 = *(_QWORD *)((char *)v9 + 52);
  v46 = *(_OWORD *)((char *)v9 + 36);
  v12 = *(_OWORD *)((char *)v33 + 120);
  v47 = v11;
  v51 = v12;
  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)&v46)
    || (v13 = *((float *)&v46 + 2), v14 = *(float *)&v46, (float)(*((float *)&v46 + 2) - *(float *)&v46) > 4096.0)
    || (v15 = *((float *)&v46 + 3),
        v16 = *((float *)&v46 + 1),
        (float)(*((float *)&v46 + 3) - *((float *)&v46 + 1)) > 2160.0) )
  {
    if ( TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsInfinite(&v51) )
    {
      v46 = _xmm;
      v15 = *((float *)&_xmm + 3);
      v13 = *((float *)&_xmm + 2);
      v16 = *((float *)&_xmm + 1);
      v14 = *(float *)&_xmm;
    }
    else
    {
      v14 = (float)(int)v51;
      v16 = (float)SDWORD1(v51);
      v13 = (float)SDWORD2(v51);
      v15 = (float)SHIDWORD(v51);
    }
  }
  v42 = 0LL;
  v17 = (float)(v13 - v14) + 6291456.25;
  v43 = (int)(LODWORD(v17) << 10) >> 11;
  *(float *)&v28 = (float)(v15 - v16) + 6291456.25;
  v44 = (int)((_DWORD)v28 << 10) >> 11;
  VisualTree = CDebugVisualRenderer::GetPixelInfo(a1, (struct PixelFormatInfo *)v52);
  v6 = VisualTree;
  if ( VisualTree < 0 )
  {
    v26 = 174;
    goto LABEL_52;
  }
  *(_QWORD *)&v51 = "DWM Rendertarget (debugger visualization)";
  DWORD2(v51) = 41;
  DisplayId = CDisplay::GetDisplayId((__int64)v10, &v28);
  VisualTree = CD3DDeviceManager::CreateRenderTargetBitmap(
                 (__int64)&qword_18033D448,
                 (__int64)&v51,
                 (int)(float)((float)v20 + 0.5),
                 (int)(float)((float)v19 + 0.5),
                 v45,
                 0,
                 (struct PixelFormatInfo *)v52,
                 1,
                 v21,
                 *DisplayId,
                 0,
                 0,
                 1,
                 (void **)&v30);
  v6 = VisualTree;
  if ( VisualTree < 0 )
  {
    v26 = 188;
    goto LABEL_52;
  }
  VisualTree = CDrawingContext::Create(a1, &v31);
  v6 = VisualTree;
  if ( VisualTree < 0 )
  {
    v26 = 190;
    goto LABEL_52;
  }
  v22 = v31;
  *(_QWORD *)&v45 = __PAIR64__(
                      LODWORD(CDebugVisualRenderer::s_clearColorG),
                      LODWORD(CDebugVisualRenderer::s_clearColorR));
  *((_QWORD *)&v45 + 1) = __PAIR64__(
                            LODWORD(CDebugVisualRenderer::s_clearColorA),
                            LODWORD(CDebugVisualRenderer::s_clearColorB));
  VisualTree = CDrawingContext::BeginFrame(v31, v30, &v45, 0, 0LL, 0LL, 0, 0LL);
  v6 = VisualTree;
  if ( VisualTree < 0 )
  {
    v26 = 201;
    goto LABEL_52;
  }
  ++dword_180339868;
  CMILMatrix::Translate((CMILMatrix *)v40, COERCE_FLOAT(LODWORD(v14) ^ _xmm), COERCE_FLOAT(LODWORD(v16) ^ _xmm));
  VisualTree = CDrawingContext::PushTransformInternal(v22, 0LL, (const struct CMILMatrix *)v40, 0LL, 1);
  v6 = VisualTree;
  if ( VisualTree < 0 )
  {
    v26 = 208;
    goto LABEL_52;
  }
  for ( i = 0LL; i < 16; i += 4LL )
    *(float *)((char *)&v53 + i) = (float)*(int *)((char *)&v42 + i);
  VisualTree = CDrawingContext::DrawVisualTree(v22, (float *)v9, &v53, 0LL, 1, 1, 1, 1, 0LL, 0, 0);
  v6 = VisualTree;
  if ( VisualTree < 0 )
  {
    v26 = 220;
    goto LABEL_52;
  }
  VisualTree = CDrawingContext::EndFrame(v22);
  v6 = VisualTree;
  if ( VisualTree < 0 )
  {
    v26 = 222;
    goto LABEL_52;
  }
  v48 = 0LL;
  v49 = (int)(float)((float)(v43 - v42) + 0.5);
  v50 = (int)(float)((float)(v44 - HIDWORD(v42)) + 0.5);
  v24 = (CSystemMemoryBitmap *)operator new(0xF8uLL);
  if ( v24 )
    v5 = CSystemMemoryBitmap::CSystemMemoryBitmap(v24);
  if ( !v5 )
  {
    v6 = -2147024882;
    v26 = 234;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(CSystemMemoryBitmap *))(*(_QWORD *)v5 + 8LL))(v5);
  v52[0] = 87;
  v52[1] = 1;
  VisualTree = CSystemMemoryBitmap::HrInit(v5, v49, v50, (const struct PixelFormatInfo *)v52, v27);
  v6 = VisualTree;
  if ( VisualTree < 0 )
  {
    v26 = 245;
    goto LABEL_52;
  }
  VisualTree = (*(__int64 (__fastcall **)(struct IRenderTarget *, __int64 *, __int64, _QWORD, _DWORD))(*(_QWORD *)v30 + 64LL))(
                 v30,
                 &v42,
                 (__int64)v5 + 24,
                 0LL,
                 0);
  v6 = VisualTree;
  if ( VisualTree < 0 )
  {
    v26 = 247;
    goto LABEL_52;
  }
  VisualTree = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64 *))(*((_QWORD *)v5 + 3) + 24LL))(
                 (__int64)v5 + 24,
                 &v48,
                 1LL,
                 &v29);
  v6 = VisualTree;
  if ( VisualTree < 0 )
  {
    v26 = 252;
    goto LABEL_52;
  }
  VisualTree = (*(__int64 (__fastcall **)(__int64, _BYTE *, _BYTE *))(*(_QWORD *)v29 + 32LL))(v29, v36, v35);
  v6 = VisualTree;
  if ( VisualTree < 0 )
  {
    v26 = 261;
    goto LABEL_52;
  }
  VisualTree = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v29 + 40LL))(v29, v37);
  v6 = VisualTree;
  if ( VisualTree < 0 )
  {
    v26 = 263;
    goto LABEL_52;
  }
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v29 + 24LL))(v29, &v45);
  VisualTree = (*(__int64 (__fastcall **)(__int64, _BYTE *, _BYTE *))(*(_QWORD *)v29 + 48LL))(v29, v38, v39);
  v6 = VisualTree;
  if ( VisualTree < 0 )
  {
    v26 = 267;
LABEL_52:
    v7 = VisualTree;
    goto LABEL_53;
  }
  if ( CDebugVisualRenderer::s_fForceDebugBreak )
    DebugBreak();
LABEL_54:
  ReleaseInterface<IBitmapLock>(&v29);
  if ( v5 )
    (*(void (__fastcall **)(CSystemMemoryBitmap *))(*(_QWORD *)v5 + 16LL))(v5);
  ReleaseInterface<IRenderTargetBitmap>((__int64 *)&v30);
  ReleaseInterface<CDrawingContext>((__int64 *)&v31);
  ReleaseInterface<CDisplaySet const>(&v32);
  ReleaseInterface<CD3DSurface>((__int64 *)&v33);
  ReleaseInterface<CVisualTree>(&v34);
  return v6;
}
