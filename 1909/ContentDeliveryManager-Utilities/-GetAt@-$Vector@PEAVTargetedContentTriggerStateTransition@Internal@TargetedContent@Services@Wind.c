/*
 * XREFs of ?GetAt@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@@Z @ 0x18005EE70
 * Callers:
 *     ?get_StateTransitions@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAPEAU?$IVector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@@Z @ 0x18005E390 (-get_StateTransitions@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAA.c)
 * Callees:
 *     ?ResolveDemand@?$StorageTempTraits@V?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@XWinRT@@PEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@V123@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@5Collections@Foundation@8@@XWinRT@@SAJPEAV?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@2@PEAPEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@Z @ 0x18006052C (-ResolveDemand@-$StorageTempTraits@V-$GitStorageType@UITargetedContentTriggerStateTransition@Int.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>::GetAt(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3)
{
  __int64 v4; // r15
  __int64 v6; // rbp
  _DWORD *v7; // rbx
  RTL_SRWLOCK *v8; // rsi
  int v9; // edi
  __int64 v11; // [rsp+28h] [rbp-40h] BYREF
  char v12; // [rsp+30h] [rbp-38h]
  __m128i v13; // [rsp+40h] [rbp-28h]
  _DWORD *v14; // [rsp+70h] [rbp+8h]

  v4 = a2;
  *a3 = 0LL;
  v11 = 0LL;
  v12 = 0;
  v6 = a1 + 104;
  v7 = (_DWORD *)(a1 + 104);
  v14 = (_DWORD *)(a1 + 104);
  v8 = (RTL_SRWLOCK *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( SLODWORD(v8->Ptr) >= 0 )
      ++LODWORD(v8->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 112));
  }
  if ( (unsigned int)v4 < *(_DWORD *)(a1 + 72) )
  {
    if ( *a3 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 16LL))(*a3);
      *a3 = 0LL;
    }
    v13 = *(__m128i *)(*(_QWORD *)(a1 + 88) + 16 * v4);
    v12 = _mm_cvtsi128_si32(_mm_srli_si128(v13, 8));
    if ( v12 )
    {
      v11 = v13.m128i_i64[0];
      _InterlockedIncrement((volatile signed __int32 *)v13.m128i_i64[0]);
      v7 = v14;
    }
    else
    {
      v11 = v13.m128i_i64[0];
      if ( v13.m128i_i64[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13.m128i_i64[0] + 8LL))(v13.m128i_i64[0]);
    }
    v9 = 0;
  }
  else
  {
    v9 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
  }
  if ( v6 )
  {
    if ( *v7 == 1 )
      --LODWORD(v8->Ptr);
    else
      ReleaseSRWLockShared(v8);
  }
  if ( v9 >= 0 )
    return (unsigned int)XWinRT::StorageTempTraits<XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition *,XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>::ResolveDemand(
                           &v11,
                           a3);
  return (unsigned int)v9;
}
