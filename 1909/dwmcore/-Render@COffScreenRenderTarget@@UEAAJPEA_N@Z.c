/*
 * XREFs of ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x1801996B0
 * Callers:
 *     ?Render@CIndirectSwapchainRenderTarget@@UEAAJPEA_N@Z @ 0x1801946A0 (-Render@CIndirectSwapchainRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?Render@CVisualCapture@@UEAAJPEA_N@Z @ 0x1801FC560 (-Render@CVisualCapture@@UEAAJPEA_N@Z.c)
 *     ?Render@CCaptureRenderTarget@@UEAAJPEA_N@Z @ 0x18024E330 (-Render@CCaptureRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x180023B50 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x180024674 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z @ 0x1800259E8 (-GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z.c)
 *     ??$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z @ 0x18002ADF8 (--$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800573D0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180058954 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@2PEAVCRenderTarget@@@Z @ 0x180059100 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33PEBV3@333@Z @ 0x18005C990 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800CE4A8 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800D9098 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z @ 0x1800E6D48 (-SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetResampleMode@CVisual@@QEBA?AW4Enum@CompositionResampleMode@@XZ @ 0x18016E574 (-GetResampleMode@CVisual@@QEBA-AW4Enum@CompositionResampleMode@@XZ.c)
 *     ?PopStereoContext@CDrawingContext@@QEAAJPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18016EA90 (-PopStereoContext@CDrawingContext@@QEAAJPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRect.c)
 *     ?PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z @ 0x18016F56C (-PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z.c)
 *     ?MagnifierSetExclude@CComposition@@QEAAX_N@Z @ 0x180176030 (-MagnifierSetExclude@CComposition@@QEAAX_N@Z.c)
 *     ?SetNeedsFlush@COffScreenRenderTarget@@IEBAJXZ @ 0x180199BF4 (-SetNeedsFlush@COffScreenRenderTarget@@IEBAJXZ.c)
 */

