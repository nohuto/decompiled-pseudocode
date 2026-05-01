/*
 * XREFs of ?get_Current@?$SimpleVectorIterator@IV?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAI@Z @ 0x18022D6F0
 * Callers:
 *     <none>
 * Callees:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_unsigned_int_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_unsigned_int__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_unsigned_int__Windows::Foundation::Collections::Internal::VectorOptions_unsigned_int_0_1_0____XWinRT::IntVersionTag_::Do__lambda_a4ca4008fbbf374173fd90cc977b2175___lambda_8cf1f580253b49c737bded7f6e409854___ @ 0x1802218FC (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_1802218FC.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<unsigned int,Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::VectorOptions<unsigned int,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,XWinRT::IntVersionTag,1>::get_Current(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // rdx
  _QWORD *v4[3]; // [rsp+20h] [rbp-18h] BYREF
  _DWORD **v5; // [rsp+40h] [rbp+8h] BYREF
  _DWORD *v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  v4[0] = (_QWORD *)a1;
  *a2 = 0;
  v2 = *(_QWORD *)(a1 + 64);
  v5 = &v6;
  v4[1] = &v6;
  return XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_unsigned_int_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_unsigned_int__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_unsigned_int__Windows::Foundation::Collections::Internal::VectorOptions_unsigned_int_0_1_0____XWinRT::IntVersionTag_::Do__lambda_a4ca4008fbbf374173fd90cc977b2175___lambda_8cf1f580253b49c737bded7f6e409854___(
           (unsigned int *)(a1 + 80),
           v2,
           v4,
           &v5);
}
