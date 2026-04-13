/*
 * XREFs of ?ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x180029700
 * Callers:
 *     ?ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x180029B70 (-ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventTy.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180021090 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProc.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180021130 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProce.c)
 *     _lambda_850a8abb65240e378f84b46c43e62dff_::__lambda_850a8abb65240e378f84b46c43e62dff_ @ 0x180029AC4 (_lambda_850a8abb65240e378f84b46c43e62dff_--__lambda_850a8abb65240e378f84b46c43e62dff_.c)
 *     ??$MakeAndInitialize@VCreativeEventReportedCache@ContentManagement@@UICreativeEventReportedCache@2@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUICreativeEventReportedCache@ContentManagement@@AEAPEBG@Z @ 0x180036428 (--$MakeAndInitialize@VCreativeEventReportedCache@ContentManagement@@UICreativeEventReportedCache.c)
 *     Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ProcessCreativeEventOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_850a8abb65240e378f84b46c43e62dff___ @ 0x1800365D8 (Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-_anonymous_namespace_-.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall ContentManagement::ContentManagementService::ProcessCreativeEventAsync(
        __int64 a1,
        int a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING string,
        HSTRING a6,
        HSTRING a7,
        __int64 a8,
        __int64 a9)
{
  HSTRING v10; // r13
  HRESULT v11; // eax
  int v12; // edi
  HSTRING v13; // r12
  HRESULT v14; // eax
  HSTRING v15; // r15
  HRESULT v16; // eax
  HSTRING v17; // r14
  HRESULT v18; // eax
  int v19; // eax
  __int64 v20; // r8
  bool v21; // zf
  volatile signed __int64 *v22; // rbx
  __int64 v23; // rcx
  HSTRING newString; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v26; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v27; // [rsp+38h] [rbp-D0h]
  __int64 v28; // [rsp+40h] [rbp-C8h]
  int v29; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+4Ch] [rbp-BCh]
  HSTRING v31; // [rsp+58h] [rbp-B0h]
  __int64 v32; // [rsp+60h] [rbp-A8h]
  HSTRING v33; // [rsp+68h] [rbp-A0h]
  __int64 v34; // [rsp+70h] [rbp-98h]
  __int64 v35; // [rsp+78h] [rbp-90h]
  HSTRING v36; // [rsp+80h] [rbp-88h]
  char v37; // [rsp+88h] [rbp-80h]
  HSTRING v38; // [rsp+90h] [rbp-78h]
  char v39; // [rsp+98h] [rbp-70h]
  _QWORD v40[2]; // [rsp+A0h] [rbp-68h] BYREF
  int v41; // [rsp+B0h] [rbp-58h]
  HSTRING v42; // [rsp+B8h] [rbp-50h]
  char v43; // [rsp+C0h] [rbp-48h]
  HSTRING v44; // [rsp+C8h] [rbp-40h]
  char v45; // [rsp+D0h] [rbp-38h]
  HSTRING v46; // [rsp+D8h] [rbp-30h]
  char v47; // [rsp+E0h] [rbp-28h]
  HSTRING v48; // [rsp+E8h] [rbp-20h]
  char v49; // [rsp+F0h] [rbp-18h]
  HSTRING v50; // [rsp+F8h] [rbp-10h]
  __int64 v51; // [rsp+100h] [rbp-8h]
  __int64 v52; // [rsp+108h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+38h]

  v52 = -2LL;
  LODWORD(v27) = a2;
  v28 = a1;
  v35 = a9;
  v10 = 0LL;
  v37 = 0;
  v11 = WindowsDuplicateString(a3, &newString);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x151,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_42;
  }
  v10 = newString;
  v36 = newString;
  WindowsDeleteString(0LL);
  v13 = 0LL;
  v39 = 0;
  v14 = WindowsDuplicateString(a4, &newString);
  v12 = v14;
  if ( v14 >= 0 )
  {
    v13 = newString;
    v38 = newString;
    WindowsDeleteString(0LL);
    v15 = 0LL;
    v31 = 0LL;
    LOBYTE(v32) = 0;
    if ( string )
    {
      v16 = WindowsDuplicateString(string, &newString);
      v12 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x158,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)v16);
LABEL_36:
        if ( v15 )
          WindowsDeleteString(v15);
        goto LABEL_39;
      }
      v15 = newString;
      v31 = newString;
      WindowsDeleteString(0LL);
    }
    v17 = 0LL;
    v33 = 0LL;
    LOBYTE(v34) = 0;
    if ( a6 )
    {
      v18 = WindowsDuplicateString(a6, &newString);
      v12 = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x15E,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)v18);
LABEL_34:
        if ( v17 )
          WindowsDeleteString(v17);
        goto LABEL_36;
      }
      v17 = newString;
      v33 = newString;
      WindowsDeleteString(0LL);
    }
    v26 = 0LL;
    newString = (HSTRING)WindowsGetStringRawBuffer(v13, 0LL);
    v26 = 0LL;
    v19 = Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::CreativeEventReportedCache,ContentManagement::ICreativeEventReportedCache,unsigned short const * &>(
            &v26,
            &newString);
    v12 = v19;
    if ( v19 >= 0 )
      v12 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v19);
    if ( v12 >= 0 )
    {
      newString = a7;
      if ( a7 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)a7 + 8LL))(a7);
      v21 = v28 == 48;
      v22 = (volatile signed __int64 *)(v28 - 48);
      v28 -= 48LL;
      if ( !v21 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::AddRef((__int64)v22);
      v40[0] = v22;
      v40[1] = v22;
      if ( v22 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::AddRef((__int64)v22);
      v41 = v27;
      v42 = v10;
      v10 = 0LL;
      v36 = 0LL;
      v43 = 0;
      v37 = 1;
      v44 = v13;
      v13 = 0LL;
      v38 = 0LL;
      v45 = 0;
      v39 = 1;
      v46 = v15;
      v15 = 0LL;
      v31 = 0LL;
      v47 = 0;
      LOBYTE(v32) = 1;
      v48 = v17;
      v17 = 0LL;
      v33 = 0LL;
      v49 = 0;
      LOBYTE(v34) = 1;
      v50 = a7;
      if ( a7 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)a7 + 8LL))(a7);
      v51 = v26;
      if ( v26 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
      v29 = 3;
      v30 = 130LL;
      v12 = Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::ProcessCreativeEventOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_850a8abb65240e378f84b46c43e62dff___(
              &v29,
              v35,
              v20,
              v40,
              newString);
      lambda_850a8abb65240e378f84b46c43e62dff_::__lambda_850a8abb65240e378f84b46c43e62dff_(v40);
      if ( v12 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x176,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)v12);
      if ( v22 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(v22);
      if ( a7 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)a7 + 16LL))(a7);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x162,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v12);
    }
    v23 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    goto LABEL_34;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x153,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)v14);
LABEL_39:
  if ( v13 )
    WindowsDeleteString(v13);
LABEL_42:
  if ( v10 )
    WindowsDeleteString(v10);
  return (unsigned int)v12;
}
