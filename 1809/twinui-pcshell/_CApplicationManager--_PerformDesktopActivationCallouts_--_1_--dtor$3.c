/*
 * XREFs of _CApplicationManager::_PerformDesktopActivationCallouts_::_1_::dtor$3 @ 0x1800F9D8C
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800DD450 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 */

void __fastcall CApplicationManager::_PerformDesktopActivationCallouts_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 216) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 216) &= ~1u;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)(a2 + 72));
  }
}
