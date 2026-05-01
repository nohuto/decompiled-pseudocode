/*
 * XREFs of _lambda_f8fc68a596a1d4698bf0d7673b0f23f8_::operator() @ 0x1801E4AD8
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem___Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem_____::_)(Windows::Foundation::IAsyncOperation_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem______enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_____lambda_f8fc68a596a1d4698bf0d7673b0f23f8___1_Windows::Foundation::IAsyncOperation_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem______enum_ABI::Windows::Foundation::AsyncStatus_::Invoke @ 0x1801E5D40 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IAsyn_ea_1801E5D40.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18003B698 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180090190 (-ContinueOnCurrentThread@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 *     ??$Undocking_InstallTaskCompleted@AEAW4AsyncStatus@Foundation@Windows@ABI@@@CortanaUndocking_InstallAppFromStore@CortanaProactiveTelemetry@@QEAAXAEAW4AsyncStatus@Foundation@Windows@ABI@@@Z @ 0x1801E1490 (--$Undocking_InstallTaskCompleted@AEAW4AsyncStatus@Foundation@Windows@ABI@@@CortanaUndocking_Ins.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1801E33A4 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgRef_ea_1801E33A4.c)
 *     ??1CortanaUndocking_InstallAppFromStore@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801E3EA8 (--1CortanaUndocking_InstallAppFromStore@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?SetCortanaRegKey@CortanaStoreAppHelper@@YAJPEBGKK@Z @ 0x1801E7314 (-SetCortanaRegKey@CortanaStoreAppHelper@@YAJPEBGKK@Z.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801E838C (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_.c)
 */

__int64 __fastcall lambda_f8fc68a596a1d4698bf0d7673b0f23f8_::operator()(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // r9d
  int v5; // eax
  unsigned int v6; // ebx
  int v8[4]; // [rsp+20h] [rbp-E0h] BYREF
  LPVOID v9[4]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v10[24]; // [rsp+50h] [rbp-B0h] BYREF
  int v11; // [rsp+68h] [rbp-98h]
  _QWORD v12[40]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  v8[0] = a3;
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v12,
    a1);
  v12[0] = &CortanaProactiveTelemetry::CortanaUndocking_InstallAppFromStore::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)v12,
    (wil::ActivityThreadWatcher *)v9);
  CortanaProactiveTelemetry::CortanaUndocking_InstallAppFromStore::Undocking_InstallTaskCompleted<enum ABI::Windows::Foundation::AsyncStatus &>(
    (__int64)v12,
    v8);
  if ( a3 == 1
    && (v5 = CortanaStoreAppHelper::SetCortanaRegKey(L"CortanaStoreHasTriedInstall", (const unsigned __int16 *)1, 0, v4),
        v6 = v5,
        v5 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12B,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
      (const char *)(unsigned int)v5);
  }
  else
  {
    wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(v12);
    v6 = 0;
  }
  if ( v11 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v10);
  wil::details::StoredCallContextInfo::~StoredCallContextInfo(v9);
  CortanaProactiveTelemetry::CortanaUndocking_InstallAppFromStore::~CortanaUndocking_InstallAppFromStore((CortanaProactiveTelemetry::CortanaUndocking_InstallAppFromStore *)v12);
  return v6;
}
