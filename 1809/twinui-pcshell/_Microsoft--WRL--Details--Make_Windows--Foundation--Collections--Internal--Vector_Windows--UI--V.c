/*
 * XREFs of _Microsoft::WRL::Details::Make_Windows::Foundation::Collections::Internal::Vector_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion_____ptr64____Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion_____ptr64__const_&___ptr64_Windows::Foundation::Collections::Internal::Vector_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion_____ptr64___::permission__::_1_::dtor$0 @ 0x1802BEED2
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800DD450 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 */

void __fastcall Microsoft::WRL::Details::Make_Windows::Foundation::Collections::Internal::Vector_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion_____ptr64____Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion_____ptr64__const_____ptr64_Windows::Foundation::Collections::Internal::Vector_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion_____ptr64___::permission__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(*(__int64 **)(a2 + 80));
  }
}
