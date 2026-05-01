/*
 * XREFs of ??1?$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180154A18
 * Callers:
 *     __lambda_d724fd238306415e4865b10bdd74c2f1_::operator()_::_1_::dtor$4 @ 0x1800C3978 (__lambda_d724fd238306415e4865b10bdd74c2f1_--operator()_--_1_--dtor$4.c)
 *     _CWin32ApplicationView::GetRootSwitchableOwner_::_1_::dtor$2 @ 0x1800C5702 (_CWin32ApplicationView--GetRootSwitchableOwner_--_1_--dtor$2.c)
 *     _CWin32ApplicationView::SetSizeConstraintsForDpi_::_1_::dtor$1 @ 0x1800C5792 (_CWin32ApplicationView--SetSizeConstraintsForDpi_--_1_--dtor$1.c)
 *     _CWinRTApplicationView::SetSizeConstraintsForDpi_::_1_::dtor$1 @ 0x1800C6128 (_CWinRTApplicationView--SetSizeConstraintsForDpi_--_1_--dtor$1.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CApplicationViewManager_IUnknown__::_1_::dtor$2 @ 0x1801538C6 (_Microsoft--WRL--Details--MakeAndInitialize_CApplicationViewManager_IUnknown__--_1_--dtor$2.c)
 *     _CApplicationViewManager::_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e____::_1_::dtor$2 @ 0x180154101 (_CApplicationViewManager--_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5_ea_180154101.c)
 *     _CApplicationViewManager::_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360____::_1_::dtor$3 @ 0x18015429F (_CApplicationViewManager--_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558b_ea_18015429F.c)
 *     _CWin32ApplicationView::EnumerateOwnershipTree_::_1_::dtor$5 @ 0x18015A58B (_CWin32ApplicationView--EnumerateOwnershipTree_--_1_--dtor$5.c)
 *     _CApplicationViewBase::SetEnterpriseId_::_1_::dtor$1 @ 0x18015EE6A (_CApplicationViewBase--SetEnterpriseId_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001C8A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImm.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CApplicationViewManager>::~ComPtr<CApplicationViewManager>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl,IWindowOccludedChangeListener>>::Release(result);
  }
  return result;
}
