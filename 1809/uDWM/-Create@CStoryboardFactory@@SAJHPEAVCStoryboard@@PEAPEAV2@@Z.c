/*
 * XREFs of ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x180031594
 * Callers:
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x1800312D0 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 * Callees:
 *     ??0CSlideIn@@QEAA@XZ @ 0x1800066E8 (--0CSlideIn@@QEAA@XZ.c)
 *     ??0CSlideOut@@QEAA@XZ @ 0x180006714 (--0CSlideOut@@QEAA@XZ.c)
 *     ??0CSlide@@IEAA@XZ @ 0x180006748 (--0CSlide@@IEAA@XZ.c)
 *     ??0CLauncherAnimationBase@@IEAA@XZ @ 0x180007888 (--0CLauncherAnimationBase@@IEAA@XZ.c)
 *     ??0CFlyoutPopup@@IEAA@XZ @ 0x1800078C4 (--0CFlyoutPopup@@IEAA@XZ.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18002DC7C (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z @ 0x1800314E8 (-SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z.c)
 *     ??0CStoryboard@@IEAA@_N@Z @ 0x18003A668 (--0CStoryboard@@IEAA@_N@Z.c)
 *     ??0CFadeIn@@QEAA@XZ @ 0x18004B9F8 (--0CFadeIn@@QEAA@XZ.c)
 *     ??0CFade@@IEAA@XZ @ 0x18004BA24 (--0CFade@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004E2A2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ??0CAppArrangementBase@@IEAA@_N@Z @ 0x1800A2A08 (--0CAppArrangementBase@@IEAA@_N@Z.c)
 *     ??0CCrossFade@@QEAA@XZ @ 0x1800A2A54 (--0CCrossFade@@QEAA@XZ.c)
 *     ??0CFadeOut@@QEAA@XZ @ 0x1800A2A84 (--0CFadeOut@@QEAA@XZ.c)
 *     ??0CLaunchSwitchBase@@QEAA@XZ @ 0x1800A2AF8 (--0CLaunchSwitchBase@@QEAA@XZ.c)
 *     ??0CPanelAnimation@@QEAA@XZ @ 0x1800A2B38 (--0CPanelAnimation@@QEAA@XZ.c)
 *     ??0CVirtualDesktopSwitch@@QEAA@XZ @ 0x1800A2B64 (--0CVirtualDesktopSwitch@@QEAA@XZ.c)
 */

