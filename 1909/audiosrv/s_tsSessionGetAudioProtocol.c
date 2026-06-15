/*
 * XREFs of s_tsSessionGetAudioProtocol @ 0x180013140
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800132C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 */

__int64 __fastcall s_tsSessionGetAudioProtocol(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  void *v8; // rdi
  __int64 v9; // rbx
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned int AudioProtocol; // ebx
  WINBOOL fPending; // [rsp+20h] [rbp-68h] BYREF
  LPVOID Context; // [rsp+28h] [rbp-60h] BYREF
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp-58h] BYREF
  _QWORD pv[2]; // [rsp+38h] [rbp-50h] BYREF
  DWORD v18; // [rsp+48h] [rbp-40h]
  const wchar_t *v19; // [rsp+50h] [rbp-38h]
  void *v20; // [rsp+58h] [rbp-30h]
  char v21; // [rsp+60h] [rbp-28h]
  __int64 v22; // [rsp+64h] [rbp-24h]

  if ( !(unsigned int)IsTSSessionGetAudioProtocolSupported() )
    return 1LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1801B7588;
    qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
  }
  v8 = g_AudioHealthMonitor;
  v9 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v20 = v8;
  v18 = CurrentThreadId;
  v21 = 0;
  v22 = 0LL;
  v19 = L"s_tsSessionGetAudioProtocol";
  if ( (unsigned int)v9 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v9 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v9 / 3, 0);
    }
  }
  AudioProtocol = TS_SessionGetAudioProtocol(a1, a2, a3, a4);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return AudioProtocol;
}
