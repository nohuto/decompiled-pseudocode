/*
 * XREFs of _lambda_ef46628475072de7df7d75dcf6ba9668_::operator() @ 0x1800A1B38
 * Callers:
 *     XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_54b93aa900597da253b48333495a28e6___lambda_86af9a40b48fabf7cf6d00c0576551d4___ @ 0x18009FDB4 (XWinRT--detail--AtomicUpdates--AtomicUpdate__lambda_54b93aa900597da253b48333495a28e6___lambda_86.c)
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_HSTRING_____Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_HSTRING______Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING______Windows::Foundation::Collections::Internal::VectorOptions_HSTRING_____0_1_0____XWinRT::IntVersionTag_::Do__lambda_389caf00aeb4e2361aaf11c0ff4364ed___lambda_ef46628475072de7df7d75dcf6ba9668___ @ 0x1800A00CC (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_1800A00CC.c)
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_HSTRING_____Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_HSTRING______Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING______Windows::Foundation::Collections::Internal::VectorOptions_HSTRING_____0_1_0____XWinRT::IntVersionTag_::Do__lambda_8663c0cd64b41de8bba77ca429328de7___lambda_86af9a40b48fabf7cf6d00c0576551d4___ @ 0x1800A0190 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_1800A0190.c)
 * Callees:
 *     ??1CopyableHString@ExperienceManagerUtils@@QEAA@XZ @ 0x1800A2560 (--1CopyableHString@ExperienceManagerUtils@@QEAA@XZ.c)
 */

_DWORD **__fastcall lambda_ef46628475072de7df7d75dcf6ba9668_::operator()(_QWORD **a1)
{
  _DWORD **result; // rax
  __int64 v2; // rsi
  _DWORD *v4; // rdx

  result = (_DWORD **)*a1;
  v2 = 0LL;
  v4 = (_DWORD *)**a1;
  if ( *v4 )
  {
    do
    {
      ExperienceManagerUtils::CopyableHString::~CopyableHString((ExperienceManagerUtils::CopyableHString *)(*a1[1] + 8 * v2));
      *(_QWORD *)(*a1[1] + 8 * v2) = 0LL;
      v2 = (unsigned int)(v2 + 1);
      result = (_DWORD **)*a1;
      v4 = (_DWORD *)**a1;
    }
    while ( (unsigned int)v2 < *v4 );
  }
  *v4 = 0;
  return result;
}