__int64 __fastcall CStoryboardFactory::Create(int a1, struct CStoryboard *a2, struct CStoryboard **a3)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  CLauncherAnimationBase *v8; // rax
  CStoryboard *v9; // rbx
  void **v10; // rax
  void **v11; // rcx
  int v12; // eax
  int v13; // ebx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  CSlideOut *v18; // rax
  CStoryboard *v19; // rax
  int v20; // ecx
  CLauncherAnimationBase *v21; // rax
  CStoryboard *v22; // rax
  int v23; // ecx
  int v24; // ecx
  CFadeIn *v25; // rax
  CFadeOut *v26; // rax
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  CFlyoutPopup *v32; // rax
  CSlideOut *v33; // rax
  CSlideOut *v34; // rax
  CStoryboard *v35; // rax
  CSlideIn *v36; // rax
  CSlideIn *v37; // rbx
  CFadeOut *v38; // rax
  CSlide *v39; // rax
  CFlyoutPopup *v40; // rax
  int v41; // ecx
  int v42; // ecx
  CStoryboard *v43; // rax
  CLaunchSwitchBase *v44; // rax
  CLaunchSwitchBase *v45; // rax
  CCrossFade *v46; // rax
  CStoryboard *v47; // rax
  int v48; // ecx
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  int v52; // ecx
  int v53; // ecx
  int v54; // ecx
  CStoryboard *v55; // rax
  CStoryboard *v56; // rax
  CPanelAnimation *v57; // rax
  CPanelAnimation *v58; // rax
  CStoryboard *v59; // rax
  CStoryboard *v60; // rax
  CAppArrangementBase *v61; // rax
  CAppArrangementBase *v62; // rax
  CStoryboard *v63; // rax
  int v64; // ecx
  int v65; // ecx
  int v66; // ecx
  CStoryboard *v67; // rax
  CStoryboard *v68; // rax
  __int64 v69; // rcx
  CStoryboard *v70; // rax
  CVirtualDesktopSwitch *v71; // rax
  CStoryboard *v72; // rax

  *a3 = 0LL;
  if ( a1 <= 66 )
  {
    if ( a1 == 66 )
    {
      v47 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                             WPF::g_pProcessHeap,
                             120LL);
      v9 = v47;
      if ( v47 )
      {
        memset_0(v47, 0, 0x78uLL);
        CFadeIn::CFadeIn(v9);
        v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
        v11 = &CTDBN::`vftable'{for `CBaseObject'};
        goto LABEL_9;
      }
      goto LABEL_36;
    }
    if ( a1 > 19 )
    {
      v5 = a1 - 34;
      if ( v5 )
      {
        v6 = v5 - 16;
        if ( !v6 )
        {
          v19 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                 WPF::g_pProcessHeap,
                                 120LL);
          v9 = v19;
          if ( v19 )
          {
            CStoryboard::CStoryboard(v19, 0);
            v10 = &CSlide::`vftable'{for `IAnimationListener'};
            v11 = &CWindowClose::`vftable'{for `CBaseObject'};
            goto LABEL_9;
          }
          goto LABEL_36;
        }
        v7 = v6 - 6;
        if ( !v7 )
        {
          v8 = (CLauncherAnimationBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                             + 8LL))(
                                           WPF::g_pProcessHeap,
                                           136LL);
          v9 = v8;
          if ( v8 )
          {
            CLauncherAnimationBase::CLauncherAnimationBase(v8);
            v10 = &CSlide::`vftable'{for `IAnimationListener'};
            v11 = &CLauncherLaunch::`vftable'{for `CBaseObject'};
LABEL_9:
            *((_QWORD *)v9 + 2) = v10;
            *(_QWORD *)v9 = v11;
            goto LABEL_10;
          }
          goto LABEL_36;
        }
        v20 = v7 - 1;
        if ( !v20 )
        {
          v21 = (CLauncherAnimationBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 8LL))(
                                            WPF::g_pProcessHeap,
                                            144LL);
          v9 = v21;
          if ( v21 )
          {
            CLauncherAnimationBase::CLauncherAnimationBase(v21);
            v10 = &CSlide::`vftable'{for `IAnimationListener'};
            *((_BYTE *)v9 + 136) = 0;
            v11 = &CLauncherDismiss::`vftable'{for `CBaseObject'};
            goto LABEL_9;
          }
          goto LABEL_36;
        }
        v41 = v20 - 1;
        if ( v41 )
        {
          v42 = v41 - 1;
          if ( v42 )
          {
            if ( v42 == 5 )
            {
              v43 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                                     WPF::g_pProcessHeap,
                                     120LL);
              v9 = v43;
              if ( v43 )
              {
                CStoryboard::CStoryboard(v43, 0);
                v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
                v11 = &CNoAnimation::`vftable'{for `CBaseObject'};
                goto LABEL_9;
              }
              goto LABEL_36;
            }
            return (unsigned int)-2147024809;
          }
          if ( !a2 )
            return (unsigned int)-2147024809;
          v44 = (CLaunchSwitchBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
                                       WPF::g_pProcessHeap,
                                       176LL);
          v9 = v44;
          if ( v44 )
          {
            CLaunchSwitchBase::CLaunchSwitchBase(v44);
            v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
            *((_BYTE *)v9 + 168) = 1;
            v11 = &CAppSwitch::`vftable'{for `CBaseObject'};
            goto LABEL_9;
          }
        }
        else
        {
          if ( !a2 )
            return (unsigned int)-2147024809;
          v45 = (CLaunchSwitchBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
                                       WPF::g_pProcessHeap,
                                       176LL);
          v9 = v45;
          if ( v45 )
          {
            CLaunchSwitchBase::CLaunchSwitchBase(v45);
            v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
            *((_BYTE *)v9 + 168) = 0;
            v11 = &CAppLaunch::`vftable'{for `CBaseObject'};
            goto LABEL_9;
          }
        }
        goto LABEL_36;
      }
      v46 = (CCrossFade *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                            WPF::g_pProcessHeap,
                            120LL);
      if ( !v46 )
        goto LABEL_36;
      v26 = CCrossFade::CCrossFade(v46);
