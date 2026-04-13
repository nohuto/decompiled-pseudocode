/*
 * XREFs of ?UnsubscribeFromFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18006E810
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006C41C (-_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_LoadStagingConfig@@YAJPEAPEAUwil_StagingConfig@@W4wil_FeatureStore@@H@Z @ 0x18006C44C (-wil_LoadStagingConfig@@YAJPEAPEAUwil_StagingConfig@@W4wil_FeatureStore@@H@Z.c)
 *     ?wil_SaveStagingConfig@@YAJPEAUwil_StagingConfig@@H@Z @ 0x18006C4DC (-wil_SaveStagingConfig@@YAJPEAUwil_StagingConfig@@H@Z.c)
 *     ?GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA?AU_WNF_STATE_NAME@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006CE98 (-GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA-AU_WNF_STATE_NAME@@PEAUITar.c)
 *     ?GetFeatureIdAndReportingIdForTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@AEAIAEAG@Z @ 0x18006E324 (-GetFeatureIdAndReportingIdForTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargete.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Services::TargetedContent::Internal::UnsubscribeFromFeatureReportingUsage(
        Windows::Services::TargetedContent::Internal *this,
        __int64 a2)
{
  int StagingConfig; // eax
  __int64 v5; // r8
  unsigned __int16 *v6; // r9
  int FeatureIdAndReportingIdForTrigger; // eax
  struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *v8; // rdx
  wil::details::in1diag3 *v9; // rcx
  struct _WNF_STATE_NAME WnfStateForTrigger; // rax
  __int64 v11; // r8
  LPVOID v12; // rbx
  __int64 v13; // r14
  const struct __WIL__WNF_TYPE_ID *v14; // r9
  __int64 v15; // rdx
  unsigned __int16 v16; // r11
  unsigned __int16 v17; // cx
  int v18; // r12d
  int v19; // eax
  __int64 v20; // r8
  wil::details::in1diag3 *v21; // rcx
  HANDLE ProcessHeap; // rax
  HANDLE v23; // rax
  const char *v24; // r9
  volatile signed __int32 *v25; // rsi
  volatile signed __int32 *v27; // rsi
  unsigned int v28; // [rsp+20h] [rbp-48h]
  LPVOID lpMem[8]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v32; // [rsp+80h] [rbp+18h] BYREF
  int v33; // [rsp+88h] [rbp+20h] BYREF

  lpMem[1] = (LPVOID)-2LL;
  try
  {
    lpMem[0] = 0LL;
    StagingConfig = wil_LoadStagingConfig((char **)lpMem);
    if ( StagingConfig < 0 )
    {
      wil::details::in1diag3::_Throw_NtStatus(retaddr, (void *)0x234, v5, (const char *)(unsigned int)StagingConfig);
    }
    else
    {
      FeatureIdAndReportingIdForTrigger = Windows::Services::TargetedContent::Internal::GetFeatureIdAndReportingIdForTrigger(
                                            this,
                                            (struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *)&v33,
                                            &v32,
                                            v6);
      v9 = retaddr;
      if ( FeatureIdAndReportingIdForTrigger >= 0 )
      {
        WnfStateForTrigger = Windows::Services::TargetedContent::Internal::GetWnfStateForTrigger(this, v8);
        v12 = lpMem[0];
        v13 = *((_QWORD *)lpMem[0] + 3);
        v14 = (const struct __WIL__WNF_TYPE_ID *)*((_QWORD *)lpMem[0] + 5);
        v15 = 0LL;
        v16 = 0;
        v17 = *(_WORD *)(v13 + 6);
        if ( v17 )
        {
          v18 = v33;
          do
          {
            v11 = 2LL * v16;
            if ( *((_DWORD *)v14 + 4 * v16) != v18
              || *((_WORD *)v14 + 8 * v16 + 6) != (_WORD)v32
              || (*((_DWORD *)v14 + 4 * v16 + 3) & 0x10000) != 0
              || *((_DWORD *)v14 + 4 * v16 + 1) != WnfStateForTrigger.Data[0]
              || *((_DWORD *)v14 + 4 * v16 + 2) != WnfStateForTrigger.Data[1] )
            {
              if ( (_WORD)v15 != v16 )
                *((_OWORD *)v14 + (unsigned __int16)v15) = *((_OWORD *)v14 + v16);
              LOWORD(v15) = v15 + 1;
            }
            ++v16;
            v17 = *(_WORD *)(v13 + 6);
          }
          while ( v16 < v17 );
        }
        if ( (unsigned __int16)v15 < v17 )
        {
          *((_QWORD *)v12 + 8) += 16 * ((unsigned __int16)v15 - (unsigned __int64)v17);
          *((_DWORD *)v12 + 4) = 1;
          *(_WORD *)(v13 + 6) = v15;
        }
        v19 = wil_SaveStagingConfig((struct wil_StagingConfig *)v12, v15, v11, v14);
        v21 = retaddr;
        if ( v19 >= 0 )
        {
          if ( *((_DWORD *)v12 + 20) )
          {
            ProcessHeap = GetProcessHeap();
            HeapFree(ProcessHeap, 0, *((LPVOID *)v12 + 7));
            *((_QWORD *)v12 + 7) = 0LL;
            *((_QWORD *)v12 + 3) = 0LL;
          }
          v23 = GetProcessHeap();
          HeapFree(v23, 0, v12);
          goto LABEL_38;
        }
LABEL_33:
        wil::details::in1diag3::_Throw_NtStatus(v21, (void *)0x241, v20, (const char *)(unsigned int)v19);
        JUMPOUT(0x18006EA4FLL);
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x238,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)FeatureIdAndReportingIdForTrigger);
    goto LABEL_33;
  }
  catch ( ... )
  {
    v28 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x244,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
            v24);
    v27 = *(volatile signed __int32 **)(a2 + 8);
    if ( v27 && _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
      if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
    }
    return v28;
  }
LABEL_38:
  v25 = *(volatile signed __int32 **)(a2 + 8);
  if ( v25 )
  {
    if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
      if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
    }
  }
  return 0LL;
}
