/*
 * XREFs of ?OnTargetedMessage@CControlCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x18014DB90
 * Callers:
 *     ?OnMessage@CControlCenterExperienceManager@@UEAAJI_K_J@Z @ 0x18014DAA0 (-OnMessage@CControlCenterExperienceManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001432C (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActionCenterDidntLaunchInSpecifiedTime@AEBK@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXAEBK@Z @ 0x1801481CC (--$ActionCenterDidntLaunchInSpecifiedTime@AEBK@NotificationCenterTelemetry@NotificationCenterUIT.c)
 *     ?Hide@CControlCenterExperienceManager@@AEAAJXZ @ 0x18014D3C4 (-Hide@CControlCenterExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CControlCenterExperienceManager::OnTargetedMessage(__int64 a1, int a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( a2 != 1 )
    {
      v3 = -2147418113;
      v4 = 329LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
      return (unsigned int)v3;
    }
    NotificationCenterUITelemetry::NotificationCenterTelemetry::ActionCenterDidntLaunchInSpecifiedTime<unsigned long const &>((__int64)&unk_180470F70);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (struct _TP_TIMER **)(a1 + 456),
      0LL);
    v5 = CControlCenterExperienceManager::Hide((CControlCenterExperienceManager *)a1);
    v3 = v5;
    if ( v5 >= 0 )
      v3 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15A,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
    if ( v3 < 0 )
    {
      v4 = 324LL;
      goto LABEL_9;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 420) = 1;
  }
  return 0LL;
}
