/*
 * XREFs of ?PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x18008EC40
 * Callers:
 *     <none>
 * Callees:
 *     ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@UtagRECT@@$03$0A@@@@Z @ 0x18000CD68 (--$AppendAllRectangles@V-$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV-$DynArrayIA@UtagRECT.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18008F0E0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18008F2B4 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qqq @ 0x18015A750 (McTemplateU0qqq.c)
 *     ?SignalRenderFence@CD3DDeviceLevel1@@QEAAJ_K@Z @ 0x18015E2D0 (-SignalRenderFence@CD3DDeviceLevel1@@QEAAJ_K@Z.c)
 *     McTemplateU0 @ 0x18015EAF8 (McTemplateU0.c)
 *     McTemplateU0d @ 0x18015EC70 (McTemplateU0d.c)
 *     McTemplateU0x @ 0x18015ECCC (McTemplateU0x.c)
 *     ?D2DPresentDWM@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEBUtagRECT@@IPEBUDXGI_SCROLL_RECT@@PEAUIDXGIResource@@I@Z @ 0x1801604F8 (-D2DPresentDWM@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEBUtagRECT@@IPEBUDXGI_SCROLL_RECT@@.c)
 *     ?D2DPresentMultiplaneOverlay@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x180160630 (-D2DPresentMultiplaneOverlay@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYP.c)
 *     ?ConvertPresentToMultiplaneOverlay@CDWMSwapChain@@AEAAJIIPEAUtagRECT@@0PEAUIDXGIResource@@I0W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180164030 (-ConvertPresentToMultiplaneOverlay@CDWMSwapChain@@AEAAJIIPEAUtagRECT@@0PEAUIDXGIResource@@I0W4DX.c)
 *     ?DbgSavePresentInfo@CDWMSwapChain@@IEAAXW4DbgPresentType@1@IJI@Z @ 0x18016420C (-DbgSavePresentInfo@CDWMSwapChain@@IEAAXW4DbgPresentType@1@IJI@Z.c)
 *     ?DirectFlipRectRequiresPanelFitter@CDWMSwapChain@@AEBA_NAEBUtagRECT@@@Z @ 0x1801642A4 (-DirectFlipRectRequiresPanelFitter@CDWMSwapChain@@AEBA_NAEBUtagRECT@@@Z.c)
 *     ?ReleaseD2DBitmaps@CSwapChainBase@@IEAAXXZ @ 0x180164484 (-ReleaseD2DBitmaps@CSwapChainBase@@IEAAXXZ.c)
 *     ?ShouldConvertPresentToMPO@CDWMSwapChain@@AEBA_NXZ @ 0x18016475C (-ShouldConvertPresentToMPO@CDWMSwapChain@@AEBA_NXZ.c)
 *     McTemplateU0qn @ 0x180164840 (McTemplateU0qn.c)
 *     McTemplateU0xqqqddddddddddddqqq @ 0x1801648BC (McTemplateU0xqqqddddddddddddqqq.c)
 *     ?RefreshBackBufferViews@CSwapChainBase@@IEAAJXZ @ 0x18016598C (-RefreshBackBufferViews@CSwapChainBase@@IEAAJXZ.c)
 */

