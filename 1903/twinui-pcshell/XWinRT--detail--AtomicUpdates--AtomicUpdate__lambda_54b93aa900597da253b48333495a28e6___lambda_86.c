/*
 * XREFs of XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_54b93aa900597da253b48333495a28e6___lambda_86af9a40b48fabf7cf6d00c0576551d4___ @ 0x18009FDB4
 * Callers:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_HSTRING_____Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_HSTRING______Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING______Windows::Foundation::Collections::Internal::VectorOptions_HSTRING_____0_1_0____XWinRT::IntVersionTag_::Do__lambda_8663c0cd64b41de8bba77ca429328de7___lambda_86af9a40b48fabf7cf6d00c0576551d4___ @ 0x1800A0190 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_1800A0190.c)
 * Callees:
 *     _lambda_ef46628475072de7df7d75dcf6ba9668_::operator() @ 0x1800A1B38 (_lambda_ef46628475072de7df7d75dcf6ba9668_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_54b93aa900597da253b48333495a28e6___lambda_86af9a40b48fabf7cf6d00c0576551d4___(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int32 v3; // edi
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rdx
  bool v10; // zf
  signed __int32 v11; // eax

  v3 = *a1;
  while ( 1 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(**(_QWORD **)a2 + 64LL)
                                                                           + 128LL))(
           *(_QWORD *)(**(_QWORD **)a2 + 64LL),
           v3,
           **(unsigned int **)(a2 + 8),
           **(_QWORD **)(a2 + 16),
           **(_QWORD **)(a2 + 24));
    v8 = (unsigned int)v7;
    if ( v7 < 0 )
      break;
    v9 = v3 + ***(_DWORD ***)(a2 + 24);
    v11 = _InterlockedCompareExchange(a1, v9, v3);
    v10 = v3 == v11;
    v3 = v11;
    if ( v10 )
      break;
    lambda_ef46628475072de7df7d75dcf6ba9668_::operator()(a3, v9, v8);
  }
  return (unsigned int)v8;
}
