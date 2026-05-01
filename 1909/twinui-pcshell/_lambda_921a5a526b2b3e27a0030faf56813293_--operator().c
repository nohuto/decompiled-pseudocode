/*
 * XREFs of _lambda_921a5a526b2b3e27a0030faf56813293_::operator() @ 0x1801E47D8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_921a5a526b2b3e27a0030faf56813293__long_::_Do_call @ 0x1801EC0D0 (std--_Func_impl_no_alloc__lambda_921a5a526b2b3e27a0030faf56813293__long_--_Do_call.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18003B698 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180090190 (-ContinueOnCurrentThread@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIOneSettingsPayloadStatics@OneSettings@Flighting@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIOneSettingsPayloadStatics@OneSettings@Flighting@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801E0888 (--$GetActivationFactory@V-$ComPtr@UIOneSettingsPayloadStatics@OneSettings@Flighting@Internal@Win.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1801E33A4 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgRef_ea_1801E33A4.c)
 *     ??1CortanaUndocking_FirstBootTriggered@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801E3E7C (--1CortanaUndocking_FirstBootTriggered@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?ApplyReplaceDecision@CortanaStoreAppHelper@@YAJEE@Z @ 0x1801E536C (-ApplyReplaceDecision@CortanaStoreAppHelper@@YAJEE@Z.c)
 *     ?GetOneSettingsCortanaAppKey@CortanaStoreAppHelper@@YAPEBGXZ @ 0x1801E5BF0 (-GetOneSettingsCortanaAppKey@CortanaStoreAppHelper@@YAPEBGXZ.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801E838C (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall lambda_921a5a526b2b3e27a0030faf56813293_::operator()(__int64 a1)
{
  CortanaStoreAppHelper *v1; // rcx
  const WCHAR *OneSettingsCortanaAppKey; // rsi
  HRESULT ClassObject; // eax
  unsigned int v4; // ebx
  LPVOID v5; // rbx
  __int64 (__fastcall *v6)(LPVOID, _QWORD, GUID *, __int64 *); // rdi
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, PVOID, __int64 *); // rsi
  HSTRING_HEADER *v13; // rdi
  int v14; // eax
  unsigned __int8 v15; // r8
  CortanaStoreAppHelper *v16; // rcx
  __int64 v18; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID ppv; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B8h] BYREF
  const WCHAR *v22[2]; // [rsp+58h] [rbp-B0h] BYREF
  LPVOID v23[4]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v24[24]; // [rsp+88h] [rbp-80h] BYREF
  int v25; // [rsp+A0h] [rbp-68h]
  HSTRING_HEADER hstringHeader; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v27; // [rsp+D0h] [rbp-38h]
  _QWORD v28[40]; // [rsp+D8h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+230h] [rbp+128h]

  v22[1] = (const WCHAR *)-2LL;
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v28,
    a1);
  v28[0] = &CortanaProactiveTelemetry::CortanaUndocking_FirstBootTriggered::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)v28,
    (wil::ActivityThreadWatcher *)v23);
  OneSettingsCortanaAppKey = CortanaStoreAppHelper::GetOneSettingsCortanaAppKey(v1);
  v22[0] = OneSettingsCortanaAppKey;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  ClassObject = CoGetClassObject(&CLSID_OneSettingsBroker, 4u, 0LL, &GUID_00000001_0000_0000_c000_000000000046, &ppv);
  v4 = ClassObject;
  if ( ClassObject < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1EE,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
      (const char *)(unsigned int)ClassObject);
    goto LABEL_19;
  }
  v19 = 0LL;
  v5 = ppv;
  v6 = *(__int64 (__fastcall **)(LPVOID, _QWORD, GUID *, __int64 *))(*(_QWORD *)ppv + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  v7 = v6(v5, 0LL, &GUID_6b8773dc_2e64_467a_9771_2e07caeae514, &v19);
  v4 = v7;
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, const WCHAR *, const WCHAR *))(*(_QWORD *)v19 + 32LL))(
           v19,
           OneSettingsCortanaAppKey,
           L"1");
    v4 = v7;
    if ( v7 < 0 )
    {
      v8 = 498LL;
      goto LABEL_7;
    }
    v18 = 0LL;
    v21 = 0LL;
    v27 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.Flighting.OneSettings.OneSettingsPayload",
      0x3Au,
      0x39u);
    v9 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Internal::Flighting::OneSettings::IOneSettingsPayloadStatics>>(
           v27,
           &v21);
    v4 = v9;
    if ( v9 >= 0 )
    {
      v11 = v21;
      v12 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v21 + 48LL);
      v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, v22);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      v14 = v12(v11, v13[1].Reserved.Reserved1, &v18);
      v16 = retaddr;
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1F9,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
          (const char *)(unsigned int)v14);
      if ( !v18 || (LOBYTE(v16) = 1, v9 = CortanaStoreAppHelper::ApplyReplaceDecision(v16, 0, v15), v4 = v9, v9 >= 0) )
      {
        wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(v28);
        v4 = 0;
        goto LABEL_17;
      }
      v10 = 510LL;
    }
    else
    {
      v10 = 502LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
      (const char *)(unsigned int)v9);
LABEL_17:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    goto LABEL_18;
  }
  v8 = 496LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
    (const char *)(unsigned int)v7);
LABEL_18:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
LABEL_19:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  if ( v25 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v24);
  wil::details::StoredCallContextInfo::~StoredCallContextInfo(v23);
  CortanaProactiveTelemetry::CortanaUndocking_FirstBootTriggered::~CortanaUndocking_FirstBootTriggered((CortanaProactiveTelemetry::CortanaUndocking_FirstBootTriggered *)v28);
  return v4;
}
