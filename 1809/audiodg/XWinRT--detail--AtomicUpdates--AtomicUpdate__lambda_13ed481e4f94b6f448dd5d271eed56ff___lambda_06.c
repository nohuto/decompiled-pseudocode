/*
 * XREFs of XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_13ed481e4f94b6f448dd5d271eed56ff___lambda_0696821e1577ed752ca873eaca1551df___ @ 0x1400463CC
 * Callers:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Storage::Streams::IBuffer_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Storage::Streams::IBuffer_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Storage::Streams::IBuffer_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Storage::Streams::IBuffer_____ptr64____XWinRT::IntVersionTag_::Do__lambda_7dd1bba9f05022637c4cc11edd7c209b___lambda_2b4e95c994fbfcf834a48c0377dad5b5___ @ 0x1400467C0 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_1400467C0.c)
 * Callees:
 *     _lambda_13ed481e4f94b6f448dd5d271eed56ff_::operator() @ 0x14004855C (_lambda_13ed481e4f94b6f448dd5d271eed56ff_--operator().c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_13ed481e4f94b6f448dd5d271eed56ff___lambda_0696821e1577ed752ca873eaca1551df___(
        volatile signed __int32 *a1,
        __int64 a2,
        _BYTE ***a3)
{
  unsigned __int32 v3; // edi
  int v7; // r9d
  bool v8; // zf
  signed __int32 v9; // eax
  signed __int32 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  while ( 1 )
  {
    v7 = lambda_13ed481e4f94b6f448dd5d271eed56ff_::operator()(a2, v3, &v11);
    if ( v7 < 0 )
      break;
    v9 = _InterlockedCompareExchange(a1, v11, v3);
    v8 = v3 == v9;
    v3 = v9;
    if ( v8 )
      break;
    ***a3 = 0;
  }
  return (unsigned int)v7;
}
