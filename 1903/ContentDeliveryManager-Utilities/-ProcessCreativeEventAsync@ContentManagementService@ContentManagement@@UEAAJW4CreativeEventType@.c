/*
 * XREFs of ?ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x180029160
 * Callers:
 *     ?ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x180029620 (-ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventTy.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180020AA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProc.c)
 *     _lambda_850a8abb65240e378f84b46c43e62dff_::__lambda_850a8abb65240e378f84b46c43e62dff_ @ 0x180029574 (_lambda_850a8abb65240e378f84b46c43e62dff_--__lambda_850a8abb65240e378f84b46c43e62dff_.c)
 *     ??$MakeAndInitialize@VCreativeEventReportedCache@ContentManagement@@UICreativeEventReportedCache@2@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUICreativeEventReportedCache@ContentManagement@@AEAPEBG@Z @ 0x180035FE8 (--$MakeAndInitialize@VCreativeEventReportedCache@ContentManagement@@UICreativeEventReportedCache.c)
 *     Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ProcessCreativeEventOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_850a8abb65240e378f84b46c43e62dff___ @ 0x180036198 (Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-_anonymous_namespace_-.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall ContentManagement::ContentManagementService::ProcessCreativeEventAsync(
        __int64 a1,
        int a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING string,
        HSTRING a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  HSTRING v12; // r15
  HRESULT v13; // eax
  int v14; // edi
  HSTRING v15; // rsi
  HRESULT v16; // eax
  HRESULT v17; // eax
  HRESULT v18; // eax
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // rdx
  volatile signed __int64 *v22; // rbx
  signed __int64 v23; // rax
  signed __int64 v24; // rtt
  signed __int64 v25; // rax
  signed __int64 v26; // rtt
  __int64 v27; // rcx
  int v29[2]; // [rsp+28h] [rbp-E0h] BYREF
  volatile signed __int64 *v30; // [rsp+30h] [rbp-D8h]
  HSTRING v31; // [rsp+38h] [rbp-D0h]
  __int64 v32; // [rsp+40h] [rbp-C8h]
  HSTRING v33; // [rsp+48h] [rbp-C0h]
  __int64 v34; // [rsp+50h] [rbp-B8h]
  HSTRING v35; // [rsp+58h] [rbp-B0h]
  __int64 v36; // [rsp+60h] [rbp-A8h]
  HSTRING v37; // [rsp+68h] [rbp-A0h]
  int v38; // [rsp+70h] [rbp-98h]
  HSTRING v39[2]; // [rsp+74h] [rbp-94h] BYREF
  HSTRING newString; // [rsp+88h] [rbp-80h] BYREF
  HSTRING v41; // [rsp+90h] [rbp-78h] BYREF
  HSTRING v42; // [rsp+98h] [rbp-70h] BYREF
  HSTRING v43; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v44[3]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v45; // [rsp+C0h] [rbp-48h]
  _QWORD v46[2]; // [rsp+C8h] [rbp-40h] BYREF
  int v47; // [rsp+D8h] [rbp-30h]
  HSTRING v48; // [rsp+E0h] [rbp-28h]
  char v49; // [rsp+E8h] [rbp-20h]
  HSTRING v50; // [rsp+F0h] [rbp-18h]
  char v51; // [rsp+F8h] [rbp-10h]
  HSTRING v52; // [rsp+100h] [rbp-8h]
  char v53; // [rsp+108h] [rbp+0h]
  HSTRING v54; // [rsp+110h] [rbp+8h]
  char v55; // [rsp+118h] [rbp+10h]
  __int64 v56; // [rsp+120h] [rbp+18h]
  __int64 v57; // [rsp+128h] [rbp+20h]
  __int64 v58; // [rsp+130h] [rbp+28h]
  __int64 v59; // [rsp+138h] [rbp+30h]
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v58 = -2LL;
  v45 = a9;
  v12 = 0LL;
  LOBYTE(v32) = 0;
  v13 = WindowsDuplicateString(a3, &newString);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x151,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_50;
  }
  v12 = newString;
  v31 = newString;
  WindowsDeleteString(0LL);
  v15 = 0LL;
  LOBYTE(v34) = 0;
  v16 = WindowsDuplicateString(a4, &v41);
  v14 = v16;
  if ( v16 >= 0 )
  {
    v15 = v41;
    v33 = v41;
    WindowsDeleteString(0LL);
    v37 = 0LL;
    LOBYTE(v38) = 0;
    if ( string )
    {
      v17 = WindowsDuplicateString(string, &v42);
      v14 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x158,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)v17);
LABEL_44:
        if ( v37 )
          WindowsDeleteString(v37);
        goto LABEL_47;
      }
      v37 = v42;
      WindowsDeleteString(0LL);
    }
    v35 = 0LL;
    LOBYTE(v36) = 0;
    if ( a6 )
    {
      v18 = WindowsDuplicateString(a6, &v43);
      v14 = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x15E,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)v18);
LABEL_42:
        if ( v35 )
          WindowsDeleteString(v35);
        goto LABEL_44;
      }
      v35 = v43;
      WindowsDeleteString(0LL);
    }
    v44[0] = WindowsGetStringRawBuffer(v15, 0LL);
    *(_QWORD *)v29 = 0LL;
    v19 = Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::CreativeEventReportedCache,ContentManagement::ICreativeEventReportedCache,unsigned short const * &>(
            v29,
            v44);
    v14 = v19;
    if ( v19 >= 0 )
      v14 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v19);
    if ( v14 >= 0 )
    {
      v59 = a7;
      if ( a7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a7 + 8LL))(a7);
      v21 = a1 - 48;
      v22 = (volatile signed __int64 *)(a1 - 48);
      v30 = (volatile signed __int64 *)(a1 - 48);
      if ( a1 != 48 )
      {
        v23 = *(_QWORD *)(v21 + 112);
        v44[1] = v23;
        while ( v23 >= 0 )
        {
          v24 = v23;
          v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 112), v23 + 1, v23);
          if ( v24 == v23 )
            goto LABEL_23;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v23 + 16));
LABEL_23:
        v22 = v30;
        v15 = v33;
        v12 = v31;
      }
      v46[0] = a1 - 48;
      v46[1] = v22;
      if ( v22 )
      {
        v25 = *((_QWORD *)v22 + 14);
        v44[2] = v25;
        while ( v25 >= 0 )
        {
          v26 = v25;
          v25 = _InterlockedCompareExchange64(v22 + 14, v25 + 1, v25);
          if ( v26 == v25 )
            goto LABEL_29;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v25 + 16));
LABEL_29:
        v22 = v30;
        v15 = v33;
        v12 = v31;
      }
      v47 = a2;
      v48 = v12;
      v12 = 0LL;
      v31 = 0LL;
      v49 = 0;
      LOBYTE(v32) = 1;
      v50 = v15;
      v15 = 0LL;
      v33 = 0LL;
      v51 = 0;
      LOBYTE(v34) = 1;
      v52 = v37;
      v37 = 0LL;
      v53 = 0;
      LOBYTE(v38) = 1;
      v54 = v35;
      v35 = 0LL;
      v55 = 0;
      LOBYTE(v36) = 1;
      v56 = a7;
      if ( a7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a7 + 8LL))(a7);
      v57 = *(_QWORD *)v29;
      if ( *(_QWORD *)v29 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v29 + 8LL))(*(_QWORD *)v29);
      HIDWORD(v39[0]) = 3;
      v39[1] = (HSTRING)130;
      v14 = Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::ProcessCreativeEventOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_850a8abb65240e378f84b46c43e62dff___(
              (char *)v39 + 4,
              v45,
              v20,
              v46);
      lambda_850a8abb65240e378f84b46c43e62dff_::__lambda_850a8abb65240e378f84b46c43e62dff_(v46);
      if ( v14 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x176,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)v14);
      if ( v22 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(v22);
      if ( a7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a7 + 16LL))(a7);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x162,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v14);
    }
    v27 = *(_QWORD *)v29;
    if ( *(_QWORD *)v29 )
    {
      *(_QWORD *)v29 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    goto LABEL_42;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x153,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)v16);
LABEL_47:
  if ( v15 )
    WindowsDeleteString(v15);
LABEL_50:
  if ( v12 )
    WindowsDeleteString(v12);
  return (unsigned int)v14;
}
