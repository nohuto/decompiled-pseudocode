/*
 * XREFs of ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180048830
 * Callers:
 *     ?Render@CHwndRenderTargetDDA@@UEAAJPEA_N@Z @ 0x1801ABB40 (-Render@CHwndRenderTargetDDA@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z @ 0x180043B58 (-ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18004675C (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800486D4 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x180049318 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180049B50 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@2PEAVCRenderTarget@@@Z @ 0x18004B620 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x18004C408 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180052C10 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x180059110 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1800AF680 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     PubSebRegisterRpc @ 0x1800DE140 (PubSebRegisterRpc.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0 @ 0x18015EAF8 (McTemplateU0.c)
 *     ?IsFullscreen@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x1801868B0 (-IsFullscreen@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180194BF4 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?CopyFrontToBackBuffer@CHwndRenderTarget@@QEBAJXZ @ 0x1801A8FD8 (-CopyFrontToBackBuffer@CHwndRenderTarget@@QEBAJXZ.c)
 *     ?RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801A9370 (-RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801A97A4 (-RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?SignalSEB@CHwndRenderTarget@@AEAAX_NI@Z @ 0x1801A9B94 (-SignalSEB@CHwndRenderTarget@@AEAAX_NI@Z.c)
 *     McTemplateU0zqq @ 0x1801A9DDC (McTemplateU0zqq.c)
 *     ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x180222080 (-PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z.c)
 *     ?TryEnqueueSuperWetScribble@CWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z @ 0x180251CC0 (-TryEnqueueSuperWetScribble@CWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z.c)
 *     ?erase@?$vector@USuperWetStroke@CWetInkManager@@V?$allocator@USuperWetStroke@CWetInkManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CWetInkManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CWetInkManager@@@std@@@std@@@2@@Z @ 0x180252260 (-erase@-$vector@USuperWetStroke@CWetInkManager@@V-$allocator@USuperWetStroke@CWetInkManager@@@st.c)
 */

