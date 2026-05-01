/*
 * XREFs of ??1?$ComPtr@VXamlAllUpViewHost@@@WRL@Microsoft@@QEAA@XZ @ 0x18026AE98
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_XamlAllUpViewHost_IUnknown__::_1_::dtor$2 @ 0x180266E02 (_Microsoft--WRL--Details--MakeAndInitialize_XamlAllUpViewHost_IUnknown__--_1_--dtor$2.c)
 *     __lambda_bb5ee7a853464f85d103d6a4a4db2877_::_lambda_bb5ee7a853464f85d103d6a4a4db2877__::_1_::dtor$0 @ 0x1802686CC (__lambda_bb5ee7a853464f85d103d6a4a4db2877_--_lambda_bb5ee7a853464f85d103d6a4a4db2877__--_1_--dto.c)
 *     _XamlAllUpViewHost::AnimateDismissFrames_::_1_::dtor$0 @ 0x18026D736 (_XamlAllUpViewHost--AnimateDismissFrames_--_1_--dtor$0.c)
 *     _XamlAllUpViewHost::CreateFrameForMonitor_::_1_::dtor$11 @ 0x18026EC80 (_XamlAllUpViewHost--CreateFrameForMonitor_--_1_--dtor$11.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObservableObjectArray@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180273EF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObs_ea_180273EF0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<XamlAllUpViewHost>::~ComPtr<XamlAllUpViewHost>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ObservableObjectArray,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::Release(result);
  }
  return result;
}
