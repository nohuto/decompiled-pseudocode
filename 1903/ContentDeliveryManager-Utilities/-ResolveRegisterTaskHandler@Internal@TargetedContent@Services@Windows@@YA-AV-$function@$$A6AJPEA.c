/*
 * XREFs of ?ResolveRegisterTaskHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AJPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@W4TriggerRegistrationOption@1234@@Z @ 0x18006FB38
 * Callers:
 *     ?RegisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800641D0 (-RegisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerIntern.c)
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x180064A50 (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall Windows::Services::TargetedContent::Internal::ResolveRegisterTaskHandler(_QWORD *a1, int a2)
{
  wchar_t **v3; // rax
  wchar_t **v4; // rax
  wchar_t **v5; // rcx
  _QWORD *v6; // rdx

  v3 = (wchar_t **)&unk_18018D570;
  while ( (a2 & *(_DWORD *)v3) == 0 )
  {
    v3 += 5;
    if ( v3 == &off_18018D5C0 )
    {
      *a1 = &std::_Func_impl<std::_Callable_fun<long (*const)(Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>),0>,std::allocator<std::_Func_class<long,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,long,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
      a1[1] = Windows::Services::TargetedContent::Internal::NoopTriggerHandler;
      a1[3] = a1;
      return a1;
    }
  }
  v4 = v3 + 1;
  a1[3] = 0LL;
  v5 = (wchar_t **)v4[3];
  if ( v5 )
  {
    if ( v5 == v4 )
      v6 = a1;
    else
      v6 = 0LL;
    a1[3] = (*(__int64 (__fastcall **)(wchar_t **, _QWORD *))*v5)(v5, v6);
  }
  else
  {
    a1[3] = 0LL;
  }
  return a1;
}
