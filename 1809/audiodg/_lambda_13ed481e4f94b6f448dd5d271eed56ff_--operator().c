/*
 * XREFs of _lambda_13ed481e4f94b6f448dd5d271eed56ff_::operator() @ 0x14004855C
 * Callers:
 *     XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_13ed481e4f94b6f448dd5d271eed56ff___lambda_0696821e1577ed752ca873eaca1551df___ @ 0x1400463CC (XWinRT--detail--AtomicUpdates--AtomicUpdate__lambda_13ed481e4f94b6f448dd5d271eed56ff___lambda_06.c)
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Storage::Streams::IBuffer_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Storage::Streams::IBuffer_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Storage::Streams::IBuffer_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Storage::Streams::IBuffer_____ptr64____XWinRT::IntVersionTag_::Do__lambda_7dd1bba9f05022637c4cc11edd7c209b___lambda_2b4e95c994fbfcf834a48c0377dad5b5___ @ 0x1400467C0 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_1400467C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_13ed481e4f94b6f448dd5d271eed56ff_::operator()(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 result; // rax

  ***(_BYTE ***)a1 = 0;
  if ( a2 >= *(_DWORD *)(**(_QWORD **)(a1 + 8) + 44LL) )
  {
    RoOriginateError(2147483659LL, 0LL);
    return 2147483659LL;
  }
  else
  {
    *a3 = a2 + 1;
    result = 0LL;
    ***(_BYTE ***)a1 = a2 + 1 < *(_DWORD *)(**(_QWORD **)(a1 + 8) + 44LL);
  }
  return result;
}
