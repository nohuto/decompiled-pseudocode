/*
 * XREFs of ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18019AF70
 * Callers:
 *     ?Render@CIndirectSwapchainRenderTarget@@UEAAJPEA_N@Z @ 0x180195DE0 (-Render@CIndirectSwapchainRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?Render@CVisualCapture@@UEAAJPEA_N@Z @ 0x1801FDC50 (-Render@CVisualCapture@@UEAAJPEA_N@Z.c)
 *     ?Render@CCaptureRenderTarget@@UEAAJPEA_N@Z @ 0x18024FA40 (-Render@CCaptureRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180044FFC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800486D4 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33PEBV3@333@Z @ 0x18004AC18 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@2PEAVCRenderTarget@@@Z @ 0x18004B620 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z @ 0x1800B0B44 (--$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x1800B46D4 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x1800B518C (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z @ 0x1800B58BC (-GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800CE4B8 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800D896C (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z @ 0x1800E5E98 (-SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetResampleMode@CVisual@@QEBA?AW4Enum@CompositionResampleMode@@XZ @ 0x18016FC54 (-GetResampleMode@CVisual@@QEBA-AW4Enum@CompositionResampleMode@@XZ.c)
 *     ?PopStereoContext@CDrawingContext@@QEAAJPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180170170 (-PopStereoContext@CDrawingContext@@QEAAJPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRect.c)
 *     ?PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z @ 0x180170C4C (-PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z.c)
 *     ?MagnifierSetExclude@CComposition@@QEAAX_N@Z @ 0x1801777A0 (-MagnifierSetExclude@CComposition@@QEAAX_N@Z.c)
 *     ?SetNeedsFlush@COffScreenRenderTarget@@IEBAJXZ @ 0x18019B4B4 (-SetNeedsFlush@COffScreenRenderTarget@@IEBAJXZ.c)
 */

