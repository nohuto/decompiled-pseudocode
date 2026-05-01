/*
 * XREFs of ??1?$ComPtr@VDefaultIconManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1801FD770
 * Callers:
 *     _Microsoft::WRL::Details::Make_DefaultIconManager_Windows::Internal::ComposableShell::Tabs::ITabDataModel_____ptr64_&___ptr64_ITabViewManager_____ptr64_&___ptr64_IImmersiveWindowMessageService_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x1801FB77F (_Microsoft--WRL--Details--Make_DefaultIconManager_Windows--Internal--ComposableShell--Tabs--ITab.c)
 *     _wil::MakeOrThrow_DefaultIconManager_Windows::Internal::ComposableShell::Tabs::ITabDataModel_____ptr64_&___ptr64_ITabViewManager_____ptr64_&___ptr64_IImmersiveWindowMessageService_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x1801FBA17 (_wil--MakeOrThrow_DefaultIconManager_Windows--Internal--ComposableShell--Tabs--ITabDataModel____.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDefaultIconManager@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801FFE10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDe_ea_1801FFE10.c)
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
