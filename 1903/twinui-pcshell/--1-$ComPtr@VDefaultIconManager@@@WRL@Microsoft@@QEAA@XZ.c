/*
 * XREFs of ??1?$ComPtr@VDefaultIconManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1802509E4
 * Callers:
 *     _Microsoft::WRL::Details::Make_DefaultIconManager_Windows::Internal::ComposableShell::Tabs::ITabDataModel___&_ITabViewManager___&_IImmersiveWindowMessageService___&__::_1_::dtor$0 @ 0x18024E497 (_Microsoft--WRL--Details--Make_DefaultIconManager_Windows--Internal--ComposableShell--Tabs--ITab.c)
 *     _wil::MakeOrThrow_DefaultIconManager_Windows::Internal::ComposableShell::Tabs::ITabDataModel___&_ITabViewManager___&_IImmersiveWindowMessageService___&__::_1_::dtor$0 @ 0x18024E72F (_wil--MakeOrThrow_DefaultIconManager_Windows--Internal--ComposableShell--Tabs--ITabDataModel___-.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDefaultIconManager@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180253040 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDe_ea_180253040.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<DefaultIconManager>::~ComPtr<DefaultIconManager>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDefaultIconManager,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
