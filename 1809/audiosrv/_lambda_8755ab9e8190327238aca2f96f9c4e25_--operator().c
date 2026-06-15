/*
 * XREFs of _lambda_8755ab9e8190327238aca2f96f9c4e25_::operator() @ 0x180137864
 * Callers:
 *     XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_9ef20e102c9ff3746e773950a40b935c___lambda_1ee46c767369a144b0488965c9630b66___ @ 0x180135FB8 (XWinRT--detail--AtomicUpdates--AtomicUpdate__lambda_9ef20e102c9ff3746e773950a40b935c___lambda_1e.c)
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_HSTRING_______ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_HSTRING_______ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING_______ptr64__Windows::Foundation::Collections::Internal::VectorOptions_HSTRING_______ptr64_0_1_0____XWinRT::IntVersionTag_::Do__lambda_a7c74b6fa75c160f6799b3e214e3bf71___lambda_1ee46c767369a144b0488965c9630b66___ @ 0x1801361D0 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_1801361D0.c)
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_HSTRING_______ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_HSTRING_______ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING_______ptr64__Windows::Foundation::Collections::Internal::VectorOptions_HSTRING_______ptr64_0_1_0____XWinRT::IntVersionTag_::Do__lambda_f40cb7169fe531474511a10678f576c1___lambda_8755ab9e8190327238aca2f96f9c4e25___ @ 0x18013634C (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_18013634C.c)
 * Callees:
 *     <none>
 */

_DWORD **__fastcall lambda_8755ab9e8190327238aca2f96f9c4e25_::operator()(__int64 a1)
{
  _DWORD **result; // rax
  __int64 v2; // rbp
  _DWORD *v4; // rdx
  __int64 *v5; // rax
  __int64 v6; // rbx

  result = *(_DWORD ***)a1;
  v2 = 0LL;
  v4 = **(_DWORD ***)a1;
  if ( *v4 )
  {
    do
    {
      v5 = *(__int64 **)(a1 + 8);
      v6 = *v5;
      WindowsDeleteString(*(HSTRING *)(*v5 + 8 * v2));
      *(_QWORD *)(v6 + 8 * v2) = 0LL;
      *(_QWORD *)(**(_QWORD **)(a1 + 8) + 8 * v2) = 0LL;
      v2 = (unsigned int)(v2 + 1);
      result = *(_DWORD ***)a1;
      v4 = **(_DWORD ***)a1;
    }
    while ( (unsigned int)v2 < *v4 );
  }
  *v4 = 0;
  return result;
}
