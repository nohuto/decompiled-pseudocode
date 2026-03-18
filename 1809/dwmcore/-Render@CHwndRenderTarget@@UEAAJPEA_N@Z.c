/*
 * XREFs of ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x18004C730
 * Callers:
 *     ?Render@CHwndRenderTargetDDA@@UEAAJPEA_N@Z @ 0x180176620 (-Render@CHwndRenderTargetDDA@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180030D74 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x180048EC8 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@2PEAVCHwndRenderTarget@@@Z @ 0x18004AAAC (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18004B9CC (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x18004CC60 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?IsPrimaryMonitor@CHwndRenderTarget@@QEBA_NXZ @ 0x1800814EC (-IsPrimaryMonitor@CHwndRenderTarget@@QEBA_NXZ.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18008EFE0 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z @ 0x180097528 (-ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     PubSebRegisterRpc @ 0x1800D5AE8 (PubSebRegisterRpc.c)
 *     ?UpdateMPOCaps@CHwndRenderTarget@@QEAAJ_N@Z @ 0x1800D8014 (-UpdateMPOCaps@CHwndRenderTarget@@QEAAJ_N@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1800EAA00 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyFrontToBackBuffer@CHwndRenderTarget@@QEBAJXZ @ 0x18015AD18 (-CopyFrontToBackBuffer@CHwndRenderTarget@@QEBAJXZ.c)
 *     ?RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18015B1C0 (-RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18015B5A8 (-RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?SignalSEB@CHwndRenderTarget@@AEAAX_NI@Z @ 0x18015B96C (-SignalSEB@CHwndRenderTarget@@AEAAX_NI@Z.c)
 *     McTemplateU0zqq @ 0x18015BC38 (McTemplateU0zqq.c)
 *     ?IsFullscreen@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x18016BA38 (-IsFullscreen@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z.c)
 *     ?TryEnqueueSuperWetScribble@CWetInkManager@@AEAAJPEAVCGenericInk@@PEAUIDCompositionDirectInkWetStrokePartner@@PEAVIRenderTargetDisplay@@AEBUDCompWetInkStrokeRenderState@@PEA_N@Z @ 0x180178110 (-TryEnqueueSuperWetScribble@CWetInkManager@@AEAAJPEAVCGenericInk@@PEAUIDCompositionDirectInkWetS.c)
 *     ?erase@?$vector@USuperWetStroke@CWetInkManager@@V?$allocator@USuperWetStroke@CWetInkManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CWetInkManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CWetInkManager@@@std@@@std@@@2@@Z @ 0x18017857C (-erase@-$vector@USuperWetStroke@CWetInkManager@@V-$allocator@USuperWetStroke@CWetInkManager@@@st.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180179534 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x180199210 (-GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAUIDCompositionDirectInkWetStroke.c)
 *     ?GetHDR10MetaData@CCompositionSurfaceInfo@@QEBA_NPEAUDXGI_HDR_METADATA_HDR10@@@Z @ 0x1801BC5DC (-GetHDR10MetaData@CCompositionSurfaceInfo@@QEBA_NPEAUDXGI_HDR_METADATA_HDR10@@@Z.c)
 *     ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x180220AB8 (-PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::Render(struct CComposition **this, bool *a2)
{
  int v2; // edi
  char *v3; // r14
  CDrawingContext *v6; // r13
  struct CComposeTop *v7; // rbx
  char v8; // r12
  __int64 v9; // rax
  char v10; // bp
  bool v11; // cc
  struct CComposition *v12; // rax
  struct CComposition *v13; // rcx
  struct CComposition *v14; // rdx
  struct CComposition *v15; // rbx
  char v16; // r15
  char v17; // bp
  int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // rax
  int v21; // ebx
  int v22; // r8d
  int v23; // ebx
  struct _SEB_RPC_PUBLISH_DATA **v24; // r12
  char *v25; // rdx
  COverlayContext *v26; // rbp
  __int64 v27; // rbx
  CCompositionSurfaceInfo *v28; // r15
  __int64 v29; // rdi
  int v30; // r13d
  __int64 v31; // rcx
  struct _SEB_RPC_PUBLISH_DATA *v32; // rcx
  char updated; // bl
  struct _SEB_RPC_PUBLISH_DATA *v34; // rcx
  bool v35; // r13
  struct IRenderTargetDisplay *v36; // r12
  CWetInkManager *v37; // rbp
  __int64 v38; // rbx
  int v39; // eax
  unsigned int v40; // ecx
  bool v41; // al
  bool v42; // zf
  struct CComposition *v43; // rcx
  __int64 result; // rax
  struct CComposition *v45; // rax
  __int64 v46; // rdi
  char v47; // al
  int v48; // eax
  unsigned int v49; // ecx
  __int64 v50; // rax
  CDirtyRegion *v51; // rcx
  int v52; // eax
  unsigned int v53; // ecx
  __int64 v54; // rcx
  __int64 v55; // rax
  int v56; // eax
  unsigned int v57; // ecx
  struct CComposition *v58; // rcx
  __int64 v59; // rax
  int v60; // eax
  unsigned int v61; // ecx
  unsigned int v62; // r8d
  int v63; // r8d
  struct CComposition *v64; // rax
  char v65; // r9
  int v66; // eax
  unsigned int v67; // ecx
  int v68; // eax
  unsigned int v69; // ecx
  __int64 v70; // r8
  bool v71; // al
  int v72; // eax
  __int64 v73; // rax
  int v74; // eax
  unsigned int v75; // ecx
  int v76; // eax
  unsigned int v77; // ecx
  UINT MaxMasteringLuminance; // r8d
  __int64 v79; // rax
  int v80; // eax
  CGenericInk *v81; // rcx
  int DirectInkWetStroke; // eax
  struct CGenericInk *v83; // rdx
  int v84; // eax
  unsigned int v85; // ecx
  int v86; // [rsp+20h] [rbp-B8h]
  _BYTE v87[8]; // [rsp+40h] [rbp-98h] BYREF
  struct IDCompositionDirectInkWetStrokePartner *v88; // [rsp+48h] [rbp-90h] BYREF
  struct ID2DContext *v89; // [rsp+50h] [rbp-88h] BYREF
  CDrawingContext *v90; // [rsp+58h] [rbp-80h]
  _BYTE v91[8]; // [rsp+60h] [rbp-78h] BYREF
  DXGI_HDR_METADATA_HDR10 v92; // [rsp+68h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  char v94; // [rsp+E0h] [rbp+8h]
  bool v96; // [rsp+F0h] [rbp+18h] BYREF
  char v97; // [rsp+F8h] [rbp+20h]

  v2 = 0;
  v3 = (char *)(this - 8);
  if ( !this[6] )
  {
    v60 = CDrawingContext::Create(*(this - 6), this + 6);
    if ( v60 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v61, 0LL, 0, v60, 0x3Eu);
  }
  v6 = this[6];
  v7 = 0LL;
  *a2 = 0;
  v8 = 0;
  v9 = (__int64)*(this - 6);
  v10 = 0;
  v90 = v6;
  v94 = 0;
  v97 = 0;
  v11 = *(_DWORD *)(v9 + 1080) < 4;
  v96 = 0;
  if ( !v11 )
    goto LABEL_59;
  v12 = this[16];
  if ( v12 )
  {
    v7 = (struct CComposeTop *)*((_QWORD *)v12 + 40);
    if ( v7 )
    {
      if ( *((_QWORD *)v7 + 1) )
      {
        v10 = 1;
        CHwndRenderTarget::CopyFrontToBackBuffer((CHwndRenderTarget *)v3);
      }
    }
  }
  v13 = this[15];
  if ( v13 )
    (*(void (__fastcall **)(struct CComposition *, _QWORD))(*(_QWORD *)v13 + 56LL))(
      v13,
      *((unsigned __int8 *)this + 796));
  v14 = this[17];
  if ( v14 )
  {
    if ( *((_BYTE *)v14 + 2883) )
      goto LABEL_68;
    if ( !*((_BYTE *)v14 + 2886) )
    {
      v62 = 0;
      while ( IsEmpty((const struct D2D_RECT_F *)((char *)v14 + 16 * v62 + 24)) )
      {
        v62 = v63 + 1;
        if ( v62 >= 8 )
          goto LABEL_11;
      }
      goto LABEL_68;
    }
    if ( *((_DWORD *)v14 + 319) )
      goto LABEL_68;
  }
LABEL_11:
  if ( !v10 )
    goto LABEL_12;
LABEL_68:
  v45 = this[98];
  if ( v45 && *((_BYTE *)v45 + 13423) )
    v46 = 224LL;
  else
    v46 = 156LL;
  v47 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v3 + 216LL))(v3);
  v48 = CDrawingContext::BeginFrame(
          v6,
          this[14],
          (struct CComposition **)((char *)this + 388),
          1,
          (__int64)this + v46,
          0LL,
          v47,
          (__int64)v3);
  v2 = v48;
  if ( v48 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v48, 0xABu);
    goto LABEL_59;
  }
  v50 = *(_QWORD *)v3;
  v96 = 1;
  if ( (*(unsigned __int8 (__fastcall **)(char *))(v50 + 224))(v3) )
  {
    v8 = 1;
    v94 = 1;
    *((_BYTE *)*(this - 6) + 1256) = 1;
  }
  v51 = this[17];
  if ( v51 )
  {
    if ( !CDirtyRegion::IsEmpty(v51) )
    {
      v52 = CHwndRenderTarget::RenderDirtyRegion((CHwndRenderTarget *)v3, v6, v7);
      v2 = v52;
      if ( v52 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v52, 0xC3u);
LABEL_101:
        CDrawingContext::EndFrame(v6);
        goto LABEL_59;
      }
    }
  }
  if ( v7 )
  {
    v64 = this[17];
    v65 = v64 ? *((_BYTE *)v64 + 2883) : 0;
    v66 = CHwndRenderTarget::RenderComposeTop((CHwndRenderTarget *)v3, v6, v7, v65);
    v2 = v66;
    if ( v66 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0, v66, 0xCCu);
      goto LABEL_101;
    }
  }
  v54 = *((_QWORD *)*(this - 6) + 62);
  if ( v54 )
  {
    if ( *(_BYTE *)(v54 + 24) )
    {
      if ( CHwndRenderTarget::IsPrimaryMonitor((CHwndRenderTarget *)v3) )
      {
        v68 = CHwndRenderTarget::RenderDebugFrameCounter((CHwndRenderTarget *)v3, v6);
        v2 = v68;
        if ( v68 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v69, 0LL, 0, v68, 0xD3u);
          goto LABEL_101;
        }
      }
    }
  }
  if ( !(*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v3 + 224LL))(v3) )
  {
    v55 = *((_QWORD *)v3 + 21);
    if ( *(_BYTE *)(v55 + 321) )
    {
      if ( *(_BYTE *)(v55 + 322) )
        v97 = 1;
    }
  }
LABEL_12:
  v15 = this[98];
  if ( v15 )
  {
    v16 = 0;
    v17 = 0;
    v18 = COverlayContext::SetMultiplaneOverlayPresentInfo(this[98]);
    v2 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x5E1u);
    }
    else
    {
      v2 = 0;
      if ( *((_QWORD *)v15 + 1661) )
      {
        v71 = CDirectFlipInfo::RenderingRealizationChanged(*((CDirectFlipInfo **)v15 + 1661))
           && *(int *)(*(_QWORD *)(v70 + 32) + 76LL) <= 2;
        *(_BYTE *)(v70 + 84) = v71;
        *(_DWORD *)(v70 + 80) = *(_DWORD *)(*(_QWORD *)(v70 + 32) + 72LL);
        if ( *(_BYTE *)(v70 + 84) )
          *((_BYTE *)v15 + 13417) = 1;
        v72 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v15 + 1661) + 16LL))(*((_QWORD *)v15 + 1661));
        v2 = v72;
        if ( v72 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v72, 0xF2Fu);
      }
      if ( v2 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v2, 0x5E2u);
      }
      else
      {
        v16 = *((_BYTE *)v15 + 13417);
        v17 = *((_BYTE *)v15 + 13418);
        *(_WORD *)((char *)v15 + 13417) = 0;
      }
    }
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v2, 0xE6u);
      v35 = v96;
      goto LABEL_58;
    }
    if ( v17 )
    {
      v73 = (__int64)*(this - 6);
      *((_BYTE *)this + 801) = 1;
      *((_BYTE *)this + 794) = 1;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v73 + 536) + 104LL))(
        *(_QWORD *)(v73 + 536),
        0LL,
        512LL);
    }
    else if ( v16 )
    {
      *((_BYTE *)this + 794) = 1;
    }
  }
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v3 + 224LL))(v3) )
    goto LABEL_46;
  v20 = *((_QWORD *)v3 + 21);
  if ( !*(_BYTE *)(v20 + 321) || !*(_BYTE *)(v20 + 322) )
    goto LABEL_46;
  v21 = 0;
  EnterCriticalSection(&g_DisplayManager);
  if ( qword_180308258 )
    v21 = *((_DWORD *)qword_180308258 + 18);
  LeaveCriticalSection(&g_DisplayManager);
  if ( v21 != 1 )
    goto LABEL_46;
  v23 = 0;
  v24 = (struct _SEB_RPC_PUBLISH_DATA **)(v3 + 872);
  if ( *((_QWORD *)v3 + 109)
    || (v74 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_VIDEO_PLAYBACK, v3 + 872), v23 = v74, v74 >= 0) )
  {
    v25 = v3 + 880;
    if ( !*((_QWORD *)v3 + 110) )
    {
      v76 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_HDR_VIDEO_PLAYBACK, v25);
      v23 = v76;
      if ( v76 >= 0 )
        goto LABEL_30;
      MilInstrumentationCheckHR_MaybeFailFast(v77, &dword_18029280C, 1u, v76, 0x222u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v75, &dword_18029280C, 1u, v74, 0x21Cu);
  }
  if ( v23 >= 0 )
  {
LABEL_30:
    v26 = (COverlayContext *)*((_QWORD *)v3 + 106);
    if ( !v26 )
      goto LABEL_37;
    v27 = *((_QWORD *)v26 + 1054);
    v28 = 0LL;
    v29 = *((_QWORD *)v26 + 1055);
    v30 = 0;
    while ( v27 != v29 )
    {
      if ( COverlayContext::IsFullscreen(v26, (const struct COverlayContext::OverlayPlaneInfo *)v27) )
      {
        v28 = *(CCompositionSurfaceInfo **)(v27 + 24);
        v30 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v27 + 16) + 88LL))(*(_QWORD *)(v27 + 16));
        break;
      }
      v27 += 256LL;
    }
    if ( !v28 )
    {
      v31 = *(_QWORD *)(*((_QWORD *)v3 + 106) + 13288LL);
      if ( v31 )
      {
        v28 = *(CCompositionSurfaceInfo **)(v31 + 32);
        v30 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v31 + 40) + 88LL))(*(_QWORD *)(v31 + 40));
      }
      if ( !v28 )
        goto LABEL_37;
    }
    if ( v30 == 1 )
    {
      if ( CCompositionSurfaceInfo::GetHDR10MetaData(v28, &v92) )
        MaxMasteringLuminance = v92.MaxMasteringLuminance;
      CHwndRenderTarget::SignalSEB((CHwndRenderTarget *)v3, 1, MaxMasteringLuminance);
    }
    else
    {
LABEL_37:
      v32 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)v3 + 110);
      updated = 0;
      if ( v32 && v3[864] )
        PubSebiUpdateLevelEventRpc(v32, 0);
      v34 = *v24;
      if ( *v24 && v3[863] )
        updated = PubSebiUpdateLevelEventRpc(v34, 0);
      if ( v3[863] || v3[864] )
      {
        *(_WORD *)(v3 + 863) = 0;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0zqq((_DWORD)v34, (_DWORD)v25, v22, 0, updated);
      }
    }
  }
  v8 = v94;
LABEL_46:
  v35 = v96;
  if ( !v96 )
    goto LABEL_47;
  v6 = v90;
  v56 = CDrawingContext::EndFrame(v90);
  v2 = v56;
  if ( v56 >= 0 )
  {
    v35 = 0;
LABEL_47:
    v36 = this[14];
    v37 = (CWetInkManager *)*((_QWORD *)*(this - 6) + 14);
    v38 = *((_QWORD *)v37 + 1);
    while ( v38 != *((_QWORD *)v37 + 2) )
    {
      if ( *(struct IRenderTargetDisplay **)(v38 + 8) == v36 )
      {
        if ( *(_BYTE *)(v38 + 72) )
        {
          *(_BYTE *)(v38 + 72) = 0;
          v38 += 80LL;
        }
        else
        {
          v79 = *(_QWORD *)v36;
          v89 = 0LL;
          v80 = (*(__int64 (__fastcall **)(struct IRenderTargetDisplay *, struct ID2DContext **))(v79 + 40))(v36, &v89);
          v2 = v80;
          if ( v80 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xAA,
              (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\wetinkmanager.cpp",
              (const char *)(unsigned int)v80,
              v86);
LABEL_151:
            wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v89);
            if ( v2 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v85, 0LL, 0, v2, 0xFEu);
              goto LABEL_57;
            }
            break;
          }
          v81 = *(CGenericInk **)v38;
          v88 = 0LL;
          DirectInkWetStroke = CGenericInk::GetDirectInkWetStroke(v81, v89, &v88);
          v2 = DirectInkWetStroke;
          if ( DirectInkWetStroke < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xAD,
              (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\wetinkmanager.cpp",
              (const char *)(unsigned int)DirectInkWetStroke,
              v86);
            wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v88);
            goto LABEL_151;
          }
          v83 = *(struct CGenericInk **)v38;
          v96 = 0;
          v84 = CWetInkManager::TryEnqueueSuperWetScribble(
                  v37,
                  v83,
                  v88,
                  v36,
                  (const struct DCompWetInkStrokeRenderState *)(v38 + 16),
                  &v96);
          v2 = v84;
          if ( v84 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xB2,
              (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\wetinkmanager.cpp",
              (const char *)(unsigned int)v84,
              v86);
            wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v88);
            goto LABEL_151;
          }
          if ( v96 )
            v38 += 80LL;
          else
            v38 = *(_QWORD *)std::vector<CWetInkManager::SuperWetStroke>::erase((char *)v37 + 8, v91, v38);
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v88);
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v89);
        }
      }
      else
      {
        v38 += 80LL;
      }
    }
    v39 = (*(__int64 (__fastcall **)(struct CComposition *, _BYTE *))(*(_QWORD *)this[14] + 224LL))(this[14], v87);
    v2 = v39;
    if ( v39 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0x103u);
    }
    else
    {
      if ( v87[0] )
        *((_BYTE *)this + 793) = 1;
      v41 = 0;
      if ( (v97 || *((_BYTE *)this + 794) || *((_BYTE *)this + 793)) && !*((_BYTE *)this + 801) )
      {
        v58 = this[98];
        if ( !v58
          || (((*((_QWORD *)v58 + 1055) - *((_QWORD *)v58 + 1054)) & 0xFFFFFFFFFFFFFF00uLL) == 0
           || !*((_BYTE *)v58 + 13419))
          && ((v59 = *((_QWORD *)v58 + 1661)) == 0 || !*(_BYTE *)(v59 + 86) || *(_BYTE *)(v59 + 84)) )
        {
          v41 = 1;
        }
      }
      *a2 = v41;
    }
LABEL_57:
    v8 = v94;
LABEL_58:
    v42 = !v35;
    v6 = v90;
    if ( v42 )
      goto LABEL_59;
    goto LABEL_101;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0, v56, 0xFAu);
LABEL_59:
  if ( g_LockAndReadTarget )
    (*(void (__fastcall **)(struct CComposition *, _QWORD, _QWORD))(*(_QWORD *)this[14] + 216LL))(this[14], 0LL, 0LL);
  v43 = this[17];
  if ( v43 )
  {
    (*(void (__fastcall **)(struct CComposition *))(*(_QWORD *)v43 + 8LL))(v43);
    this[17] = 0LL;
  }
  if ( v8 )
  {
    *((_BYTE *)*(this - 6) + 1256) = 0;
    *((_BYTE *)this + 797) = *((_BYTE *)v6 + 6355);
  }
  if ( v2 < 0 )
  {
    *((_BYTE *)this + 794) = 0;
    switch ( v2 )
    {
      case -2003304442:
        goto LABEL_163;
      case -2003304309:
        v2 = 0;
        break;
      case -2003304307:
        v2 = -2003304307;
        break;
      case -2003304306:
LABEL_163:
        v2 = -2003304442;
        break;
    }
    CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)this);
    v3[161] = 1;
    return (unsigned int)v2;
  }
  if ( v2 < 142213121 )
    return (unsigned int)v2;
  switch ( v2 )
  {
    case 142213121:
      v3[859] = 1;
      return (unsigned int)v2;
    case 142213129:
      v3[859] = 0;
      v3[161] = 1;
      CHwndRenderTarget::UpdateMPOCaps((CHwndRenderTarget *)v3, 1);
      return 0LL;
    case 142213130:
    case 142213167:
      ScheduleCompositionPass(0LL, 0x2000LL);
      result = 0LL;
      v3[857] = 1;
      break;
    default:
      return (unsigned int)v2;
  }
  return result;
}
