/*
 * XREFs of ?SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z @ 0x18016AF50
 * Callers:
 *     ?OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18000C540 (-OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAU.c)
 * Callees:
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N1PEAPEAUHMONITOR__@@@Z @ 0x18001607C (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VStartExperienceWallpaperBackground@@V1@AEAPEAUHWND__@@PEAUIDCompositionDevice@@@Details@WRL@Microsoft@@YAJPEAPEAVStartExperienceWallpaperBackground@@AEAPEAUHWND__@@$$QEAPEAUIDCompositionDevice@@@Z @ 0x18016971C (--$MakeAndInitialize@VStartExperienceWallpaperBackground@@V1@AEAPEAUHWND__@@PEAUIDCompositionDev.c)
 *     ?UnsetBackgroundImage@CStartExperienceManager@@AEAAJXZ @ 0x18016B2D8 (-UnsetBackgroundImage@CStartExperienceManager@@AEAAJXZ.c)
 *     ?CreateDCompDevice@DesktopWallpaperHelpers@@SAJPEAPEAUIDCompositionDevice@@@Z @ 0x1803A2888 (-CreateDCompDevice@DesktopWallpaperHelpers@@SAJPEAPEAUIDCompositionDevice@@@Z.c)
 *     ?CreateDesktopWallpaperHWND@DesktopWallpaperHelpers@@SAJAEBUCRect@Geometry@@PEAPEAUHWND__@@@Z @ 0x1803A29C4 (-CreateDesktopWallpaperHWND@DesktopWallpaperHelpers@@SAJAEBUCRect@Geometry@@PEAPEAUHWND__@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CStartExperienceManager::SetBackgroundImage(CStartExperienceManager *this, void *a2)
{
  int v4; // eax
  int MonitorInformation; // ebx
  int v6; // eax
  struct CSingleViewShellExperience *v7; // rdx
  __int64 v8; // rdx
  HWND v9; // r14
  char v10; // r15
  int started; // eax
  __int64 v12; // rbx
  HWND v13; // rsi
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  bool v19; // [rsp+48h] [rbp-19h] BYREF
  HWND hWnd; // [rsp+50h] [rbp-11h] BYREF
  __int64 v21; // [rsp+58h] [rbp-9h] BYREF
  __int64 v22; // [rsp+60h] [rbp-1h] BYREF
  struct IDCompositionDevice *v23; // [rsp+68h] [rbp+7h] BYREF
  __int64 v24; // [rsp+70h] [rbp+Fh] BYREF
  struct tagRECT v25; // [rsp+78h] [rbp+17h] BYREF
  struct tagRECT v26; // [rsp+88h] [rbp+27h] BYREF
  __int64 v27; // [rsp+98h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v27 = -2LL;
  if ( *((_QWORD *)this + 76) )
    CStartExperienceManager::UnsetBackgroundImage(this);
  v23 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  v4 = DesktopWallpaperHelpers::CreateDCompDevice(&v23);
  MonitorInformation = v4;
  if ( v4 >= 0 )
  {
    v22 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    v6 = (**(__int64 (__fastcall ***)(struct IDCompositionDevice *, GUID *, __int64 *))v23)(
           v23,
           &GUID_d14b6158_c3fa_4bce_9c1f_b61d8665eab0,
           &v22);
    MonitorInformation = v6;
    if ( v6 < 0 )
    {
      v8 = 949LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
      goto LABEL_26;
    }
    MonitorInformation = CStartExperienceManager::GetMonitorInformation(
                           this,
                           v7,
                           &v25,
                           (enum EDGEUI_TRAYSTUCKPLACE *)&hWnd,
                           &v19,
                           &v26,
                           0LL);
    if ( MonitorInformation < 0 )
    {
LABEL_26:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
      goto LABEL_27;
    }
    v6 = DesktopWallpaperHelpers::CreateDesktopWallpaperHWND((const struct Geometry::CRect *)&v25, &hWnd);
    MonitorInformation = v6;
    if ( v6 < 0 )
    {
      v8 = 964LL;
      goto LABEL_10;
    }
    v9 = hWnd;
    *(_QWORD *)&v26.left = hWnd;
    v10 = 1;
    LOBYTE(v26.right) = 1;
    v21 = 0LL;
    *(_QWORD *)&v25.left = v23;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    started = Microsoft::WRL::Details::MakeAndInitialize<StartExperienceWallpaperBackground,StartExperienceWallpaperBackground,HWND__ * &,IDCompositionDevice *>(
                &v21,
                &hWnd,
                (struct IDCompositionDevice **)&v25);
    MonitorInformation = started;
    if ( started < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3CA,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)started);
      goto LABEL_24;
    }
    hWnd = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hWnd);
    v12 = v21;
    v13 = *(HWND *)(v21 + 40);
    if ( v13 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13 + 8LL))(*(_QWORD *)(v21 + 40));
      v13 = *(HWND *)(v12 + 40);
    }
    hWnd = v13;
    v24 = 0LL;
    v14 = v22;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    v15 = (*(__int64 (__fastcall **)(__int64, void *, GUID *, __int64 *))(*(_QWORD *)v14 + 232LL))(
            v14,
            a2,
            &GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89,
            &v24);
    MonitorInformation = v15;
    if ( v15 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, HWND))(*(_QWORD *)v24 + 24LL))(v24, v13);
      MonitorInformation = v15;
      if ( v15 >= 0 )
      {
        v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 24LL))(v22);
        MonitorInformation = v15;
        if ( v15 >= 0 )
        {
          v17 = v21;
          v21 = *((_QWORD *)this + 76);
          *((_QWORD *)this + 76) = v17;
          *((_QWORD *)this + 77) = v9;
          v10 = 0;
          MonitorInformation = 0;
          goto LABEL_23;
        }
        v16 = 984LL;
      }
      else
      {
        v16 = 983LL;
      }
    }
    else
    {
      v16 = 980LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v15);
LABEL_23:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hWnd);
LABEL_24:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    if ( v10 )
      DestroyWindow(v9);
    goto LABEL_26;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B3,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_27:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  return (unsigned int)MonitorInformation;
}
