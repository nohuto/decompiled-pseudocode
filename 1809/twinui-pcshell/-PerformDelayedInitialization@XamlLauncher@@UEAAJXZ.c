/*
 * XREFs of ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18029C470
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180016910 (-QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?Stop@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180041D70 (-Stop@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x18008D1F0 (-IsShellLauncherEnabledForCurrentUser@@YA_NXZ.c)
 *     ?IsStartMenuSuppressedByShellLauncher@@YA_NXZ @ 0x180091920 (-IsStartMenuSuppressedByShellLauncher@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_25afb7c3f8f549299b357b9b6f42197a___ @ 0x18029933C (Windows--Internal--ComTaskPool--QueueTask__lambda_25afb7c3f8f549299b357b9b6f42197a___.c)
 *     ??0?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180299770 (--0-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     ??1PerformDelayedInitialization@StartWindowTelemetry@@QEAA@XZ @ 0x180299FAC (--1PerformDelayedInitialization@StartWindowTelemetry@@QEAA@XZ.c)
 *     ?InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x18029AB58 (-InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experi.c)
 *     ?InitializeJumpViewExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x18029B044 (-InitializeJumpViewExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Exper.c)
 *     ?InitializeStartExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x18029B150 (-InitializeStartExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experien.c)
 *     ?IsCredentialReset@@YA_NXZ @ 0x18029B65C (-IsCredentialReset@@YA_NXZ.c)
 *     ?IsUserOOBE@@YA_NXZ @ 0x18029B6F8 (-IsUserOOBE@@YA_NXZ.c)
 *     ?StartActivity@PerformDelayedInitialization@StartWindowTelemetry@@QEAAXXZ @ 0x18029CEB0 (-StartActivity@PerformDelayedInitialization@StartWindowTelemetry@@QEAAXXZ.c)
 *     ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x18029FB78 (-HasLoginCompleted@PerSessionState@@YA_NXZ.c)
 *     IsUserAssignedAccessSingleApp @ 0x1803B2710 (IsUserAssignedAccessSingleApp.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlLauncher::PerformDelayedInitialization(XamlLauncher *this)
{
  PerSessionState *v2; // rcx
  bool v3; // al
  int v4; // eax
  HRESULT v5; // eax
  unsigned int v6; // ebx
  HRESULT Service; // eax
  __int64 v8; // rdx
  struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *v10; // [rsp+48h] [rbp-C0h] BYREF
  void *ppvOut; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v12[2]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v13[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v12[1] = -2LL;
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v13,
    (__int64)"PerformDelayedInitialization");
  v13[0] = &StartWindowTelemetry::PerformDelayedInitialization::`vftable';
  StartWindowTelemetry::PerformDelayedInitialization::StartActivity((StartWindowTelemetry::PerformDelayedInitialization *)v13);
  v3 = IsUserOOBE()
    || IsCredentialReset()
    || (unsigned int)IsUserAssignedAccessSingleApp(-4LL)
    || IsShellLauncherEnabledForCurrentUser((__int64)v2) && IsStartMenuSuppressedByShellLauncher((__int64)v2);
  *((_BYTE *)this + 176) = v3;
  v4 = `IsRemoteAppSession'::`2'::s_stSessionType;
  if ( !`IsRemoteAppSession'::`2'::s_stSessionType )
  {
    LODWORD(v12[0]) = 0;
    WinStationQueryCurrentSessionInformation(39LL, &`IsRemoteAppSession'::`2'::s_stSessionType, 4LL, v12);
    v4 = 0;
    `IsRemoteAppSession'::`2'::s_stSessionType = 0;
  }
  *((_BYTE *)this + 178) = v4 == 5;
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
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
    Service = XamlLauncher::QueryService(
                (XamlLauncher *)((char *)this - 8),
                &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
                &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
                (void **)&v10);
    v6 = Service;
    if ( Service >= 0 )
    {
      Service = XamlLauncher::InitializeStartExperienceManager((XamlLauncher *)((char *)this - 56), v10);
      v6 = Service;
      if ( Service >= 0 )
      {
        Service = XamlLauncher::InitializeCortanaExperienceManager((XamlLauncher *)((char *)this - 56), v10);
        v6 = Service;
        if ( Service >= 0 )
        {
          Service = XamlLauncher::InitializeJumpViewExperienceManager((XamlLauncher *)((char *)this - 56), v10);
          v6 = Service;
          if ( Service >= 0 )
          {
            Service = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void *, unsigned __int64))(**((_QWORD **)this + 24)
                                                                                                  + 24LL))(
                        *((_QWORD *)this + 24),
                        *((_QWORD *)this + 6),
                        *((_QWORD *)this + 7),
                        ppvOut,
                        ((unsigned __int64)this + 16) & -(__int64)(this != (XamlLauncher *)56));
            v6 = Service;
            if ( Service >= 0 )
            {
              Windows::Internal::ComTaskPool::QueueTask__lambda_25afb7c3f8f549299b357b9b6f42197a___();
              wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v13);
              v6 = 0;
              goto LABEL_26;
            }
            v8 = 410LL;
          }
          else
          {
            v8 = 408LL;
          }
        }
        else
        {
          v8 = 405LL;
        }
      }
      else
      {
        v8 = 402LL;
      }
    }
    else
    {
      v8 = 400LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)Service);
LABEL_26:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
    goto LABEL_27;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x18B,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    (const char *)(unsigned int)v5);
LABEL_27:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  StartWindowTelemetry::PerformDelayedInitialization::~PerformDelayedInitialization((StartWindowTelemetry::PerformDelayedInitialization *)v13);
  return v6;
}
