/*
 * XREFs of ?GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180070880
 * Callers:
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x180063218 (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x180063EC4 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 *     ?AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedContentTriggerInternal@1234@_N@Z @ 0x18007139C (-AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedC.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x18003148C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800661EC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA?AW4TriggerRegistrationOption@1234@W4TargetedContentKnownTrigger@1234@@Z @ 0x18006C68C (-ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA-AW4TriggerRegist.c)
 *     ?NormalizedString@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W00@Z @ 0x18006C8B8 (-NormalizedString@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_trait.c)
 *     ?GetBase64StringFromBytes@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@IPEBE@Z @ 0x18006D55C (-GetBase64StringFromBytes@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@M.c)
 *     ?ResolvePredicateHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006D720 (-ResolvePredicateHandler@Internal@TargetedContent@Services@Windows@@YA-AV-$function@$$A6AXPEAUHS.c)
 *     ?GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@W4TargetedContentKnownTrigger@1234@@Z @ 0x18006F5F0 (-GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA-AV.c)
 *     ??4?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180073D78 (--4-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@.c)
 *     ?CreateContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@_N@Z @ 0x1800A90C0 (-CreateContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAA-AV-$shared_ptr@VISetting.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800A9FE0 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
const WCHAR *__fastcall Windows::Services::TargetedContent::Internal::GetTriggerSettingsContainer(
        const WCHAR *a1,
        __int64 a2)
{
  int v4; // eax
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  char *StringRawBuffer; // rax
  void **v8; // rbx
  const WCHAR *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 Container; // rax
  volatile signed __int32 *v14; // rbx
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  __int16 v17; // si
  int v18; // eax
  __int64 v19; // r9
  wil::details::in1diag3 *v20; // rcx
  __int64 v21; // rax
  volatile signed __int32 *v22; // rbx
  int v23; // eax
  char *v24; // rax
  unsigned __int64 v25; // r8
  _QWORD *v26; // rdx
  char *v27; // rdx
  void **v28; // rbx
  const WCHAR *v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // r9
  __int64 v33; // rax
  volatile signed __int32 *v34; // rbx
  HSTRING v36; // [rsp+38h] [rbp-D0h] BYREF
  int v37; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v38; // [rsp+44h] [rbp-C4h] BYREF
  HSTRING string; // [rsp+48h] [rbp-C0h] BYREF
  HSTRING v40; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+58h] [rbp-B0h]
  HSTRING v42; // [rsp+60h] [rbp-A8h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-A0h] BYREF
  const WCHAR *v44; // [rsp+70h] [rbp-98h] BYREF
  unsigned int *v45; // [rsp+78h] [rbp-90h] BYREF
  HSTRING v46; // [rsp+80h] [rbp-88h] BYREF
  const WCHAR *v47[3]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v48[8]; // [rsp+A0h] [rbp-68h] BYREF
  volatile signed __int32 *v49; // [rsp+A8h] [rbp-60h]
  _BYTE v50[8]; // [rsp+B0h] [rbp-58h] BYREF
  volatile signed __int32 *v51; // [rsp+B8h] [rbp-50h]
  _BYTE v52[8]; // [rsp+C0h] [rbp-48h] BYREF
  volatile signed __int32 *v53; // [rsp+C8h] [rbp-40h]
  void *v54[2]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v55; // [rsp+E0h] [rbp-28h]
  unsigned __int64 v56; // [rsp+E8h] [rbp-20h]
  void *v57[3]; // [rsp+F0h] [rbp-18h] BYREF
  unsigned __int64 v58; // [rsp+108h] [rbp+0h]
  _QWORD v59[3]; // [rsp+110h] [rbp+8h] BYREF
  _QWORD *v60; // [rsp+128h] [rbp+20h]
  void *Src[4]; // [rsp+130h] [rbp+28h] BYREF
  void *v62[4]; // [rsp+150h] [rbp+48h] BYREF
  _BYTE v63[32]; // [rsp+170h] [rbp+68h] BYREF
  _BYTE v64[32]; // [rsp+190h] [rbp+88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v47[1] = (const WCHAR *)-2LL;
  v47[2] = a1;
  LODWORD(v41) = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 80LL))(a2, &v37);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xD5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_58;
  }
  Windows::Services::TargetedContent::Internal::GetRootRegistrationSettingsForTriggerContainer(a1, v37);
  LODWORD(v41) = 1;
  string = 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 64LL))(a2, &string);
  v6 = retaddr;
  if ( v5 < 0 )
  {
LABEL_58:
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0xD9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v5);
LABEL_59:
    wil::details::in1diag3::Throw_Hr(
      v16,
      (void *)0xE2,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_60;
  }
  v56 = 7LL;
  v55 = 0LL;
  LOWORD(v54[0]) = 0;
  if ( !WindowsIsStringEmpty(string) )
  {
    StringRawBuffer = (char *)WindowsGetStringRawBuffer(string, 0LL);
    v8 = Windows::Services::TargetedContent::Internal::NormalizedString(Src, StringRawBuffer);
    if ( v54 != v8 )
    {
      if ( v56 >= 8 )
        operator delete(v54[0]);
      v56 = 7LL;
      v55 = 0LL;
      LOWORD(v54[0]) = 0;
      std::wstring::_Assign_rv(v54, v8);
    }
    if ( Src[3] >= (void *)8 )
      operator delete(Src[0]);
    v9 = (const WCHAR *)v54;
    if ( v56 >= 8 )
      v9 = (const WCHAR *)v54[0];
    v44 = v9;
    v10 = *(_QWORD *)a1;
    v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v63, &v44);
    LOBYTE(v12) = 1;
    Container = CreativeFramework::CommonHelper::SettingsContainer::CreateContainer(
                  v10,
                  v48,
                  *(_QWORD *)(v11 + 24),
                  v12);
    std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(a1, Container);
    v14 = v49;
    if ( v49 )
    {
      if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      }
    }
  }
  WindowsDeleteString(0LL);
  v36 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 96LL))(a2, &v36);
  v16 = retaddr;
  if ( v15 < 0 )
    goto LABEL_59;
  v17 = Windows::Services::TargetedContent::Internal::ResolveTriggerRegistrationOption(v37);
  if ( (v17 & 0x10) == 0 )
    goto LABEL_26;
  v40 = 0LL;
  WindowsDeleteString(0LL);
  v40 = 0LL;
  v18 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 176LL))(a2, &v40);
  v20 = retaddr;
  if ( v18 < 0 )
  {
LABEL_60:
    wil::details::in1diag3::Throw_Hr(
      v20,
      (void *)0xE7,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
  LOBYTE(v19) = 1;
  v21 = CreativeFramework::CommonHelper::SettingsContainer::CreateContainer(*(_QWORD *)a1, v50, v40, v19);
  std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(a1, v21);
  v22 = v51;
  if ( v51 )
  {
    if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
      if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
    }
  }
  if ( WindowsIsStringEmpty(v36) )
  {
    WindowsDeleteString(v36);
    v36 = 0LL;
    v23 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 128LL))(a2, &v36);
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xEE,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v23);
      JUMPOUT(0x180070E81LL);
    }
  }
  WindowsDeleteString(v40);
LABEL_26:
  if ( !WindowsIsStringEmpty(v36) )
  {
    if ( (v17 & 0x101) == 1 )
    {
      v38 = 0;
      pv = 0LL;
      Windows::Services::TargetedContent::Internal::ResolvePredicateHandler(v59, a2);
      v45 = &v38;
      v46 = v36;
      if ( !v60 )
        std::_Xbad_function_call();
      (*(void (__fastcall **)(_QWORD *, HSTRING *, LPVOID *, unsigned int **))(*v60 + 16LL))(v60, &v46, &pv, &v45);
      Windows::Services::TargetedContent::Internal::GetBase64StringFromBytes(&v42, v38, (__int64)pv);
      v24 = (char *)WindowsGetStringRawBuffer(v42, 0LL);
      v58 = 7LL;
      v57[2] = 0LL;
      LOWORD(v57[0]) = 0;
      if ( *(_WORD *)v24 )
      {
        v25 = -1LL;
        do
          ++v25;
        while ( *(_WORD *)&v24[2 * v25] );
      }
      else
      {
        v25 = 0LL;
      }
      std::wstring::assign(v57, v24, v25);
      if ( v56 >= 8 )
        operator delete(v54[0]);
      v56 = 7LL;
      v55 = 0LL;
      LOWORD(v54[0]) = 0;
      std::wstring::_Assign_rv(v54, v57);
      if ( v58 >= 8 )
        operator delete(v57[0]);
      WindowsDeleteString(v42);
      v42 = 0LL;
      if ( v60 )
      {
        v26 = v59;
        LOBYTE(v26) = v60 != v59;
        (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v60 + 32LL))(v60, v26);
        v60 = 0LL;
      }
      if ( pv )
        CoTaskMemFree(pv);
    }
    else
    {
      v27 = (char *)WindowsGetStringRawBuffer(v36, 0LL);
      v28 = Windows::Services::TargetedContent::Internal::NormalizedString(v62, v27);
      if ( v54 != v28 )
      {
        if ( v56 >= 8 )
          operator delete(v54[0]);
        v56 = 7LL;
        v55 = 0LL;
        LOWORD(v54[0]) = 0;
        std::wstring::_Assign_rv(v54, v28);
      }
      if ( v62[3] >= (void *)8 )
        operator delete(v62[0]);
    }
    v29 = (const WCHAR *)v54;
    if ( v56 >= 8 )
      v29 = (const WCHAR *)v54[0];
    v47[0] = v29;
    v30 = *(_QWORD *)a1;
    v31 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v64, v47);
    LOBYTE(v32) = 1;
    v33 = CreativeFramework::CommonHelper::SettingsContainer::CreateContainer(v30, v52, *(_QWORD *)(v31 + 24), v32);
    std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(a1, v33);
    v34 = v53;
    if ( v53 )
    {
      if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v34)(v34);
        if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
      }
    }
  }
  WindowsDeleteString(v36);
  v36 = 0LL;
  if ( v56 >= 8 )
    operator delete(v54[0]);
  v56 = 7LL;
  v55 = 0LL;
  LOWORD(v54[0]) = 0;
  WindowsDeleteString(string);
  return a1;
}
