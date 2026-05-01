/*
 * XREFs of _CApplicationManager::UnensureApplication_::_1_::dtor$0 @ 0x18011AFC1
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FF570 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 */

void __fastcall CApplicationManager::UnensureApplication_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 104) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 104) &= ~1u;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)(a2 + 112));
  }
}
