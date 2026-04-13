/*
 * XREFs of ?RemoveAtInternal@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x18005F498
 * Callers:
 *     ?RemoveAt@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x18005E6C0 (-RemoveAt@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedConte_ea_18005E6C0.c)
 *     ?RemoveAtEnd@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x18005E6D0 (-RemoveAtEnd@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedCo_ea_18005E6D0.c)
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180017154 (-RaiseEvent@-$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Wi.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180017170 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?ResizeStorage@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x180018524 (-ResizeStorage@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Servi.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  __int64 v6; // rbx
  _DWORD *v7; // rdi
  RTL_SRWLOCK *v8; // r14
  unsigned int v9; // eax
  int v10; // ebp
  __int64 v11; // r9
  __int64 *v12; // rcx
  int v13; // edx
  unsigned int v14; // r8d
  unsigned int v15; // edx
  char v17; // [rsp+80h] [rbp+8h] BYREF

  v6 = 0LL;
  v7 = (_DWORD *)(a1 + 72);
  v8 = (RTL_SRWLOCK *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( !LODWORD(v8->Ptr) )
      LODWORD(v8->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
  }
  v9 = *(_DWORD *)(a1 + 40);
  if ( a3 )
    a2 = v9 - 1;
  if ( a2 >= v9 )
  {
    v10 = -2147483637;
LABEL_12:
    RoOriginateError((unsigned int)v10, 0LL);
    goto LABEL_17;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v17);
  v10 = 0;
  v11 = *(_QWORD *)(a1 + 56);
  v12 = (__int64 *)(v11 + 8LL * a2);
  v6 = *v12;
  v13 = *(_DWORD *)(a1 + 40);
  if ( a2 < v13 - 1
    && memmove_s(v12, 8LL * (v13 - a2 - 1), (const void *const)(v11 + 8LL * (a2 + 1)), 8LL * (v13 - a2 - 1)) )
  {
    v10 = -2147418113;
    goto LABEL_12;
  }
  ++*(_DWORD *)(a1 + 88);
  --*(_DWORD *)(a1 + 40);
  v14 = *(_DWORD *)(a1 + 44);
  v15 = v14 / 3;
  if ( *(_DWORD *)(a1 + 40) < v14 / 3 )
  {
    if ( v14 - 1 < v14 - v15 )
      v15 = 1;
    v10 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>::ResizeStorage(
            a1,
            v14 - v15);
  }
LABEL_17:
  if ( v7 )
  {
    if ( *v7 == 1 )
      LODWORD(v8->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v8);
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v10 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,0,0,0>::RaiseEvent();
  return (unsigned int)v10;
}