__int64 __fastcall COffScreenRenderTarget::Render(COffScreenRenderTarget *this, bool *a2, double a3)
{
  COffScreenRenderTarget *v3; // r15
  unsigned int v6; // edi
  CDrawingContext *DrawingContext; // rax
  __int128 v8; // xmm0
  __int64 v9; // r13
  char v10; // r14
  int v11; // r12d
  signed int v12; // eax
  __int64 v13; // rcx
  signed int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r13
  signed int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v20; // r8
  bool v21; // al
  char v22; // bl
  int ResampleMode; // eax
  int v24; // edx
  unsigned int v25; // eax
  struct IRenderTarget *v26; // rdi
  struct CComposition *v27; // rcx
  void (__fastcall *v28)(struct IRenderTarget *); // rbx
  CDrawingContext *v29; // rbx
  signed int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  struct D2D_RECT_F v33; // xmm0
  __int64 v34; // rax
  int v35; // eax
  signed int v36; // eax
  __int64 v37; // rcx
  char v38; // al
  signed int v39; // eax
  __int64 v40; // rcx
  signed int v41; // eax
  __int64 v42; // rcx
  signed int v43; // eax
  __int64 v44; // rcx
  bool v45; // zf
  int v46; // edx
  char v48; // [rsp+68h] [rbp-A0h]
  char v49; // [rsp+69h] [rbp-9Fh]
  char v50; // [rsp+6Ch] [rbp-9Ch]
  bool v51; // [rsp+70h] [rbp-98h]
  unsigned int v52; // [rsp+74h] [rbp-94h]
  int v53; // [rsp+78h] [rbp-90h]
  unsigned int v54; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v55; // [rsp+80h] [rbp-88h]
  CDrawingContext *v56; // [rsp+88h] [rbp-80h]
  struct IRenderTarget *v57; // [rsp+90h] [rbp-78h]
  __int64 v58; // [rsp+98h] [rbp-70h] BYREF
  __int128 v59; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v60[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v61; // [rsp+C8h] [rbp-40h]
  __int128 v62; // [rsp+D8h] [rbp-30h]
  __int128 v63; // [rsp+E8h] [rbp-20h]
  int v64; // [rsp+F8h] [rbp-10h]
  _OWORD v65[4]; // [rsp+108h] [rbp+0h] BYREF
  int v66; // [rsp+148h] [rbp+40h]
  struct D2D_RECT_F v67; // [rsp+158h] [rbp+50h] BYREF
  _OWORD v68[8]; // [rsp+168h] [rbp+60h] BYREF

  v3 = (COffScreenRenderTarget *)((char *)this - 64);
  v6 = 0;
  DrawingContext = CRenderTarget::GetDrawingContext((struct CComposition **)this - 8);
  v8 = *((_OWORD *)this + 5);
  v50 = 0;
  v9 = 0LL;
  v55 = 0;
  v10 = 0;
  *a2 = 0;
  LOBYTE(v11) = 0;
  v56 = DrawingContext;
  v59 = v8;
  v49 = 0;
  if ( !*((_BYTE *)this + 202) )
    return v6;
  v12 = (*(__int64 (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)v3 + 376LL))(v3);
  v6 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x14Bu, 0LL);
    goto LABEL_34;
  }
  if ( !*((_DWORD *)this + 58) )
    return v6;
  CComposition::ShowHideCursors(*((CComposition **)this - 6), *((_BYTE *)this + 200) != 0);
  v14 = (*(__int64 (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)v3 + 360LL))(v3);
  v6 = v14;
  if ( v14 >= 0 )
  {
    v10 = 1;
    if ( *((_BYTE *)this + 201) )
    {
      CComposition::MagnifierSetExclude(*((CComposition **)this - 6), 1);
      v49 = 1;
    }
    *(_BYTE *)(*((_QWORD *)this - 6) + 1273LL) = 1;
    v16 = *((_QWORD *)this + 7);
    if ( !v16 )
    {
LABEL_38:
      *(_BYTE *)(*((_QWORD *)this - 6) + 1273LL) = 0;
LABEL_39:
      if ( v49 )
        CComposition::MagnifierSetExclude(*((CComposition **)this - 6), 0);
      goto LABEL_41;
    }
    v64 = 0;
    v9 = *(_QWORD *)(v16 + 24);
    `vector constructor iterator'(
      (char *)v68,
      16LL,
      8LL,
      (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
    v17 = (*(__int64 (__fastcall **)(COffScreenRenderTarget *, _OWORD *, __int64, unsigned int *))(*(_QWORD *)v3 + 424LL))(
            v3,
            v68,
            8LL,
            &v54);
    v6 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x17Fu, 0LL);
    }
    else
    {
      (*(void (__fastcall **)(COffScreenRenderTarget *, __int64 *))(*(_QWORD *)v3 + 352LL))(v3, v60);
      v65[0] = *(_OWORD *)v60;
      v65[1] = v61;
      v65[2] = v62;
      v65[3] = v63;
      v66 = v64;
      v21 = CMILMatrix::Invert((CMILMatrix *)v65, v19, v20);
      v22 = *(_DWORD *)(v9 + 96);
      v11 = (int)(*(_DWORD *)(v9 + 96) << 18) >> 28;
      v51 = v21;
      v50 = v22;
      ResampleMode = CVisual::GetResampleMode(v9);
      *(_BYTE *)(v9 + 96) |= 2u;
      *(_DWORD *)(v9 + 96) &= 0xFFFFC7FF;
      *(_DWORD *)(v9 + 96) |= 0x400u;
      v24 = *((_DWORD *)this + 32);
      v55 = ResampleMode;
      CVisual::SetResampleMode(v9, v24);
      v25 = 0;
      v52 = 0;
      if ( !*((_DWORD *)this + 58) )
        goto LABEL_35;
      while ( 1 )
      {
        v26 = *(struct IRenderTarget **)(*((_QWORD *)this + 26) + 8LL * v25);
        v27 = *(struct CComposition **)this;
        v57 = v26;
        v28 = *(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v26 + 160LL);
        (*((void (__fastcall **)(COffScreenRenderTarget *))v27 + 18))(this);
        v28(v26);
        v29 = v56;
        v48 = 0;
        v30 = CDrawingContext::BeginFrame(v56, v26, &v59, 0, (__int64)v60, *((_QWORD *)this + 14), 0, 0LL);
        v6 = v30;
        if ( v30 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x19Au, 0LL);
          goto LABEL_34;
        }
        v32 = 0LL;
        v53 = 0;
        if ( v54 )
          break;
LABEL_22:
        CDrawingContext::EndFrame(v29);
        v45 = !g_LockAndReadOffscreenTarget;
        *((_BYTE *)this + 203) = *((_BYTE *)v29 + 6357);
        if ( !v45 )
          (*(void (__fastcall **)(struct IRenderTarget *, _QWORD, _QWORD))(*(_QWORD *)v57 + 216LL))(v57, 0LL, 0LL);
        v25 = v52 + 1;
        v52 = v25;
        if ( v25 >= *((_DWORD *)this + 58) )
          goto LABEL_34;
      }
      while ( 1 )
      {
        ++dword_18033C778;
        v33 = (struct D2D_RECT_F)v68[v32];
        v34 = *(_QWORD *)v3;
        v67 = v33;
        if ( (*(unsigned int (__fastcall **)(COffScreenRenderTarget *, _QWORD))(v34 + 400))(v3, v52) )
        {
          v35 = (*(__int64 (__fastcall **)(COffScreenRenderTarget *, _QWORD))(*(_QWORD *)v3 + 400LL))(v3, v52);
          v36 = CDrawingContext::PushStereoContext((__int64)v29, v35, 0);
          v6 = v36;
          if ( v36 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x1A4u, 0LL);
            goto LABEL_34;
          }
          v48 = 1;
        }
        if ( v51 )
          CDrawingContext::CalculateOcclusion(v29, *((struct CVisualTree **)this + 7), 1u, &v67, 0, 1, &v58);
        v38 = (*(__int64 (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)v3 + 408LL))(v3);
        v39 = CDrawingContext::DrawVisualTree(
                v29,
                *((float **)this + 7),
                (__int128 *)&v67,
                0LL,
                0x7FFFFFFF,
                v38,
                0,
                1,
                0LL,
                1,
                1);
        v6 = v39;
        if ( v39 < 0 )
          break;
        v41 = (*(__int64 (__fastcall **)(COffScreenRenderTarget *, CDrawingContext *))(*(_QWORD *)v3 + 416LL))(v3, v29);
        v6 = v41;
        if ( v41 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, 0x1C1u, 0LL);
          goto LABEL_34;
        }
        if ( v48 )
        {
          v43 = CDrawingContext::PopStereoContext((__int64)v29, 0LL, a3);
          v6 = v43;
          if ( v43 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0x1C5u, 0LL);
            goto LABEL_34;
          }
        }
        v32 = (unsigned int)(v53 + 1);
        v53 = v32;
        if ( (unsigned int)v32 >= v54 )
          goto LABEL_22;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0x1BEu, 0LL);
    }
LABEL_34:
    v22 = v50;
LABEL_35:
    if ( v9 )
    {
      v46 = v55;
      *(_BYTE *)(v9 + 96) = v22;
      *(_DWORD *)(v9 + 96) &= 0xFFFFC3FF;
      *(_DWORD *)(v9 + 96) |= (v11 & 0xF) << 10;
      CVisual::SetResampleMode(v9, v46);
    }
    if ( !v10 )
      goto LABEL_39;
    goto LABEL_38;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x163u, 0LL);
LABEL_41:
  if ( (v6 & 0x80000000) != 0 )
    ReleaseInterface<CDrawingContext>((__int64 *)this + 6);
  else
    COffScreenRenderTarget::SetNeedsFlush(v3);
  CComposition::RestoreCursors(*((CComposition **)this - 6));
  return v6;
}
