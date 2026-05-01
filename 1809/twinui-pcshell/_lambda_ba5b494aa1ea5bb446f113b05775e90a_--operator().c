/*
 * XREFs of _lambda_ba5b494aa1ea5bb446f113b05775e90a_::operator() @ 0x18022540C
 * Callers:
 *     XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_bc8ac25bb7ed16b2f03b6bad4e9ea4f4___lambda_a3c8e308188640b6b3d4061a76232d7c___ @ 0x180221588 (XWinRT--detail--AtomicUpdates--AtomicUpdate__lambda_bc8ac25bb7ed16b2f03b6bad4e9ea4f4___lambda_a3.c)
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_unsigned_int_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_unsigned_int__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_unsigned_int__Windows::Foundation::Collections::Internal::VectorOptions_unsigned_int_0_1_0____XWinRT::IntVersionTag_::Do__lambda_b2cadbc0aafc62a65b9321ca994fb44a___lambda_a3c8e308188640b6b3d4061a76232d7c___ @ 0x1802219A0 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_1802219A0.c)
 *     ?GetMany@?$SimpleVectorIterator@IV?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAI0@Z @ 0x1803A5CF0 (-GetMany@-$SimpleVectorIterator@IV-$Vector@IU-$DefaultEqualityPredicate@I@Internal@_ea_1803A5CF0.c)
 * Callees:
 *     <none>
 */

_DWORD **__fastcall lambda_ba5b494aa1ea5bb446f113b05775e90a_::operator()(_QWORD **a1)
{
  _DWORD **result; // rax
  __int64 v2; // r9
  _DWORD *v3; // rdx

  result = (_DWORD **)*a1;
  v2 = 0LL;
  v3 = (_DWORD *)**a1;
  if ( *v3 )
  {
    do
    {
      *(_DWORD *)(*a1[1] + 4 * v2) = 0;
      v2 = (unsigned int)(v2 + 1);
      result = (_DWORD **)*a1;
      v3 = (_DWORD *)**a1;
    }
    while ( (unsigned int)v2 < *v3 );
  }
  *v3 = 0;
  return result;
}
