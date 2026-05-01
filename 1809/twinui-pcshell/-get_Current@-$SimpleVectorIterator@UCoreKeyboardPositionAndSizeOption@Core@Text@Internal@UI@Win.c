/*
 * XREFs of ?get_Current@?$SimpleVectorIterator@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@4Collections@Foundation@6@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@KeyboardHosting@@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x1802CF3C0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption_KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality_KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption____XWinRT::IntVersionTag_::Do__lambda_dc095ebe6b7ab5166daa14a7efd2e61b___lambda_7635f4c0af2065777163368513e6d271___ @ 0x1802CDA2C (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_1802CDA2C.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,XWinRT::IntVersionTag,0>::get_Current(
        __int64 a1,
        void *a2)
{
  __int64 v3; // rdx
  _QWORD *v5[3]; // [rsp+20h] [rbp-18h] BYREF
  void **v6; // [rsp+40h] [rbp+8h] BYREF
  void *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  memset_0(a2, 0, 0x38uLL);
  v3 = *(_QWORD *)(a1 + 32);
  v6 = &v7;
  v5[0] = (_QWORD *)a1;
  v5[1] = &v7;
  return XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption_KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality_KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption____XWinRT::IntVersionTag_::Do__lambda_dc095ebe6b7ab5166daa14a7efd2e61b___lambda_7635f4c0af2065777163368513e6d271___(
           (unsigned int *)(a1 + 48),
           v3,
           v5,
           &v6);
}