__int64 __fastcall COffScreenRenderTarget::Render(COffScreenRenderTarget *this, bool *a2)
{
  COffScreenRenderTarget *v2; // r15
  unsigned int v5; // edi
  CDrawingContext *DrawingContext; // rax
  __int128 v7; // xmm0
  __int64 v8; // r13
  char v9; // r14
  int v10; // r12d
  signed int v11; // eax
  __int64 v12; // rcx
  signed int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r13
  signed int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v19; // r8
  bool v20; // al
  char v21; // bl
  int ResampleMode; // eax
  int v23; // edx
  unsigned int v24; // eax
  struct IRenderTarget *v25; // rdi
  struct CComposition *v26; // rcx
  void (__fastcall *v27)(struct IRenderTarget *); // rbx
  CDrawingContext *v28; // rbx
  signed int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int128 v32; // xmm0
  __int64 v33; // rax
  int v34; // eax
  signed int v35; // eax
  __int64 v36; // rcx
  char v37; // al
  signed int v38; // eax
  __int64 v39; // rcx
  signed int v40; // eax
  __int64 v41; // rcx
  signed int v42; // eax
  __int64 v43; // rcx
  bool v44; // zf
  int v45; // edx
  char v47; // [rsp+68h] [rbp-A0h]
  char v48; // [rsp+69h] [rbp-9Fh]
  char v49; // [rsp+6Ch] [rbp-9Ch]
  bool v50; // [rsp+70h] [rbp-98h]
  unsigned int v51; // [rsp+74h] [rbp-94h]
  int v52; // [rsp+78h] [rbp-90h]
  unsigned int v53; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v54; // [rsp+80h] [rbp-88h]
  CDrawingContext *v55; // [rsp+88h] [rbp-80h]
  struct IRenderTarget *v56; // [rsp+90h] [rbp-78h]
  __int64 v57; // [rsp+98h] [rbp-70h] BYREF
  __int128 v58; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v59[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v60; // [rsp+C8h] [rbp-40h]
  __int128 v61; // [rsp+D8h] [rbp-30h]
  __int128 v62; // [rsp+E8h] [rbp-20h]
  int v63; // [rsp+F8h] [rbp-10h]
  _OWORD v64[4]; // [rsp+108h] [rbp+0h] BYREF
  int v65; // [rsp+148h] [rbp+40h]
  __int128 v66; // [rsp+158h] [rbp+50h] BYREF
  _OWORD v67[8]; // [rsp+168h] [rbp+60h] BYREF

  v2 = (COffScreenRenderTarget *)((char *)this - 64);
  v5 = 0;
  DrawingContext = CRenderTarget::GetDrawingContext((struct CComposition **)this - 8);
  v7 = *((_OWORD *)this + 5);
  v49 = 0;
  v8 = 0LL;
  v54 = 0;
  v9 = 0;
  *a2 = 0;
  LOBYTE(v10) = 0;
  v55 = DrawingContext;
  v58 = v7;
  v48 = 0;
  if ( !*((_BYTE *)this + 202) )
    return v5;
  v11 = (*(__int64 (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)v2 + 376LL))(v2);
  v5 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x14Bu, 0LL);
    goto LABEL_34;
  }
  if ( !*((_DWORD *)this + 58) )
    return v5;
  CComposition::ShowHideCursors(*((CComposition **)this - 6), *((_BYTE *)this + 200) != 0);
  v13 = (*(__int64 (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)v2 + 360LL))(v2);
  v5 = v13;
  if ( v13 >= 0 )
  {
    v9 = 1;
    if ( *((_BYTE *)this + 201) )
    {
      CComposition::MagnifierSetExclude(*((CComposition **)this - 6), 1);
      v48 = 1;
    }
    *(_BYTE *)(*((_QWORD *)this - 6) + 1273LL) = 1;
    v15 = *((_QWORD *)this + 7);
    if ( !v15 )
    {
LABEL_38:
      *(_BYTE *)(*((_QWORD *)this - 6) + 1273LL) = 0;
LABEL_39:
      if ( v48 )
        CComposition::MagnifierSetExclude(*((CComposition **)this - 6), 0);
      goto LABEL_41;
    }
    v63 = 0;
    v8 = *(_QWORD *)(v15 + 24);
    `vector constructor iterator'(
      (char *)v67,
      16LL,
      8LL,
      (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
    v16 = (*(__int64 (__fastcall **)(COffScreenRenderTarget *, _OWORD *, __int64, unsigned int *))(*(_QWORD *)v2 + 424LL))(
            v2,
            v67,
            8LL,
            &v53);
    v5 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x17Fu, 0LL);
    }
    else
    {
      (*(void (__fastcall **)(COffScreenRenderTarget *, __int64 *))(*(_QWORD *)v2 + 352LL))(v2, v59);
      v64[0] = *(_OWORD *)v59;
      v64[1] = v60;
      v64[2] = v61;
      v64[3] = v62;
      v65 = v63;
      v20 = CMILMatrix::Invert((CMILMatrix *)v64, v18, v19);
      v21 = *(_DWORD *)(v8 + 96);
      v10 = (int)(*(_DWORD *)(v8 + 96) << 18) >> 28;
      v50 = v20;
      v49 = v21;
      ResampleMode = CVisual::GetResampleMode(v8);
      *(_BYTE *)(v8 + 96) |= 2u;
      *(_DWORD *)(v8 + 96) &= 0xFFFFC7FF;
      *(_DWORD *)(v8 + 96) |= 0x400u;
      v23 = *((_DWORD *)this + 32);
      v54 = ResampleMode;
      CVisual::SetResampleMode(v8, v23);
      v24 = 0;
      v51 = 0;
      if ( !*((_DWORD *)this + 58) )
        goto LABEL_35;
      while ( 1 )
      {
        v25 = *(struct IRenderTarget **)(*((_QWORD *)this + 26) + 8LL * v24);
        v26 = *(struct CComposition **)this;
        v56 = v25;
        v27 = *(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v25 + 160LL);
        (*((void (__fastcall **)(COffScreenRenderTarget *))v26 + 18))(this);
        v27(v25);
        v28 = v55;
        v47 = 0;
        v29 = CDrawingContext::BeginFrame(v55, v25, &v58, 0, (__int64)v59, *((_QWORD *)this + 14), 0, 0LL);
        v5 = v29;
        if ( v29 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x19Au, 0LL);
          goto LABEL_34;
        }
        v31 = 0LL;
        v52 = 0;
        if ( v53 )
          break;
LABEL_22:
        CDrawingContext::EndFrame(v28);
        v44 = !g_LockAndReadOffscreenTarget;
        *((_BYTE *)this + 203) = *((_BYTE *)v28 + 6357);
        if ( !v44 )
          (*(void (__fastcall **)(struct IRenderTarget *, _QWORD, _QWORD))(*(_QWORD *)v56 + 216LL))(v56, 0LL, 0LL);
        v24 = v51 + 1;
        v51 = v24;
        if ( v24 >= *((_DWORD *)this + 58) )
          goto LABEL_34;
      }
      while ( 1 )
      {
        ++dword_180339868;
        v32 = v67[v31];
        v33 = *(_QWORD *)v2;
        v66 = v32;
        if ( (*(unsigned int (__fastcall **)(COffScreenRenderTarget *, _QWORD))(v33 + 400))(v2, v51) )
        {
          v34 = (*(__int64 (__fastcall **)(COffScreenRenderTarget *, _QWORD))(*(_QWORD *)v2 + 400LL))(v2, v51);
          v35 = CDrawingContext::PushStereoContext((__int64)v28, v34, 0);
          v5 = v35;
          if ( v35 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x1A4u, 0LL);
            goto LABEL_34;
          }
          v47 = 1;
        }
        if ( v50 )
          CDrawingContext::CalculateOcclusion(v28, *((struct CVisualTree **)this + 7), 1LL, (__int64)&v66, 0, 1, &v57);
        v37 = (*(__int64 (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)v2 + 408LL))(v2);
        v38 = CDrawingContext::DrawVisualTree(v28, *((float **)this + 7), &v66, 0LL, 0x7FFFFFFF, v37, 0, 1, 0LL, 1, 1);
        v5 = v38;
        if ( v38 < 0 )
          break;
        v40 = (*(__int64 (__fastcall **)(COffScreenRenderTarget *, CDrawingContext *))(*(_QWORD *)v2 + 416LL))(v2, v28);
        v5 = v40;
        if ( v40 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0x1C1u, 0LL);
          goto LABEL_34;
        }
        if ( v47 )
        {
          v42 = CDrawingContext::PopStereoContext((__int64)v28, 0LL);
          v5 = v42;
          if ( v42 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0x1C5u, 0LL);
            goto LABEL_34;
          }
        }
        v31 = (unsigned int)(v52 + 1);
        v52 = v31;
        if ( (unsigned int)v31 >= v53 )
          goto LABEL_22;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x1BEu, 0LL);
    }
LABEL_34:
    v21 = v49;
LABEL_35:
    if ( v8 )
    {
      v45 = v54;
      *(_BYTE *)(v8 + 96) = v21;
      *(_DWORD *)(v8 + 96) &= 0xFFFFC3FF;
      *(_DWORD *)(v8 + 96) |= (v10 & 0xF) << 10;
      CVisual::SetResampleMode(v8, v45);
    }
    if ( !v9 )
      goto LABEL_39;
    goto LABEL_38;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x163u, 0LL);
LABEL_41:
  if ( (v5 & 0x80000000) != 0 )
    ReleaseInterface<CDrawingContext>((__int64 *)this + 6);
  else
    COffScreenRenderTarget::SetNeedsFlush(v2);
  CComposition::RestoreCursors(*((CComposition **)this - 6));
  return v5;
}
