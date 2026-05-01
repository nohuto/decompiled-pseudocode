/*
 * XREFs of ?OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180195D28
 * Callers:
 *     ?OnMessage@CActionCenterExperienceManager@@UEAAJI_K_J@Z @ 0x180195CC0 (-OnMessage@CActionCenterExperienceManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180045F20 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x18007BFAC (-Hide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ??$ActionCenterDidntLaunchInSpecifiedTime@AEBK@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXAEBK@Z @ 0x1801932E4 (--$ActionCenterDidntLaunchInSpecifiedTime@AEBK@NotificationCenterTelemetry@NotificationCenterUIT.c)
 *     ?OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ @ 0x180195AE8 (-OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?ReadyToLaunch@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x18019604C (-ReadyToLaunch@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ.c)
 */

__int64 __fastcall CActionCenterExperienceManager::OnTargetedMessage(__int64 a1, int a2)
{
  int v3; // edx
  int v4; // ebx
  __int64 v5; // rdx
  int v6; // eax
  __int64 *ppv; // rbx
  HRESULT Instance; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      if ( v3 != 1 )
      {
        v4 = -2147418113;
        v5 = 467LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v5,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v4);
        return (unsigned int)v4;
      }
      v4 = CActionCenterExperienceManager::OnDpiOrHighContrastChanged((CActionCenterExperienceManager *)a1);
      if ( v4 < 0 )
      {
        v5 = 463LL;
        goto LABEL_17;
      }
    }
    else
    {
      NotificationCenterUITelemetry::NotificationCenterTelemetry::ActionCenterDidntLaunchInSpecifiedTime<unsigned long const &>((__int64)&unk_180511E20);
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
        (struct _TP_TIMER **)(a1 + 504),
        0LL);
      v6 = CActionCenterExperienceManager::Hide((CActionCenterExperienceManager *)a1);
      v4 = v6;
      if ( v6 >= 0 )
        v4 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1ED,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v6);
      if ( v4 < 0 )
      {
        v5 = 459LL;
        goto LABEL_17;
      }
    }
  }
  else
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::ReadyToLaunch();
    *(_BYTE *)(a1 + 444) = 1;
    ppv = (__int64 *)(a1 + 456);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(ppv);
    Instance = CoCreateInstance(
                 &GUID_d18705be_fc2f_44c8_aeff_1cd49aea8fc1,
                 0LL,
                 0x17u,
                 &GUID_443b1739_3779_4aba_953b_9e4ff84dd4b6,
                 (LPVOID *)ppv);
    v4 = Instance;
    if ( Instance >= 0 )
      v4 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E3,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)Instance);
    if ( v4 < 0 )
    {
      v5 = 455LL;
      goto LABEL_17;
    }
  }
  return 0LL;
}