LABEL_35:
      v9 = v26;
      goto LABEL_10;
    }
    if ( a1 == 19 )
    {
      v40 = (CFlyoutPopup *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                              WPF::g_pProcessHeap,
                              120LL);
      v9 = v40;
      if ( v40 )
      {
        CFlyoutPopup::CFlyoutPopup(v40);
        v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
        v11 = &CHidePopup::`vftable'{for `CBaseObject'};
        goto LABEL_9;
      }
      goto LABEL_36;
    }
    v23 = a1 - 3;
    if ( !v23 )
    {
      v39 = (CSlide *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                        WPF::g_pProcessHeap,
                        128LL);
      v9 = v39;
      if ( v39 )
      {
        CSlide::CSlide(v39);
        v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
        v11 = &CReposition::`vftable'{for `CBaseObject'};
        goto LABEL_9;
      }
      goto LABEL_36;
    }
    v24 = v23 - 1;
    if ( !v24 )
    {
      v25 = (CFadeIn *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                         WPF::g_pProcessHeap,
                         120LL);
      if ( !v25 )
        goto LABEL_36;
      v26 = CFadeIn::CFadeIn(v25);
      goto LABEL_35;
    }
    v27 = v24 - 1;
    if ( !v27 )
    {
      v38 = (CFadeOut *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                          WPF::g_pProcessHeap,
                          120LL);
      if ( !v38 )
        goto LABEL_36;
      v26 = CFadeOut::CFadeOut(v38);
      goto LABEL_35;
    }
    v28 = v27 - 9;
    if ( !v28 )
    {
      v36 = (CSlideIn *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                          WPF::g_pProcessHeap,
                          128LL);
      v37 = v36;
      if ( !v36 )
        goto LABEL_36;
      memset_0(v36, 0, 0x80uLL);
      v26 = CSlideIn::CSlideIn(v37);
      goto LABEL_35;
    }
    v29 = v28 - 1;
    if ( v29 )
    {
      v30 = v29 - 1;
      if ( !v30 )
      {
        v34 = (CSlideOut *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                             WPF::g_pProcessHeap,
                             136LL);
        if ( !v34 )
          goto LABEL_36;
        v26 = CSlideOut::CSlideOut(v34);
        goto LABEL_35;
      }
      v31 = v30 - 1;
      if ( v31 )
      {
        if ( v31 == 1 )
        {
          v32 = (CFlyoutPopup *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL))(
                                  WPF::g_pProcessHeap,
                                  120LL);
          v9 = v32;
          if ( v32 )
          {
            CFlyoutPopup::CFlyoutPopup(v32);
            v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
            v11 = &CShowPopup::`vftable'{for `CBaseObject'};
            goto LABEL_9;
          }
          goto LABEL_36;
        }
        return (unsigned int)-2147024809;
      }
      v33 = (CSlideOut *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                           WPF::g_pProcessHeap,
                           136LL);
      v9 = v33;
      if ( !v33 )
      {
LABEL_36:
        v9 = 0LL;
        goto LABEL_10;
      }
      CSlideOut::CSlideOut(v33);
      v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
      v11 = &CSlideOutLong::`vftable'{for `CBaseObject'};
    }
    else
    {
      v35 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                             WPF::g_pProcessHeap,
                             128LL);
      v9 = v35;
      if ( !v35 )
        goto LABEL_36;
      memset_0(v35, 0, 0x80uLL);
      CSlideIn::CSlideIn(v9);
      v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
      v11 = &CSlideInLong::`vftable'{for `CBaseObject'};
    }
