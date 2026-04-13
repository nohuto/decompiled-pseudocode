/*
 * XREFs of ?RemoveAtInternal@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x180059420
 * Callers:
 *     ?RemoveAt@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x180057FE0 (-RemoveAt@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicate@PEAVA.c)
 *     ?RemoveAtEnd@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x180058010 (-RemoveAtEnd@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicate@PE.c)
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180017154 (-RaiseEvent@-$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Wi.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180017170 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@1@@Z @ 0x18005A1A0 (--$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@I.c)
 *     ?ResizeStorage@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x18005A4DC (-ResizeStorage@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@Targeted_ea_18005A4DC.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  _DWORD *v6; // rbx
  RTL_SRWLOCK *v7; // r14
  unsigned int v8; // eax
  int v9; // esi
  __int64 v10; // r15
  __int64 v11; // rcx
  __int128 v12; // xmm6
  int v13; // ecx
  unsigned int v14; // r8d
  unsigned int v15; // edx
  __int128 v17; // [rsp+40h] [rbp-48h] BYREF
  char v18; // [rsp+90h] [rbp+8h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+20h]

  *(_QWORD *)&v17 = 0LL;
  BYTE8(v17) = 0;
  v6 = (_DWORD *)(a1 + 104);
  v19 = a1 + 104;
  v7 = (RTL_SRWLOCK *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( !LODWORD(v7->Ptr) )
      LODWORD(v7->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 112));
  }
  v8 = *(_DWORD *)(a1 + 72);
  if ( a3 )
    a2 = v8 - 1;
  if ( a2 >= v8 )
  {
    v9 = -2147483637;
LABEL_14:
    RoOriginateError((unsigned int)v9, 0LL);
    goto LABEL_19;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v18);
  v9 = 0;
  v10 = 16LL * a2;
  v11 = *(_QWORD *)(a1 + 88);
  if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v11 + v10), 8)) )
    --*(_DWORD *)(a1 + 80);
  v12 = *(_OWORD *)(v11 + 16LL * a2);
  XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>(&v17);
  v17 = v12;
  v13 = *(_DWORD *)(a1 + 72);
  if ( a2 < v13 - 1
    && memmove_s(
         (void *const)(v10 + *(_QWORD *)(a1 + 88)),
         16LL * (v13 - a2 - 1),
         (const void *const)(*(_QWORD *)(a1 + 88) + 16LL * (a2 + 1)),
         16LL * (v13 - a2 - 1)) )
  {
    v9 = -2147418113;
    goto LABEL_14;
  }
  ++*(_DWORD *)(a1 + 120);
  --*(_DWORD *)(a1 + 72);
  v14 = *(_DWORD *)(a1 + 76);
  v15 = v14 / 3;
  if ( *(_DWORD *)(a1 + 72) < v14 / 3 )
  {
    if ( v14 - 1 < v14 - v15 )
      v15 = 1;
    v9 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>::ResizeStorage(
           a1,
           v14 - v15);
  }
LABEL_19:
  if ( v6 )
  {
    if ( *v6 == 1 )
      LODWORD(v7->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v7);
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>(&v17);
  if ( v9 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,0,0,0>::RaiseEvent();
  return (unsigned int)v9;
}
