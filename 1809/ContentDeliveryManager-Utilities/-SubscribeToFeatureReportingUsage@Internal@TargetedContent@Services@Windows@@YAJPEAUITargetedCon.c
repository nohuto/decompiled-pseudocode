/*
 * XREFs of ?SubscribeToFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18006E570
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003C390 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006C41C (-_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_LoadStagingConfig@@YAJPEAPEAUwil_StagingConfig@@W4wil_FeatureStore@@H@Z @ 0x18006C44C (-wil_LoadStagingConfig@@YAJPEAPEAUwil_StagingConfig@@W4wil_FeatureStore@@H@Z.c)
 *     ?wil_SaveStagingConfig@@YAJPEAUwil_StagingConfig@@H@Z @ 0x18006C4DC (-wil_SaveStagingConfig@@YAJPEAUwil_StagingConfig@@H@Z.c)
 *     ?GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA?AU_WNF_STATE_NAME@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006CE98 (-GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA-AU_WNF_STATE_NAME@@PEAUITar.c)
 *     ?GetFeatureIdAndReportingIdForTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@AEAIAEAG@Z @ 0x18006E324 (-GetFeatureIdAndReportingIdForTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargete.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Services::TargetedContent::Internal::SubscribeToFeatureReportingUsage(
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
  int v12; // r10d
  LPVOID v13; // rbx
  __int64 v14; // r14
  const struct __WIL__WNF_TYPE_ID *v15; // r9
  unsigned int v16; // r11d
  __int64 v17; // r15
  __int64 v18; // rdx
  wil::details::in1diag3 *v19; // rcx
  int v20; // eax
  __int64 v21; // r8
  wil::details::in1diag3 *v22; // rcx
  HANDLE ProcessHeap; // rax
  HANDLE v24; // rax
  const char *v25; // r9
  volatile signed __int32 *v26; // rdi
  volatile signed __int32 *v28; // rdi
  unsigned int v29; // [rsp+20h] [rbp-68h]
  LPVOID lpMem[2]; // [rsp+28h] [rbp-60h] BYREF
  __int128 v31; // [rsp+38h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v34; // [rsp+A0h] [rbp+18h] BYREF
  int v35; // [rsp+A8h] [rbp+20h] BYREF

  lpMem[1] = (LPVOID)-2LL;
  try
  {
    lpMem[0] = 0LL;
    StagingConfig = wil_LoadStagingConfig((char **)lpMem);
    if ( StagingConfig < 0 )
    {
      wil::details::in1diag3::_Throw_NtStatus(retaddr, (void *)0x21F, v5, (const char *)(unsigned int)StagingConfig);
    }
    else
    {
      FeatureIdAndReportingIdForTrigger = Windows::Services::TargetedContent::Internal::GetFeatureIdAndReportingIdForTrigger(
                                            this,
                                            (struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *)&v35,
                                            &v34,
                                            v6);
      v9 = retaddr;
      if ( FeatureIdAndReportingIdForTrigger >= 0 )
      {
        WnfStateForTrigger = Windows::Services::TargetedContent::Internal::GetWnfStateForTrigger(this, v8);
        v12 = v35;
        LODWORD(v31) = v35;
        HIDWORD(v31) = (unsigned __int16)v34;
        *(struct _WNF_STATE_NAME *)((char *)&v31 + 4) = WnfStateForTrigger;
        v13 = lpMem[0];
        v14 = *((_QWORD *)lpMem[0] + 3);
        v15 = (const struct __WIL__WNF_TYPE_ID *)*((_QWORD *)lpMem[0] + 5);
        v16 = 0;
        v17 = *(unsigned __int16 *)(v14 + 6);
        v18 = 1LL;
        if ( *(_WORD *)(v14 + 6) )
        {
          do
          {
            v11 = 2LL * v16;
            if ( *((_DWORD *)v15 + 4 * v16) == v12 )
            {
              if ( (unsigned __int16)v34 == (unsigned __int16)*((_DWORD *)v15 + 4 * v16 + 3)
                && (((unsigned __int16)v34 ^ *((_DWORD *)v15 + 4 * v16 + 3)) & 0x10000) == 0
                && *((_DWORD *)v15 + 4 * v16 + 1) == WnfStateForTrigger.Data[0]
                && *((_DWORD *)v15 + 4 * v16 + 2) == WnfStateForTrigger.Data[1] )
              {
                goto LABEL_15;
              }
              v12 = v35;
            }
            ++v16;
          }
          while ( v16 < (unsigned int)v17 );
        }
        if ( *((_QWORD *)lpMem[0] + 9) - *((_QWORD *)lpMem[0] + 8) >= 0x10uLL )
        {
          *((_OWORD *)v15 + v17) = v31;
          ++*(_WORD *)(v14 + 6);
          *((_QWORD *)v13 + 8) += 16LL;
          *((_DWORD *)v13 + 4) = 1;
        }
        else
        {
          v18 = 0LL;
        }
LABEL_15:
        v19 = retaddr;
        if ( (_DWORD)v18 )
        {
          v20 = wil_SaveStagingConfig((struct wil_StagingConfig *)v13, v18, v11, v15);
          v22 = retaddr;
          if ( v20 >= 0 )
          {
            if ( *((_DWORD *)v13 + 20) )
            {
              ProcessHeap = GetProcessHeap();
              HeapFree(ProcessHeap, 0, *((LPVOID *)v13 + 7));
              *((_QWORD *)v13 + 7) = 0LL;
              *((_QWORD *)v13 + 3) = 0LL;
            }
            v24 = GetProcessHeap();
            HeapFree(v24, 0, v13);
            goto LABEL_38;
          }
LABEL_33:
          wil::details::in1diag3::_Throw_NtStatus(v22, (void *)0x22C, v21, (const char *)(unsigned int)v20);
          JUMPOUT(0x18006E802LL);
        }
LABEL_32:
        wil::details::in1diag3::_Throw_GetLastError(
          v19,
          (void *)0x22A,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
          (const char *)v15);
        goto LABEL_33;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x223,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)FeatureIdAndReportingIdForTrigger);
    goto LABEL_32;
  }
  catch ( ... )
  {
    v29 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x22F,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
            v25);
    v28 = *(volatile signed __int32 **)(a2 + 8);
    if ( v28 && _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
      if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
    }
    return v29;
  }
LABEL_38:
  v26 = *(volatile signed __int32 **)(a2 + 8);
  if ( v26 )
  {
    if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v26)(v26);
      if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
    }
  }
  return 0LL;
}