LABEL_22:
    *((_BYTE *)v9 + 68) = 1;
    goto LABEL_9;
  }
  if ( a1 <= 78 )
  {
    if ( a1 == 78 )
    {
      v63 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                             WPF::g_pProcessHeap,
                             128LL);
      v9 = v63;
      if ( !v63 )
        goto LABEL_36;
      memset_0(v63, 0, 0x80uLL);
      CSlideIn::CSlideIn(v9);
      v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
      v11 = &CDialogSwitch::`vftable'{for `CBaseObject'};
      goto LABEL_22;
    }
    v48 = a1 - 67;
    if ( v48 )
    {
      v49 = v48 - 1;
      if ( v49 )
      {
        v50 = v49 - 1;
        if ( v50 )
        {
          v51 = v50 - 1;
          if ( !v51 )
          {
            v59 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                                   WPF::g_pProcessHeap,
                                   120LL);
            v9 = v59;
            if ( v59 )
            {
              memset_0(v59, 0, 0x78uLL);
              CFade::CFade(v9);
              v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
              v11 = &CChangePanel::`vftable'{for `CBaseObject'};
              goto LABEL_9;
            }
            goto LABEL_36;
          }
          v52 = v51 - 1;
          if ( v52 )
          {
            v53 = v52 - 1;
            if ( v53 )
            {
              v54 = v53 - 3;
              if ( v54 )
              {
                if ( v54 != 2 )
                  return (unsigned int)-2147024809;
                v55 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
                                       WPF::g_pProcessHeap,
                                       120LL);
                v9 = v55;
                if ( v55 )
                {
                  CStoryboard::CStoryboard(v55, 0);
                  v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
                  v11 = &CInplaceResize::`vftable'{for `CBaseObject'};
                  goto LABEL_9;
                }
              }
              else
              {
                v56 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
                                       WPF::g_pProcessHeap,
                                       120LL);
                v9 = v56;
                if ( v56 )
                {
                  memset_0(v56, 0, 0x78uLL);
                  CCrossFade::CCrossFade(v9);
                  v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
                  v11 = &CSSCrossFade::`vftable'{for `CBaseObject'};
                  goto LABEL_9;
                }
              }
              goto LABEL_36;
            }
            v57 = (CPanelAnimation *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
                                       WPF::g_pProcessHeap,
                                       152LL);
            v9 = v57;
            if ( !v57 )
              goto LABEL_36;
            CPanelAnimation::CPanelAnimation(v57);
            v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
            v11 = &CShrinkPanel::`vftable'{for `CBaseObject'};
          }
          else
          {
            v58 = (CPanelAnimation *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
                                       WPF::g_pProcessHeap,
                                       152LL);
            v9 = v58;
            if ( !v58 )
              goto LABEL_36;
            CPanelAnimation::CPanelAnimation(v58);
            v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
            v11 = &CGrowPanel::`vftable'{for `CBaseObject'};
          }
          *((_BYTE *)v9 + 128) = 0;
          *(_QWORD *)((char *)v9 + 132) = 0LL;
          *(_QWORD *)((char *)v9 + 140) = 0LL;
          goto LABEL_9;
        }
        v60 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                               WPF::g_pProcessHeap,
                               128LL);
        v9 = v60;
        if ( !v60 )
          goto LABEL_36;
        CStoryboard::CStoryboard(v60, 0);
        v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
        v11 = &CAppLaunchSwitch::`vftable'{for `CBaseObject'};
