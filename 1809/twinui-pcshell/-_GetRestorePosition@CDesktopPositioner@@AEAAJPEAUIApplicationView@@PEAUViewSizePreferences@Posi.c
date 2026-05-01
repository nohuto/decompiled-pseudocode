/*
 * XREFs of ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180055F30
 * Callers:
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAK@Z @ 0x180055B10 (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAK@Z.c)
 *     _lambda_7a5a95f5abfebd946f5aab3bf963af6e_::operator() @ 0x18033BB90 (_lambda_7a5a95f5abfebd946f5aab3bf963af6e_--operator().c)
 * Callees:
 *     IsPeoplePane @ 0x180028600 (IsPeoplePane.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180039C30 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x18005609C (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPositi.c)
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x1800568F0 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_PeopleBar@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180056EFC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_PeopleBar@@@wil@@CAX_NW4ReportingKin.c)
 *     ?_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x18005767C (-_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIAppli.c)
 *     ?_UsePreferredSizeForStandaloneWindows@CDesktopPositioner@@AEBA_NPEAUIApplicationView@@@Z @ 0x180057750 (-_UsePreferredSizeForStandaloneWindows@CDesktopPositioner@@AEBA_NPEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18008B144 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedApplicationViewPosition@@@Z @ 0x180340D0C (-_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedA.c)
 *     ?_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180341020 (-_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CDesktopPositioner::_GetRestorePosition(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct PositionerPropertySetHelpers::ViewSizePreferences *a3,
        struct IApplicationViewPosition **a4)
{
  struct IApplicationView *v8; // rdx
  int v9; // ebx
  HWND WindowForView; // rax
  CDesktopPositioner *v11; // rcx
  int v12; // eax
  int LaunchPosition; // eax
  __int64 v15; // rdx
  __int64 v16; // rbx
  struct IApplicationView *v17; // rbx
  int v18; // eax
  CDesktopPositioner *v19; // rcx
  int v20; // eax
  struct IApplicationView *v21; // [rsp+20h] [rbp-59h] BYREF
  __int64 v22; // [rsp+28h] [rbp-51h] BYREF
  struct IOcclusionBasedApplicationViewPosition *v23; // [rsp+30h] [rbp-49h] BYREF
  int v24; // [rsp+38h] [rbp-41h] BYREF
  __int64 v25; // [rsp+40h] [rbp-39h] BYREF
  int v26[2]; // [rsp+48h] [rbp-31h] BYREF
  int v27; // [rsp+54h] [rbp-25h]
  unsigned int v28[2]; // [rsp+58h] [rbp-21h] BYREF
  const char *v29; // [rsp+60h] [rbp-19h]
  __int64 v30; // [rsp+68h] [rbp-11h]
  __int16 v31; // [rsp+70h] [rbp-9h]
  __int64 v32; // [rsp+78h] [rbp-1h]
  RECT rc; // [rsp+80h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v32 = -2LL;
  *a4 = 0LL;
  *(_QWORD *)v28 = retaddr;
  v29 = "pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp";
  v30 = 0LL;
  v31 = 1473;
  wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::ReportUsageToService();
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)v26);
  if ( IsPeoplePane((__int64)a2)
    && (LaunchPosition = CDesktopPositioner::_GetLaunchPosition(this, a2, a4), v9 = LaunchPosition, LaunchPosition < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C5,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)LaunchPosition);
  }
  else
  {
    v9 = 0;
  }
  if ( v9 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v9,
      (int)v26,
      (struct wil::ThreadErrorContext *)0x60F183,
      (unsigned int)v28,
      (const struct DiagnosticsInfo *)v21);
  if ( *(_QWORD *)v26 )
    *(_DWORD *)(*(_QWORD *)v26 + 16LL) = v27;
  if ( v9 < 0 )
  {
    v15 = 1482LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  if ( *a4 )
    return 0LL;
  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(
                          (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2,
                          v8);
  if ( !WindowForView || (GetWindowLongPtrW(WindowForView, -16) & 0x10000) == 0 )
  {
    v9 = -2147023728;
    v15 = 1493LL;
    goto LABEL_23;
  }
  *(_QWORD *)&rc.left = 0LL;
  *(_QWORD *)&rc.right = 0LL;
  v21 = 0LL;
  if ( a3 )
  {
    if ( *(_QWORD *)a3 )
    {
      v16 = *((_QWORD *)this + 34);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      if ( (*(int (__fastcall **)(__int64, _QWORD, struct IApplicationView **))(*(_QWORD *)v16 + 48LL))(
             v16,
             *(_QWORD *)a3,
             &v21) >= 0 )
      {
        v22 = 0LL;
        v17 = v21;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
        if ( (*(int (__fastcall **)(struct IApplicationView *, GUID *, __int64 *))(*(_QWORD *)v17 + 104LL))(
               v17,
               &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2,
               &v22) >= 0
          && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v22 + 32LL))(v22, &v24) >= 0 )
        {
          if ( v24 == 2 )
          {
            v18 = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)v22 + 24LL))(v22, &rc);
            if ( v18 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x5EC,
                (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                (const char *)(unsigned int)v18,
                (int)v21);
          }
          else
          {
            v23 = 0LL;
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
            if ( CDesktopPositioner::_GetFullPositionSnapshot(v19, v21, &v23) >= 0 )
            {
              v20 = (*(__int64 (__fastcall **)(struct IOcclusionBasedApplicationViewPosition *, RECT *))(*(_QWORD *)v23 + 56LL))(
                      v23,
                      &rc);
              if ( v20 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x5F7,
                  (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                  (const char *)(unsigned int)v20,
                  (int)v21);
            }
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
      }
    }
  }
  if ( !CDesktopPositioner::_UsePreferredSizeForStandaloneWindows(v11, a2)
    && !IsRectEmpty(&rc)
    && CDesktopPositioner::_GetOffsetPosition(this, &rc, a4) >= 0 )
  {
    goto LABEL_17;
  }
  v25 = 0LL;
  if ( (int)CDesktopPositioner::_GetPreferredPosition(this, a2, &rc, a4) >= 0
    || (v12 = CDesktopPositioner::_GetLaunchPosition(this, a2, a4), v9 = v12, v12 >= 0) )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
LABEL_17:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x60A,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  return (unsigned int)v9;
}
