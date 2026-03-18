/*
 * XREFs of ?PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x1800AAF20
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@UtagRECT@@$03$0A@@@@Z @ 0x18002AEBC (--$AppendAllRectangles@V-$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV-$DynArrayIA@UtagRECT.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18005EBC8 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800AB370 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800AD850 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180145780 (McTemplateU0.c)
 *     McTemplateU0d @ 0x180147BF8 (McTemplateU0d.c)
 *     McTemplateU0qqq @ 0x180149014 (McTemplateU0qqq.c)
 *     McTemplateU0x @ 0x180149D54 (McTemplateU0x.c)
 *     ?SignalRenderFence@CD3DDeviceLevel1@@QEAAJ_K@Z @ 0x1801FD344 (-SignalRenderFence@CD3DDeviceLevel1@@QEAAJ_K@Z.c)
 *     ?D2DPresentDWM@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEBUtagRECT@@IPEBUDXGI_SCROLL_RECT@@PEAUIDXGIResource@@I@Z @ 0x1801FE1D8 (-D2DPresentDWM@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEBUtagRECT@@IPEBUDXGI_SCROLL_RECT@@.c)
 *     ?D2DPresentMultiplaneOverlay@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1801FE310 (-D2DPresentMultiplaneOverlay@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYP.c)
 *     ?ConvertPresentToMultiplaneOverlay@CDWMSwapChain@@AEAAJIIPEAUtagRECT@@0PEAUIDXGIResource@@I0W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180203EDC (-ConvertPresentToMultiplaneOverlay@CDWMSwapChain@@AEAAJIIPEAUtagRECT@@0PEAUIDXGIResource@@I0W4DX.c)
 *     ?DbgSavePresentInfo@CDWMSwapChain@@IEAAXW4DbgPresentType@1@IJI@Z @ 0x18020405C (-DbgSavePresentInfo@CDWMSwapChain@@IEAAXW4DbgPresentType@1@IJI@Z.c)
 *     ?DirectFlipRectRequiresPanelFitter@CDWMSwapChain@@AEBA_NAEBUtagRECT@@@Z @ 0x1802040F4 (-DirectFlipRectRequiresPanelFitter@CDWMSwapChain@@AEBA_NAEBUtagRECT@@@Z.c)
 *     ?ReleaseD2DBitmaps@CSwapChainBase@@IEAAXXZ @ 0x1802042A4 (-ReleaseD2DBitmaps@CSwapChainBase@@IEAAXXZ.c)
 *     ?ShouldConvertPresentToMPO@CDWMSwapChain@@AEBA_NXZ @ 0x1802044CC (-ShouldConvertPresentToMPO@CDWMSwapChain@@AEBA_NXZ.c)
 *     McTemplateU0qn @ 0x1802045B0 (McTemplateU0qn.c)
 *     McTemplateU0xqqqddddddddddddqqq @ 0x18020462C (McTemplateU0xqqqddddddddddddqqq.c)
 *     ?RefreshBackBufferViews@CSwapChainBase@@IEAAJXZ @ 0x180205738 (-RefreshBackBufferViews@CSwapChainBase@@IEAAJXZ.c)
 */