__int64 __fastcall CDWMSwapChain::PresentInternal(
        CDWMSwapChain *this,
        const struct CRegion *a2,
        unsigned int a3,
        unsigned int a4,
        const struct RenderTargetPresentParameters *a5)
{
  const struct RenderTargetPresentParameters *v5; // rdi
  int v6; // r13d
  unsigned int v7; // r14d
  unsigned int v11; // r12d
  FastRegion::Internal::CRgnData **v12; // r15
  FastRegion::Internal::CRgnData *v13; // r8
  char *v14; // rdx
  __int64 v15; // rsi
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // edi
  unsigned int v19; // r10d
  __int64 v20; // rdx
  struct DXGI_SCROLL_RECT *v21; // r9
  struct DXGI_SCROLL_RECT *v22; // r15
  int v23; // r11d
  char *v24; // rsi
  struct DXGI_SCROLL_RECT *v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // edx
  __int64 v29; // rcx
  int v30; // r9d
  int v31; // r12d
  unsigned int v32; // r9d
  struct tagRECT *v33; // r8
  int v34; // edx
  __int64 *v35; // r15
  unsigned int v36; // esi
  int v37; // eax
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  CComposition *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  _BYTE *v43; // rcx
  __int64 v45; // rax
  _DWORD *v46; // rcx
  __int64 v47; // rdx
  bool v48; // zf
  int v49; // eax
  CDWMSwapChain *v50; // rcx
  struct tagRECT *v51; // r9
  struct IDXGIResource *v52; // r10
  CDWMSwapChain *v53; // rcx
  char v54; // r11
  int v55; // eax
  unsigned int v56; // ecx
  __int64 v57; // rdx
  __int64 v58; // r8
  struct tagRECT *v59; // rcx
  int v60; // eax
  unsigned int v61; // ecx
  unsigned int v62; // eax
  unsigned int v63; // r15d
  unsigned int v64; // r13d
  __int64 v65; // rcx
  __int64 v66; // rax
  int appended; // eax
  unsigned int v68; // ecx
  const struct RenderTargetPresentParameters *v69; // rdx
  int v70; // edx
  unsigned int v71; // edi
  __int64 v72; // r8
  CD2DContext *v73; // rcx
  enum DXGI_HDR_METADATA_TYPE v74; // eax
  struct IDXGISwapChainDWM1 *v75; // rdx
  int v76; // eax
  unsigned int v77; // ecx
  int v78; // esi
  __int64 v79; // r15
  __int64 v80; // r13
  __int64 v81; // rcx
  unsigned int i; // edi
  __int64 v83; // rcx
  __int64 (__fastcall *v84)(__int64, __int64); // rax
  int v85; // eax
  int v86; // eax
  int v87; // r8d
  int v88; // eax
  unsigned int v89; // ecx
  unsigned int v90; // esi
  unsigned int v91; // r15d
  __int64 v92; // rdx
  __int128 v93; // xmm0
  unsigned int v94; // edx
  __int64 v95; // rax
  struct DXGI_SCROLL_RECT *v96; // rax
  CDWMSwapChain *v97; // rcx
  int v98; // eax
  unsigned int v99; // ecx
  __int64 v100; // rdx
  __int64 v101; // r8
  int v102; // eax
  int v103; // eax
  unsigned int v104; // ecx
  int refreshed; // eax
  unsigned int v106; // ecx
  int v107; // eax
  struct tagRECT *v108; // [rsp+28h] [rbp-108h]
  unsigned int v109; // [rsp+30h] [rbp-100h]
  struct tagRECT *v110; // [rsp+38h] [rbp-F8h]
  unsigned int v111; // [rsp+B0h] [rbp-80h]
  unsigned int v112; // [rsp+B4h] [rbp-7Ch] BYREF
  const struct RenderTargetPresentParameters *v113; // [rsp+B8h] [rbp-78h]
  unsigned int v114; // [rsp+C0h] [rbp-70h]
  unsigned int v115; // [rsp+C4h] [rbp-6Ch]
  struct DXGI_SCROLL_RECT *v116[2]; // [rsp+C8h] [rbp-68h] BYREF
  struct DXGI_SCROLL_RECT *v117; // [rsp+D8h] [rbp-58h]
  char *v118; // [rsp+E0h] [rbp-50h]
  int v119; // [rsp+E8h] [rbp-48h]
  int v120; // [rsp+ECh] [rbp-44h]
  _BYTE v121[24]; // [rsp+F8h] [rbp-38h] BYREF
  void *lpMem; // [rsp+110h] [rbp-20h] BYREF
  _BYTE *v123; // [rsp+118h] [rbp-18h]
  int v124; // [rsp+120h] [rbp-10h]
  unsigned int v125[2]; // [rsp+124h] [rbp-Ch]
  _BYTE v126[128]; // [rsp+130h] [rbp+0h] BYREF

  v5 = a5;
  lpMem = v126;
  v6 = 0;
  v7 = a4;
  v123 = v126;
  v111 = a3;
  v113 = a5;
  v11 = a3;
  v124 = 8;
  *(_QWORD *)v125 = 8LL;
  v114 = a4;
  v115 = a4;
  v112 = a3;
  if ( *((_BYTE *)this + 516) && (a4 & 1) == 0 )
  {
    if ( *((_BYTE *)this + 518) )
    {
      *((_BYTE *)this + 518) = 0;
    }
    else
    {
      a3 = *((_DWORD *)this + 130);
      v111 = a3;
      if ( *((_BYTE *)this + 517) )
        v7 = a4 | 0x200;
    }
  }
  if ( *((_BYTE *)this + 577) )
  {
    CD3DDeviceLevel1::SignalRenderFence(
      *(CD3DDeviceLevel1 **)(*((_QWORD *)this + 2) + 80LL),
      *((_QWORD *)g_pComposition + 48));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_PARALLEL_MODE_WAITING_FOR_NEXT_VSYNC_Start);
    WaitForSingleObject(*((HANDLE *)this + 58), 0x64u);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_PARALLEL_MODE_WAITING_FOR_NEXT_VSYNC_Stop);
    a3 = v111;
  }
  if ( *((_DWORD *)this + 92) )
  {
    v46 = (_DWORD *)*((_QWORD *)this + 43);
    v47 = *((unsigned int *)this + 92);
    do
    {
      v48 = *v46 == 1;
      v49 = v6 + 1;
      v46 += 12;
      if ( !v48 )
        v49 = v6;
      v6 = v49;
      --v47;
    }
    while ( v47 );
  }
  if ( *((_QWORD *)this + 59) )
  {
    if ( CDWMSwapChain::DirectFlipRectRequiresPanelFitter(this, (const struct tagRECT *)((char *)this + 484))
      || CDWMSwapChain::DirectFlipRectRequiresPanelFitter(v50, (const struct tagRECT *)((char *)this + 500)) )
    {
      v54 = 1;
      v59 = (struct tagRECT *)((char *)this + 500);
    }
    else
    {
      if ( !CDWMSwapChain::ShouldConvertPresentToMPO(v53) )
      {
        v55 = CD2DContext::D2DPresentDWM(
                *(CD2DContext **)(*((_QWORD *)this + 2) + 80LL),
                *((struct IDXGISwapChainDWM1 **)this + 53),
                v11,
                a4,
                0,
                0LL,
                0,
                0LL,
                v52,
                0);
        v18 = v55;
        if ( v55 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v55, 0x182u, 0LL);
        v57 = 1LL;
        v58 = a4;
LABEL_90:
        CDWMSwapChain::DbgSavePresentInfo(this, v57, v58, (unsigned int)v18, 1);
        v31 = v7 & 1;
        if ( (v7 & 1) == 0 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0x(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_ETWGUID_DIRECTFLIP_PRESENTEVENT,
            *((_QWORD *)this + 57));
        goto LABEL_43;
      }
      v59 = 0LL;
    }
    if ( !v54 )
      v51 = 0LL;
    v60 = CDWMSwapChain::ConvertPresentToMultiplaneOverlay(
            this,
            v111,
            v7,
            v51,
            v59,
            v52,
            0,
            0LL,
            *((enum DXGI_COLOR_SPACE_TYPE *)this + 120));
    v18 = v60;
    if ( v60 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v61, 0LL, 0, v60, 0x174u, 0LL);
    v57 = 4LL;
    v58 = v7;
    goto LABEL_90;
  }
  if ( *((_BYTE *)this + 584) )
  {
    v31 = v7 & 1;
    if ( (v7 & 1) == 0 )
    {
      v62 = *((_DWORD *)this + 137);
      v63 = 0;
      v64 = 0;
      if ( v62 )
      {
        do
        {
          v65 = 136LL * v64;
          v66 = *((_QWORD *)this + 69);
          v113 = (const struct RenderTargetPresentParameters *)v65;
          if ( *(_DWORD *)(v65 + v66 + 4) )
          {
            if ( a2 && !*(_QWORD *)(v65 + v66 + 8) )
            {
              v125[1] = 0;
              appended = CRegion::AppendAllRectangles<DynArrayIA<tagRECT,4,0>>(a2, (__int64)&lpMem);
              v18 = appended;
              if ( appended < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v68, 0LL, 0, appended, 0x19Bu, 0LL);
                goto LABEL_51;
              }
              v69 = v113;
              *(_DWORD *)((char *)v113 + *((_QWORD *)this + 69) + 84) = v125[1];
              *(_QWORD *)((char *)v69 + *((_QWORD *)this + 69) + 88) = lpMem;
            }
            ++v63;
          }
          v62 = *((_DWORD *)this + 137);
          ++v64;
        }
        while ( v64 < v62 );
        a3 = v111;
      }
      if ( dword_18033C764 <= v63 )
      {
        dword_18033C764 = v63;
        v62 = *((_DWORD *)this + 137);
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_OVERLAY_PRESENT_Start, v62);
        a3 = v111;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          v71 = 0;
          if ( *((_DWORD *)this + 137) )
          {
            do
            {
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
              {
                v72 = *((_QWORD *)this + 69) + 136LL * v71;
                McTemplateU0xqqqddddddddddddqqq(
                  (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
                  v70,
                  *(_QWORD *)(v72 + 8),
                  *(_DWORD *)(v72 + 4),
                  *(_DWORD *)v72,
                  *(_DWORD *)(v72 + 24),
                  *(_DWORD *)(v72 + 28),
                  *(_DWORD *)(v72 + 32),
                  *(_DWORD *)(v72 + 36),
                  *(_DWORD *)(v72 + 40),
                  *(_DWORD *)(v72 + 44),
                  *(_DWORD *)(v72 + 48),
                  *(_DWORD *)(v72 + 52),
                  *(_DWORD *)(v72 + 56),
                  *(_DWORD *)(v72 + 60),
                  *(_DWORD *)(v72 + 64),
                  *(_DWORD *)(v72 + 68),
                  *(_DWORD *)(v72 + 72),
                  *(_DWORD *)(v72 + 76),
                  *(_DWORD *)(v72 + 80),
                  *(_DWORD *)(v72 + 100));
              }
              ++v71;
            }
            while ( v71 < *((_DWORD *)this + 137) );
            a3 = v111;
          }
        }
      }
    }
    v73 = *(CD2DContext **)(*((_QWORD *)this + 2) + 80LL);
    v110 = (struct tagRECT *)*((_QWORD *)this + 69);
    v109 = *((_DWORD *)this + 137);
    v74 = *((_DWORD *)this + 140);
    v108 = (struct tagRECT *)*((_QWORD *)this + 71);
    v75 = (struct IDXGISwapChainDWM1 *)*((_QWORD *)this + 53);
    *((_QWORD *)this + 71) = 0LL;
    v76 = CD2DContext::D2DPresentMultiplaneOverlay(
            v73,
            v75,
            a3,
            v7,
            v74,
            v108,
            v109,
            (const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *)v110);
    v18 = v76;
    if ( v76 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v77, 0LL, 0, v76, 0x1D2u, 0LL);
    CDWMSwapChain::DbgSavePresentInfo(this, 2LL, v7, (unsigned int)v18, *((_DWORD *)this + 137));
    if ( (v7 & 1) == 0 )
    {
      if ( v18 >= 0 )
      {
        v78 = *((_DWORD *)this + 137) - 1;
        v79 = v78;
        if ( v78 >= 0 )
        {
          v80 = 136LL * v78;
          do
          {
            v81 = *(_QWORD *)(*((_QWORD *)this + 69) + v80 + 8);
            if ( !v81 )
              break;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v81 + 16LL))(v81);
            --v78;
            v80 -= 136LL;
            --v79;
          }
          while ( v79 >= 0 );
        }
        *((_DWORD *)this + 137) = v78 + 1;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_OVERLAY_PRESENT_Stop);
    }
    goto LABEL_43;
  }
  if ( v6 <= 0 || (v12 = (FastRegion::Internal::CRgnData **)((char *)this + 272), !**((_DWORD **)this + 34)) )
  {
    if ( !a2 || !**(_DWORD **)a2 )
      goto LABEL_23;
    v12 = (FastRegion::Internal::CRgnData **)a2;
  }
  if ( v12 )
  {
    v13 = *v12;
    v125[1] = 0;
    if ( *(_DWORD *)v13 )
    {
      v14 = (char *)v13 + 8 * *(_DWORD *)v13 + 4;
      v15 = (__int64)&v14[*((int *)v14 + 1) - (__int64)*((int *)v13 + 4) - ((_QWORD)v13 + 12)] >> 3;
    }
    else
    {
      LODWORD(v15) = 0;
    }
    v16 = DynArrayImpl<0>::Grow((unsigned int)&lpMem, 16, v15, 0, 0LL);
    v18 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x18Eu, 0LL);
    else
      v125[1] += v15;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v18, 0x1F7u, 0LL);
      goto LABEL_51;
    }
    FastRegion::Internal::CRgnData::BeginIterator(*v12, (struct FastRegion::CRegion::Iterator *)v116);
    LODWORD(v20) = v120;
    v21 = v117;
    v22 = v116[1];
    v23 = v119;
    v24 = v118;
    while ( v21 < v22 )
    {
      v25 = (struct DXGI_SCROLL_RECT *)((char *)v21 + 8);
      *(_DWORD *)&v121[4] = *(_DWORD *)v21;
      *(_DWORD *)&v121[12] = *((_DWORD *)v21 + 2);
      v26 = 2 * v23++;
      *(_DWORD *)v121 = *(_DWORD *)&v24[4 * v26];
      *(_DWORD *)&v121[8] = *(_DWORD *)&v24[4 * v26 + 4];
      *((_OWORD *)lpMem + v19) = *(_OWORD *)v121;
      if ( v23 >= (int)v20 )
      {
        while ( 1 )
        {
          v21 = v25;
          v27 = *((int *)v25 + 3);
          v24 = (char *)v25 + *((int *)v25 + 1);
          v25 = (struct DXGI_SCROLL_RECT *)((char *)v25 + 8);
          v20 = ((__int64)v25 + v27 - (__int64)v24) >> 3;
          if ( (_DWORD)v20 )
            break;
          if ( v21 >= v22 )
            goto LABEL_21;
        }
        v23 = 0;
      }
LABEL_21:
      ++v19;
    }
    v5 = v113;
  }
