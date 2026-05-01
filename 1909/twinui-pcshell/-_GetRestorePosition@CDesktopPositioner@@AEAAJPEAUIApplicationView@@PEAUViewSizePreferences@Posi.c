/*
 * XREFs of ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x18004A3C0
 * Callers:
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x1800ADDD4 (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 *     _lambda_7a5a95f5abfebd946f5aab3bf963af6e_::operator() @ 0x1803BFEA4 (_lambda_7a5a95f5abfebd946f5aab3bf963af6e_--operator().c)
 * Callees:
 *     IsPeoplePane @ 0x18001F30C (IsPeoplePane.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_PeopleBar@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180022A98 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_PeopleBar@@@wil@@CAX_NW4ReportingKin.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002B650 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180034EE0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x18004A03C (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPositi.c)
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x18004A5D8 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x18004A9BC (-_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIAppli.c)
 *     ?_UsePreferredSizeForStandaloneWindows@CDesktopPositioner@@AEBA_NPEAUIApplicationView@@@Z @ 0x18004AADC (-_UsePreferredSizeForStandaloneWindows@CDesktopPositioner@@AEBA_NPEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x1801F1A58 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedApplicationViewPosition@@@Z @ 0x1803C5128 (-_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedA.c)
 *     ?_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1803C5450 (-_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CDesktopPositioner::_GetRestorePosition(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct PositionerPropertySetHelpers::ViewSizePreferences *a3,
        struct IApplicationViewPosition **a4)
{
  struct IApplicationView *v8; // rdx
  int v9; // ebx
  HWND WindowForView; // rax
  __int64 v11; // rax
  int v12; // eax
  CDesktopPositioner *v13; // rcx
  int v14; // eax
  int LaunchPosition; // eax
  __int64 v17; // rdi
  int (__fastcall *v18)(__int64, _QWORD, struct IApplicationView **); // rbx
  int (__fastcall *v19)(struct IApplicationView *, __int64 *); // rbx
  struct IApplicationView *v20; // rbx
  int (__fastcall *v21)(struct IApplicationView *, GUID *, __int64 *); // rdi
  int v22; // eax
  CDesktopPositioner *v23; // rcx
  int v24; // eax
  struct IApplicationView *v25; // [rsp+20h] [rbp-99h] BYREF
  int v26; // [rsp+28h] [rbp-91h] BYREF
  __int64 v27; // [rsp+30h] [rbp-89h] BYREF
  struct IOcclusionBasedApplicationViewPosition *v28; // [rsp+38h] [rbp-81h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-79h] BYREF
  __int64 v30; // [rsp+48h] [rbp-71h]
  __int64 v31; // [rsp+50h] [rbp-69h]
  int v32; // [rsp+58h] [rbp-61h] BYREF
  __int64 v33; // [rsp+60h] [rbp-59h] BYREF
  __int64 v34; // [rsp+68h] [rbp-51h] BYREF
  __int64 v35; // [rsp+70h] [rbp-49h]
  __int64 v36; // [rsp+78h] [rbp-41h]
  int v37[2]; // [rsp+80h] [rbp-39h] BYREF
  int v38; // [rsp+8Ch] [rbp-2Dh]
  unsigned int v39[2]; // [rsp+90h] [rbp-29h] BYREF
  const char *v40; // [rsp+98h] [rbp-21h]
  __int64 v41; // [rsp+A0h] [rbp-19h]
  __int16 v42; // [rsp+A8h] [rbp-11h]
  __int64 v43; // [rsp+B0h] [rbp-9h]
  RECT rc; // [rsp+B8h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v43 = -2LL;
  *a4 = 0LL;
  *(_QWORD *)v39 = retaddr;
  v40 = "pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp";
  v41 = 0LL;
  v42 = 1436;
  wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::ReportUsageToService();
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)v37);
  if ( IsPeoplePane((__int64)a2)
    && (LaunchPosition = CDesktopPositioner::_GetLaunchPosition(this, a2, a4), v9 = LaunchPosition, LaunchPosition < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A0,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)LaunchPosition,
      (int)v25);
  }
  else
  {
    v9 = 0;
  }
  if ( v9 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v9,
      (int)v37,
      (struct wil::ThreadErrorContext *)0x60F183,
      (unsigned int)v39,
      (const struct DiagnosticsInfo *)v25);
  if ( *(_QWORD *)v37 )
    *(_DWORD *)(*(_QWORD *)v37 + 16LL) = v38;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A5,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v9,
      (int)v25);
    return (unsigned int)v9;
  }
  if ( *a4 )
    return 0LL;
  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(
                          (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2,
                          v8);
  if ( WindowForView && (GetWindowLongPtrW(WindowForView, -16) & 0x10000) != 0 )
  {
    *(_QWORD *)&rc.left = 0LL;
    *(_QWORD *)&rc.right = 0LL;
    v25 = 0LL;
    pv = 0LL;
    v30 = 0LL;
    v31 = 0LL;
    v11 = *(_QWORD *)a2;
    v30 = -1LL;
    v31 = -1LL;
    v12 = (*(__int64 (__fastcall **)(struct IApplicationView *, LPVOID *))(v11 + 488))(a2, &pv);
    v9 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5BA,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v12,
        (int)v25);
    }
    else
    {
      if ( !pv )
      {
        if ( !a3 || !*(_QWORD *)a3 )
          goto LABEL_47;
        v17 = *((_QWORD *)this + 34);
        v18 = *(int (__fastcall **)(__int64, _QWORD, struct IApplicationView **))(*(_QWORD *)v17 + 48LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
        if ( v18(v17, *(_QWORD *)a3, &v25) >= 0 )
        {
          v26 = 0;
          v34 = 0LL;
          v35 = 0LL;
          v36 = 0LL;
          v19 = *(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 136LL);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v34);
          v35 = -1LL;
          v36 = -1LL;
          if ( v19(a2, &v34) >= 0 )
            (*(void (__fastcall **)(struct IApplicationView *, __int64, int *))(*(_QWORD *)v25 + 152LL))(v25, v34, &v26);
          v27 = 0LL;
          if ( v26 )
          {
            v20 = v25;
            v21 = *(int (__fastcall **)(struct IApplicationView *, GUID *, __int64 *))(*(_QWORD *)v25 + 104LL);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
            if ( v21(v20, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2, &v27) >= 0
              && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v27 + 32LL))(v27, &v32) >= 0 )
            {
              if ( v32 == 2 )
              {
                v22 = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)v27 + 24LL))(v27, &rc);
                if ( v22 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x5D9,
                    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                    (const char *)(unsigned int)v22,
                    (int)v25);
              }
              else
              {
                v28 = 0LL;
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
                if ( CDesktopPositioner::_GetFullPositionSnapshot(v23, v25, &v28) >= 0 )
                {
                  v24 = (*(__int64 (__fastcall **)(struct IOcclusionBasedApplicationViewPosition *, RECT *))(*(_QWORD *)v28 + 56LL))(
                          v28,
                          &rc);
                  if ( v24 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x5E4,
                      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                      (const char *)(unsigned int)v24,
                      (int)v25);
                }
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
              }
            }
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v34);
        }
        if ( !pv )
        {
LABEL_47:
          if ( !CDesktopPositioner::_UsePreferredSizeForStandaloneWindows(v13, a2)
            && !IsRectEmpty(&rc)
            && CDesktopPositioner::_GetOffsetPosition(this, &rc, a4) >= 0 )
          {
            goto LABEL_19;
          }
        }
      }
      v33 = 0LL;
      if ( CDesktopPositioner::_GetPreferredPosition(this, a2, &rc, a4) >= 0
        || (v14 = CDesktopPositioner::_GetLaunchPosition(this, a2, a4), v9 = v14, v14 >= 0) )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
LABEL_19:
        if ( pv )
        {
          CoTaskMemFree(pv);
          pv = 0LL;
        }
        v30 = 0LL;
        v31 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5F7,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v14,
        (int)v25);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pv);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    return (unsigned int)v9;
  }
  return 2147943568LL;
}