__int64 __fastcall CHwndRenderTarget::Render(struct CComposition **this, bool *a2)
{
  int v2; // edi
  char *v3; // r14
  bool *v4; // r12
  int v6; // eax
  unsigned int v7; // ecx
  struct CComposition *v8; // r15
  struct CComposeTop *v9; // rbx
  char v10; // r13
  __int64 v11; // rax
  char v12; // bp
  struct CComposition *v13; // rax
  struct CComposition *v14; // rcx
  struct CComposition *v15; // r8
  unsigned int v16; // edx
  int v17; // edx
  struct CComposition *v18; // rax
  __int64 v19; // rdi
  char v20; // al
  int v21; // eax
  unsigned int v22; // ecx
  CDirtyRegion *v23; // rcx
  int v24; // eax
  unsigned int v25; // ecx
  struct CComposition *v26; // rax
  char v27; // r9
  int v28; // eax
  unsigned int v29; // ecx
  __int64 v30; // rcx
  int v31; // eax
  unsigned int v32; // ecx
  struct CComposition *v33; // rbx
  char v34; // r13
  char v35; // r12
  int v36; // eax
  unsigned int v37; // ecx
  __int64 v38; // rbp
  int v39; // eax
  __int64 v40; // rax
  int v41; // r8d
  int v42; // ebx
  struct _SEB_RPC_PUBLISH_DATA **v43; // rbp
  int v44; // eax
  unsigned int v45; // ecx
  char *v46; // rdx
  int v47; // eax
  unsigned int v48; // ecx
  COverlayContext *v49; // rdi
  __int64 v50; // rbx
  __int64 v51; // r12
  __int64 v52; // rbp
  int v53; // r13d
  __int64 v54; // rcx
  unsigned int v55; // ebx
  struct _SEB_RPC_PUBLISH_DATA *v56; // rcx
  char updated; // bl
  struct _SEB_RPC_PUBLISH_DATA *v58; // rcx
  __int64 v59; // rcx
  int v60; // eax
  unsigned int v61; // ecx
  __int64 v62; // rcx
  __int64 v63; // rcx
  unsigned int v64; // ecx
  __int64 v65; // rcx
  __int64 v66; // rcx
  struct CComposition *v67; // r12
  CWetInkManager *v68; // rbp
  __int64 v69; // rbx
  int v70; // eax
  unsigned int v71; // ecx
  int v72; // eax
  unsigned int v73; // ecx
  struct CComposition *v74; // rcx
  __int64 v75; // rax
  struct CComposition *v76; // rcx
  __int64 result; // rax
  __int64 v78; // rax
  int v79; // [rsp+20h] [rbp-98h]
  char v80; // [rsp+40h] [rbp-78h]
  char v81; // [rsp+41h] [rbp-77h]
  bool v82; // [rsp+42h] [rbp-76h] BYREF
  char v83; // [rsp+43h] [rbp-75h]
  _BYTE v84[4]; // [rsp+44h] [rbp-74h] BYREF
  __int64 v85; // [rsp+48h] [rbp-70h] BYREF
  bool *v86; // [rsp+50h] [rbp-68h]
  _BYTE v87[16]; // [rsp+58h] [rbp-60h] BYREF
  unsigned int v88; // [rsp+68h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v2 = 0;
  v86 = a2;
  v3 = (char *)(this - 8);
  v4 = a2;
  if ( !this[6] )
  {
    v6 = CDrawingContext::Create(*(this - 6), this + 6);
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x3Du, 0LL);
  }
  v8 = this[6];
  v9 = 0LL;
  *v4 = 0;
  v10 = 0;
  v11 = (__int64)*(this - 6);
  v12 = 0;
  v81 = 0;
  v83 = 0;
  v80 = 0;
  if ( *(int *)(v11 + 1096) < 4 )
  {
    v13 = this[16];
    if ( v13 )
    {
      v9 = (struct CComposeTop *)*((_QWORD *)v13 + 46);
      if ( v9 )
      {
        if ( *((_QWORD *)v9 + 1) )
        {
          v12 = 1;
          CHwndRenderTarget::CopyFrontToBackBuffer((CHwndRenderTarget *)v3);
        }
      }
    }
    v14 = this[15];
    if ( v14 )
      (*(void (__fastcall **)(struct CComposition *, _QWORD))(*(_QWORD *)v14 + 56LL))(
        v14,
        *((unsigned __int8 *)this + 796));
    v15 = this[17];
    if ( v15 )
    {
      if ( !*((_BYTE *)v15 + 2883) )
      {
        if ( *((_BYTE *)v15 + 2886) )
        {
          if ( !*((_DWORD *)v15 + 319) )
            goto LABEL_19;
        }
        else
        {
          v16 = 0;
          while ( IsEmpty((const struct D2D_RECT_F *)((char *)v15 + 16 * v16 + 24)) )
          {
            v16 = v17 + 1;
            if ( v16 >= 8 )
              goto LABEL_19;
          }
        }
      }
LABEL_20:
      v18 = this[98];
      if ( !v18 || (v19 = 224LL, !*((_BYTE *)v18 + 13439)) )
        v19 = 156LL;
      v20 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v3 + 352LL))(v3);
      v21 = CDrawingContext::BeginFrame(v8, (__int64)this + v19, 0LL, v20, (__int64)v3);
      v2 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0xB0u, 0LL);
        goto LABEL_155;
      }
      v80 = 1;
      if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v3 + 248LL))(v3) )
      {
        v81 = 1;
        *((_BYTE *)*(this - 6) + 1273) = 1;
      }
      v23 = this[17];
      if ( v23 )
      {
        if ( !CDirtyRegion::IsEmpty(v23) )
        {
          v24 = CHwndRenderTarget::RenderDirtyRegion((CHwndRenderTarget *)v3, v8, v9);
          v2 = v24;
          if ( v24 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xC8u, 0LL);
LABEL_153:
            CDrawingContext::EndFrame(v8);
            goto LABEL_154;
          }
        }
      }
      if ( v9 )
      {
        v26 = this[17];
        v27 = v26 ? *((_BYTE *)v26 + 2883) : 0;
        v28 = CHwndRenderTarget::RenderComposeTop((CHwndRenderTarget *)v3, v8, v9, v27);
        v2 = v28;
        if ( v28 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0xD1u, 0LL);
          goto LABEL_153;
        }
      }
      v30 = *((_QWORD *)*(this - 6) + 64);
      if ( v30 )
      {
        if ( *(_BYTE *)(v30 + 24) )
        {
          if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v3 + 256LL))(v3) )
          {
            v31 = CHwndRenderTarget::RenderDebugFrameCounter((CHwndRenderTarget *)v3, v8);
            v2 = v31;
            if ( v31 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0xD8u, 0LL);
              goto LABEL_153;
            }
          }
        }
      }
      if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v3 + 256LL))(v3) )
        v83 = 1;
