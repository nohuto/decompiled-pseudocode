/*
 * XREFs of XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::ComposableShell::Multitasking::ISwitchItem____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::ComposableShell::Multitasking::ISwitchItem____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Internal::ComposableShell::Multitasking::ISwitchItem______XWinRT::IntVersionTag_::Do__lambda_6363c76c2807ef956111494473db330f___lambda_e57c3848668b88c0b9997c3a62d31bc2___ @ 0x180308B38
 * Callers:
 *     ?First@?$SimpleVectorView@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$Vector@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IIterator@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@345@@Z @ 0x180309F50 (-First@-$SimpleVectorView@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V-$Vect.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     _lambda_6363c76c2807ef956111494473db330f_::operator() @ 0x1803099E0 (_lambda_6363c76c2807ef956111494473db330f_--operator().c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::ComposableShell::Multitasking::ISwitchItem____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::ComposableShell::Multitasking::ISwitchItem____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Internal::ComposableShell::Multitasking::ISwitchItem______XWinRT::IntVersionTag_::Do__lambda_6363c76c2807ef956111494473db330f___lambda_e57c3848668b88c0b9997c3a62d31bc2___(
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
    v8 = lambda_6363c76c2807ef956111494473db330f_::operator()(a3);
    v4 = v8;
    if ( a1[1] != *(_DWORD *)(a2 + 88) )
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
