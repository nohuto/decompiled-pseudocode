/*
 * XREFs of ?ReportAppStateChange@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAXPEBG_N@Z @ 0x1800B32B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$AsyncInvokeAll@$$TPEAVStateChangedEventArgsImpl@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_exception_policy@wil@@@wil@@QEAAXAEB$$TAEBQEAVStateChangedEventArgsImpl@@@Z @ 0x1800AE5F0 (--$AsyncInvokeAll@$$TPEAVStateChangedEventArgsImpl@@@-$AsyncEventSourceT@U-$ITypedEventHandler@P.c)
 *     ??$MakeOrThrow@VStateChangedEventArgsImpl@@AEAPEBGAEA_N@wil@@YA?AV?$ComPtr@VStateChangedEventArgsImpl@@@WRL@Microsoft@@AEAPEBGAEA_N@Z @ 0x1800AF278 (--$MakeOrThrow@VStateChangedEventArgsImpl@@AEAPEBGAEA_N@wil@@YA-AV-$ComPtr@VStateChangedEventArg.c)
 *     ??$ReportAppStateChange@AEAPEBGAEA_N@AppUsageTelemetry@@SAXAEAPEBGAEA_N@Z @ 0x1800AF340 (--$ReportAppStateChange@AEAPEBGAEA_N@AppUsageTelemetry@@SAXAEAPEBGAEA_N@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800B2E40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIViewTabEventArgs.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::ReportAppStateChange(
        Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *this,
        const unsigned __int16 *a2,
        bool a3)
{
  const char *v4; // r9
  StateChangedEventArgsImpl *v5; // rcx
  StateChangedEventArgsImpl *v6; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v7[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  const unsigned __int16 *v9; // [rsp+58h] [rbp+10h] BYREF
  bool v10; // [rsp+60h] [rbp+18h] BYREF
  StateChangedEventArgsImpl *v11; // [rsp+68h] [rbp+20h] BYREF

  v10 = a3;
  v9 = a2;
  v7[1] = -2LL;
  AppUsageTelemetry::ReportAppStateChange<unsigned short const * &,bool &>(&v9, (__int64)&v10);
  try
  {
    wil::MakeOrThrow<StateChangedEventArgsImpl,unsigned short const * &,bool &>(&v11, &v9, &v10);
    v6 = v11;
    v7[0] = 0LL;
    wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *,Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_exception_policy>::AsyncInvokeAll<std::nullptr_t,StateChangedEventArgsImpl *>(
      (char *)this + 56,
      (__int64)v7,
      &v6);
    v5 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs,Microsoft::WRL::FtmBase>::Release((__int64)v5);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xD4,
      (unsigned int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
      v4);
  }
}
