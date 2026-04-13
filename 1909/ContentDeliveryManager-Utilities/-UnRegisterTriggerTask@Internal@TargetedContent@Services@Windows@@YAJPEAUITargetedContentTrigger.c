/*
 * XREFs of ?UnRegisterTriggerTask@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18006FBCC
 * Callers:
 *     ?UnregisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180064750 (-UnregisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInte.c)
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x1800659C4 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001563C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002E35C (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?ResolveCDMTaskName@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x18006E13C (-ResolveCDMTaskName@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_tra.c)
 *     ?GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006E5B4 (-GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_.c)
 *     ?UnregisterTask@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800AB64C (-UnregisterTask@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@V-$shared_ptr@VCorrelationVect.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Services::TargetedContent::Internal::UnRegisterTriggerTask(__int64 a1, __int64 a2)
{
  void **v3; // rdx
  const WCHAR *v4; // rax
  HSTRING_HEADER *v5; // rbx
  _QWORD *v6; // rdx
  volatile signed __int32 *v7; // rbx
  const WCHAR *v9[3]; // [rsp+28h] [rbp-49h] BYREF
  __int64 v10; // [rsp+40h] [rbp-31h] BYREF
  void *v11[3]; // [rsp+50h] [rbp-21h] BYREF
  unsigned __int64 v12; // [rsp+68h] [rbp-9h]
  void *v13[3]; // [rsp+70h] [rbp-1h] BYREF
  unsigned __int64 v14; // [rsp+88h] [rbp+17h]
  HSTRING_HEADER v15; // [rsp+90h] [rbp+1Fh] BYREF

  v9[1] = (const WCHAR *)-2LL;
  v9[2] = (const WCHAR *)a2;
  Windows::Services::TargetedContent::Internal::GetTaskNameForTrigger((HSTRING)v13, a1);
  v3 = v13;
  if ( v14 >= 8 )
    v3 = (void **)v13[0];
  Windows::Services::TargetedContent::Internal::ResolveCDMTaskName(v11, (__int64)v3);
  v4 = (const WCHAR *)v11;
  if ( v12 >= 8 )
    v4 = (const WCHAR *)v11[0];
  v9[0] = v4;
  v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v15, v9);
  v6 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
         &v10,
         (__int64 *)a2);
  CreativeFramework::CommonHelper::UnregisterTask(v5[1].Reserved.Reserved1, v6);
  if ( v12 >= 8 )
    operator delete(v11[0]);
  v12 = 7LL;
  v11[2] = 0LL;
  LOWORD(v11[0]) = 0;
  if ( v14 >= 8 )
    operator delete(v13[0]);
  v14 = 7LL;
  v13[2] = 0LL;
  LOWORD(v13[0]) = 0;
  v7 = *(volatile signed __int32 **)(a2 + 8);
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return 0LL;
}
