/*
 * XREFs of _lambda_a3c8e308188640b6b3d4061a76232d7c_::operator() @ 0x180299A30
 * Callers:
 *     XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_1f25bd8ee63fa3be7e8e4d81566d165a___lambda_a3c8e308188640b6b3d4061a76232d7c___ @ 0x180295F48 (XWinRT--detail--AtomicUpdates--AtomicUpdate__lambda_1f25bd8ee63fa3be7e8e4d81566d165a___lambda_a3.c)
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_unsigned_int_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_unsigned_int__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_unsigned_int__Windows::Foundation::Collections::Internal::VectorOptions_unsigned_int_0_1_0____XWinRT::IntVersionTag_::Do__lambda_50d47402265d04ef4954bf0807805341___lambda_a3c8e308188640b6b3d4061a76232d7c___ @ 0x18029615C (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_18029615C.c)
 * Callees:
 *     <none>
 */

_DWORD **__fastcall lambda_a3c8e308188640b6b3d4061a76232d7c_::operator()(_QWORD **a1)
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
