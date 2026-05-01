/*
 * XREFs of Windows::Foundation::Collections::Internal::SimpleVectorView_HSTRING_____Windows::Foundation::Collections::Internal::Vector_HSTRING_____Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_HSTRING______Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING______Windows::Foundation::Collections::Internal::VectorOptions_HSTRING_____0_1_0____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING______XWinRT::IntVersionTag_1_::_DoWithInvalidationCheck__lambda_e3d7837eafb40d2b78d604364042db8f___lambda_9449e128bb0f6a980348913cd77f98eb___ @ 0x1800A0C0C
 * Callers:
 *     ?get_Size@?$SimpleVectorView@PEAUHSTRING__@@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAI@Z @ 0x1800A5750 (-get_Size@-$SimpleVectorView@PEAUHSTRING__@@V-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView_HSTRING_____Windows::Foundation::Collections::Internal::Vector_HSTRING_____Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_HSTRING______Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING______Windows::Foundation::Collections::Internal::VectorOptions_HSTRING_____0_1_0____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING______XWinRT::IntVersionTag_1_::_DoWithInvalidationCheck__lambda_e3d7837eafb40d2b78d604364042db8f___lambda_9449e128bb0f6a980348913cd77f98eb___(
        __int64 a1,
        _QWORD **a2,
        _DWORD ***a3)
{
  int v3; // ebx
  __int64 v5; // rbp
  int v7; // eax

  v3 = *(_DWORD *)(a1 + 80);
  v5 = *(_QWORD *)(a1 + 72);
  if ( v3 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*a2)[9] + 56LL))((*a2)[9], *a2[1]);
    v3 = v7;
    if ( *(_DWORD *)(a1 + 84) != *(_DWORD *)(v5 + 120) )
    {
      *(_DWORD *)(a1 + 80) = -2147483636;
      if ( v7 < 0 )
      {
        RoTransformError((unsigned int)v7, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        ***a3 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v3, 0LL);
  }
  return (unsigned int)v3;
}
