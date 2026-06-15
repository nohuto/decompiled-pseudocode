/*
 * XREFs of s_apmRegisterAudioStateMonitor @ 0x180001CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_apmRegisterAudioStateMonitor(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  void *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rcx
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned int v14; // ebx
  WINBOOL fPending; // [rsp+48h] [rbp-11h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-9h] BYREF
  struct _FILETIME pftDueTime; // [rsp+58h] [rbp-1h] BYREF
  _QWORD pv[2]; // [rsp+60h] [rbp+7h] BYREF
  DWORD v20; // [rsp+70h] [rbp+17h]
  const wchar_t *v21; // [rsp+78h] [rbp+1Fh]
  void *v22; // [rsp+80h] [rbp+27h]
  char v23; // [rsp+88h] [rbp+2Fh]
  int v24; // [rsp+8Ch] [rbp+33h]
  int v25; // [rsp+90h] [rbp+37h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  v9 = g_AudioHealthMonitor;
  v10 = g_AudioSrvWatchDogTimerInMs;
  v11 = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  pv[1] = v11;
  CurrentThreadId = GetCurrentThreadId();
  v24 = 0;
  v25 = 0;
  v20 = CurrentThreadId;
  v21 = L"s_apmRegisterAudioStateMonitor";
  v22 = v9;
  v23 = 0;
  if ( (unsigned int)v10 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v10 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v10 / 3, 0);
    }
  }
  v14 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)g_PolicyManager + 296LL))(
          g_PolicyManager,
          a1,
          a2,
          a3,
          a4,
          a5);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return v14;
}
