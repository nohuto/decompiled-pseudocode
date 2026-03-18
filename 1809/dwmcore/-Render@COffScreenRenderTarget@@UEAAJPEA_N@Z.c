/*
 * XREFs of ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18001C3C0
 * Callers:
 *     ?Render@CVisualCapture@@UEAAJPEA_N@Z @ 0x18001C1E0 (-Render@CVisualCapture@@UEAAJPEA_N@Z.c)
 *     ?Render@CCaptureRenderTarget@@UEAAJPEA_N@Z @ 0x180158C70 (-Render@CCaptureRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?Render@CIndirectSwapchainRenderTarget@@UEAAJPEA_N@Z @ 0x18015C980 (-Render@CIndirectSwapchainRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?SetNeedsFlush@COffScreenRenderTarget@@IEBAJXZ @ 0x18001C788 (-SetNeedsFlush@COffScreenRenderTarget@@IEBAJXZ.c)
 *     ?GetResampleMode@CVisual@@QEBA?AW4Enum@CompositionResampleMode@@XZ @ 0x18001C828 (-GetResampleMode@CVisual@@QEBA-AW4Enum@CompositionResampleMode@@XZ.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x1800320F0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180048740 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@2PEAVCHwndRenderTarget@@@Z @ 0x18004AAAC (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18004B9CC (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180073D1C (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z @ 0x18007A9BC (-SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x18007AC24 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z @ 0x18008B034 (-GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x18008B288 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x18008E610 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z @ 0x1800D86B0 (--$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?MagnifierSetExclude@CComposition@@QEAAX_N@Z @ 0x18014B614 (-MagnifierSetExclude@CComposition@@QEAAX_N@Z.c)
 *     ?PopStereoContext@CDrawingContext@@QEAAJPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180165C4C (-PopStereoContext@CDrawingContext@@QEAAJPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRect.c)
 *     ?PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z @ 0x1801665FC (-PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z.c)
 */

