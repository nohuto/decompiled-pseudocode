/*
 * XREFs of ?AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedContentTriggerInternal@1234@_N@Z @ 0x180072D28
 * Callers:
 *     ?UnregisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180064750 (-UnregisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInte.c)
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x1800659C4 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002E35C (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@W4TargetedContentKnownTrigger@1234@@Z @ 0x180070F64 (-GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA-AV.c)
 *     ?EnumerateTriggersWithStateInContainer@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@W4TargetedContentTriggerState@1234@V?$function@$$A6A_NAEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x1800720A0 (-EnumerateTriggersWithStateInContainer@Internal@TargetedContent@Services@Windows@@YAXV-$shared_p.c)
 *     ?GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800721F8 (-GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VISett.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall Windows::Services::TargetedContent::Internal::AllTriggersExecutedForTriggerType(
        Windows::Services::TargetedContent::Internal *this,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *a2)
{
  char v2; // di
  int v4; // eax
  const WCHAR *RootRegistrationSettingsForTriggerContainer; // rdx
  int v6; // ecx
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // rdx
  char v11; // di
  __int64 v12; // rbx
  __int128 v14; // [rsp+38h] [rbp-19h] BYREF
  WCHAR v15; // [rsp+48h] [rbp-9h] BYREF
  volatile signed __int32 *v16; // [rsp+50h] [rbp-1h]
  WCHAR v17; // [rsp+58h] [rbp+7h] BYREF
  volatile signed __int32 *v18; // [rsp+60h] [rbp+Fh]
  __int64 v19; // [rsp+68h] [rbp+17h] BYREF
  _QWORD v20[6]; // [rsp+78h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]
  char v22; // [rsp+B8h] [rbp+67h] BYREF
  int v23; // [rsp+C8h] [rbp+77h]
  int v24; // [rsp+D0h] [rbp+7Fh] BYREF

  v2 = (char)a2;
  v23 = 0;
  v4 = (*(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal *, int *))(*(_QWORD *)this + 80LL))(
         this,
         &v24);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x12F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v4);
    JUMPOUT(0x180072F0ALL);
  }
  if ( v2 )
  {
    RootRegistrationSettingsForTriggerContainer = Windows::Services::TargetedContent::Internal::GetRootRegistrationSettingsForTriggerContainer(
                                                    &v17,
                                                    v24);
    v6 = 1;
  }
  else
  {
    RootRegistrationSettingsForTriggerContainer = Windows::Services::TargetedContent::Internal::GetTriggerSettingsContainer(
                                                    &v15,
                                                    (__int64)this);
    v6 = 2;
  }
  v23 = v6;
  v14 = 0LL;
  if ( &v14 != (__int128 *)RootRegistrationSettingsForTriggerContainer )
  {
    *((_QWORD *)&v14 + 1) = *((_QWORD *)RootRegistrationSettingsForTriggerContainer + 1);
    *((_QWORD *)RootRegistrationSettingsForTriggerContainer + 1) = 0LL;
    *(_QWORD *)&v14 = *(_QWORD *)RootRegistrationSettingsForTriggerContainer;
    *(_QWORD *)RootRegistrationSettingsForTriggerContainer = 0LL;
  }
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    v23 = v6;
    v7 = v16;
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
      LOBYTE(v6) = v23;
    }
  }
  if ( (v6 & 1) != 0 )
  {
    v8 = v18;
    if ( v18 )
    {
      if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
        if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      }
    }
  }
  v22 = 1;
  v20[0] = off_1800E4308;
  v20[1] = &v22;
  v20[3] = v20;
  v9 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
         &v19,
         (__int64 *)&v14);
  Windows::Services::TargetedContent::Internal::EnumerateTriggersWithStateInContainer(v9, v10, (__int64)v20);
  v11 = v22;
  if ( *((_QWORD *)&v14 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL)) )
    {
      v12 = *((_QWORD *)&v14 + 1);
      (***((void (__fastcall ****)(_QWORD))&v14 + 1))(*((_QWORD *)&v14 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v14 + 1) + 8LL))(*((_QWORD *)&v14 + 1));
    }
  }
  return v11;
}
