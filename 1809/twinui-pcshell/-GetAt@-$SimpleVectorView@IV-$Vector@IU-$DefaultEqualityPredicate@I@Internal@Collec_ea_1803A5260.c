/*
 * XREFs of ?GetAt@?$SimpleVectorView@IV?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAI@Z @ 0x1803A5260
 * Callers:
 *     <none>
 * Callees:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_unsigned_int_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_unsigned_int__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_unsigned_int__Windows::Foundation::Collections::Internal::DefaultVectorOptions_unsigned_int____XWinRT::IntVersionTag_::Do__lambda_5477d408798296a484b734cbbd923bcb___lambda_0ade9c380eb9f974542d8260e82d4b22___ @ 0x1803A3C78 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_1803A3C78.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<unsigned int,Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,XWinRT::IntVersionTag,0>::GetAt(
        __int64 a1,
        int a2,
        _DWORD *a3)
{
  __int64 v3; // rdx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF
  _DWORD **v6; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+58h] [rbp+10h] BYREF
  _DWORD *v8; // [rsp+60h] [rbp+18h] BYREF

  v8 = a3;
  v7 = a2;
  v5[0] = a1;
  *a3 = 0;
  v6 = &v8;
  v5[1] = &v7;
  v3 = *(_QWORD *)(a1 + 40);
  v5[2] = &v8;
  return XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_unsigned_int_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_unsigned_int__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_unsigned_int__Windows::Foundation::Collections::Internal::DefaultVectorOptions_unsigned_int____XWinRT::IntVersionTag_::Do__lambda_5477d408798296a484b734cbbd923bcb___lambda_0ade9c380eb9f974542d8260e82d4b22___(
           (unsigned int *)(a1 + 48),
           v3,
           (__int64)v5,
           &v6);
}
