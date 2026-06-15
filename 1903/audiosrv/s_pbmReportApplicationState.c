/*
 * XREFs of s_pbmReportApplicationState @ 0x18003FB80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FFE0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 */

__int64 __fastcall s_pbmReportApplicationState(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // edi
  void *v9; // rbx
  __int64 v10; // rsi
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  WINBOOL fPending; // [rsp+20h] [rbp-50h] BYREF
  LPVOID Context; // [rsp+28h] [rbp-48h] BYREF
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp-40h] BYREF
  _QWORD pv[2]; // [rsp+38h] [rbp-38h] BYREF
  DWORD v18; // [rsp+48h] [rbp-28h]
  const wchar_t *v19; // [rsp+50h] [rbp-20h]
  void *v20; // [rsp+58h] [rbp-18h]
  char v21; // [rsp+60h] [rbp-10h]
  __int64 v22; // [rsp+64h] [rbp-Ch]

  v8 = 0;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1801B8588;
    qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
  }
  v9 = g_AudioHealthMonitor;
  v10 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v20 = v9;
  v18 = CurrentThreadId;
  v19 = L"s_pbmReportApplicationState";
  v21 = 0;
  v22 = 0LL;
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
  if ( (unsigned int)IsPbmReportApplicationStateSupported() )
    v8 = PbmReportApplicationState(a1, a2, a3, a4);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v8;
}
