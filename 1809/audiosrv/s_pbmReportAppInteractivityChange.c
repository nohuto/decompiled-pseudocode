/*
 * XREFs of s_pbmReportAppInteractivityChange @ 0x1800016C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x180060C74 (atexit.c)
 */

__int64 __fastcall s_pbmReportAppInteractivityChange(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // ebx
  void *v9; // rdi
  __int64 v10; // rsi
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  WINBOOL v14; // [rsp+20h] [rbp-68h] BYREF
  _QWORD *v15; // [rsp+28h] [rbp-60h] BYREF
  _FILETIME pftDueTime; // [rsp+30h] [rbp-58h] BYREF
  _QWORD pv[2]; // [rsp+38h] [rbp-50h] BYREF
  DWORD v18; // [rsp+48h] [rbp-40h]
  const wchar_t *v19; // [rsp+50h] [rbp-38h]
  void *v20; // [rsp+58h] [rbp-30h]
  char v21; // [rsp+60h] [rbp-28h]
  __int64 v22; // [rsp+64h] [rbp-24h]

  v8 = 0;
  v15 = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v14, (LPVOID *)&v15) && v14 )
  {
    v15 = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  v9 = g_AudioHealthMonitor;
  v10 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = v15[1];
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v20 = v9;
  v18 = CurrentThreadId;
  v19 = L"s_pbmReportAppInteractivityChange";
  v21 = 0;
  v22 = 0LL;
  if ( (unsigned int)v10 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (_FILETIME)(-10000 * v10 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v10 / 3, 0);
    }
  }
  if ( (unsigned int)IsPbmReportAppInteractivityChangeSupported() )
    v8 = PbmReportAppInteractivityChange(a1, a2, a3, a4);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return v8;
}
