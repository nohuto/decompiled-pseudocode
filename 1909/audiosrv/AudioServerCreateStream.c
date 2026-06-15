/*
 * XREFs of AudioServerCreateStream @ 0x1800415E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800132C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetThreadLogonSessionStringSid@@YAJPEAPEAG@Z @ 0x180041860 (-GetThreadLogonSessionStringSid@@YAJPEAPEAG@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerCreateStream(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  GUID v10; // xmm0
  RPC_STATUS ThreadLogonSessionStringSid; // ebx
  int v12; // eax
  void *v13; // rbx
  __int64 v14; // rdi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  HLOCAL v16; // rdi
  __int64 v18; // [rsp+40h] [rbp-89h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-81h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-79h] BYREF
  struct _FILETIME pftDueTime; // [rsp+58h] [rbp-71h] BYREF
  _QWORD pv[2]; // [rsp+60h] [rbp-69h] BYREF
  DWORD CurrentThreadId; // [rsp+70h] [rbp-59h]
  const wchar_t *v24; // [rsp+78h] [rbp-51h]
  void *v25; // [rsp+80h] [rbp-49h]
  char v26; // [rsp+88h] [rbp-41h]
  __int64 v27; // [rsp+8Ch] [rbp-3Dh]
  HLOCAL hMem[2]; // [rsp+98h] [rbp-31h] BYREF
  GUID v29; // [rsp+A8h] [rbp-21h]
  GUID v30; // [rsp+B8h] [rbp-11h] BYREF

  if ( a1 )
    v10 = *(GUID *)(a1 + 280);
  else
    v10 = GUID_00000000_0000_0000_0000_000000000000;
  hMem[1] = *(HLOCAL *)v10.Data4;
  v29 = v10;
  v30 = v10;
  EtwEventActivityIdControl(4LL, &v30);
  v18 = 0LL;
  hMem[0] = 0LL;
  ThreadLogonSessionStringSid = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
                                  g_PolicyManager,
                                  0LL,
                                  &v18);
  if ( ThreadLogonSessionStringSid >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)v18 + 152LL))(v18, a2 == 1, a5);
    ThreadLogonSessionStringSid = v12;
    if ( v12 == -2005139338 )
    {
      RtlPublishWnfStateData(WNF_AUDC_HEALTH_PROBLEM, 0LL, &MICPRIVACY_ACCESS_DENIED, 16LL, 0LL);
    }
    else if ( v12 >= 0 )
    {
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        Context = &qword_1801B7588;
        qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
      }
      v13 = g_AudioHealthMonitor;
      v14 = g_AudioSrvWatchDogTimerInMs;
      pv[1] = *((_QWORD *)Context + 1);
      pv[0] = 0LL;
      CurrentThreadId = GetCurrentThreadId();
      v24 = L"AudioServerCreateStream";
      v25 = v13;
      v26 = 0;
      v27 = 0LL;
      if ( (unsigned int)v14 >= 0x3E8 )
      {
        ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
        pv[0] = ThreadpoolTimer;
        if ( ThreadpoolTimer )
        {
          pftDueTime = (struct _FILETIME)(-10000 * v14 / 3);
          SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v14 / 3, 0);
        }
      }
      ThreadLogonSessionStringSid = RpcImpersonateClient(0LL);
      if ( ThreadLogonSessionStringSid )
      {
        CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
      }
      else
      {
        ThreadLogonSessionStringSid = GetThreadLogonSessionStringSid((unsigned __int16 **)hMem);
        RpcRevertToSelf();
        v16 = hMem[0];
        if ( ThreadLogonSessionStringSid >= 0 )
          ThreadLogonSessionStringSid = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64, HLOCAL, __int64))(*(_QWORD *)a1 + 56LL))(
                                          a1,
                                          v18,
                                          a2,
                                          a3,
                                          a4,
                                          hMem[0],
                                          a6);
        CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
        if ( v16 )
          LocalFree(v16);
      }
    }
  }
  if ( v18 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    v18 = 0LL;
  }
  if ( ThreadLogonSessionStringSid < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerCreateStream", 3144, ThreadLogonSessionStringSid);
  EtwEventActivityIdControl(4LL, &v30);
  return (unsigned int)ThreadLogonSessionStringSid;
}