__int64 __fastcall COffScreenRenderTarget::Render(COffScreenRenderTarget *this, bool *a2)
{
  COffScreenRenderTarget *v2; // r15
  unsigned int v5; // esi
  struct CDrawingContext *DrawingContext; // rax
  __int128 v7; // xmm0
  __int64 v8; // r13
  char v9; // r14
  int v10; // r12d
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // ecx
  __int64 v15; // r13
  int v16; // eax
  float v17; // xmm0_4
  float v18; // xmm1_4
  void (__fastcall *v19)(COffScreenRenderTarget *, __int64 *); // rax
  bool v20; // al
  char v21; // bl
  char v22; // r10
  unsigned int v23; // eax
  __int64 v24; // rbx
  int v25; // eax
  unsigned int v26; // ecx
  char v27; // al
  int v28; // eax
  unsigned int v29; // ecx
  int v30; // eax
  unsigned int v31; // ecx
  bool v32; // zf
  unsigned int v34; // eax
  int v35; // eax
  unsigned int v36; // ecx
  int v37; // eax
  unsigned int v38; // ecx
  char v39; // [rsp+60h] [rbp-A0h]
  char v40; // [rsp+61h] [rbp-9Fh]
  char v41; // [rsp+64h] [rbp-9Ch]
  bool v42; // [rsp+68h] [rbp-98h]
  unsigned int v43; // [rsp+6Ch] [rbp-94h]
  unsigned int ResampleMode; // [rsp+70h] [rbp-90h]
  CDrawingContext *v45; // [rsp+78h] [rbp-88h]
  struct IRenderTarget *v46; // [rsp+80h] [rbp-80h]
  _BYTE v47[8]; // [rsp+88h] [rbp-78h] BYREF
  __int128 v48; // [rsp+90h] [rbp-70h]
  __int64 v49[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v50; // [rsp+B0h] [rbp-50h]
  __int128 v51; // [rsp+C0h] [rbp-40h]
  __int128 v52; // [rsp+D0h] [rbp-30h]
  int v53; // [rsp+E0h] [rbp-20h]
  _OWORD v54[4]; // [rsp+F0h] [rbp-10h] BYREF
  int v55; // [rsp+130h] [rbp+30h]
  int v56; // [rsp+140h] [rbp+40h]
  int v57; // [rsp+144h] [rbp+44h]
  float v58; // [rsp+148h] [rbp+48h]
  float v59; // [rsp+14Ch] [rbp+4Ch]

  v2 = (COffScreenRenderTarget *)((char *)this - 64);
  v5 = 0;
  DrawingContext = CRenderTarget::GetDrawingContext((COffScreenRenderTarget *)((char *)this - 64), (bool)a2);
  v7 = *((_OWORD *)this + 5);
  v41 = 0;
  v8 = 0LL;
  ResampleMode = 0;
  v9 = 0;
  *a2 = 0;
  LOBYTE(v10) = 0;
  v45 = DrawingContext;
  v48 = v7;
  v40 = 0;
  if ( !*((_BYTE *)this + 202) )
    return v5;
  v11 = (*(__int64 (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)v2 + 232LL))(v2);
  v5 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x12Bu);
    goto LABEL_19;
  }
  if ( !*((_DWORD *)this + 58) )
    return v5;
  CComposition::ShowHideCursors(*((CComposition **)this - 6), *((_BYTE *)this + 200) != 0);
  v13 = CVisualTree::PreCompute(*((struct CVisualTree **)this + 7));
  v5 = v13;
  if ( v13 >= 0 )
  {
    v9 = 1;
    if ( *((_BYTE *)this + 201) )
    {
      CComposition::MagnifierSetExclude(*((CComposition **)this - 6), 1);
      v40 = 1;
    }
    *(_BYTE *)(*((_QWORD *)this - 6) + 1256LL) = 1;
    v15 = *((_QWORD *)this + 7);
    if ( !v15 )
    {
LABEL_23:
      *(_BYTE *)(*((_QWORD *)this - 6) + 1256LL) = 0;
LABEL_24:
      if ( v40 )
        CComposition::MagnifierSetExclude(*((CComposition **)this - 6), 0);
      goto LABEL_26;
    }
    v16 = *((_DWORD *)this + 74);
    v53 = 0;
    v8 = *(_QWORD *)(v15 + 24);
    v56 = 0;
    v57 = 0;
    v17 = (float)v16;
    v18 = (float)*((int *)this + 75);
    v19 = *(void (__fastcall **)(COffScreenRenderTarget *, __int64 *))(*(_QWORD *)v2 + 216LL);
    v58 = v17;
    v59 = v18;
    v19(v2, v49);
    v54[0] = *(_OWORD *)v49;
    v54[1] = v50;
    v54[2] = v51;
    v54[3] = v52;
    v55 = v53;
    v20 = CMILMatrix::Invert((CMILMatrix *)v54);
    v21 = *(_DWORD *)(v8 + 96);
    v10 = (int)(*(_DWORD *)(v8 + 96) << 18) >> 28;
    v42 = v20;
    v41 = v21;
    ResampleMode = CVisual::GetResampleMode(v8);
    *(_BYTE *)(v8 + 96) = v22 | 2;
    *(_DWORD *)(v8 + 96) &= 0xFFFFC7FF;
    *(_DWORD *)(v8 + 96) |= 0x400u;
    CVisual::SetResampleMode(v8, *((unsigned int *)this + 32));
    v23 = 0;
    v43 = 0;
    if ( !*((_DWORD *)this + 58) )
    {
LABEL_20:
      if ( v8 )
      {
        *(_BYTE *)(v8 + 96) = v21;
        *(_DWORD *)(v8 + 96) &= 0xFFFFC3FF;
        *(_DWORD *)(v8 + 96) |= (v10 & 0xF) << 10;
        CVisual::SetResampleMode(v8, ResampleMode);
      }
      if ( !v9 )
        goto LABEL_24;
      goto LABEL_23;
    }
    while ( 1 )
    {
      v46 = *(struct IRenderTarget **)(*((_QWORD *)this + 26) + 8LL * v23);
      v24 = *(_QWORD *)v46;
      (*(void (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)this + 144LL))(this);
      (*(void (__fastcall **)(struct IRenderTarget *))(v24 + 160))(v46);
      v39 = 0;
      v25 = CDrawingContext::BeginFrame(v45, v46, (__int64)v49, *((_QWORD *)this + 14), 0, 0LL);
      v5 = v25;
      if ( v25 < 0 )
        break;
      ++dword_180308098;
      if ( (*(unsigned int (__fastcall **)(COffScreenRenderTarget *, _QWORD))(*(_QWORD *)v2 + 256LL))(v2, v43) )
      {
        v34 = (*(__int64 (__fastcall **)(COffScreenRenderTarget *, _QWORD))(*(_QWORD *)v2 + 256LL))(v2, v43);
        v35 = CDrawingContext::PushStereoContext(v45, v34, 0LL);
        v5 = v35;
        if ( v35 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x186u);
          goto LABEL_19;
        }
        v39 = 1;
      }
      if ( v42 )
        CDrawingContext::CalculateOcclusion(v45, *((struct CVisualTree **)this + 7), 0, 1, (__int64)v47);
      v27 = (*(__int64 (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)v2 + 264LL))(v2);
      v28 = CDrawingContext::DrawVisualTree(v45, 0x7FFFFFFF, v27, 0, 1, 0, 1, 1);
      v5 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x1A0u);
        goto LABEL_19;
      }
      v30 = (*(__int64 (__fastcall **)(COffScreenRenderTarget *, CDrawingContext *))(*(_QWORD *)v2 + 272LL))(v2, v45);
      v5 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x1A3u);
        goto LABEL_19;
      }
      if ( v39 )
      {
        v37 = CDrawingContext::PopStereoContext(v45, 0LL);
        v5 = v37;
        if ( v37 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x1A7u);
          goto LABEL_19;
        }
      }
      CDrawingContext::EndFrame(v45);
      v32 = !g_LockAndReadOffscreenTarget;
      *((_BYTE *)this + 203) = *((_BYTE *)v45 + 6357);
      if ( !v32 )
        (*(void (__fastcall **)(struct IRenderTarget *, _QWORD, _QWORD))(*(_QWORD *)v46 + 216LL))(v46, 0LL, 0LL);
      v23 = v43 + 1;
      v43 = v23;
      if ( v23 >= *((_DWORD *)this + 58) )
        goto LABEL_19;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x17Fu);
LABEL_19:
    v21 = v41;
    goto LABEL_20;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x143u);
LABEL_26:
  if ( (v5 & 0x80000000) != 0 )
    ReleaseInterface<CDrawingContext>((char *)this + 48);
  else
    COffScreenRenderTarget::SetNeedsFlush(v2);
  CComposition::RestoreCursors(*((CComposition **)this - 6));
  return v5;
}
