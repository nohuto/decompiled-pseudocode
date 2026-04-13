/*
 * XREFs of ?EnsureForced@SplitIterator@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJXZ @ 0x18008E4AC
 * Callers:
 *     ?MoveNext@SplitIterator@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x18008DC60 (-MoveNext@SplitIterator@-$NaiveSplitView@W4WindowPosition@ContentManagement@@IU-$DefaultEquality.c)
 *     ?get_HasCurrent@SplitIterator@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x18008DD60 (-get_HasCurrent@SplitIterator@-$NaiveSplitView@W4WindowPosition@ContentManagement@@IU-$DefaultEq.c)
 *     ?get_Current@SplitIterator@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@456@@Z @ 0x18008DE00 (-get_Current@SplitIterator@-$NaiveSplitView@W4WindowPosition@ContentManagement@@IU-$DefaultEqual.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180059E10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IV_ea_180059E10.c)
 *     ?First@ChunkView@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@@456@@Z @ 0x18008E050 (-First@ChunkView@-$NaiveSplitView@W4WindowPosition@ContentManagement@@IU-$DefaultEqualityPredica.c)
 *     ?Force@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJXZ @ 0x18008E180 (-Force@-$NaiveSplitView@W4WindowPosition@ContentManagement@@IU-$DefaultEqualityPredicate@W4Windo.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::SplitIterator::EnsureForced(
        __int64 a1)
{
  int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  volatile signed __int64 *v11; // rcx
  __int64 v12; // rcx
  char v14; // [rsp+50h] [rbp+20h] BYREF
  __int64 v15; // [rsp+58h] [rbp+28h] BYREF
  signed __int64 v16; // [rsp+60h] [rbp+30h]
  __int64 v17; // [rsp+68h] [rbp+38h]

  v15 = 0LL;
  v2 = 0;
  if ( !*(_QWORD *)(a1 + 88) )
  {
    v3 = *(_QWORD *)(a1 + 80);
    if ( v3 )
    {
      v2 = Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::Force(v3);
      if ( v2 >= 0 )
      {
        v4 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 80LL);
        v5 = v15;
        if ( v15 )
        {
          v15 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        }
        v2 = Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::ChunkView::First(
               v4 + 16,
               &v15);
        if ( v2 >= 0 )
        {
          v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v15 + 56LL))(v15, &v14);
          if ( v2 >= 0 )
          {
            v6 = *(_QWORD *)(a1 + 88);
            if ( v14 )
            {
              *(_QWORD *)(a1 + 88) = v15;
              v15 = v6;
              v7 = *(_QWORD *)(a1 + 80);
              v8 = *(_QWORD *)(v7 + 88);
              if ( v7 != v8 )
              {
                v17 = *(_QWORD *)(v7 + 88);
                if ( v8 )
                {
                  v9 = *(_QWORD *)(v8 + 64);
                  v16 = v9;
                  while ( v9 >= 0 )
                  {
                    v10 = v9;
                    v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 64), v9 + 1, v9);
                    if ( v10 == v9 )
                      goto LABEL_15;
                  }
                  _InterlockedIncrement((volatile signed __int32 *)(2 * v9 + 16));
                }
LABEL_15:
                v11 = *(volatile signed __int64 **)(a1 + 80);
                *(_QWORD *)(a1 + 80) = v17;
                if ( v11 )
                  goto LABEL_21;
              }
            }
            else
            {
              if ( v6 )
              {
                *(_QWORD *)(a1 + 88) = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
              }
              v11 = *(volatile signed __int64 **)(a1 + 80);
              if ( v11 )
              {
                *(_QWORD *)(a1 + 80) = 0LL;
LABEL_21:
                Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Microsoft::WRL::FtmBase>::Release(v11);
              }
            }
          }
        }
      }
    }
  }
  v12 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return (unsigned int)v2;
}
