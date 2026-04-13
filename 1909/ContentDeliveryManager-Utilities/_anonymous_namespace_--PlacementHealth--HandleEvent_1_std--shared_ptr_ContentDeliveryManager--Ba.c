/*
 * XREFs of _anonymous_namespace_::PlacementHealth::HandleEvent_1_std::shared_ptr_ContentDeliveryManager::Background::CorrelationVectorWrapper___ @ 0x180037CBC
 * Callers:
 *     ContentManagement::ExecuteHandlerByEventPolicy__lambda_c7a3d71a2342ccc4636948ba7f796bf6___ @ 0x180036750 (ContentManagement--ExecuteHandlerByEventPolicy__lambda_c7a3d71a2342ccc4636948ba7f796bf6___.c)
 * Callees:
 *     _anonymous_namespace_::StartsWith @ 0x180028EA8 (_anonymous_namespace_--StartsWith.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002E35C (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x1800337E0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     ??$HandleEvent@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@?$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180038B00 (--$HandleEvent@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@st.c)
 *     ??$HandleEvent@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@?$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@SAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180038D00 (--$HandleEvent@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliver_ea_180038D00.c)
 *     ??$HandleEvent@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@?$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180038F00 (--$HandleEvent@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliver_ea_180038F00.c)
 *     ??$HandleEvent@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@?$GenericOffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@SAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@5@@Z @ 0x180039100 (--$HandleEvent@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliver_ea_180039100.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall anonymous_namespace_::PlacementHealth::HandleEvent_1_std::shared_ptr_ContentDeliveryManager::Background::CorrelationVectorWrapper___(
        char *Src,
        __int64 *a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  unsigned __int64 v7; // r8
  _QWORD *v8; // rax
  volatile signed __int32 *v9; // rbx
  _QWORD v10[4]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v11; // [rsp+58h] [rbp-19h] BYREF
  __int64 v12; // [rsp+68h] [rbp-9h] BYREF
  __int64 v13; // [rsp+78h] [rbp+7h] BYREF
  void *v14[3]; // [rsp+88h] [rbp+17h] BYREF
  unsigned __int64 v15; // [rsp+A0h] [rbp+2Fh]

  v10[2] = -2LL;
  v10[3] = a2;
  if ( CompareStringOrdinal((LPCWCH)Src, -1, L"LockScreen", -1, 1) == 2 )
  {
    v4 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
           v10,
           a2);
    CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<1,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>>(v4);
  }
  else if ( CompareStringOrdinal((LPCWCH)Src, -1, L"LockScreenOverlay", -1, 1) == 2 )
  {
    v5 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
           &v11,
           a2);
    CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<1,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>>(v5);
  }
  else if ( CompareStringOrdinal((LPCWCH)Src, -1, L"StartMenu", -1, 1) == 2 )
  {
    v6 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
           &v12,
           a2);
    CreativeFramework::Health::details::OffersHealthTracker<3,1>::HandleEvent<1,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>>(v6);
  }
  else if ( anonymous_namespace_::StartsWith(Src) )
  {
    v15 = 7LL;
    v14[2] = 0LL;
    LOWORD(v14[0]) = 0;
    if ( *(_WORD *)Src )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( *(_WORD *)&Src[2 * v7] );
    }
    else
    {
      v7 = 0LL;
    }
    std::wstring::assign(v14, Src, v7);
    v8 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
           &v13,
           a2);
    CreativeFramework::Health::details::GenericOffersHealthTracker<11,1>::HandleEvent<1,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>>(
      v14,
      v8);
    if ( v15 >= 8 )
      operator delete(v14[0]);
  }
  v9 = (volatile signed __int32 *)a2[1];
  if ( v9 && !_InterlockedDecrement(v9 + 2) )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
    if ( !_InterlockedDecrement(v9 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
  }
}
