/*
 * XREFs of ?RegisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@PEAUHSTRING__@@1@Z @ 0x180062F90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002D504 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@PEAUHSTRING__@@@Z @ 0x1800625C0 (-GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCorrelationV.c)
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x180063218 (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 *     ?MakeDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@YA?AV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@std@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@4@@Z @ 0x180079374 (-MakeDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@YA-AV-$shared_ptr@VIRuleSetHandl.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::RegisterTrigger(
        __int64 a1,
        __int64 a2,
        int a3,
        HSTRING a4)
{
  int v7; // eax
  unsigned int v8; // edi
  _QWORD *v9; // rax
  unsigned int v10; // esi
  int v11; // eax
  _QWORD *v12; // rbx
  unsigned int v13; // eax
  int v14; // ecx
  __int64 v15; // rcx
  int v16; // eax
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // rbx
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // [rsp+38h] [rbp-39h] BYREF
  __int64 v24; // [rsp+40h] [rbp-31h] BYREF
  volatile signed __int32 *v25; // [rsp+48h] [rbp-29h]
  __int64 v26; // [rsp+58h] [rbp-19h] BYREF
  volatile signed __int32 *v27; // [rsp+60h] [rbp-11h]
  __int64 v28; // [rsp+68h] [rbp-9h]
  RTL_SRWLOCK *v29; // [rsp+70h] [rbp-1h]
  __int64 v30; // [rsp+78h] [rbp+7h] BYREF
  __int64 v31; // [rsp+88h] [rbp+17h] BYREF
  __int64 v32; // [rsp+98h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  unsigned int v34; // [rsp+E0h] [rbp+6Fh] BYREF

  v28 = -2LL;
  AcquireSRWLockExclusive(&`anonymous namespace'::g_triggerManagerLock);
  v29 = &`anonymous namespace'::g_triggerManagerLock;
  v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 56LL))(a2, &v34);
  v8 = v7;
  if ( v7 >= 0 )
  {
    Windows::Services::TargetedContent::Internal::GetCorrelationVector((char *)&v26, a4);
    v9 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
           &v30,
           &v26);
    CreativeFramework::RuleSetHandlers::MakeDiagTrackRuleSetHandler(&v24, v9);
    v10 = 0;
    if ( v34 )
    {
      while ( 1 )
      {
        v23 = 0LL;
        v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, v10, &v23);
        v8 = v11;
        if ( v11 < 0 )
          break;
        v12 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
                &v31,
                &v24);
        v13 = (unsigned int)std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
                              &v32,
                              &v26);
        v8 = Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::RegisterTriggerInternal(
               v14,
               v23,
               a3,
               v13,
               (__int64)v12);
        if ( (int)(v8 + 0x80000000) >= 0 && v8 != -2147483638 )
        {
          v20 = v8;
          v21 = 197LL;
          goto LABEL_24;
        }
        v15 = v23;
        if ( v23 )
        {
          v23 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        if ( ++v10 >= v34 )
          goto LABEL_10;
      }
      v20 = (unsigned int)v11;
      v21 = 195LL;
LABEL_24:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)v20);
      v22 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
    }
    else
    {
LABEL_10:
      if ( *(_BYTE *)(v24 + 24) )
      {
        v16 = RtlPublishWnfStateData(WNF_SHEL_SOFTLANDING_RULES_UPDATED, 0LL, 0LL, 0LL, 0LL) | 0x10000000;
        if ( v16 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x1780,
            (__int64)"internal\\sdk\\inc\\wil\\resource.h",
            (const char *)(unsigned int)v16);
          JUMPOUT(0x18006320FLL);
        }
      }
      v8 = 0;
    }
    if ( v25 )
    {
      if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
      {
        v17 = v25;
        (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
      }
    }
    v18 = v27;
    if ( v27 )
    {
      if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
        if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
      }
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBC,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v7);
  }
  ReleaseSRWLockExclusive(&`anonymous namespace'::g_triggerManagerLock);
  return v8;
}
