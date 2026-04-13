/*
 * XREFs of ??$HandleEvent@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@?$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180038034
 * Callers:
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_1_std::shared_ptr_ContentDeliveryManager::Background::CorrelationVectorWrapper___ @ 0x180036E24 (_anonymous_namespace_--PlacementHealth--HandleEvent_1_std--shared_ptr_ContentDeliveryManager--Ba.c)
 * Callees:
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@I@Z @ 0x180024A3C (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@I@Z.c)
 *     ??$SetEventValue@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180026B18 (--$SetEventValue@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002D504 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$02$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x18003B4A8 (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$02$00@details@Health@CreativeF.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CreativeFramework::Health::details::OffersHealthTracker<3,1>::HandleEvent<1,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>>(
        __int64 *a1)
{
  __int64 *v2; // rsi
  __int64 *v3; // rdi
  _QWORD *v4; // rdx
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbx
  CreativeFramework::Health::details::BaseScenarioEvents *v9; // [rsp+28h] [rbp-59h] BYREF
  volatile signed __int32 *v10; // [rsp+30h] [rbp-51h]
  __int64 *v11; // [rsp+38h] [rbp-49h]
  __int64 *v12; // [rsp+40h] [rbp-41h]
  _QWORD v13[4]; // [rsp+48h] [rbp-39h] BYREF
  __int64 v14; // [rsp+68h] [rbp-19h] BYREF
  __int64 v15; // [rsp+78h] [rbp-9h] BYREF
  void *v16[3]; // [rsp+88h] [rbp+7h] BYREF
  unsigned __int64 v17; // [rsp+A0h] [rbp+1Fh]

  v13[2] = -2LL;
  v13[3] = a1;
  std::to_wstring(v16, 3u);
  v2 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
         &v14,
         a1);
  v11 = v2;
  v3 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
         &v15,
         v2);
  v12 = v3;
  CreativeFramework::Health::details::GenericOffersHealthTracker<3,1>::GetOrCreateBaseEventForPlacementId(&v9, v16);
  v4 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
         v13,
         v3);
  CreativeFramework::Health::details::BaseScenarioEvents::SetEventValue<1,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>>(
    v9,
    (__int64)v4);
  if ( v10 )
  {
    if ( !_InterlockedDecrement(v10 + 2) )
    {
      v5 = v10;
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( !_InterlockedDecrement(v5 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v6 = (volatile signed __int32 *)v3[1];
  if ( v6 )
  {
    if ( !_InterlockedDecrement(v6 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( !_InterlockedDecrement(v6 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v7 = (volatile signed __int32 *)v2[1];
  if ( v7 )
  {
    if ( !_InterlockedDecrement(v7 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( !_InterlockedDecrement(v7 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  if ( v17 >= 8 )
    operator delete(v16[0]);
  v17 = 7LL;
  v16[2] = 0LL;
  LOWORD(v16[0]) = 0;
  v8 = (volatile signed __int32 *)a1[1];
  if ( v8 && !_InterlockedDecrement(v8 + 2) )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
    if ( !_InterlockedDecrement(v8 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
  }
}
