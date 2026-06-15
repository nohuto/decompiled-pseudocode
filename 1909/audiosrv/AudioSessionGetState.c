/*
 * XREFs of AudioSessionGetState @ 0x180010550
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800132C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionGetState(__int64 *a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v6; // eax
  unsigned int v7; // ebx
  _QWORD pv[2]; // [rsp+20h] [rbp-68h] BYREF
  DWORD CurrentThreadId; // [rsp+30h] [rbp-58h]
  const wchar_t *v11; // [rsp+38h] [rbp-50h]
  void *v12; // [rsp+40h] [rbp-48h]
  char v13; // [rsp+48h] [rbp-40h]
  __int64 v14; // [rsp+4Ch] [rbp-3Ch]
  WINBOOL v15; // [rsp+90h] [rbp+8h] BYREF
  _QWORD *v16; // [rsp+A0h] [rbp+18h] BYREF
  struct _FILETIME pftDueTime; // [rsp+A8h] [rbp+20h] BYREF

  v2 = *a1;
  v16 = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v15, (LPVOID *)&v16) && v15 )
  {
    v16 = &qword_1801B7588;
    qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
  }
  v4 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = v16[1];
  pv[0] = 0LL;
  v12 = g_AudioHealthMonitor;
  CurrentThreadId = GetCurrentThreadId();
  v11 = L"AudioSessionGetState";
  v13 = 0;
  v14 = 0LL;
  if ( (unsigned int)v4 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v4 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v4 / 3, 0);
    }
  }
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 144LL))(v2, a2);
  v7 = v6;
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionGetState", 0x69Bu, v6);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return v7;
}