LABEL_43:
      v33 = this[98];
      if ( v33 )
      {
        v34 = 0;
        v35 = 0;
        v36 = COverlayContext::SetMultiplaneOverlayPresentInfo(this[98]);
        v2 = v36;
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x5E4u, 0LL);
        }
        else
        {
          v38 = *((_QWORD *)v33 + 1663);
          v2 = 0;
          if ( v38 )
          {
            if ( *(_DWORD *)(v38 + 68) != 1 )
              *(_BYTE *)(v38 + 97) = CDirectFlipInfo::RenderingRealizationChanged(*((CDirectFlipInfo **)v33 + 1663))
                                  && (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(v38 + 32) + 232LL))(*(_QWORD *)(v38 + 32)) <= 2;
            if ( *(_BYTE *)(v38 + 97) )
              *((_BYTE *)v33 + 13433) = 1;
            v39 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v33 + 1663) + 16LL))(*((_QWORD *)v33 + 1663));
            v2 = v39;
            if ( v39 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v39, 0xF33u, 0LL);
          }
          if ( v2 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v2, 0x5E5u, 0LL);
          }
          else
          {
            v34 = *((_BYTE *)v33 + 13433);
            v35 = *((_BYTE *)v33 + 13434);
            *(_WORD *)((char *)v33 + 13433) = 0;
          }
        }
        if ( v2 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v2, 0xEBu, 0LL);
          goto LABEL_152;
        }
        if ( v35 )
        {
          v40 = (__int64)*(this - 6);
          *((_BYTE *)this + 801) = 1;
          *((_BYTE *)this + 794) = 1;
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v40 + 552) + 96LL))(
            *(_QWORD *)(v40 + 552),
            0LL,
            512LL);
        }
        else if ( v34 )
        {
          *((_BYTE *)this + 794) = 1;
        }
      }
      if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v3 + 256LL))(v3)
        && g_DisplayManager
        && *((_DWORD *)g_DisplayManager + 18) == 1 )
      {
        v42 = 0;
        v43 = (struct _SEB_RPC_PUBLISH_DATA **)(v3 + 872);
        if ( *((_QWORD *)v3 + 109)
          || (v44 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_VIDEO_PLAYBACK, v3 + 872), v42 = v44, v44 >= 0) )
        {
          v46 = v3 + 880;
          if ( !*((_QWORD *)v3 + 110) )
          {
            v47 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_HDR_VIDEO_PLAYBACK, v46);
            v42 = v47;
            if ( v47 >= 0 )
              goto LABEL_76;
            MilInstrumentationCheckHR_MaybeFailFast(v48, &dword_1802C0754, 1u, v47, 0x227u, 0LL);
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(v45, &dword_1802C0754, 1u, v44, 0x221u, 0LL);
        }
        if ( v42 >= 0 )
        {
LABEL_76:
          v49 = (COverlayContext *)*((_QWORD *)v3 + 106);
          if ( v49 )
          {
            v50 = *((_QWORD *)v49 + 1054);
            v51 = 0LL;
            v52 = *((_QWORD *)v49 + 1055);
            v53 = 0;
            while ( v50 != v52 )
            {
              if ( COverlayContext::IsFullscreen(v49, (const struct COverlayContext::OverlayPlaneInfo *)v50) )
              {
                v51 = *(_QWORD *)(v50 + 24);
                v53 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v50 + 16) + 88LL))(*(_QWORD *)(v50 + 16));
                break;
              }
              v50 += 256LL;
            }
            if ( v51 )
              goto LABEL_86;
            v54 = *(_QWORD *)(*((_QWORD *)v3 + 106) + 13304LL);
            if ( v54 )
            {
              v51 = *(_QWORD *)(v54 + 32);
              v53 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v54 + 40) + 88LL))(*(_QWORD *)(v54 + 40));
            }
            if ( v51 )
            {
LABEL_86:
              if ( v53 == 1 )
              {
                v55 = 100;
                if ( (*(unsigned __int8 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v51 + 240LL))(v51, v87) )
                  v55 = v88;
                CHwndRenderTarget::SignalSEB((CHwndRenderTarget *)v3, 1, v55);
                goto LABEL_101;
              }
            }
            v43 = (struct _SEB_RPC_PUBLISH_DATA **)(v3 + 872);
          }
          v56 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)v3 + 110);
          updated = 0;
          if ( v56 && v3[864] )
            PubSebiUpdateLevelEventRpc(v56, 0);
          v58 = *v43;
          if ( *v43 && v3[863] )
            updated = PubSebiUpdateLevelEventRpc(v58, 0);
          if ( v3[863] || v3[864] )
          {
            *(_WORD *)(v3 + 863) = 0;
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
              McTemplateU0zqq((_DWORD)v58, (_DWORD)v46, v41, 0, updated);
          }
        }
      }