LABEL_23:
  if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &MILEVENT_MEDIA_UCE_BLTDESKTOP_RECT) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &MILEVENT_MEDIA_UCE_BLTDESKTOP_Start, v125[1]);
    for ( i = 0; i < v125[1]; ++i )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0qn((unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context, v28, 0, v30, (__int64)lpMem + 16 * i);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &MILEVENT_MEDIA_UCE_BLTDESKTOP_Stop);
    v5 = v113;
  }
  if ( *((_BYTE *)this + 579) && (v7 & 1) == 0 )
  {
    v83 = *((_QWORD *)this + 53);
    v84 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v83 + 224LL);
    if ( *((_BYTE *)this + 580) )
    {
      v85 = v84(v83, 1LL);
      v18 = v85;
      if ( v85 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v85, 0x213u, 0LL);
        goto LABEL_51;
      }
    }
    else
    {
      v86 = v84(v83, 0LL);
      v18 = v86;
      if ( v86 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v86, 0x217u, 0LL);
        goto LABEL_51;
      }
    }
    v5 = v113;
  }
  v31 = v7 & 1;
  if ( (v7 & 1) == 0 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    if ( v5 )
      v87 = *((_DWORD *)v5 + 9);
    else
      v87 = 0;
    McTemplateU0qqq(
      (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (unsigned int)&EVTDESC_ETWGUID_PRESENT,
      v87,
      0,
      v7);
  }
  if ( v6 )
  {
    v90 = 0;
    v117 = 0LL;
    v91 = 0;
    LODWORD(v118) = 0;
    *(_OWORD *)v116 = 0LL;
    if ( !*((_DWORD *)this + 92) )
    {
LABEL_164:
      if ( CDWMSwapChain::ShouldConvertPresentToMPO(this) )
      {
        v98 = CDWMSwapChain::ConvertPresentToMultiplaneOverlay(
                v97,
                v111,
                v7,
                0LL,
                0LL,
                0LL,
                v125[1],
                (struct tagRECT *)lpMem,
                *((enum DXGI_COLOR_SPACE_TYPE *)this + 48));
        v18 = v98;
        if ( v98 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v99, 0LL, 0, v98, 0x270u, 0LL);
        v100 = 3LL;
        v101 = v7;
      }
      else
      {
        v103 = CD2DContext::D2DPresentDWM(
                 *(CD2DContext **)(*((_QWORD *)this + 2) + 80LL),
                 *((struct IDXGISwapChainDWM1 **)this + 53),
                 v112,
                 v114,
                 v125[1],
                 (const struct tagRECT *)lpMem,
                 v90,
                 v116[0],
                 0LL,
                 0);
        v18 = v103;
        if ( v103 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v104, 0LL, 0, v103, 0x27Eu, 0LL);
        v101 = v115;
        v100 = 0LL;
      }
      CDWMSwapChain::DbgSavePresentInfo(this, v100, v101, (unsigned int)v18, 1);
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v116);
      goto LABEL_43;
    }
    while ( 1 )
    {
      v92 = *((_QWORD *)this + 43) + 48LL * v91;
      if ( *(_DWORD *)v92 == 1 )
      {
        *(_QWORD *)v121 = *(_QWORD *)(v92 + 32);
        v93 = *(_OWORD *)(v92 + 16);
        v94 = v90 + 1;
        *(_OWORD *)&v121[8] = v93;
        if ( v90 + 1 >= v90 )
        {
          if ( v94 <= HIDWORD(v117) )
          {
            v95 = v90++;
            LODWORD(v118) = v94;
            v29 = 3 * v95;
            v96 = v116[0];
            *(_OWORD *)((char *)v116[0] + 8 * v29) = *(_OWORD *)v121;
            *((_QWORD *)v96 + v29 + 2) = *(_QWORD *)&v121[16];
            goto LABEL_163;
          }
          v102 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v116, 24, 1, v121);
          v18 = v102;
          if ( v102 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v102, 0xC3u, 0LL);
          v90 = (unsigned int)v118;
        }
        else
        {
          v18 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, -2147024362, 0xB8u, 0LL);
        }
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v18, 0x263u, 0LL);
          DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v116);
          goto LABEL_51;
        }
      }
