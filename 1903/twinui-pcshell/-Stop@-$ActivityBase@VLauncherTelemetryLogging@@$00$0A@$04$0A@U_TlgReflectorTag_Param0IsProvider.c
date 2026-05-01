/*
 * XREFs of ?Stop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800300F0
 * Callers:
 *     ?GetMonitor@XamlLauncher@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x18002FCC0 (-GetMonitor@XamlLauncher@@UEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x1802F4390 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     ?SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802F62F0 (-SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802F69F0 (-UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ??1FocusHoldingTank@@QEAA@XZ @ 0x1802FEA58 (--1FocusHoldingTank@@QEAA@XZ.c)
 *     ?s_WndProc@FocusHoldingTank@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1802FFE70 (-s_WndProc@FocusHoldingTank@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000C2D4 (-LockExclusive@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ReportStopActivity@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1800301A0 (-ReportStopActivity@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1801049D0 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

void __fastcall wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
        __int64 a1)
{
  __int64 v2; // rax
  int v3; // esi
  int v4; // edi
  RTL_SRWLOCK *v5; // rcx
  int v6; // esi
  const struct wil::FailureInfo *v7; // rdx
  const struct _TlgProvider_t *Ptr; // rdi
  DWORD CurrentThreadId; // eax
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-69h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-61h] BYREF
  int v12; // [rsp+44h] [rbp-5Dh] BYREF
  DWORD v13; // [rsp+48h] [rbp-59h] BYREF
  __int64 v14; // [rsp+50h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-49h] BYREF
  __int64 *v16; // [rsp+78h] [rbp-29h]
  int v17; // [rsp+80h] [rbp-21h]
  int v18; // [rsp+84h] [rbp-1Dh]
  int *v19; // [rsp+88h] [rbp-19h]
  int v20; // [rsp+90h] [rbp-11h]
  int v21; // [rsp+94h] [rbp-Dh]
  DWORD *v22; // [rsp+98h] [rbp-9h]
  int v23; // [rsp+A0h] [rbp-1h]
  int v24; // [rsp+A4h] [rbp+3h]

  wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(_DWORD *)(v2 + 72);
  if ( v3 < 1 )
  {
    memset_0(&pData, 0, 0x90uLL);
    wil::details::WilFailFast((wil::details *)&pData, v7);
  }
  v4 = *(_DWORD *)(v2 + 76);
  if ( v4 >= 0 )
  {
    *(_DWORD *)(v2 + 76) = 0;
    v4 = 0;
  }
  v5 = SRWLock;
  v6 = v3 - 1;
  *(_DWORD *)(v2 + 72) = v6;
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  if ( v6 )
  {
    SRWLock = 0LL;
    if ( InitOnceBeginInitialize(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &fPending, (LPVOID *)&SRWLock)
      && fPending )
    {
      SRWLock = (PSRWLOCK)&qword_180599F68;
      qword_180599F68 = &ShellScreenClippingLogging::`vftable';
      qword_180599F80 = (struct _TlgProvider_t *)&`LauncherTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180599F68, qword_180599F80);
      InitOnceComplete(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &qword_180599F68);
    }
    Ptr = (const struct _TlgProvider_t *)SRWLock[1].Ptr;
    if ( *(_DWORD *)Ptr > 5u )
    {
      v18 = 0;
      v12 = 0;
      v21 = 0;
      v16 = &v14;
      v19 = &v12;
      v14 = 0x1000000LL;
      v17 = 8;
      v20 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v24 = 0;
      v13 = CurrentThreadId;
      v22 = &v13;
      v23 = 4;
      TlgWrite(Ptr, &unk_1804B6B06, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 5u, &pData);
    }
  }
  else
  {
    wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
      a1,
      (unsigned int)v4);
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
