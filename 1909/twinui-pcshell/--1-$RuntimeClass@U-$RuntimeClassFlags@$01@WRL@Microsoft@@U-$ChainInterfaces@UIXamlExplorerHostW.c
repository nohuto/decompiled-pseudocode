/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIXamlExplorerHostWindowInternal@@UIXamlExplorerHostWindow@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VFtmBase@23@@WRL@Microsoft@@UEAA@XZ @ 0x180085908
 * Callers:
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_84b1643b811106f063aa32e54d395206___::_scalar_deleting_destructor_ @ 0x1800858D0 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_84b1643b811106f063aa32e54d39520.c)
 *     _AgileRegistrationList::AgileCallbackArray::AgileCallbackArray_::_1_::dtor$0 @ 0x18008F2C1 (_AgileRegistrationList--AgileCallbackArray--AgileCallbackArray_--_1_--dtor$0.c)
 *     _UwpAppStateManager::UwpAppStateManager_::_1_::dtor$0 @ 0x1800B634A (_UwpAppStateManager--UwpAppStateManager_--_1_--dtor$0.c)
 *     _Win32AppStateManager::Win32AppStateManager_::_1_::dtor$0 @ 0x1800BA66F (_Win32AppStateManager--Win32AppStateManager_--_1_--dtor$0.c)
 *     _XamlExplorerHostWindow::_XamlExplorerHostWindow_::_1_::dtor$0 @ 0x1802DBAD3 (_XamlExplorerHostWindow--_XamlExplorerHostWindow_--_1_--dtor$0.c)
 *     CAsyncCallbackWithLambda__lambda_6dcf47c7a64d744d561044cc52c68c53___::_scalar_deleting_destructor_ @ 0x18036B740 (CAsyncCallbackWithLambda__lambda_6dcf47c7a64d744d561044cc52c68c53___--_scalar_deleting_destructo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IXamlExplorerHostWindowInternal,IXamlExplorerHostWindow,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IXamlExplorerHostWindowInternal,IXamlExplorerHostWindow,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 44) = -1073741823;
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 32));
}