LABEL_163:
      if ( ++v91 >= *((_DWORD *)this + 92) )
        goto LABEL_164;
    }
  }
  v32 = v125[1];
  v33 = (struct tagRECT *)lpMem;
  *(_OWORD *)v121 = 0uLL;
  if ( !v125[1] && *((_BYTE *)this + 579) && (v7 & 3) == 0 )
  {
    v33 = (struct tagRECT *)v121;
    v32 = 1;
  }
  if ( *((_DWORD *)this + 147) != 2 || *((_BYTE *)this + 583) )
  {
    if ( v5 )
      v34 = *((_DWORD *)v5 + 9);
    else
      v34 = 0;
    v35 = (__int64 *)*((_QWORD *)this + 53);
    v36 = v114 & 1;
    if ( (v114 & 1) != 0 )
      v37 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*v35 + 128))(*((_QWORD *)this + 53), v112, v114);
    else
      v37 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, struct tagRECT *, unsigned int, _QWORD, _DWORD, _QWORD, int))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 80LL) + 240LL) + 104LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 80LL) + 240LL),
              v35,
              v112,
              v114,
              v33,
              v32,
              0LL,
              0,
              0LL,
              v34);
    v18 = v37;
    if ( v37 == 142213121 )
    {
      v45 = *v35;
      v112 = 0;
      if ( (*(int (__fastcall **)(__int64 *, unsigned int *))(v45 + 240))(v35, &v112) >= 0 )
      {
        if ( v112 )
          RaiseFailFastException(0LL, 0LL, 0);
      }
    }
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v18, 0x24Au, 0LL);
    if ( !v36 )
    {
      v39 = (*((_DWORD *)this + 186) + 1) % 6u;
      v40 = g_pComposition;
      *((_DWORD *)this + 186) = v39;
      if ( v40 )
        v41 = *((_QWORD *)v40 + 48);
      else
        v41 = 0LL;
      *((_QWORD *)this + 3 * (int)v39 + 75) = v41;
      *((_DWORD *)this + 6 * *((int *)this + 186) + 152) = 0;
      *((_DWORD *)this + 6 * *((int *)this + 186) + 153) = v18;
      *((_DWORD *)this + 6 * *((int *)this + 186) + 154) = 1;
    }
  }
  else
  {
    v88 = CDWMSwapChain::ConvertPresentToMultiplaneOverlay(
            this,
            v111,
            v7,
            0LL,
            0LL,
            0LL,
            v32,
            v33,
            *((enum DXGI_COLOR_SPACE_TYPE *)this + 48));
    v18 = v88;
    if ( v88 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v89, 0LL, 0, v88, 0x23Cu, 0LL);
    CDWMSwapChain::DbgSavePresentInfo(this, 4LL, v7, (unsigned int)v18, 1);
  }
  if ( v18 == 142213167 )
  {
    *((_BYTE *)this + 579) = 1;
    goto LABEL_44;
  }
LABEL_43:
  if ( v18 < 0 )
    goto LABEL_51;
LABEL_44:
  if ( !v31 && *((_DWORD *)this + 148) )
  {
    CSwapChainBase::ReleaseD2DBitmaps(this);
    refreshed = CSwapChainBase::RefreshBackBufferViews(this);
    v18 = refreshed;
    if ( refreshed < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v106, 0LL, 0, refreshed, 0x28Eu, 0LL);
      goto LABEL_51;
    }
    --*((_DWORD *)this + 148);
  }
  if ( (v7 & 3) == 0 )
  {
    if ( *((_QWORD *)this + 66) )
    {
      v107 = *((_DWORD *)this + 136);
      if ( !v107 )
        v107 = *((_DWORD *)this + 40);
      *((_DWORD *)this + 136) = v107 - 1;
    }
    v42 = *((_QWORD *)this + 59);
    *((_QWORD *)this + 67) = v42;
    *((_BYTE *)this + 582) = !v42 && !*((_BYTE *)this + 584);
  }
LABEL_51:
  v43 = lpMem;
  *((_BYTE *)this + 577) = 0;
  if ( v43 != v123 )
    operator delete(v43);
  return (unsigned int)v18;
}
