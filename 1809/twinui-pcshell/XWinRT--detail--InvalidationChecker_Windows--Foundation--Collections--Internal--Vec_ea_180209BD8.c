/*
 * XREFs of XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64__Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_0_1_0____XWinRT::IntVersionTag_::Do__lambda_a78ceefaa7d75bc22d4c1140b5ef668b___lambda_ab28c390d81797f92e183b4838bcc479___ @ 0x180209BD8
 * Callers:
 *     ?GetMany@?$SimpleVectorIterator@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@V?$Vector@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4785@U?$VectorOptions@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@$0A@$00$0A@@4785@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4785@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIShellTab@Tabs@ComposableShell@25@PEAI@Z @ 0x18020BC90 (-GetMany@-$SimpleVectorIterator@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@V-$Vector@PE.c)
 * Callees:
 *     XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_c0b9ee02ff122c52b0503829a285f5c6___lambda_ab28c390d81797f92e183b4838bcc479___ @ 0x18020962C (XWinRT--detail--AtomicUpdates--AtomicUpdate__lambda_c0b9ee02ff122c52b0503829a285f5c6___lambda_ab.c)
 *     _lambda_766ca090c21bdc1c48568d17856e5821_::operator() @ 0x18020B1F0 (_lambda_766ca090c21bdc1c48568d17856e5821_--operator().c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64__Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_0_1_0____XWinRT::IntVersionTag_::Do__lambda_a78ceefaa7d75bc22d4c1140b5ef668b___lambda_ab28c390d81797f92e183b4838bcc479___(
        unsigned int *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  int updated; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v8 = *a3;
    v15[0] = &v16;
    v15[1] = a3[1];
    v15[2] = a3[2];
    v9 = a3[3];
    v10 = a3[4];
    v16 = v8;
    v15[3] = v9;
    updated = XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_c0b9ee02ff122c52b0503829a285f5c6___lambda_ab28c390d81797f92e183b4838bcc479___(
                (volatile signed __int32 *)(v8 + 72),
                (__int64)v15,
                v10);
    v4 = updated;
    if ( a1[1] != *(_DWORD *)(a2 + 120) )
    {
      *a1 = -2147483636;
      if ( updated < 0 )
      {
        RoTransformError((unsigned int)updated, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        lambda_766ca090c21bdc1c48568d17856e5821_::operator()(a4, v12, v13);
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError(v4, 0LL);
  }
  return v4;
}
