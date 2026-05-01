/*
 * XREFs of XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_c0b9ee02ff122c52b0503829a285f5c6___lambda_ab28c390d81797f92e183b4838bcc479___ @ 0x18020962C
 * Callers:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64__Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_0_1_0____XWinRT::IntVersionTag_::Do__lambda_a78ceefaa7d75bc22d4c1140b5ef668b___lambda_ab28c390d81797f92e183b4838bcc479___ @ 0x180209BD8 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_180209BD8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     _lambda_766ca090c21bdc1c48568d17856e5821_::operator() @ 0x18020B1F0 (_lambda_766ca090c21bdc1c48568d17856e5821_--operator().c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_c0b9ee02ff122c52b0503829a285f5c6___lambda_ab28c390d81797f92e183b4838bcc479___(
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
    lambda_766ca090c21bdc1c48568d17856e5821_::operator()(a3, v9, v8);
  }
  return (unsigned int)v8;
}
