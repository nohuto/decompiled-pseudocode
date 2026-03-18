/*
 * XREFs of ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x180160760
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800CA2F0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180016D4C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002E720 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18002F61C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x18002FC60 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x1800320F0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180048740 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@2PEAVCHwndRenderTarget@@@Z @ 0x18004AAAC (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18004B9CC (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180067FD4 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x180072BAC (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x18007AF60 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x18007F06C (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x18008C5E4 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x18008C6C8 (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18008E53C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18008EFE0 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z @ 0x18008F748 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z.c)
 *     ??$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z @ 0x1800921C4 (--$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z.c)
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x180092AE8 (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z @ 0x1800D86B0 (--$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?IsInfinite@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x18015937C (-IsInfinite@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??2CSystemMemoryBitmap@@SAPEAX_K@Z @ 0x18015AAE8 (--2CSystemMemoryBitmap@@SAPEAX_K@Z.c)
 *     ?GetPixelInfo@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAUPixelFormatInfo@@@Z @ 0x180160680 (-GetPixelInfo@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAUPixelFormatInfo@@@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z @ 0x180213AF0 (-HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z.c)
 */

__int64 __fastcall CDebugVisualRenderer::RenderVisual(struct CComposition *a1, struct CVisual *a2, __int64 a3)
{
  CDisplayManager *v4; // rcx
  CSystemMemoryBitmap *v5; // rdi
  unsigned int v6; // ebx
  int v7; // r9d
  int VisualTree; // eax
  struct CVisualTree *v9; // r14
  __int64 v10; // rax
  struct CDisplay *v11; // rsi
  __int64 v12; // xmm1_8
  __int128 v13; // xmm0
  float v14; // xmm1_4
  float v15; // xmm6_4
  float v16; // xmm2_4
  float v17; // xmm7_4
  float v18; // xmm0_4
  int *DisplayId; // rax
  int v20; // r8d
  int v21; // r11d
  struct _LUID v22; // r10
  CDrawingContext *v23; // rsi
  __int64 i; // rax
  CSystemMemoryBitmap *v25; // rax
  unsigned int v27; // [rsp+28h] [rbp-E0h]
  bool v28; // [rsp+28h] [rbp-E0h]
  __int64 v29; // [rsp+78h] [rbp-90h] BYREF
  __int64 v30; // [rsp+80h] [rbp-88h] BYREF
  struct IRenderTarget *v31; // [rsp+88h] [rbp-80h] BYREF
  CDrawingContext *v32; // [rsp+90h] [rbp-78h] BYREF
  CDisplaySet *v33; // [rsp+98h] [rbp-70h] BYREF
  struct CDisplay *v34; // [rsp+A0h] [rbp-68h] BYREF
  struct CVisualTree *v35; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v36[4]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v37[4]; // [rsp+B4h] [rbp-54h] BYREF
  _BYTE v38[4]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v39[4]; // [rsp+BCh] [rbp-4Ch] BYREF
  _BYTE v40[8]; // [rsp+C0h] [rbp-48h] BYREF
  _OWORD v41[4]; // [rsp+C8h] [rbp-40h] BYREF
  __int16 v42; // [rsp+108h] [rbp+0h]
  __int64 v43; // [rsp+118h] [rbp+10h] BYREF
  int v44; // [rsp+120h] [rbp+18h]
  int v45; // [rsp+124h] [rbp+1Ch]
  __int128 v46; // [rsp+128h] [rbp+20h] BYREF
  __int128 v47; // [rsp+138h] [rbp+30h] BYREF
  __int64 v48; // [rsp+148h] [rbp+40h]
  __int64 v49; // [rsp+150h] [rbp+48h] BYREF
  unsigned int v50; // [rsp+158h] [rbp+50h]
  unsigned int v51; // [rsp+15Ch] [rbp+54h]
  __int128 v52; // [rsp+160h] [rbp+58h] BYREF
  _DWORD v53[4]; // [rsp+170h] [rbp+68h] BYREF
  __int128 v54; // [rsp+180h] [rbp+78h] BYREF

  v4 = CDebugVisualRenderer::s_pVisual;
  v5 = 0LL;
  v41[0] = _xmm;
  v41[1] = _xmm;
  v41[2] = _xmm;
  v41[3] = _xmm;
  v42 = 32085;
  v35 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v31 = 0LL;
  v30 = 0LL;
  if ( !CDebugVisualRenderer::s_pVisual )
  {
    v6 = -2147467259;
    v27 = 131;
LABEL_3:
    v7 = v6;
LABEL_53:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v4, 0LL, 0, v7, v27);
    goto LABEL_54;
  }
  *(_QWORD *)&v46 = 1LL;
  VisualTree = CVisual::GetVisualTree((struct CComposition **)CDebugVisualRenderer::s_pVisual, &v35, a3, 0);
  v6 = VisualTree;
  if ( VisualTree < 0 )
  {
    v27 = 139;
    goto LABEL_52;
  }
  v9 = v35;
  VisualTree = CVisualTree::PreCompute(v35, 0LL);
  v6 = VisualTree;
  if ( VisualTree < 0 )
  {
    v27 = 141;
    goto LABEL_52;
  }
  VisualTree = CDisplayManager::GetCurrentDisplaySet(v4, &v33);
  v6 = VisualTree;
  if ( VisualTree < 0 )
  {
    v27 = 143;
    goto LABEL_52;
  }
  VisualTree = CDisplaySet::GetPrimaryDisplay(v33, &v34);
  v6 = VisualTree;
  if ( VisualTree < 0 )
  {
    v27 = 145;
    goto LABEL_52;
  }
  v10 = *((_QWORD *)v9 + 3);
  v11 = v34;
  v12 = *(_QWORD *)(v10 + 156);
  v47 = *(_OWORD *)(v10 + 140);
  v13 = *(_OWORD *)((char *)v34 + 120);
  v48 = v12;
  v52 = v13;
  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)&v47)
    || (v14 = *((float *)&v47 + 2), v15 = *(float *)&v47, (float)(*((float *)&v47 + 2) - *(float *)&v47) > 4096.0)
    || (v16 = *((float *)&v47 + 3),
        v17 = *((float *)&v47 + 1),
        (float)(*((float *)&v47 + 3) - *((float *)&v47 + 1)) > 2160.0) )
  {
    if ( TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsInfinite(&v52) )
    {
      v47 = _xmm;
      v16 = *((float *)&_xmm + 3);
      v14 = *((float *)&_xmm + 2);
      v17 = *((float *)&_xmm + 1);
      v15 = *(float *)&_xmm;
    }
    else
    {
      v15 = (float)(int)v52;
      v17 = (float)SDWORD1(v52);
      v14 = (float)SDWORD2(v52);
      v16 = (float)SHIDWORD(v52);
    }
  }
  v43 = 0LL;
  v18 = (float)(v14 - v15) + 6291456.25;
  v44 = (int)(LODWORD(v18) << 10) >> 11;
  *(float *)&v29 = (float)(v16 - v17) + 6291456.25;
  v45 = (int)((_DWORD)v29 << 10) >> 11;
  VisualTree = CDebugVisualRenderer::GetPixelInfo(a1, (struct PixelFormatInfo *)v53);
  v6 = VisualTree;
  if ( VisualTree < 0 )
  {
    v27 = 174;
    goto LABEL_52;
  }
  *(_QWORD *)&v52 = "DWM Rendertarget (debugger visualization)";
  DWORD2(v52) = 41;
  DisplayId = CDisplay::GetDisplayId((__int64)v11, &v29);
  VisualTree = CD3DDeviceManager::CreateRenderTargetBitmap(
                 (__int64)&qword_180308A48,
                 (__int64)&v52,
                 (int)(float)((float)v21 + 0.5),
                 (int)(float)((float)v20 + 0.5),
                 v46,
                 0,
                 (__int64)v53,
                 1,
                 v22,
                 *DisplayId,
                 0,
                 0,
                 1,
                 &v31);
  v6 = VisualTree;
  if ( VisualTree < 0 )
  {
    v27 = 188;
    goto LABEL_52;
  }
  VisualTree = CDrawingContext::Create(a1, &v32);
  v6 = VisualTree;
  if ( VisualTree < 0 )
  {
    v27 = 190;
    goto LABEL_52;
  }
  v23 = v32;
  *(_QWORD *)&v46 = __PAIR64__(
                      LODWORD(CDebugVisualRenderer::s_clearColorG),
                      LODWORD(CDebugVisualRenderer::s_clearColorR));
  *((_QWORD *)&v46 + 1) = __PAIR64__(
                            LODWORD(CDebugVisualRenderer::s_clearColorA),
                            LODWORD(CDebugVisualRenderer::s_clearColorB));
  VisualTree = CDrawingContext::BeginFrame(v32, v31, &v46, 0, 0LL, 0LL, 0, 0LL);
  v6 = VisualTree;
  if ( VisualTree < 0 )
  {
    v27 = 201;
    goto LABEL_52;
  }
  ++dword_180308098;
  CMILMatrix::Translate((CMILMatrix *)v41, COERCE_FLOAT(LODWORD(v15) ^ _xmm), COERCE_FLOAT(LODWORD(v17) ^ _xmm));
  VisualTree = CDrawingContext::PushTransformInternal(v23, 0LL, (const struct CMILMatrix *)v41, 0, 1);
  v6 = VisualTree;
  if ( VisualTree < 0 )
  {
    v27 = 208;
    goto LABEL_52;
  }
  for ( i = 0LL; i < 16; i += 4LL )
    *(float *)((char *)&v54 + i) = (float)*(int *)((char *)&v43 + i);
  VisualTree = CDrawingContext::DrawVisualTree(v23, (__int64)v9, &v54, 0LL, 1, 1, 1, 1, 0, 0, 0);
  v6 = VisualTree;
  if ( VisualTree < 0 )
  {
    v27 = 220;
    goto LABEL_52;
  }
  VisualTree = CDrawingContext::EndFrame(v23);
  v6 = VisualTree;
  if ( VisualTree < 0 )
  {
    v27 = 222;
    goto LABEL_52;
  }
  v49 = 0LL;
  v50 = (int)(float)((float)(v44 - v43) + 0.5);
  v51 = (int)(float)((float)(v45 - HIDWORD(v43)) + 0.5);
  v25 = (CSystemMemoryBitmap *)CSystemMemoryBitmap::operator new();
  if ( v25 )
    v5 = CSystemMemoryBitmap::CSystemMemoryBitmap(v25);
  if ( !v5 )
  {
    v6 = -2147024882;
    v27 = 234;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(CSystemMemoryBitmap *))(*(_QWORD *)v5 + 8LL))(v5);
  v53[0] = 87;
  v53[1] = 1;
  VisualTree = CSystemMemoryBitmap::HrInit(v5, v50, v51, (const struct PixelFormatInfo *)v53, v28);
  v6 = VisualTree;
  if ( VisualTree < 0 )
  {
    v27 = 245;
    goto LABEL_52;
  }
  VisualTree = (*(__int64 (__fastcall **)(struct IRenderTarget *, __int64 *, __int64, _QWORD, _DWORD))(*(_QWORD *)v31 + 64LL))(
                 v31,
                 &v43,
                 (__int64)v5 + 24,
                 0LL,
                 0);
  v6 = VisualTree;
  if ( VisualTree < 0 )
  {
    v27 = 247;
    goto LABEL_52;
  }
  VisualTree = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64 *))(*((_QWORD *)v5 + 3) + 24LL))(
                 (__int64)v5 + 24,
                 &v49,
                 1LL,
                 &v30);
  v6 = VisualTree;
  if ( VisualTree < 0 )
  {
    v27 = 252;
    goto LABEL_52;
  }
  VisualTree = (*(__int64 (__fastcall **)(__int64, _BYTE *, _BYTE *))(*(_QWORD *)v30 + 32LL))(v30, v37, v36);
  v6 = VisualTree;
  if ( VisualTree < 0 )
  {
    v27 = 261;
    goto LABEL_52;
  }
  VisualTree = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v30 + 40LL))(v30, v38);
  v6 = VisualTree;
  if ( VisualTree < 0 )
  {
    v27 = 263;
    goto LABEL_52;
  }
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v30 + 24LL))(v30, &v46);
  VisualTree = (*(__int64 (__fastcall **)(__int64, _BYTE *, _BYTE *))(*(_QWORD *)v30 + 48LL))(v30, v39, v40);
  v6 = VisualTree;
  if ( VisualTree < 0 )
  {
    v27 = 267;
LABEL_52:
    v7 = VisualTree;
    goto LABEL_53;
  }
  if ( CDebugVisualRenderer::s_fForceDebugBreak )
    DebugBreak();
LABEL_54:
  ReleaseInterface<IBitmapLock>(&v30);
  if ( v5 )
    (*(void (__fastcall **)(CSystemMemoryBitmap *))(*(_QWORD *)v5 + 16LL))(v5);
  ReleaseInterface<IRenderTargetBitmap>((__int64 *)&v31);
  ReleaseInterface<CDrawingContext>((__int64 *)&v32);
  ReleaseInterface<CDisplaySet const>(&v33);
  ReleaseInterface<CD3DSurface>((__int64 *)&v34);
  ReleaseInterface<CVisualTree>(&v35);
  return v6;
}
