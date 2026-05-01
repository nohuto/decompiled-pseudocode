/*
 * XREFs of ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18003D2F0
 * Callers:
 *     ?OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z @ 0x1800375A0 (-OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18003C140 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x18003CE00 (-ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ.c)
 *     ?GetListeners@CApplicationManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x18003D2D0 (-GetListeners@CApplicationManager@@UEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ??$_QueueNotification@UIApplicationView@@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIApplicationView@@@ZV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Z @ 0x180061930 (--$_QueueNotification@UIApplicationView@@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNo.c)
 *     ?_PrepareDeferredNotifications@CImmersiveMode@@AEAAXW4ZBID@@@Z @ 0x180065ADC (-_PrepareDeferredNotifications@CImmersiveMode@@AEAAXW4ZBID@@@Z.c)
 *     ?_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication@@IQEBU_GUID@@W4IMM_APP_SERVICE_NOTIFY_FLAGS@@@Z @ 0x1800FA1D8 (-_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication.c)
 *     ?_ScheduleLegacyModeNotification@CImmersiveMode@@AEAAXW4IMM_SYSTEM_MODE@@0@Z @ 0x1801022E8 (-_ScheduleLegacyModeNotification@CImmersiveMode@@AEAAXW4IMM_SYSTEM_MODE@@0@Z.c)
 *     ?_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransitionDirection@@@Z @ 0x1801B85F4 (-_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransit.c)
 *     ??$_QueueNotification@UIVirtualDesktop@@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@@ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@Z @ 0x18037FD0C (--$_QueueNotification@UIVirtualDesktop@@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNot.c)
 *     ??$_QueueNotification@UIVirtualDesktop@@U1@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@0@ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@2@Z @ 0x18037FE08 (--$_QueueNotification@UIVirtualDesktop@@U1@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktop.c)
 *     ?BeginAnimatedSwitch@VirtualDesktopAnimationSyncNotifications@@UEAAJPEAUIVirtualDesktop@@0PEAPEAUIVirtualDesktopAnimationNotificationInstance@@@Z @ 0x18038B700 (-BeginAnimatedSwitch@VirtualDesktopAnimationSyncNotifications@@UEAAJPEAUIVirtualDesktop@@0PEAPEA.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180088C30 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??$Make@VAgileCallbackArray@AgileRegistrationList@@AEAV?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAgileCallbackArray@AgileRegistrationList@@@12@AEAV?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@@Z @ 0x1800894AC (--$Make@VAgileCallbackArray@AgileRegistrationList@@AEAV-$vector@UItem@AgileRegistrationList@@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AgileRegistrationList::GetCallbackArray(RTL_SRWLOCK *this, struct IObjectArray **a2)
{
  RTL_SRWLOCK *v3; // rbx
  struct IObjectArray *v4; // rcx
  volatile int *v5; // rdx
  const char *v6; // r9
  struct IObjectArray *v7; // r10
  __int64 v8; // r10
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IObjectArray *v11; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v12; // [rsp+48h] [rbp+10h]

  *a2 = 0LL;
  v3 = this + 3;
  AcquireSRWLockShared(this + 3);
  v12 = v3;
  try
  {
    Microsoft::WRL::Details::Make<AgileRegistrationList::AgileCallbackArray,std::vector<AgileRegistrationList::Item> &>(&v11);
    v4 = v11;
    *a2 = v11;
    ((void (__fastcall *)(struct IObjectArray *))v4->lpVtbl->AddRef)(v4);
    v7 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference(
              (Microsoft::WRL::Details *)((char *)&v7[5].lpVtbl + 4),
              v5) )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 40LL))(v8, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
    if ( v3 )
      ReleaseSRWLockShared(v3);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3C,
                           (unsigned int)"internal\\shell\\private\\inc\\agileregistrationlist.h",
                           v6);
  }
  return result;
}