LABEL_101:
      if ( v80 )
      {
        v80 = 0;
        *((_QWORD *)v8 + 787) = 0LL;
        v2 = 0;
        CDrawingContext::PopAllStacks(v8);
        if ( *((_QWORD *)v8 + 44) )
        {
          v59 = *((_QWORD *)v8 + 48);
          v85 = 0LL;
          v60 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v59 + 32LL))(
                  v59,
                  (__int64)v8 + 8,
                  &v85);
          v2 = v60;
          if ( v60 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v61, 0LL, 0, v60, 0x21D6u, 0LL);
          if ( g_LockAndReadD2DTarget )
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)v8 + 44) + 216LL))(
              *((_QWORD *)v8 + 44),
              0LL,
              0LL);
          v62 = *((_QWORD *)v8 + 44);
          if ( v62 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
            *((_QWORD *)v8 + 44) = 0LL;
          }
          v63 = *((_QWORD *)v8 + 46);
          if ( v63 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
            *((_QWORD *)v8 + 46) = 0LL;
          }
          v64 = v85;
          if ( v85 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v85 + 16LL))(v85);
          *((_BYTE *)v8 + 6345) = 1;
          if ( v2 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v64, 0LL, 0, v2, 0x1DAu, 0LL);
        }
        v65 = *((_QWORD *)v8 + 48);
        if ( v65 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
          *((_QWORD *)v8 + 48) = 0LL;
        }
        v66 = *((_QWORD *)v8 + 465);
        if ( v66 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
          *((_QWORD *)v8 + 465) = 0LL;
        }
        *((_BYTE *)v8 + 6348) = 0;
        if ( !*((_QWORD *)v8 + 45) && !*((_QWORD *)v8 + 787) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x80u) != 0 )
          McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWING_CONTEXT_FRAME_Stop);
        *((_QWORD *)v8 + 439) = 0LL;
        if ( v2 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v66, 0LL, 0, v2, 0xFFu, 0LL);
          goto LABEL_154;
        }
      }
      v67 = this[14];
      v68 = (CWetInkManager *)*((_QWORD *)*(this - 6) + 13);
      v69 = *((_QWORD *)v68 + 1);
      while ( v69 != *((_QWORD *)v68 + 2) )
      {
        if ( *(struct CComposition **)(v69 + 8) == v67 )
        {
          if ( *(_BYTE *)(v69 + 72) )
          {
            *(_BYTE *)(v69 + 72) = 0;
            v69 += 80LL;
          }
          else
          {
            v82 = 0;
            v70 = CWetInkManager::TryEnqueueSuperWetScribble(
                    v68,
                    (const struct CWetInkManager::SuperWetStroke *)v69,
                    &v82);
            v2 = v70;
            if ( v70 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x5E,
                (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\wetinkmanager.cpp",
                (const char *)(unsigned int)v70,
                v79);
              MilInstrumentationCheckHR_MaybeFailFast(v71, 0LL, 0, v2, 0x103u, 0LL);
              goto LABEL_152;
            }
            if ( v82 )
              v69 += 80LL;
            else
              v69 = *(_QWORD *)std::vector<CWetInkManager::SuperWetStroke>::erase((char *)v68 + 8, &v85, v69);
          }
        }
        else
        {
          v69 += 80LL;
        }
      }
      v72 = (*(__int64 (__fastcall **)(struct CComposition *, _BYTE *))(*(_QWORD *)this[14] + 224LL))(this[14], v84);
      v2 = v72;
      if ( v72 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v73, 0LL, 0, v72, 0x108u, 0LL);
      }
      else
      {
        if ( v84[0] )
          *((_BYTE *)this + 793) = 1;
        *v86 = (v83 || *((_BYTE *)this + 794) || *((_BYTE *)this + 793))
            && !*((_BYTE *)this + 801)
            && ((v74 = this[98]) == 0LL
             || (((*((_QWORD *)v74 + 1055) - *((_QWORD *)v74 + 1054)) & 0xFFFFFFFFFFFFFF00uLL) == 0
              || !*((_BYTE *)v74 + 13435))
             && ((v75 = *((_QWORD *)v74 + 1663)) == 0 || !*(_BYTE *)(v75 + 99) || *(_BYTE *)(v75 + 97)));
      }
