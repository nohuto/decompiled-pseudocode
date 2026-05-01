/*
 * XREFs of XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop______XWinRT::IntVersionTag_::Do__lambda_e323e37eb6a7c14a55f28542b981c184___lambda_4d0109064d4e478866fb97661f906aa0___ @ 0x1803281A4
 * Callers:
 *     ?MoveNext@?$SimpleVectorIterator@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@V?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x18032A240 (-MoveNext@-$SimpleVectorIterator@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@V-$V.c)
 * Callees:
 *     XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_60cffcfe8b0715df3af987611c13edce___lambda_4d0109064d4e478866fb97661f906aa0___ @ 0x180327D7C (XWinRT--detail--AtomicUpdates--AtomicUpdate__lambda_60cffcfe8b0715df3af987611c13edce___lambda_4d.c)
 *     _lambda_60cffcfe8b0715df3af987611c13edce_::operator() @ 0x180328F7C (_lambda_60cffcfe8b0715df3af987611c13edce_--operator().c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop______XWinRT::IntVersionTag_::Do__lambda_e323e37eb6a7c14a55f28542b981c184___lambda_4d0109064d4e478866fb97661f906aa0___(
        unsigned int *a1,
        __int64 a2,
        __int64 *a3,
        _BYTE ***a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rcx
  __int64 v9; // rax
  _BYTE ***v10; // r8
  bool v11; // zf
  int updated; // eax
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v8 = *a3;
    v9 = a3[1];
    v10 = (_BYTE ***)a3[2];
    v14[0] = v9;
    v15 = v8;
    v11 = *(_BYTE *)(v8 + 56) == 0;
    v14[1] = &v15;
    if ( v11 )
      updated = XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_60cffcfe8b0715df3af987611c13edce___lambda_4d0109064d4e478866fb97661f906aa0___(
                  (volatile signed __int32 *)(v8 + 40),
                  (__int64)v14,
                  v10);
    else
      updated = lambda_60cffcfe8b0715df3af987611c13edce_::operator()(v14, *(unsigned int *)(v8 + 40), v8 + 40);
    v4 = updated;
    if ( a1[1] != *(_DWORD *)(a2 + 88) )
    {
      *a1 = -2147483636;
      if ( updated < 0 )
      {
        RoTransformError((unsigned int)updated, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        ***a4 = 0;
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
