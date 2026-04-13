/*
 * XREFs of ?UnregisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180064750
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002E35C (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?CreateCreativeRule@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180064258 (-CreateCreativeRule@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCreativeRule@R.c)
 *     ??R?$_Func_class@JPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@U_Nil@7@U87@U87@U87@U87@@std@@QEBAJPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@1@@Z @ 0x180066D94 (--R-$_Func_class@JPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@.c)
 *     ?ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA?AW4TriggerRegistrationOption@1234@W4TargetedContentKnownTrigger@1234@@Z @ 0x18006E0E8 (-ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA-AW4TriggerRegist.c)
 *     ?UnRegisterTriggerTask@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18006FBCC (-UnRegisterTriggerTask@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTrigger.c)
 *     ?ResolveTriggerCleanupHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AJPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@W4TargetedContentKnownTrigger@1234@@Z @ 0x180070564 (-ResolveTriggerCleanupHandler@Internal@TargetedContent@Services@Windows@@YA-AV-$function@$$A6AJP.c)
 *     ?AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedContentTriggerInternal@1234@_N@Z @ 0x180072D28 (-AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedC.c)
 *     ?RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x18007A780 (-RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCr.c)
 *     ?MakeDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@YA?AV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@std@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@4@@Z @ 0x18007AF44 (-MakeDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@YA-AV-$shared_ptr@VIRuleSetHandl.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall Windows::Services::TargetedContent::Internal::UnregisterTrigger(
        Windows::Services::TargetedContent::Internal *this,
        __int64 *a2)
{
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  _QWORD *v6; // rax
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  unsigned int v9; // eax
  char v10; // bl
  struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *v11; // rdx
  bool v12; // r8
  int v13; // eax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // rbx
  _BYTE *v19; // rdx
  volatile signed __int32 *v20; // rbx
  unsigned int v22; // [rsp+38h] [rbp-49h] BYREF
  __int64 v23; // [rsp+40h] [rbp-41h] BYREF
  volatile signed __int32 *v24; // [rsp+48h] [rbp-39h]
  __int64 v25; // [rsp+50h] [rbp-31h]
  __int64 *v26; // [rsp+58h] [rbp-29h]
  __int64 v27; // [rsp+60h] [rbp-21h] BYREF
  __int64 v28; // [rsp+70h] [rbp-11h] BYREF
  __int64 v29; // [rsp+80h] [rbp-1h] BYREF
  __int64 v30; // [rsp+90h] [rbp+Fh] BYREF
  volatile signed __int32 *v31; // [rsp+98h] [rbp+17h]
  _BYTE v32[24]; // [rsp+A0h] [rbp+1Fh] BYREF
  _BYTE *v33; // [rsp+B8h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v25 = -2LL;
  v26 = a2;
  v4 = (*(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal *, unsigned int *))(*(_QWORD *)this + 80LL))(
         this,
         &v22);
  v5 = retaddr;
  if ( v4 < 0 )
  {
LABEL_26:
    wil::details::in1diag3::Throw_Hr(
      v5,
      (void *)0x7D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v4);
LABEL_27:
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x7F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  Windows::Services::TargetedContent::Internal::ResolveTriggerCleanupHandler(v32, v22);
  v6 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
         &v27,
         a2);
  v7 = std::_Func_class<long,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::operator()(
         v32,
         this,
         v6);
  v8 = retaddr;
  if ( v7 < 0 )
    goto LABEL_27;
  v9 = Windows::Services::TargetedContent::Internal::ResolveTriggerRegistrationOption(v22);
  v10 = v9;
  v11 = (struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *)(v9 >> 8);
  LOBYTE(v11) = BYTE1(v9) & 1;
  LOBYTE(v13) = Windows::Services::TargetedContent::Internal::AllTriggersExecutedForTriggerType(this, v11, v12);
  if ( (_BYTE)v13 )
  {
    if ( (v10 & 1) != 0 && (v10 & 4) == 0 )
    {
      v14 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
              &v28,
              a2);
      v13 = Windows::Services::TargetedContent::Internal::UnRegisterTriggerTask(this, v14);
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x87,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
          (const char *)(unsigned int)v13);
        JUMPOUT(0x180064A06LL);
      }
    }
    if ( (v10 & 0x20) != 0 )
    {
      v15 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
              &v29,
              a2);
      CreativeFramework::RuleSetHandlers::MakeDiagTrackRuleSetHandler(&v23, v15);
      v16 = Windows::Services::TargetedContent::Internal::CreateCreativeRule(&v30, (__int64)this);
      CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::RemoveRule(v23, v16);
      v17 = v31;
      if ( v31 )
      {
        if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
        }
      }
      LOBYTE(v13) = v23;
      if ( !*(_BYTE *)(v23 + 24)
        || (v13 = RtlPublishWnfStateData(WNF_SHEL_SOFTLANDING_RULES_UPDATED, 0LL, 0LL, 0LL, 0LL) | 0x10000000, v13 >= 0) )
      {
        if ( v24 )
        {
          v13 = _InterlockedDecrement(v24 + 2);
          if ( !v13 )
          {
            v18 = v24;
            (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
            v13 = _InterlockedDecrement(v18 + 3);
            if ( !v13 )
              LOBYTE(v13) = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
          }
        }
        goto LABEL_18;
      }
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x336,
        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
        (const char *)(unsigned int)v13);
      goto LABEL_26;
    }
  }
LABEL_18:
  if ( v33 )
  {
    v19 = v32;
    LOBYTE(v19) = v33 != v32;
    LOBYTE(v13) = (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v33 + 32LL))(v33, v19);
    v33 = 0LL;
  }
  v20 = (volatile signed __int32 *)a2[1];
  if ( v20 )
  {
    v13 = _InterlockedDecrement(v20 + 2);
    if ( !v13 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
      v13 = _InterlockedDecrement(v20 + 3);
      if ( !v13 )
        LOBYTE(v13) = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
    }
  }
  return v13;
}
