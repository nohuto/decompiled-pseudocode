/*
 * XREFs of ?InsertAtInternal@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@_N@Z @ 0x18006B150
 * Callers:
 *     ?InsertAt@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@@Z @ 0x180069E80 (-InsertAt@-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@.c)
 *     ?Append@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@@Z @ 0x180069EA0 (-Append@-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U.c)
 *     std::_Func_impl_std::_Callable_obj__lambda_a229ec049bd8949c08ad0e1605aaf705__0__std::allocator_std::_Func_class_bool_CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x1800780E0 (std--_Func_impl_std--_Callable_obj__lambda_a229ec049bd8949c08ad0e1605aaf705__0__std_ea_1800780E0.c)
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180017384 (-RaiseEvent@-$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Wi.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1800173A0 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@1@@Z @ 0x18005B7A4 (--$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@I.c)
 *     ?ResizeStorage@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x18005BADC (-ResizeStorage@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@Targeted_ea_18005BADC.c)
 *     ??$Construct@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@1@PEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Z @ 0x18006B870 (--$Construct@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Interf.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  int v7; // esi
  _DWORD *v8; // r14
  unsigned int v9; // eax
  unsigned int v10; // r8d
  int v11; // edx
  unsigned int v12; // eax
  char v14[8]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+38h] [rbp-30h]
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF

  v15 = -2LL;
  *(_QWORD *)&v16 = 0LL;
  BYTE8(v16) = 0;
  v7 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>(
         &v16,
         a3);
  if ( v7 >= 0 )
  {
    v8 = (_DWORD *)(a1 + 112);
    if ( *(_DWORD *)(a1 + 104) == 1 )
    {
      if ( !*v8 )
        *v8 = -268435456;
    }
    else
    {
      AcquireSRWLockExclusive((PSRWLOCK)(a1 + 112));
    }
    if ( a4 )
      a2 = *(_DWORD *)(a1 + 72);
    v9 = *(_DWORD *)(a1 + 72);
    if ( a2 <= v9 )
    {
      if ( v9 < 0x7FFFFFFF )
      {
        XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)v14);
        v7 = 0;
        v10 = *(_DWORD *)(a1 + 76);
        if ( *(_DWORD *)(a1 + 72) + 1 <= v10 )
          goto LABEL_17;
        v11 = v10 >> 1;
        if ( v10 + 1 > (v10 >> 1) + v10 )
          v11 = 1;
        v7 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>::ResizeStorage(
               a1,
               v10 + v11);
        if ( v7 >= 0 )
        {
LABEL_17:
          v12 = *(_DWORD *)(a1 + 72);
          if ( a2 < v12
            && memmove_s(
                 (void *const)(*(_QWORD *)(a1 + 88) + 16LL * (a2 + 1)),
                 16LL * (*(_DWORD *)(a1 + 76) - a2 - 1),
                 (const void *const)(*(_QWORD *)(a1 + 88) + 16LL * a2),
                 16LL * (v12 - a2)) )
          {
            v7 = -2147418113;
            RoOriginateError(2147549183LL, 0LL);
          }
          if ( v7 >= 0 )
          {
            *(_OWORD *)(*(_QWORD *)(a1 + 88) + 16LL * a2) = v16;
            *(_QWORD *)&v16 = 0LL;
            BYTE8(v16) = 0;
            ++*(_DWORD *)(a1 + 72);
            ++*(_DWORD *)(a1 + 120);
            if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 88) + 16LL * a2), 8)) )
              ++*(_DWORD *)(a1 + 80);
          }
        }
      }
      else
      {
        v7 = -2147024882;
      }
    }
    else
    {
      v7 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( a1 != -104 )
    {
      if ( *(_DWORD *)(a1 + 104) == 1 )
        *v8 += 0x10000000;
      else
        ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 112));
    }
    if ( v7 >= 0 )
      v7 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,0,0,0>::RaiseEvent();
  }
  else
  {
    *(_QWORD *)&v16 = 0LL;
    BYTE8(v16) = 0;
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>((__int64)&v16);
  return (unsigned int)v7;
}
