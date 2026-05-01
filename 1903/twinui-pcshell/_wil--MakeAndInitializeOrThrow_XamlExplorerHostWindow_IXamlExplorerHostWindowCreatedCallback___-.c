/*
 * XREFs of _wil::MakeAndInitializeOrThrow_XamlExplorerHostWindow_IXamlExplorerHostWindowCreatedCallback___&_unsigned_long_&_IPrivilegedPresentationOperations___&_IXamlExplorerHost___&__::_1_::dtor$0 @ 0x1802B3E04
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FF570 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 */

void __fastcall wil::MakeAndInitializeOrThrow_XamlExplorerHostWindow_IXamlExplorerHostWindowCreatedCallback_____unsigned_long___IPrivilegedPresentationOperations_____IXamlExplorerHost______::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(*(__int64 **)(a2 + 80));
  }
}
