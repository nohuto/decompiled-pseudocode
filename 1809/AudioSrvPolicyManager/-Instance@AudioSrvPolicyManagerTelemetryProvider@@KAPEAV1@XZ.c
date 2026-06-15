/*
 * XREFs of ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000829C
 * Callers:
 *     ?FallbackTelemetryCallback@AudioSrvPolicyManagerTelemetryProvider@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x180008260 (-FallbackTelemetryCallback@AudioSrvPolicyManagerTelemetryProvider@@SAX_NAEBUFailureInfo@wil@@@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008498 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?LowPowerEpochNotificationCallback@@YAKPEAXK0@Z @ 0x180008980 (-LowPowerEpochNotificationCallback@@YAKPEAXK0@Z.c)
 *     ?OnPowerResumeSuspend@CWindowsPolicyManager@@UEAAJH@Z @ 0x18000A8F0 (-OnPowerResumeSuspend@CWindowsPolicyManager@@UEAAJH@Z.c)
 *     ?OnAutoDuckWorkItem@CDuckingManager@@AEAAXPEAVCDuckWorkItem@@@Z @ 0x18000E1E4 (-OnAutoDuckWorkItem@CDuckingManager@@AEAAXPEAVCDuckWorkItem@@@Z.c)
 *     ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z @ 0x18000E7D0 (-ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?LoadUserSettings@@YAXPEAVTSSession@@PEAUHKEY__@@@Z @ 0x1800274B8 (-LoadUserSettings@@YAXPEAVTSSession@@PEAUHKEY__@@@Z.c)
 *     ?ResetUserSettings@@YAXPEAVTSSession@@@Z @ 0x18002759C (-ResetUserSettings@@YAXPEAVTSSession@@@Z.c)
 *     ?RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z @ 0x180027A08 (-RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z.c)
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x180027D48 (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 *     ?TsSessionIdIsAudioInStandbyAllowed@@YAHK@Z @ 0x1800298FC (-TsSessionIdIsAudioInStandbyAllowed@@YAHK@Z.c)
 *     ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x180029CA0 (-TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z.c)
 *     _lambda_e50a82f6d063143869e1d90b13f36ad1_::operator() @ 0x180029FD4 (_lambda_e50a82f6d063143869e1d90b13f36ad1_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x1800369D0 (__security_check_cookie.c)
 *     atexit @ 0x1800370B4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

struct AudioSrvPolicyManagerTelemetryProvider *AudioSrvPolicyManagerTelemetryProvider::Instance(void)
{
  _QWORD *v0; // rbx
  PVOID v1; // r8
  ULONGLONG *v2; // r9
  GUID v3; // xmm0
  WINBOOL v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 *v6; // [rsp+28h] [rbp-30h] BYREF
  GUID ProviderId; // [rsp+30h] [rbp-28h] BYREF

  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvPolicyManagerTelemetryProvider::Instance'::`2'::wrapper, 0, &v5, (LPVOID *)&v6)
    && v5 )
  {
    v6 = &qword_18004FC70;
    qword_18004FC70 = (__int64)&AudioSrvPolicyManagerTelemetryProvider::`vftable';
    CallbackContext = &`AudioSrvPolicyManagerTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f2e7b9994f24091cfba2638cd640fd9f_::_lambda_invoker_cdecl_);
    v0 = CallbackContext;
    qword_18004FC78 = (__int64)CallbackContext;
    byte_18004FC80 = 1;
    v1 = CallbackContext;
    v2 = (ULONGLONG *)((char *)CallbackContext + 32);
    v3 = *(GUID *)(*((_QWORD *)CallbackContext + 1) - 16LL);
    *((_QWORD *)CallbackContext + 5) = 0LL;
    v0[6] = 0LL;
    ProviderId = v3;
    if ( !EventRegister(&ProviderId, TlgEnableCallback, v1, v2) )
      EventSetInformation(v0[4], 2LL, v0[1], *(unsigned __int16 *)v0[1]);
    dword_18004FC84 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_18004FC70 + 8))(&qword_18004FC70);
    InitOnceComplete(&`AudioSrvPolicyManagerTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_18004FC70);
  }
  return (struct AudioSrvPolicyManagerTelemetryProvider *)v6;
}
