/*
 * XREFs of _wil::MakeAndInitializeOrThrow_XamlExplorerHostWindow_IXamlExplorerHostWindowCreatedCallback_____ptr64_&___ptr64_unsigned_long_&___ptr64_IPrivilegedPresentationOperations_____ptr64_&___ptr64_IXamlExplorerHost_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x18025BB20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800DD450 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 */

void __fastcall wil::MakeAndInitializeOrThrow_XamlExplorerHostWindow_IXamlExplorerHostWindowCreatedCallback_____ptr64_____ptr64_unsigned_long_____ptr64_IPrivilegedPresentationOperations_____ptr64_____ptr64_IXamlExplorerHost_____ptr64_____ptr64__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(*(__int64 **)(a2 + 80));
  }
}