__int64 __fastcall CDWMSwapChain::PresentInternal(
        CDWMSwapChain *this,
        const struct CRegion *a2,
        unsigned int a3,
        unsigned int a4,
        const struct RenderTargetPresentParameters *a5)
{
  unsigned int v5; // edi
  unsigned int v7; // r13d
  FastRegion::CRegion *v8; // r8
  int v10; // r15d
  int v11; // edx
  int v12; // r9d
  int v13; // r14d
  unsigned int v14; // r9d
  struct tagRECT *v15; // rdx
  int v16; // r8d
  __int64 *v17; // rsi
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // edi
  __int64 v21; // rax
  struct tagRECT *v22; // rcx
  FastRegion::Internal::CRgnData **v24; // r14
  FastRegion::Internal::CRgnData *v25; // rdx
  char *v26; // r8
  __int64 v27; // rsi
  int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // r10d
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // r10d
  __int64 v34; // rcx
  __int64 v35; // rdx
  unsigned int v36; // ecx
  __int64 v37; // rax
  _DWORD *v38; // rcx
  __int64 v39; // rdx
  bool v40; // zf
  int v41; // eax
  CDWMSwapChain *v42; // rcx
  const struct tagRECT *v43; // r9
  struct IDXGIResource *v44; // r11
  CDWMSwapChain *v45; // rcx
  __int64 v46; // r10
  int v47; // eax
  unsigned int v48; // ecx
  __int64 v49; // rdx
  int v50; // eax
  unsigned int v51; // ecx
  __int64 v52; // r9
  unsigned int v53; // eax
  unsigned int v54; // ecx
  unsigned int i; // r15d
  __int64 v56; // r12
  __int64 v57; // rax
  int v58; // edx
  __int64 v59; // r8
  __int64 v60; // rcx
  const void *v61; // rdx
  __int64 v62; // rax
  int v63; // eax
  unsigned int v64; // ecx
  int v65; // r15d
  __int64 v66; // r12
  __int64 v67; // r13
  __int64 v68; // rcx
  int v69; // r9d
  __int64 v70; // rcx
  __int64 (__fastcall *v71)(__int64, __int64); // rax
  int v72; // r8d
  int v73; // eax
  unsigned int v74; // ecx
  unsigned int v75; // esi
  unsigned int v76; // r12d
  unsigned int v77; // r15d
  __int64 v78; // rdx
  unsigned int v79; // eax
  __int64 v80; // rax
  __int64 v81; // rcx
  struct DXGI_SCROLL_RECT *v82; // rax
  int v83; // eax
  CDWMSwapChain *v84; // rcx
  int v85; // eax
  unsigned int v86; // ecx
  __int64 v87; // rdx
  int v88; // eax
  unsigned int v89; // ecx
  int appended; // eax
  int v91; // eax
  int v92; // [rsp+20h] [rbp-110h]
  unsigned int v93; // [rsp+20h] [rbp-110h]
  struct tagRECT *v94; // [rsp+28h] [rbp-108h]
  int v95; // [rsp+30h] [rbp-100h]
  struct tagRECT *v96; // [rsp+38h] [rbp-F8h]
  unsigned int v97; // [rsp+48h] [rbp-E8h]
  int v99; // [rsp+B4h] [rbp-7Ch] BYREF
  unsigned int v100; // [rsp+B8h] [rbp-78h]
  struct DXGI_SCROLL_RECT *v101[2]; // [rsp+C0h] [rbp-70h] BYREF
  unsigned __int64 v102; // [rsp+D0h] [rbp-60h]
  __int64 v103; // [rsp+D8h] [rbp-58h]
  int v104; // [rsp+E0h] [rbp-50h]
  _BYTE v105[24]; // [rsp+F0h] [rbp-40h] BYREF
  struct tagRECT *v106; // [rsp+110h] [rbp-20h] BYREF
  struct tagRECT *v107; // [rsp+118h] [rbp-18h]
  int v108; // [rsp+120h] [rbp-10h]
  unsigned int v109[2]; // [rsp+124h] [rbp-Ch]
  _BYTE v110[128]; // [rsp+130h] [rbp+0h] BYREF

  v106 = (struct tagRECT *)v110;
  v5 = 0;
  v7 = a4;
  v107 = (struct tagRECT *)v110;
  v8 = a2;
  v108 = 8;
  *(_QWORD *)v109 = 8LL;
  v100 = a4;
  *(_QWORD *)v105 = a2;
  if ( *((_BYTE *)this + 569) )
  {
    CD3DDeviceLevel1::SignalRenderFence(
      *(CD3DDeviceLevel1 **)(*((_QWORD *)this + 2) + 80LL),
      *(_QWORD *)(*(_QWORD *)&g_pComposition + 368LL));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_PARALLEL_MODE_WAITING_FOR_NEXT_VSYNC_Start);
    WaitForSingleObject(*((HANDLE *)this + 58), 0x64u);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_PARALLEL_MODE_WAITING_FOR_NEXT_VSYNC_Stop);
    v8 = *(FastRegion::CRegion **)v105;
  }
  v10 = 0;
  if ( *((_DWORD *)this + 92) )
  {
    v38 = (_DWORD *)*((_QWORD *)this + 43);
    v39 = *((unsigned int *)this + 92);
    do
    {
      v40 = *v38 == 1;
      v41 = v10 + 1;
      v38 += 12;
      if ( !v40 )
        v41 = v10;
      v10 = v41;
      --v39;
    }
    while ( v39 );
  }
  if ( *((_QWORD *)this + 59) )
  {
    if ( CDWMSwapChain::DirectFlipRectRequiresPanelFitter(this, (const struct tagRECT *)((char *)this + 484))
      || CDWMSwapChain::DirectFlipRectRequiresPanelFitter(v42, v43) )
    {
      LOBYTE(v46) = 1;
    }
    else if ( !CDWMSwapChain::ShouldConvertPresentToMPO(v45) )
    {
      v47 = CD2DContext::D2DPresentDWM(
              *(CD2DContext **)(*((_QWORD *)this + 2) + 80LL),
              *((struct IDXGISwapChainDWM1 **)this + 53),
              a3,
              v7,
              (unsigned int)v46 & v92,
              (const struct tagRECT *)(v46 & (unsigned __int64)v94),
              (unsigned int)v46 & v95,
              (const struct DXGI_SCROLL_RECT *)(v46 & (unsigned __int64)v96),
              v44,
              (unsigned int)v46 & v97);
      v20 = v47;
      if ( v47 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v47, 0x162u);
      v49 = 1LL;
LABEL_78:
      CDWMSwapChain::DbgSavePresentInfo(this, v49, v7, (unsigned int)v20, 1);
      v13 = v7 & 1;
      if ( (v7 & 1) == 0 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0x(
          Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_ETWGUID_DIRECTFLIP_PRESENTEVENT,
          *((_QWORD *)this + 57),
          v52);
      goto LABEL_24;
    }
    v50 = CDWMSwapChain::ConvertPresentToMultiplaneOverlay(
            this,
            a3,
            v7,
            (struct tagRECT *)(((unsigned __int64)this + 484) & -(__int64)((_BYTE)v46 != 0)),
            (struct tagRECT *)((unsigned __int64)v43 & -(__int64)((_BYTE)v46 != 0)),
            v44,
            0,
            0LL,
            *((enum DXGI_COLOR_SPACE_TYPE *)this + 120));
    v20 = v50;
    if ( v50 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v50, 0x154u);
    v49 = 4LL;
    goto LABEL_78;
  }
  if ( *((_BYTE *)this + 576) )
  {
    v13 = v7 & 1;
    if ( (v7 & 1) == 0 )
    {
      v53 = *((_DWORD *)this + 135);
      v54 = 0;
      v99 = 0;
      for ( i = 0; v54 < v53; v99 = ++v54 )
      {
        v56 = 136LL * v54;
        v57 = *((_QWORD *)this + 68);
        if ( *(_DWORD *)(v57 + v56 + 4) )
        {
          if ( v8 && !*(_QWORD *)(v57 + v56 + 8) )
          {
            v109[1] = 0;
            appended = CRegion::AppendAllRectangles<DynArrayIA<tagRECT,4,0>>(v8, (__int64)&v106);
            v20 = appended;
            if ( appended < 0 )
            {
              v93 = 379;
              goto LABEL_113;
            }
            v5 = 0;
            v8 = *(FastRegion::CRegion **)v105;
            *(_DWORD *)(*((_QWORD *)this + 68) + v56 + 84) = v109[1];
            *(_QWORD *)(*((_QWORD *)this + 68) + v56 + 88) = v106;
            v54 = v99;
          }
          ++i;
        }
        v53 = *((_DWORD *)this + 135);
      }
      if ( dword_180308084 <= i )
      {
        dword_180308084 = i;
        v53 = *((_DWORD *)this + 135);
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        McTemplateU0d(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_OVERLAY_PRESENT_Start, v53);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          if ( *((_DWORD *)this + 135) )
          {
            do
            {
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
              {
                v59 = *((_QWORD *)this + 68);
                v60 = 136LL * v5;
                McTemplateU0xqqqddddddddddddqqq(
                  (unsigned int)Microsoft_Windows_Dwm_Core_Provider_Context,
                  v58,
                  *(_QWORD *)(v60 + v59 + 8),
                  *(_DWORD *)(v60 + v59 + 4),
                  *(_DWORD *)(v60 + v59),
                  *(_DWORD *)(v60 + v59 + 24),
                  *(_DWORD *)(v60 + v59 + 28),
                  *(_DWORD *)(v60 + v59 + 32),
                  *(_DWORD *)(v60 + v59 + 36),
                  *(_DWORD *)(v60 + v59 + 40),
                  *(_DWORD *)(v60 + v59 + 44),
                  *(_DWORD *)(v60 + v59 + 48),
                  *(_DWORD *)(v60 + v59 + 52),
                  *(_DWORD *)(v60 + v59 + 56),
                  *(_DWORD *)(v60 + v59 + 60),
                  *(_DWORD *)(v60 + v59 + 64),
                  *(_DWORD *)(v60 + v59 + 68),
                  *(_DWORD *)(v60 + v59 + 72),
                  *(_DWORD *)(v60 + v59 + 76),
                  *(_DWORD *)(v60 + v59 + 80),
                  *(_DWORD *)(v60 + v59 + 100));
              }
              ++v5;
            }
            while ( v5 < *((_DWORD *)this + 135) );
          }
        }
      }
    }
    v61 = (const void *)*((_QWORD *)this + 70);
    v62 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 70) = 0LL;
    v63 = CD2DContext::D2DPresentMultiplaneOverlay(
            *(CD2DContext **)(v62 + 80),
            *((struct IDXGISwapChainDWM1 **)this + 53),
            a3,
            v7,
            (enum DXGI_HDR_METADATA_TYPE)*((_DWORD *)this + 138),
            v61,
            *((_DWORD *)this + 135),
            *((const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY **)this + 68));
    v20 = v63;
    if ( v63 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v64, 0LL, 0, v63, 0x1B2u);
    CDWMSwapChain::DbgSavePresentInfo(this, 2LL, v7, (unsigned int)v20, *((_DWORD *)this + 135));
    if ( v20 >= 0 )
    {
      if ( (v7 & 1) != 0 )
        goto LABEL_24;
      v65 = *((_DWORD *)this + 135) - 1;
      v66 = v65;
      if ( v65 >= 0 )
      {
        v67 = 136LL * v65;
        do
        {
          v68 = *(_QWORD *)(*((_QWORD *)this + 68) + v67 + 8);
          if ( !v68 )
            break;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 16LL))(v68);
          --v65;
          v67 -= 136LL;
          --v66;
        }
        while ( v66 >= 0 );
        LOBYTE(v7) = v100;
      }
      *((_DWORD *)this + 135) = v65 + 1;
    }
    if ( !v13 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_OVERLAY_PRESENT_Stop);
    goto LABEL_24;
  }
  if ( v10 <= 0 || (v24 = (FastRegion::Internal::CRgnData **)((char *)this + 272), !**((_DWORD **)this + 34)) )
  {
    if ( !v8 || !**(_DWORD **)v8 )
      goto LABEL_7;
    v24 = (FastRegion::Internal::CRgnData **)v8;
  }
  if ( v24 )
  {
    v25 = *v24;
    v109[1] = 0;
    if ( *(_DWORD *)v25 )
    {
      v26 = (char *)v25 + 8 * *(_DWORD *)v25 + 4;
      v27 = (__int64)&v26[*((int *)v26 + 1) - (__int64)*((int *)v25 + 4) - ((_QWORD)v25 + 12)] >> 3;
    }
    else
    {
      LODWORD(v27) = 0;
    }
    v28 = DynArrayImpl<0>::Grow((unsigned int)&v106, 16, v27, 0, 0LL);
    v20 = v28;
    if ( v28 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x1A7u);
    else
      v109[1] += v27;
    if ( v20 < 0 )
    {
      v93 = 471;
      v69 = v20;
      goto LABEL_115;
    }
    FastRegion::Internal::CRgnData::BeginIterator(*v24, (struct FastRegion::CRegion::Iterator *)v101);
    while ( (struct DXGI_SCROLL_RECT *)v102 < v101[1] )
    {
      *(_DWORD *)&v105[4] = *(_DWORD *)v102;
      *(_DWORD *)&v105[12] = *(_DWORD *)(v102 + 8);
      v31 = 2 * v104;
      *(_DWORD *)v105 = *(_DWORD *)(v103 + 4 * v31);
      *(_DWORD *)&v105[8] = *(_DWORD *)(v103 + 4 * v31 + 4);
      v32 = v30;
      v106[v32] = *(struct tagRECT *)v105;
      FastRegion::Internal::CRgnData::StepIterator(
        (FastRegion::Internal::CRgnData *)(v32 * 2),
        (struct FastRegion::CRegion::Iterator *)v101);
      v30 = v33 + 1;
    }
    v5 = 0;
  }
