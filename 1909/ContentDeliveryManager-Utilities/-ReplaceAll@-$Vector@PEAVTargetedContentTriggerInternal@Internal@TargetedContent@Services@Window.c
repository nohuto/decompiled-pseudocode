/*
 * XREFs of ?ReplaceAll@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@@Z @ 0x18006A490
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180017834 (-RaiseEvent@-$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Wi.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180017850 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@1@@Z @ 0x18005BA54 (--$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@I.c)
 *     ??$Construct@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@1@PEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Z @ 0x18006BAD0 (--$Construct@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Interf.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3)
{
  __m128i *v3; // rdi
  unsigned int v5; // r15d
  int v6; // r13d
  int v9; // ebx
  __int64 v10; // rsi
  __m128i *v11; // r14
  RTL_SRWLOCK *v12; // rcx
  unsigned int v13; // eax
  __m128i *v14; // rax
  RTL_SRWLOCK *v15; // rcx
  __int64 v16; // r14
  char v18; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v5 = 0;
  v6 = 0;
  if ( a2 )
  {
    v3 = (__m128i *)malloc(16LL * a2);
    if ( !v3 )
      return (unsigned int)-2147024882;
    v5 = a2;
  }
  v10 = 0LL;
  if ( v5 )
  {
    v11 = v3;
    while ( 1 )
    {
      v9 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>(
             &v3[(unsigned int)v10],
             *a3);
      if ( v9 < 0 )
        break;
      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*v11, 8)) )
        ++v6;
      v10 = (unsigned int)(v10 + 1);
      ++a3;
      ++v11;
      if ( (unsigned int)v10 >= v5 )
        goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    v12 = (RTL_SRWLOCK *)(a1 + 112);
    if ( *(_DWORD *)(a1 + 104) == 1 )
    {
      if ( !LODWORD(v12->Ptr) )
        LODWORD(v12->Ptr) = -268435456;
    }
    else
    {
      AcquireSRWLockExclusive(v12);
    }
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v18);
    v13 = *(_DWORD *)(a1 + 72);
    v9 = 0;
    *(_DWORD *)(a1 + 72) = v10;
    v10 = v13;
    *(_DWORD *)(a1 + 76) = v5;
    *(_DWORD *)(a1 + 80) = v6;
    v14 = *(__m128i **)(a1 + 88);
    *(_QWORD *)(a1 + 88) = v3;
    v3 = v14;
    ++*(_DWORD *)(a1 + 120);
    if ( a1 != -104 )
    {
      v15 = (RTL_SRWLOCK *)(a1 + 112);
      if ( *(_DWORD *)(a1 + 104) == 1 )
        LODWORD(v15->Ptr) += 0x10000000;
      else
        ReleaseSRWLockExclusive(v15);
    }
  }
  if ( v3 )
  {
    if ( (_DWORD)v10 )
    {
      v16 = (__int64)v3;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>(v16);
        v16 += 16LL;
        --v10;
      }
      while ( v10 );
    }
    free(v3);
  }
  if ( v9 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,0,0,0>::RaiseEvent();
  return (unsigned int)v9;
}
