/*
 * XREFs of ?First@?$SimpleVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@V?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IIterator@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@345@@Z @ 0x18033FA90
 * Callers:
 *     <none>
 * Callees:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion______XWinRT::IntVersionTag_::Do__lambda_c96e0d58300c1417143a18833a316e19___lambda_e5e4d18c277ba30337411cbd3c6122b5___ @ 0x18033B2CC (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_18033B2CC.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *,Windows::Foundation::Collections::Internal::Vector<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,XWinRT::IntVersionTag,0>::First(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 **v4; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  *a2 = 0LL;
  v4 = &v5;
  v3[0] = a1 - 16;
  v3[1] = &v5;
  return XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion______XWinRT::IntVersionTag_::Do__lambda_c96e0d58300c1417143a18833a316e19___lambda_e5e4d18c277ba30337411cbd3c6122b5___(
           (unsigned int *)(a1 + 32),
           *(_QWORD *)(a1 + 24),
           (__int64)v3,
           &v4);
}
