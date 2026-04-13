/*
 * XREFs of ?SubscribeToFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180070120
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA?AU_WNF_STATE_NAME@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006E958 (-GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA-AU_WNF_STATE_NAME@@PEAUITar.c)
 *     ?GetFeatureIdAndReportingIdForTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@AEAIAEAG@Z @ 0x18006FDF8 (-GetFeatureIdAndReportingIdForTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargete.c)
 *     ?MakeFeatureUsageListener@Internal@TargetedContent@Services@Windows@@YA?AV?$com_ptr_t@UIFeatureUsageListener@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180070044 (-MakeFeatureUsageListener@Internal@TargetedContent@Services@Windows@@YA-AV-$com_ptr_t@UIFeatureU.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Services::TargetedContent::Internal::SubscribeToFeatureReportingUsage(
        Windows::Services::TargetedContent::Internal *this,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4)
{
  int FeatureIdAndReportingIdForTrigger; // eax
  struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *v7; // rdx
  int v8; // eax
  const char *v9; // r9
  wil::details::in1diag3 *v10; // rcx
  volatile signed __int32 *v11; // rdi
  volatile signed __int32 *v13; // rdi
  struct _WNF_STATE_NAME WnfStateForTrigger; // [rsp+40h] [rbp-28h]
  unsigned int v15; // [rsp+40h] [rbp-28h]
  _QWORD v16[4]; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v19; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v20; // [rsp+88h] [rbp+20h] BYREF

  v16[1] = -2LL;
  FeatureIdAndReportingIdForTrigger = Windows::Services::TargetedContent::Internal::GetFeatureIdAndReportingIdForTrigger(
                                        this,
                                        (struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *)&v20,
                                        &v19,
                                        a4);
  try
  {
    if ( FeatureIdAndReportingIdForTrigger < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x22B,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)FeatureIdAndReportingIdForTrigger);
    }
    else
    {
      WnfStateForTrigger = Windows::Services::TargetedContent::Internal::GetWnfStateForTrigger(this, v7);
      Windows::Services::TargetedContent::Internal::MakeFeatureUsageListener(v16);
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, ULONG, ULONG))(*(_QWORD *)v16[0] + 24LL))(
             v16[0],
             v20,
             (unsigned __int16)v19,
             0LL,
             WnfStateForTrigger.Data[0],
             WnfStateForTrigger.Data[1]);
      v10 = retaddr;
      if ( v8 >= 0 )
      {
        if ( v16[0] )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v16[0] + 16LL))(v16[0]);
        goto LABEL_22;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0x232,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v8);
    JUMPOUT(0x18007028CLL);
  }
  catch ( ... )
  {
    v15 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x236,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
            v9);
    v13 = *(volatile signed __int32 **)(a2 + 8);
    if ( v13 && _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
    return v15;
  }
LABEL_22:
  v11 = *(volatile signed __int32 **)(a2 + 8);
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  return 0LL;
}
