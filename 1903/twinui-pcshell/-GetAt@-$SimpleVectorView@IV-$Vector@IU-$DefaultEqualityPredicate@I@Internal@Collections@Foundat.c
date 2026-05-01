/*
 * XREFs of ?GetAt@?$SimpleVectorView@IV?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIPEAI@Z @ 0x18027D650
 * Callers:
 *     <none>
 * Callees:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_unsigned_int_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_unsigned_int__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_unsigned_int__Windows::Foundation::Collections::Internal::VectorOptions_unsigned_int_0_1_0____XWinRT::IntVersionTag_::Do__lambda_274be6df5af8e4ffa8c468a9f9cd3161___lambda_8540fbf29b2308a86d4a3af6be1d3b81___ @ 0x180276BDC (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vector_unsigned_.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<unsigned int,Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::VectorOptions<unsigned int,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,XWinRT::IntVersionTag,1>::GetAt(
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
  v3 = *(_QWORD *)(a1 + 72);
  v5[2] = &v8;
  return XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_unsigned_int_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_unsigned_int__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_unsigned_int__Windows::Foundation::Collections::Internal::VectorOptions_unsigned_int_0_1_0____XWinRT::IntVersionTag_::Do__lambda_274be6df5af8e4ffa8c468a9f9cd3161___lambda_8540fbf29b2308a86d4a3af6be1d3b81___(
           (unsigned int *)(a1 + 80),
           v3,
           (__int64)v5,
           &v6);
}
