/*
 * XREFs of ?RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18006F320
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001524C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002DF1C (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA?AW4TriggerRegistrationOption@1234@W4TargetedContentKnownTrigger@1234@@Z @ 0x18006DEB8 (-ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA-AW4TriggerRegist.c)
 *     ?ResolveCDMTaskName@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x18006DF0C (-ResolveCDMTaskName@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_tra.c)
 *     ?GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006E384 (-GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_.c)
 *     ?GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA?AU_WNF_STATE_NAME@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006E728 (-GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA-AU_WNF_STATE_NAME@@PEAUITar.c)
 *     ?ResolvePredicateHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006EFB8 (-ResolvePredicateHandler@Internal@TargetedContent@Services@Windows@@YA-AV-$function@$$A6AXPEAUHS.c)
 *     ?GetTaskConditionFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA?AW4TaskConditionFlags@CommonHelper@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006F20C (-GetTaskConditionFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA-AW4TaskConditionF.c)
 *     ?GetTaskOptionsFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA?AW4TaskOptionFlags@CommonHelper@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006F2C8 (-GetTaskOptionsFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA-AW4TaskOptionFlags@.c)
 *     ?RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_STATE_NAME@@PEBEIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800ABE38 (-RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_S.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800ADF60 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall Windows::Services::TargetedContent::Internal::RegisterWnfTrigger(
        Windows::Services::TargetedContent::Internal *a1,
        __int64 a2)
{
  ULONG v4; // ebx
  __int64 (__fastcall *v5)(Windows::Services::TargetedContent::Internal *, HSTRING *); // rdi
  int v6; // eax
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int16 v9; // di
  _QWORD *v10; // rdx
  char TaskOptionsFlagsForTrigger; // r12
  char TaskConditionFlagsForTrigger; // r13
  void **v13; // rdx
  HSTRING_HEADER *v14; // rsi
  const WCHAR *v15; // rcx
  HSTRING_HEADER *v16; // rdi
  const char *v17; // r9
  volatile signed __int32 *v18; // rdi
  volatile signed __int32 *v20; // rdi
  _QWORD *v21; // [rsp+38h] [rbp-140h]
  HSTRING string; // [rsp+50h] [rbp-128h] BYREF
  int v23; // [rsp+58h] [rbp-120h] BYREF
  int v24; // [rsp+5Ch] [rbp-11Ch] BYREF
  unsigned int v25; // [rsp+60h] [rbp-118h]
  LPVOID pv; // [rsp+68h] [rbp-110h] BYREF
  const WCHAR *v27; // [rsp+70h] [rbp-108h] BYREF
  int *v28; // [rsp+78h] [rbp-100h] BYREF
  HSTRING v29; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v30; // [rsp+88h] [rbp-F0h]
  __int64 v31; // [rsp+90h] [rbp-E8h]
  __int64 v32; // [rsp+98h] [rbp-E0h] BYREF
  void *v33[3]; // [rsp+A8h] [rbp-D0h] BYREF
  unsigned __int64 v34; // [rsp+C0h] [rbp-B8h]
  void *v35[3]; // [rsp+C8h] [rbp-B0h] BYREF
  unsigned __int64 v36; // [rsp+E0h] [rbp-98h]
  _QWORD v37[3]; // [rsp+E8h] [rbp-90h] BYREF
  _QWORD *v38; // [rsp+100h] [rbp-78h]
  HSTRING_HEADER v39; // [rsp+108h] [rbp-70h] BYREF
  HSTRING_HEADER v40; // [rsp+128h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  v31 = -2LL;
  try
  {
    v30 = a2;
    v4 = Windows::Services::TargetedContent::Internal::GetWnfStateForTrigger(
           a1,
           (struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *)a2).Data[0];
    v23 = 0;
    pv = 0LL;
    string = 0LL;
    v5 = *(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal *, HSTRING *))(*(_QWORD *)a1 + 96LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v6 = v5(a1, &string);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1C6,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v6);
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal *, int *))(*(_QWORD *)a1 + 80LL))(
             a1,
             &v24);
      v8 = retaddr;
      if ( v7 >= 0 )
      {
        v9 = Windows::Services::TargetedContent::Internal::ResolveTriggerRegistrationOption(v24);
        if ( (v9 & 2) == 0 && WindowsIsStringEmpty(string) || (v9 & 0x100) != 0 )
        {
LABEL_10:
          TaskOptionsFlagsForTrigger = Windows::Services::TargetedContent::Internal::GetTaskOptionsFlagsForTrigger((__int64)a1);
          TaskConditionFlagsForTrigger = Windows::Services::TargetedContent::Internal::GetTaskConditionFlagsForTrigger((__int64)a1);
          Windows::Services::TargetedContent::Internal::GetTaskNameForTrigger((HSTRING)v35, (__int64)a1);
          v13 = v35;
          if ( v36 >= 8 )
            v13 = (void **)v35[0];
          Windows::Services::TargetedContent::Internal::ResolveCDMTaskName(v33, (__int64)v13);
          v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v39, (const WCHAR **)off_1800EECE0);
          v15 = (const WCHAR *)v33;
          if ( v34 >= 8 )
            v15 = (const WCHAR *)v33[0];
          v27 = v15;
          v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v40, &v27);
          v21 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
                  &v32,
                  (__int64 *)a2);
          CreativeFramework::CommonHelper::RegisterBackgroundTaskWithWnfTrigger(
            v16[1].Reserved.Reserved1,
            v14[1].Reserved.Reserved1,
            v4,
            (_DWORD)pv,
            v23,
            TaskConditionFlagsForTrigger,
            TaskOptionsFlagsForTrigger,
            (__int64)v21);
          if ( v34 >= 8 )
            operator delete(v33[0]);
          v34 = 7LL;
          v33[2] = 0LL;
          LOWORD(v33[0]) = 0;
          if ( v36 >= 8 )
            operator delete(v35[0]);
          v36 = 7LL;
          v35[2] = 0LL;
          LOWORD(v35[0]) = 0;
          WindowsDeleteString(string);
          string = 0LL;
          if ( pv )
            CoTaskMemFree(pv);
          goto LABEL_36;
        }
        Windows::Services::TargetedContent::Internal::ResolvePredicateHandler(v37, (__int64)a1);
        v28 = &v23;
        v29 = string;
        if ( v38 )
        {
          (*(void (__fastcall **)(_QWORD *, HSTRING *, LPVOID *, int **))(*v38 + 16LL))(v38, &v29, &pv, &v28);
          if ( v38 )
          {
            v10 = v37;
            LOBYTE(v10) = v38 != v37;
            (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v38 + 32LL))(v38, v10);
          }
          goto LABEL_10;
        }
LABEL_32:
        std::_Xbad_function_call();
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x1C8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_32;
  }
  catch ( ... )
  {
    v25 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x1D8,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
            v17);
    v20 = *(volatile signed __int32 **)(v30 + 8);
    if ( v20 && _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
      if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
    }
    return v25;
  }
LABEL_36:
  v18 = *(volatile signed __int32 **)(a2 + 8);
  if ( v18 )
  {
    if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
      if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
    }
  }
  return 0LL;
}
