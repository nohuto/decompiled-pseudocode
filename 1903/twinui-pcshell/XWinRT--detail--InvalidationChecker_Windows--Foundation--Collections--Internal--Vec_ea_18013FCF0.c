/*
 * XREFs of XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::Shell::Chaining::IChainLink___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::Shell::Chaining::IChainLink____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::Shell::Chaining::IChainLink____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::Shell::Chaining::IChainLink___0_1_0____XWinRT::IntVersionTag_::Do__lambda_63007384cbc26d4c9c9706101aeec82a___lambda_7a28a840d7801b8eb9c1ca3bdd184909___ @ 0x18013FCF0
 * Callers:
 *     ?First@?$SimpleVectorView@PEAUIChainLink@Chaining@Shell@Internal@Windows@@V?$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$0A@$00$0A@@4785@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IIterator@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@345@@Z @ 0x180143670 (-First@-$SimpleVectorView@PEAUIChainLink@Chaining@Shell@Internal@Windows@@V-$Vector@PEAUIChainLi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     _lambda_63007384cbc26d4c9c9706101aeec82a_::operator() @ 0x180141974 (_lambda_63007384cbc26d4c9c9706101aeec82a_--operator().c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::Shell::Chaining::IChainLink___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::Shell::Chaining::IChainLink____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::Shell::Chaining::IChainLink____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::Shell::Chaining::IChainLink___0_1_0____XWinRT::IntVersionTag_::Do__lambda_63007384cbc26d4c9c9706101aeec82a___lambda_7a28a840d7801b8eb9c1ca3bdd184909___(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        __int64 ***a4)
{
  unsigned int v4; // ebx
  int v8; // eax
  __int64 *v9; // rdx
  __int64 v10; // rcx

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v8 = lambda_63007384cbc26d4c9c9706101aeec82a_::operator()(a3);
    v4 = v8;
    if ( a1[1] != *(_DWORD *)(a2 + 120) )
    {
      *a1 = -2147483636;
      if ( v8 < 0 )
      {
        RoTransformError((unsigned int)v8, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        v9 = **a4;
        v10 = *v9;
        *v9 = 0LL;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
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