LABEL_152:
      if ( v80 )
        goto LABEL_153;
LABEL_154:
      v10 = v81;
      goto LABEL_155;
    }
LABEL_19:
    if ( !v12 )
      goto LABEL_43;
    goto LABEL_20;
  }
LABEL_155:
  if ( g_LockAndReadTarget )
    (*(void (__fastcall **)(struct CComposition *, _QWORD, _QWORD))(*(_QWORD *)this[14] + 216LL))(this[14], 0LL, 0LL);
  v76 = this[17];
  if ( v76 )
  {
    (*(void (__fastcall **)(struct CComposition *))(*(_QWORD *)v76 + 8LL))(v76);
    this[17] = 0LL;
  }
  if ( v10 )
  {
    *((_BYTE *)*(this - 6) + 1273) = 0;
    *((_BYTE *)this + 797) = *((_BYTE *)v8 + 6355);
  }
  if ( v2 < 0 )
  {
    *((_BYTE *)this + 794) = 0;
    switch ( v2 )
    {
      case -2003304442:
        goto LABEL_166;
      case -2003304309:
        v2 = 0;
        break;
      case -2003304307:
        v2 = -2003304307;
        break;
      case -2003304306:
LABEL_166:
        v2 = -2003304442;
        break;
    }
    CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)this);
    v3[161] = 1;
    return (unsigned int)v2;
  }
  switch ( v2 )
  {
    case 142213121:
      v3[859] = 1;
      break;
    case 142213129:
      v78 = *(_QWORD *)v3;
      LOBYTE(a2) = 1;
      v3[859] = 0;
      v3[161] = 1;
      (*(void (__fastcall **)(char *, bool *))(v78 + 272))(v3, a2);
      return 0LL;
    case 142213130:
    case 142213167:
      ScheduleCompositionPass(0, 0x2000u);
      result = 0LL;
      v3[857] = 1;
      return result;
  }
  return (unsigned int)v2;
}
