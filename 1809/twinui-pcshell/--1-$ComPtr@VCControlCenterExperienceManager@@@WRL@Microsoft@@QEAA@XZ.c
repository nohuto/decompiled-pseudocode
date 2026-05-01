/*
 * XREFs of ??1?$ComPtr@VCControlCenterExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18014CCD0
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CControlCenterExperienceManager_IInspectable_IServiceProvider_____ptr64_&___ptr64__::_1_::dtor$2 @ 0x18014C9CB (_Microsoft--WRL--Details--MakeAndInitialize_CControlCenterExperienceManager_IInspec_ea_18014C9CB.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CStartExperienceManager_IInspectable_IServiceProvider_____ptr64_&___ptr64__::_1_::dtor$2 @ 0x180169618 (_Microsoft--WRL--Details--MakeAndInitialize_CStartExperienceManager_IInspectable_IS_ea_180169618.c)
 *     _Microsoft::WRL::Details::Make_ViewGroupManager_ITitleBarController_____ptr64_&___ptr64_ITabViewManager_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x1801F99F6 (_Microsoft--WRL--Details--Make_ViewGroupManager_ITitleBarController_____ptr64_-___ptr64_ITabView.c)
 *     _wil::MakeOrThrow_ViewGroupManager_ITitleBarController_____ptr64_&___ptr64_ITabViewManager_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x1801F9A9B (_wil--MakeOrThrow_ViewGroupManager_ITitleBarController_____ptr64_-___ptr64_ITabViewManager_____p.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIControlCenterExperienceManager@6789@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180069C60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNoti.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CControlCenterExperienceManager>::~ComPtr<CControlCenterExperienceManager>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>::Release(result);
  }
  return result;
}