LABEL_7:
  if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context[0], &MILEVENT_MEDIA_UCE_BLTDESKTOP_RECT) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0d(Microsoft_Windows_Dwm_Core_Provider_Context, &MILEVENT_MEDIA_UCE_BLTDESKTOP_Start, v109[1]);
    if ( v109[1] )
    {
      do
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0qn((unsigned int)Microsoft_Windows_Dwm_Core_Provider_Context, v11, 0, v12, (__int64)&v106[v5]);
        ++v5;
      }
      while ( v5 < v109[1] );
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &MILEVENT_MEDIA_UCE_BLTDESKTOP_Stop);
  }
  if ( *((_BYTE *)this + 571) && (v7 & 1) == 0 )
  {
    v70 = *((_QWORD *)this + 53);
    v71 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v70 + 224LL);
    if ( *((_BYTE *)this + 572) )
    {
      appended = v71(v70, 1LL);
      v20 = appended;
      if ( appended < 0 )
      {
        v93 = 499;
        goto LABEL_113;
      }
    }
    else
    {
      appended = v71(v70, 0LL);
      v20 = appended;
      if ( appended < 0 )
      {
        v93 = 503;
        goto LABEL_113;
      }
    }
  }
  v13 = v7 & 1;
  if ( (v7 & 1) == 0 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    if ( a5 )
      v72 = *((_DWORD *)a5 + 9);
    else
      v72 = 0;
    McTemplateU0qqq(
      (unsigned int)Microsoft_Windows_Dwm_Core_Provider_Context,
      (unsigned int)&EVTDESC_ETWGUID_PRESENT,
      v72,
      0,
      v7);
  }
  if ( v10 )
  {
    v102 = 0LL;
    v75 = 0;
    LODWORD(v103) = 0;
    v76 = 0;
    *(_OWORD *)v101 = 0LL;
    if ( *((_DWORD *)this + 92) )
    {
      v77 = v100;
      while ( 1 )
      {
        v78 = *((_QWORD *)this + 43);
        if ( *(_DWORD *)(v78 + 48LL * v76) == 1 )
        {
          *(_QWORD *)v105 = *(_QWORD *)(v78 + 48LL * v76 + 32);
          v79 = v75 + 1;
          if ( v75 + 1 >= v75 )
            v77 = v75 + 1;
          v20 = v79 < v75 ? 0x80070216 : 0;
          *(_OWORD *)&v105[8] = *(_OWORD *)(v78 + 48LL * v76 + 16);
          if ( v79 < v75 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(6 * v76, 0LL, 0, v20, 0xB5u);
          }
          else if ( v77 > HIDWORD(v102) )
          {
            v83 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v101, 24, 1, v105);
            v20 = v83;
            if ( v83 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v81, 0LL, 0, v83, 0xC0u);
            v75 = v103;
          }
          else
          {
            v80 = v75;
            v75 = v77;
            LODWORD(v103) = v77;
            v81 = 3 * v80;
            v82 = v101[0];
            *(_OWORD *)((char *)v101[0] + 8 * v81) = *(_OWORD *)v105;
            *((_QWORD *)v82 + v81 + 2) = *(_QWORD *)&v105[16];
          }
          if ( v20 < 0 )
            break;
        }
        if ( ++v76 >= *((_DWORD *)this + 92) )
          goto LABEL_161;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v81, 0LL, 0, v20, 0x243u);
      DynArrayImpl<1>::~DynArrayImpl<1>((void **)v101);
      goto LABEL_31;
    }
