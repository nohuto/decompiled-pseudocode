/*
 * XREFs of _lambda_60cffcfe8b0715df3af987611c13edce_::operator() @ 0x180309A70
 * Callers:
 *     XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_60cffcfe8b0715df3af987611c13edce___lambda_4d0109064d4e478866fb97661f906aa0___ @ 0x18030887C (XWinRT--detail--AtomicUpdates--AtomicUpdate__lambda_60cffcfe8b0715df3af987611c13edce___lambda_4d.c)
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop______XWinRT::IntVersionTag_::Do__lambda_e323e37eb6a7c14a55f28542b981c184___lambda_4d0109064d4e478866fb97661f906aa0___ @ 0x180308CA4 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_180308CA4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_60cffcfe8b0715df3af987611c13edce_::operator()(__int64 a1, unsigned int a2, _DWORD *a3)
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
