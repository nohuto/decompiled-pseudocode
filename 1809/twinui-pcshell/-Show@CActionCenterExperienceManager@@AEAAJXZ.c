/*
 * XREFs of ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800754A8
 * Callers:
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800232B0 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     ?HotKeyInvoked@CActionCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windows@@@Z @ 0x180075460 (-HotKeyInvoked@CActionCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windo.c)
 *     ?StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z @ 0x18014B1A0 (-StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z.c)
 *     ?put_IsVisible@CActionCenterExperienceManager@@UEAAJE@Z @ 0x18014C180 (-put_IsVisible@CActionCenterExperienceManager@@UEAAJE@Z.c)
 * Callees:
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJXZ @ 0x180010C64 (-PositionView@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001432C (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x180018C04 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ActionCenterLaunchSkippedDueToPolicy@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x180148FAC (-ActionCenterLaunchSkippedDueToPolicy@NotificationCenterTelemetry@NotificationCenterUITelemetry@.c)
 */

__int64 __fastcall CActionCenterExperienceManager::Show(CActionCenterExperienceManager *this)
{
  struct _TP_TIMER *ThreadpoolTimer; // rax
  struct _TP_TIMER *v4; // rcx
  int v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 40) == 2 )
    return 0LL;
  if ( (unsigned int)SHWindowsPolicy(&POLID_DisableNotificationCenter) )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::ActionCenterLaunchSkippedDueToPolicy();
    return 2147943660LL;
  }
  if ( *((_BYTE *)this + 528) )
    return 2147943660LL;
  if ( !*((_QWORD *)this + 62) )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(lambda_3ad34f77c4773ee7686e2ec209cee4c5_::_lambda_invoker_cdecl_, this, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (struct _TP_TIMER **)this + 62,
      ThreadpoolTimer);
    v4 = (struct _TP_TIMER *)*((_QWORD *)this + 62);
    pftDueTime = (struct _FILETIME)-50000000LL;
    SetThreadpoolTimer(v4, &pftDueTime, 0, 0);
  }
  if ( *((_QWORD *)this + 18) )
  {
    v5 = CActionCenterExperienceManager::PositionView(this);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x26E,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
  }
  v7 = CSingleViewShellExperience::Show((__int64)this + 120, 0LL);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x271,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
