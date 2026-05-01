/*
 * XREFs of ?GetMany@?$SimpleVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@4Collections@Foundation@6@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@KeyboardHosting@@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@PEAI@Z @ 0x18034E590
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption_KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality_KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption____XWinRT::IntVersionTag_::Do__lambda_8c1c21ab28514f86d440616c30b5b7ab___lambda_cca8e2aefe646e868e7a8134ba1e0907___ @ 0x18034D8E0 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_18034D8E0.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,XWinRT::IntVersionTag,0>::GetMany(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5)
{
  unsigned int v5; // ebx
  __int64 v7; // rdx
  unsigned int **v9[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v10[6]; // [rsp+30h] [rbp-30h] BYREF
  int v11; // [rsp+88h] [rbp+28h] BYREF
  unsigned int v12; // [rsp+90h] [rbp+30h] BYREF
  __int64 v13; // [rsp+98h] [rbp+38h] BYREF

  v13 = a4;
  v12 = a3;
  v11 = a2;
  v5 = 0;
  if ( a3 )
  {
    while ( 1 )
    {
      memset_0((void *)(a4 + 56LL * v5++), 0, 0x38uLL);
      if ( v5 >= v12 )
        break;
      a4 = v13;
    }
  }
  v10[0] = a1;
  *a5 = 0;
  v7 = *(_QWORD *)(a1 + 40);
  v9[0] = &a5;
  v9[1] = (unsigned int **)&v13;
  v10[1] = &v11;
  v10[2] = &v12;
  v10[3] = &v13;
  v10[4] = &a5;
  return XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption_KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality_KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption____XWinRT::IntVersionTag_::Do__lambda_8c1c21ab28514f86d440616c30b5b7ab___lambda_cca8e2aefe646e868e7a8134ba1e0907___(
           (unsigned int *)(a1 + 48),
           v7,
           (__int64)v10,
           v9);
}
