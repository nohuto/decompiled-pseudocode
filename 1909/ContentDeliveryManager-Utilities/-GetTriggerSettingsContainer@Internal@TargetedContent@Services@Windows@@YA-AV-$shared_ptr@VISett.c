/*
 * XREFs of ?GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800721F8
 * Callers:
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x180064D00 (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x1800659C4 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 *     ?AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedContentTriggerInternal@1234@_N@Z @ 0x180072D28 (-AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedC.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001563C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180032360 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180067F1C (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA?AW4TriggerRegistrationOption@1234@W4TargetedContentKnownTrigger@1234@@Z @ 0x18006E0E8 (-ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA-AW4TriggerRegist.c)
 *     ?NormalizedString@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W00@Z @ 0x18006E318 (-NormalizedString@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_trait.c)
 *     ?GetBase64StringFromBytes@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@IPEBE@Z @ 0x18006F02C (-GetBase64StringFromBytes@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@M.c)
 *     ?ResolvePredicateHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006F1E8 (-ResolvePredicateHandler@Internal@TargetedContent@Services@Windows@@YA-AV-$function@$$A6AXPEAUHS.c)
 *     ?GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@W4TargetedContentKnownTrigger@1234@@Z @ 0x180070F64 (-GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA-AV.c)
 *     ??4?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180075744 (--4-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@.c)
 *     ?CreateContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@_N@Z @ 0x1800AD170 (-CreateContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAA-AV-$shared_ptr@VISetting.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800AE0F0 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
const WCHAR *__fastcall Windows::Services::TargetedContent::Internal::GetTriggerSettingsContainer(
        const WCHAR *a1,
        __int64 a2)
{
  int v4; // eax
  __int64 (__fastcall *v5)(__int64, HSTRING *); // rbx
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  char *StringRawBuffer; // rax
  void **v9; // rbx
  __int64 v10; // rbx
  const WCHAR *v11; // rax
  HSTRING_HEADER *v12; // rax
  __int64 v13; // r9
  __int64 Container; // rax
  volatile signed __int32 *v15; // rbx
  __int64 (__fastcall *v16)(__int64, HSTRING *); // rbx
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  __int16 v19; // si
  __int64 (__fastcall *v20)(__int64, HSTRING *); // rbx
  int v21; // eax
  __int64 v22; // r9
  wil::details::in1diag3 *v23; // rcx
  __int64 v24; // rax
  volatile signed __int32 *v25; // rbx
  __int64 (__fastcall *v26)(__int64, HSTRING *); // rbx
  int v27; // eax
  char *v28; // rax
  unsigned __int64 v29; // r8
  _QWORD *v30; // rdx
  char *v31; // rdx
  void **v32; // rbx
  __int64 v33; // rbx
  const WCHAR *v34; // rax
  HSTRING_HEADER *v35; // rax
  __int64 v36; // r9
  __int64 v37; // rax
  volatile signed __int32 *v38; // rbx
  HSTRING v40; // [rsp+38h] [rbp-D0h] BYREF
  int v41; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v42; // [rsp+44h] [rbp-C4h] BYREF
  HSTRING string; // [rsp+48h] [rbp-C0h] BYREF
  HSTRING v44; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+58h] [rbp-B0h]
  HSTRING v46; // [rsp+60h] [rbp-A8h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-A0h] BYREF
  const WCHAR *v48; // [rsp+70h] [rbp-98h] BYREF
  unsigned int *v49; // [rsp+78h] [rbp-90h] BYREF
  HSTRING v50; // [rsp+80h] [rbp-88h] BYREF
  const WCHAR *v51[3]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v52[8]; // [rsp+A0h] [rbp-68h] BYREF
  volatile signed __int32 *v53; // [rsp+A8h] [rbp-60h]
  _BYTE v54[8]; // [rsp+B0h] [rbp-58h] BYREF
  volatile signed __int32 *v55; // [rsp+B8h] [rbp-50h]
  _BYTE v56[8]; // [rsp+C0h] [rbp-48h] BYREF
  volatile signed __int32 *v57; // [rsp+C8h] [rbp-40h]
  void *v58[2]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v59; // [rsp+E0h] [rbp-28h]
  unsigned __int64 v60; // [rsp+E8h] [rbp-20h]
  void *v61[3]; // [rsp+F0h] [rbp-18h] BYREF
  unsigned __int64 v62; // [rsp+108h] [rbp+0h]
  _QWORD v63[3]; // [rsp+110h] [rbp+8h] BYREF
  _QWORD *v64; // [rsp+128h] [rbp+20h]
  void *Src[4]; // [rsp+130h] [rbp+28h] BYREF
  void *v66[4]; // [rsp+150h] [rbp+48h] BYREF
  HSTRING_HEADER v67; // [rsp+170h] [rbp+68h] BYREF
  HSTRING_HEADER v68; // [rsp+190h] [rbp+88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v51[1] = (const WCHAR *)-2LL;
  v51[2] = a1;
  LODWORD(v45) = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 80LL))(a2, &v41);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xD5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_58;
  }
  Windows::Services::TargetedContent::Internal::GetRootRegistrationSettingsForTriggerContainer(a1, v41);
  LODWORD(v45) = 1;
  string = 0LL;
  v5 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 64LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v6 = v5(a2, &string);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_58:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0xD9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v6);
LABEL_59:
    wil::details::in1diag3::Throw_Hr(
      v18,
      (void *)0xE2,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v17);
    goto LABEL_60;
  }
  v60 = 7LL;
  v59 = 0LL;
  LOWORD(v58[0]) = 0;
  if ( !WindowsIsStringEmpty(string) )
  {
    StringRawBuffer = (char *)WindowsGetStringRawBuffer(string, 0LL);
    v9 = Windows::Services::TargetedContent::Internal::NormalizedString(Src, StringRawBuffer);
    if ( v58 != v9 )
    {
      if ( v60 >= 8 )
        operator delete(v58[0]);
      v60 = 7LL;
      v59 = 0LL;
      LOWORD(v58[0]) = 0;
      std::wstring::_Assign_rv(v58, v9);
    }
    if ( Src[3] >= (void *)8 )
      operator delete(Src[0]);
    v10 = *(_QWORD *)a1;
    v11 = (const WCHAR *)v58;
    if ( v60 >= 8 )
      v11 = (const WCHAR *)v58[0];
    v48 = v11;
    v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v67, &v48);
    LOBYTE(v13) = 1;
    Container = CreativeFramework::CommonHelper::SettingsContainer::CreateContainer(
                  v10,
                  v52,
                  v12[1].Reserved.Reserved1,
                  v13);
    std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(a1, Container);
    v15 = v53;
    if ( v53 )
    {
      if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
  }
  v40 = 0LL;
  v16 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 96LL);
  WindowsDeleteString(0LL);
  v40 = 0LL;
  v17 = v16(a2, &v40);
  v18 = retaddr;
  if ( v17 < 0 )
    goto LABEL_59;
  v19 = Windows::Services::TargetedContent::Internal::ResolveTriggerRegistrationOption(v41);
  if ( (v19 & 0x10) == 0 )
    goto LABEL_26;
  v44 = 0LL;
  v20 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 176LL);
  WindowsDeleteString(0LL);
  v44 = 0LL;
  v21 = v20(a2, &v44);
  v23 = retaddr;
  if ( v21 < 0 )
  {
LABEL_60:
    wil::details::in1diag3::Throw_Hr(
      v23,
      (void *)0xE7,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v21);
    __debugbreak();
  }
  LOBYTE(v22) = 1;
  v24 = CreativeFramework::CommonHelper::SettingsContainer::CreateContainer(*(_QWORD *)a1, v54, v44, v22);
  std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(a1, v24);
  v25 = v55;
  if ( v55 )
  {
    if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
      if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
    }
  }
  if ( WindowsIsStringEmpty(v40) )
  {
    v26 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 128LL);
    WindowsDeleteString(v40);
    v40 = 0LL;
    v27 = v26(a2, &v40);
    if ( v27 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xEE,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v27);
      JUMPOUT(0x180072805LL);
    }
  }
  WindowsDeleteString(v44);
LABEL_26:
  if ( !WindowsIsStringEmpty(v40) )
  {
    if ( (v19 & 0x101) == 1 )
    {
      v42 = 0;
      pv = 0LL;
      Windows::Services::TargetedContent::Internal::ResolvePredicateHandler(v63, a2);
      v49 = &v42;
      v50 = v40;
      if ( !v64 )
        std::_Xbad_function_call();
      (*(void (__fastcall **)(_QWORD *, HSTRING *, LPVOID *, unsigned int **))(*v64 + 16LL))(v64, &v50, &pv, &v49);
      Windows::Services::TargetedContent::Internal::GetBase64StringFromBytes(&v46, v42, (__int64)pv);
      v28 = (char *)WindowsGetStringRawBuffer(v46, 0LL);
      v62 = 7LL;
      v61[2] = 0LL;
      LOWORD(v61[0]) = 0;
      if ( *(_WORD *)v28 )
      {
        v29 = -1LL;
        do
          ++v29;
        while ( *(_WORD *)&v28[2 * v29] );
      }
      else
      {
        v29 = 0LL;
      }
      std::wstring::assign(v61, v28, v29);
      if ( v60 >= 8 )
        operator delete(v58[0]);
      v60 = 7LL;
      v59 = 0LL;
      LOWORD(v58[0]) = 0;
      std::wstring::_Assign_rv(v58, v61);
      if ( v62 >= 8 )
        operator delete(v61[0]);
      WindowsDeleteString(v46);
      v46 = 0LL;
      if ( v64 )
      {
        v30 = v63;
        LOBYTE(v30) = v64 != v63;
        (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v64 + 32LL))(v64, v30);
        v64 = 0LL;
      }
      if ( pv )
        CoTaskMemFree(pv);
    }
    else
    {
      v31 = (char *)WindowsGetStringRawBuffer(v40, 0LL);
      v32 = Windows::Services::TargetedContent::Internal::NormalizedString(v66, v31);
      if ( v58 != v32 )
      {
        if ( v60 >= 8 )
          operator delete(v58[0]);
        v60 = 7LL;
        v59 = 0LL;
        LOWORD(v58[0]) = 0;
        std::wstring::_Assign_rv(v58, v32);
      }
      if ( v66[3] >= (void *)8 )
        operator delete(v66[0]);
    }
    v33 = *(_QWORD *)a1;
    v34 = (const WCHAR *)v58;
    if ( v60 >= 8 )
      v34 = (const WCHAR *)v58[0];
    v51[0] = v34;
    v35 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v68, v51);
    LOBYTE(v36) = 1;
    v37 = CreativeFramework::CommonHelper::SettingsContainer::CreateContainer(v33, v56, v35[1].Reserved.Reserved1, v36);
    std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(a1, v37);
    v38 = v57;
    if ( v57 )
    {
      if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v38)(v38);
        if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
      }
    }
  }
  WindowsDeleteString(v40);
  v40 = 0LL;
  if ( v60 >= 8 )
    operator delete(v58[0]);
  v60 = 7LL;
  v59 = 0LL;
  LOWORD(v58[0]) = 0;
  WindowsDeleteString(string);
  return a1;
}
