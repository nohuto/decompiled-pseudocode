/*
 * XREFs of ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x180313860
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180038A20 (-Stop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800448F0 (-QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?IsStartMenuSuppressedByShellLauncher@@YA_NXZ @ 0x1800A8968 (-IsStartMenuSuppressedByShellLauncher@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x18019520C (-IsShellLauncherEnabledForCurrentUser@@YA_NXZ.c)
 *     ?IsUserOOBEOrCredentialReset@@YA_NXZ @ 0x1801E02DC (-IsUserOOBEOrCredentialReset@@YA_NXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_014daf4e80f8d9d33103ca7fb469f571___ @ 0x18031052C (Windows--Internal--ComTaskPool--QueueTask__lambda_014daf4e80f8d9d33103ca7fb469f571___.c)
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180310AB0 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ??1PerformDelayedInitialization@StartWindowTelemetry@@QEAA@XZ @ 0x1803112C8 (--1PerformDelayedInitialization@StartWindowTelemetry@@QEAA@XZ.c)
 *     ?InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x180311E7C (-InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experi.c)
 *     ?InitializeHolographicContextIdentifier@XamlLauncher@@AEAAJXZ @ 0x180312378 (-InitializeHolographicContextIdentifier@XamlLauncher@@AEAAJXZ.c)
 *     ?InitializeJumpViewExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x180312420 (-InitializeJumpViewExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Exper.c)
 *     ?InitializeStartExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x180312568 (-InitializeStartExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experien.c)
 *     ?StartActivity@PerformDelayedInitialization@StartWindowTelemetry@@QEAAXXZ @ 0x1803142A0 (-StartActivity@PerformDelayedInitialization@StartWindowTelemetry@@QEAAXXZ.c)
 *     ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x1803170F8 (-HasLoginCompleted@PerSessionState@@YA_NXZ.c)
 *     IsUserAssignedAccessSingleApp @ 0x180433F4C (IsUserAssignedAccessSingleApp.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlLauncher::PerformDelayedInitialization(XamlLauncher *this)
{
  PerSessionState *v2; // rcx
  bool v3; // al
  int v4; // eax
  HRESULT v5; // eax
  unsigned int v6; // ebx
  int Service; // eax
  __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // eax
  struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *v12; // [rsp+48h] [rbp-C0h] BYREF
  void *ppvOut; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v14[2]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v15[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v14[1] = -2LL;
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v15,
    (__int64)"PerformDelayedInitialization");
  v15[0] = &StartWindowTelemetry::PerformDelayedInitialization::`vftable';
  StartWindowTelemetry::PerformDelayedInitialization::StartActivity((StartWindowTelemetry::PerformDelayedInitialization *)v15);
  v3 = IsUserOOBEOrCredentialReset()
    || (unsigned int)IsUserAssignedAccessSingleApp(-4LL)
    || IsShellLauncherEnabledForCurrentUser((__int64)v2) && IsStartMenuSuppressedByShellLauncher((__int64)v2);
  *((_BYTE *)this + 200) = v3;
  v4 = `IsRemoteAppSession'::`2'::s_stSessionType;
  if ( !`IsRemoteAppSession'::`2'::s_stSessionType )
  {
    LODWORD(v14[0]) = 0;
    WinStationQueryCurrentSessionInformation(39LL, &`IsRemoteAppSession'::`2'::s_stSessionType, 4LL, v14);
    v4 = 0;
    `IsRemoteAppSession'::`2'::s_stSessionType = 0;
  }
  *((_BYTE *)this + 202) = v4 == 5;
  if ( !PerSessionState::HasLoginCompleted(v2) )
    SetWinEventHook(0x20u, 0x20u, 0LL, XamlLauncher::s_LauncherDesktopSwitchEventProc, 0, 0, 0);
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v5 = IUnknown_QueryService(
         *((IUnknown **)this - 5),
         &IID_IRealmActivationHistory,
         &GUID_67136e8b_6914_43f0_8f25_05619927d22e,
         &ppvOut);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v12 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    Service = XamlLauncher::QueryService(
                (XamlLauncher *)((char *)this - 8),
                &stru_18051FD48,
                &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
                (void **)&v12);
    v6 = Service;
    if ( Service >= 0 )
    {
      Service = XamlLauncher::InitializeStartExperienceManager((XamlLauncher *)((char *)this - 56), v12, v8);
      v6 = Service;
      if ( Service >= 0 )
      {
        Service = XamlLauncher::InitializeCortanaExperienceManager((XamlLauncher *)((char *)this - 56), v12);
        v6 = Service;
        if ( Service >= 0 )
        {
          Service = XamlLauncher::InitializeJumpViewExperienceManager((XamlLauncher *)((char *)this - 56), v12);
          v6 = Service;
          if ( Service >= 0 )
          {
            v10 = XamlLauncher::InitializeHolographicContextIdentifier((XamlLauncher *)((char *)this - 56));
            if ( v10 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x1A6,
                (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
                (const char *)(unsigned int)v10);
            Service = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void *, unsigned __int64))(**((_QWORD **)this + 27)
                                                                                                  + 24LL))(
                        *((_QWORD *)this + 27),
                        *((_QWORD *)this + 8),
                        *((_QWORD *)this + 9),
                        ppvOut,
                        ((unsigned __int64)this + 16) & -(__int64)(this != (XamlLauncher *)56));
            v6 = Service;
            if ( Service >= 0 )
            {
              Windows::Internal::ComTaskPool::QueueTask__lambda_014daf4e80f8d9d33103ca7fb469f571___();
              wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v15);
              v6 = 0;
              goto LABEL_27;
            }
            v9 = 424LL;
          }
          else
          {
            v9 = 419LL;
          }
        }
        else
        {
          v9 = 416LL;
        }
      }
      else
      {
        v9 = 413LL;
      }
    }
    else
    {
      v9 = 411LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)Service);
LABEL_27:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    goto LABEL_28;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x196,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    (const char *)(unsigned int)v5);
LABEL_28:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  StartWindowTelemetry::PerformDelayedInitialization::~PerformDelayedInitialization((StartWindowTelemetry::PerformDelayedInitialization *)v15);
  return v6;
}
