/*
 * XREFs of ?IndexOf@?$SimpleVectorView@IV?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAIPEAE@Z @ 0x1803A65B0
 * Callers:
 *     <none>
 * Callees:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_unsigned_int_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_unsigned_int__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_unsigned_int__Windows::Foundation::Collections::Internal::DefaultVectorOptions_unsigned_int____XWinRT::IntVersionTag_::Do__lambda_9ac772da00b9c740326e8e008e912eb7___lambda_52871ae2a8a9559a366869937c6efa7b___ @ 0x1803A3DC8 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_1803A3DC8.c)
 */

__int64 Windows::Foundation::Collections::Internal::SimpleVectorView<unsigned int,Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,XWinRT::IntVersionTag,0>::IndexOf(
        __int64 a1,
        int a2,
        ...)
{
  __int64 v2; // rdx
  _QWORD v4[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v5[4]; // [rsp+30h] [rbp-20h] BYREF
  int v6; // [rsp+68h] [rbp+18h] BYREF
  _DWORD *v7; // [rsp+70h] [rbp+20h] BYREF
  va_list va; // [rsp+70h] [rbp+20h]
  _BYTE *v9; // [rsp+78h] [rbp+28h] BYREF
  va_list va1; // [rsp+78h] [rbp+28h]
  va_list va2; // [rsp+80h] [rbp+30h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v7 = va_arg(va1, _DWORD *);
  va_copy(va2, va1);
  v9 = va_arg(va2, _BYTE *);
  v6 = a2;
  *v7 = 0;
  v5[0] = a1;
  *v9 = 0;
  v2 = *(_QWORD *)(a1 + 40);
  va_copy((va_list)v4, va);
  va_copy((va_list)&v4[1], va1);
  v5[1] = &v6;
  va_copy((va_list)&v5[2], va);
  va_copy((va_list)&v5[3], va1);
  return XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_unsigned_int_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_unsigned_int__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_unsigned_int__Windows::Foundation::Collections::Internal::DefaultVectorOptions_unsigned_int____XWinRT::IntVersionTag_::Do__lambda_9ac772da00b9c740326e8e008e912eb7___lambda_52871ae2a8a9559a366869937c6efa7b___(
           (unsigned int *)(a1 + 48),
           v2,
           (__int64)v5,
           (__int64)v4);
}
