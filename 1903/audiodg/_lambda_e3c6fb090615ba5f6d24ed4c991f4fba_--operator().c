/*
 * XREFs of _lambda_e3c6fb090615ba5f6d24ed4c991f4fba_::operator() @ 0x140046098
 * Callers:
 *     XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_e3c6fb090615ba5f6d24ed4c991f4fba___lambda_2b4e95c994fbfcf834a48c0377dad5b5___ @ 0x140043F00 (XWinRT--detail--AtomicUpdates--AtomicUpdate__lambda_e3c6fb090615ba5f6d24ed4c991f4fba___lambda_2b.c)
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Storage::Streams::IBuffer___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Storage::Streams::IBuffer____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Storage::Streams::IBuffer____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Storage::Streams::IBuffer______XWinRT::IntVersionTag_::Do__lambda_ed38f1c9fab6ded12fecd945b1b9e25e___lambda_2b4e95c994fbfcf834a48c0377dad5b5___ @ 0x1400443A4 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_1400443A4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_e3c6fb090615ba5f6d24ed4c991f4fba_::operator()(__int64 a1, unsigned int a2, _DWORD *a3)
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