LABEL_161:
    if ( CDWMSwapChain::ShouldConvertPresentToMPO(this) )
    {
      v85 = CDWMSwapChain::ConvertPresentToMultiplaneOverlay(
              v84,
              a3,
              v7,
              0LL,
              0LL,
              0LL,
              v109[1],
              v106,
              *((enum DXGI_COLOR_SPACE_TYPE *)this + 48));
      v20 = v85;
      if ( v85 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v86, 0LL, 0, v85, 0x250u);
      v87 = 3LL;
    }
    else
    {
      v88 = CD2DContext::D2DPresentDWM(
              *(CD2DContext **)(*((_QWORD *)this + 2) + 80LL),
              *((struct IDXGISwapChainDWM1 **)this + 53),
              a3,
              v7,
              v109[1],
              v106,
              v75,
              v101[0],
              0LL,
              0);
      v20 = v88;
      if ( v88 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v89, 0LL, 0, v88, 0x25Eu);
      v87 = 0LL;
    }
    CDWMSwapChain::DbgSavePresentInfo(this, v87, v7, (unsigned int)v20, 1);
    DynArrayImpl<1>::~DynArrayImpl<1>((void **)v101);
  }
  else
  {
    v14 = v109[1];
    v15 = v106;
    *(_OWORD *)v105 = 0uLL;
    if ( !v109[1] && *((_BYTE *)this + 571) && (v7 & 3) == 0 )
    {
      v15 = (struct tagRECT *)v105;
      v14 = 1;
    }
    if ( *((_DWORD *)this + 145) != 2 || *((_BYTE *)this + 575) )
    {
      if ( a5 )
        v16 = *((_DWORD *)a5 + 9);
      else
        v16 = 0;
      v17 = (__int64 *)*((_QWORD *)this + 53);
      if ( (v7 & 1) != 0 )
      {
        v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*v17 + 128))(*((_QWORD *)this + 53), a3, v7);
      }
      else
      {
        v34 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 80LL) + 240LL);
        v18 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD, struct tagRECT *, unsigned int, _QWORD, _DWORD, _QWORD, int))(*(_QWORD *)v34 + 104LL))(
                v34,
                v17,
                a3,
                v7,
                v15,
                v14,
                0LL,
                0,
                0LL,
                v16);
      }
      v20 = v18;
      if ( v18 == 142213121 )
      {
        v37 = *v17;
        v99 = 0;
        if ( (*(int (__fastcall **)(__int64 *, int *))(v37 + 240))(v17, &v99) >= 0 )
        {
          if ( v99 )
            RaiseFailFastException(0LL, 0LL, 0);
        }
      }
      if ( v20 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v20, 0x22Au);
      if ( (v7 & 1) == 0 )
      {
        v35 = *(_QWORD *)&g_pComposition;
        v36 = (*((_DWORD *)this + 184) + 1) % 6u;
        *((_DWORD *)this + 184) = v36;
        if ( v35 )
          v35 = *(_QWORD *)(v35 + 368);
        *((_QWORD *)this + 3 * (int)v36 + 74) = v35;
        *((_DWORD *)this + 6 * *((int *)this + 184) + 150) = 0;
        *((_DWORD *)this + 6 * *((int *)this + 184) + 151) = v20;
        *((_DWORD *)this + 6 * *((int *)this + 184) + 152) = 1;
      }
    }
    else
    {
      v73 = CDWMSwapChain::ConvertPresentToMultiplaneOverlay(
              this,
              a3,
              v7,
              0LL,
              0LL,
              0LL,
              v14,
              v15,
              *((enum DXGI_COLOR_SPACE_TYPE *)this + 48));
      v20 = v73;
      if ( v73 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v74, 0LL, 0, v73, 0x21Cu);
      CDWMSwapChain::DbgSavePresentInfo(this, 4LL, v7, (unsigned int)v20, 1);
    }
    if ( v20 == 142213167 )
      *((_BYTE *)this + 571) = 1;
  }
LABEL_24:
  if ( v20 < 0 )
    goto LABEL_31;
  if ( !v13 && *((_DWORD *)this + 146) )
  {
    CSwapChainBase::ReleaseD2DBitmaps(this);
    appended = CSwapChainBase::RefreshBackBufferViews(this);
    v20 = appended;
    if ( appended < 0 )
    {
      v93 = 622;
LABEL_113:
      v69 = appended;
LABEL_115:
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v69, v93);
      goto LABEL_31;
    }
    --*((_DWORD *)this + 146);
  }
  if ( (v7 & 3) == 0 )
  {
    if ( *((_QWORD *)this + 65) )
    {
      v91 = *((_DWORD *)this + 134);
      if ( !v91 )
        v91 = *((_DWORD *)this + 40);
      *((_DWORD *)this + 134) = v91 - 1;
    }
    v21 = *((_QWORD *)this + 59);
    *((_QWORD *)this + 66) = v21;
    *((_BYTE *)this + 574) = !v21 && !*((_BYTE *)this + 576);
  }
LABEL_31:
  v22 = v106;
  *((_BYTE *)this + 569) = 0;
  if ( v22 != v107 )
    WPF::ProcessHeapImpl::Free(v22);
  return (unsigned int)v20;
}
