/*
 * XREFs of ?IndexOf@?$SimpleVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@4Collections@Foundation@6@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@KeyboardHosting@@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@PEAIPEAE@Z @ 0x1802CE840
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_83b48329e18951eff7b4bb7ab50c44d3_::operator() @ 0x1802CDB7C (_lambda_83b48329e18951eff7b4bb7ab50c44d3_--operator().c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,XWinRT::IntVersionTag,0>::IndexOf(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _BYTE *a4)
{
  int v5; // ebx
  __int64 v6; // rsi
  int v7; // eax
  _BYTE *v9; // [rsp+20h] [rbp-30h] BYREF
  _DWORD *v10; // [rsp+28h] [rbp-28h] BYREF
  __int64 v11[4]; // [rsp+30h] [rbp-20h] BYREF

  v9 = a4;
  v10 = a3;
  *a3 = 0;
  v11[0] = a1;
  v11[1] = a2;
  *v9 = 0;
  v5 = *(_DWORD *)(a1 + 48);
  v6 = *(_QWORD *)(a1 + 40);
  v11[2] = (__int64)&v10;
  v11[3] = (__int64)&v9;
  if ( v5 >= 0 )
  {
    v7 = lambda_83b48329e18951eff7b4bb7ab50c44d3_::operator()(v11);
    v5 = v7;
    if ( *(_DWORD *)(a1 + 52) != *(_DWORD *)(v6 + 88) )
    {
      *(_DWORD *)(a1 + 48) = -2147483636;
      if ( v7 < 0 )
      {
        RoTransformError((unsigned int)v7, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        *v10 = 0;
        *v9 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v5, 0LL);
  }
  return (unsigned int)v5;
}
