/*
 * XREFs of ?GetAt@?$SimpleVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@4Collections@Foundation@6@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@KeyboardHosting@@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x1802CDED0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption_KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality_KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption____XWinRT::IntVersionTag_::Do__lambda_abd32ff628dd0e0cdc4464c1438a242c___lambda_e90a49518b405247fc30b90a48097983___ @ 0x1802CD8D0 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_1802CD8D0.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,XWinRT::IntVersionTag,0>::GetAt(
        __int64 a1,
        int a2,
        void *a3)
{
  __int64 v4; // rdx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF
  void **v7; // [rsp+50h] [rbp+8h] BYREF
  int v8; // [rsp+58h] [rbp+10h] BYREF
  void *v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = a3;
  v8 = a2;
  memset_0(a3, 0, 0x38uLL);
  v4 = *(_QWORD *)(a1 + 40);
  v7 = &v9;
  v6[0] = a1;
  v6[1] = &v8;
  v6[2] = &v9;
  return XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption_KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality_KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption____XWinRT::IntVersionTag_::Do__lambda_abd32ff628dd0e0cdc4464c1438a242c___lambda_e90a49518b405247fc30b90a48097983___(
           (unsigned int *)(a1 + 48),
           v4,
           (__int64)v6,
           &v7);
}
