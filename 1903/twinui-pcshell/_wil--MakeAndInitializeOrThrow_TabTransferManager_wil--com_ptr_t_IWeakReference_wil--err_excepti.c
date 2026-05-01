/*
 * XREFs of _wil::MakeAndInitializeOrThrow_TabTransferManager_wil::com_ptr_t_IWeakReference_wil::err_exception_policy__Windows::Internal::ComposableShell::Tabs::ITabDataModel___&_Windows::Internal::ComposableShell::Tabs::ITabController___&_Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker___&_IUnknown___&_IPrivilegedForegroundOperations___&__::_1_::dtor$0 @ 0x180255631
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FF570 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 */

void __fastcall wil::MakeAndInitializeOrThrow_TabTransferManager_wil::com_ptr_t_IWeakReference_wil::err_exception_policy__Windows::Internal::ComposableShell::Tabs::ITabDataModel_____Windows::Internal::ComposableShell::Tabs::ITabController_____Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker_____IUnknown_____IPrivilegedForegroundOperations______::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 64) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 64) &= ~1u;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(*(__int64 **)(a2 + 96));
  }
}