LABEL_97:
        *((_BYTE *)v9 + 120) = 0;
        goto LABEL_9;
      }
      v61 = (CAppArrangementBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                                     WPF::g_pProcessHeap,
                                     192LL);
      v9 = v61;
      if ( !v61 )
        goto LABEL_36;
      CAppArrangementBase::CAppArrangementBase(v61, 1);
      v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
      v11 = &CAppArrangementDelayed::`vftable'{for `CBaseObject'};
    }
    else
    {
      v62 = (CAppArrangementBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                                     WPF::g_pProcessHeap,
                                     192LL);
      v9 = v62;
      if ( !v62 )
        goto LABEL_36;
      CAppArrangementBase::CAppArrangementBase(v62, 0);
      v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
      v11 = &CAppArrangementImmediate::`vftable'{for `CBaseObject'};
    }
    *((_QWORD *)v9 + 23) = 0LL;
    goto LABEL_9;
  }
  v15 = a1 - 81;
  if ( !v15 )
  {
    v72 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                           WPF::g_pProcessHeap,
                           120LL);
    v9 = v72;
    if ( v72 )
    {
      memset_0(v72, 0, 0x78uLL);
      CFadeOut::CFadeOut(v9);
      v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
      v11 = &CScreenshotFadeOut::`vftable'{for `CBaseObject'};
      goto LABEL_9;
    }
    goto LABEL_36;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    v22 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                           WPF::g_pProcessHeap,
                           128LL);
    v9 = v22;
    if ( !v22 )
      goto LABEL_36;
    memset_0(v22, 0, 0x80uLL);
    CSlideIn::CSlideIn(v9);
    v10 = &CSlide::`vftable'{for `IAnimationListener'};
    v11 = &CSlideInCharm::`vftable'{for `CBaseObject'};
    goto LABEL_22;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v18 = (CSlideOut *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                         WPF::g_pProcessHeap,
                         136LL);
    v9 = v18;
    if ( !v18 )
      goto LABEL_36;
    CSlideOut::CSlideOut(v18);
    v10 = &CSlide::`vftable'{for `IAnimationListener'};
    v11 = &CSlideOutCharm::`vftable'{for `CBaseObject'};
    goto LABEL_22;
  }
  v64 = v17 - 7;
  if ( !v64 )
  {
    v71 = (CVirtualDesktopSwitch *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                                     WPF::g_pProcessHeap,
                                     184LL);
    if ( !v71 )
      goto LABEL_36;
    v26 = CVirtualDesktopSwitch::CVirtualDesktopSwitch(v71);
    goto LABEL_35;
  }
  v65 = v64 - 1;
  if ( !v65 )
  {
    v70 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                           WPF::g_pProcessHeap,
                           128LL);
    v9 = v70;
    if ( !v70 )
      goto LABEL_36;
    CStoryboard::CStoryboard(v70, 0);
    v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
    v11 = &CTabletModeTransition::`vftable'{for `CBaseObject'};
    goto LABEL_97;
  }
  v66 = v65 - 1;
  if ( v66 )
  {
    if ( v66 != 1 )
      return (unsigned int)-2147024809;
    v67 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                           WPF::g_pProcessHeap,
                           120LL);
    v9 = v67;
    if ( v67 )
    {
      CStoryboard::CStoryboard(v67, 0);
      v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
      v11 = &CTabSwitch::`vftable'{for `CBaseObject'};
      goto LABEL_9;
    }
    goto LABEL_36;
  }
  v68 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                         WPF::g_pProcessHeap,
                         128LL);
  v9 = v68;
  if ( !v68 )
    goto LABEL_36;
  CStoryboard::CStoryboard(v68, 0);
  *(_BYTE *)(v69 + 120) = 1;
  *(_QWORD *)v69 = &CPPIWorkAreaResize::`vftable'{for `CBaseObject'};
  *(_QWORD *)(v69 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
LABEL_10:
  *a3 = v9;
  if ( !v9 )
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x187Eu);
LABEL_120:
    if ( *a3 )
    {
      CStoryboard::Release(*a3);
      *a3 = 0LL;
    }
    return (unsigned int)v13;
  }
  v12 = (*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)v9 + 8LL))(v9);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x1880u);
  }
  else if ( a2 )
  {
    CStoryboard::SetParentStoryboard(*a3, a2);
  }
  if ( v13 < 0 )
    goto LABEL_120;
  return (unsigned int)v13;
}
