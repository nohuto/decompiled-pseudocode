/*
 * XREFs of AudioServerGetChannelCount @ 0x1800406D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FFE0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerGetChannelCount(__int64 a1, __int64 a2)
{
  GUID v4; // xmm0
  void *v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rcx
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v10; // eax
  unsigned int v11; // ebx
  WINBOOL fPending; // [rsp+20h] [rbp-39h] BYREF
  LPVOID Context; // [rsp+28h] [rbp-31h] BYREF
  _QWORD pv[2]; // [rsp+30h] [rbp-29h] BYREF
  DWORD v16; // [rsp+40h] [rbp-19h]
  const wchar_t *v17; // [rsp+48h] [rbp-11h]
  void *v18; // [rsp+50h] [rbp-9h]
  char v19; // [rsp+58h] [rbp-1h]
  int v20; // [rsp+5Ch] [rbp+3h]
  int v21; // [rsp+60h] [rbp+7h]
  struct _FILETIME pftDueTime[2]; // [rsp+68h] [rbp+Fh] BYREF
  GUID v23; // [rsp+78h] [rbp+1Fh]
  GUID v24; // [rsp+88h] [rbp+2Fh] BYREF

  if ( a1 )
    v4 = *(GUID *)(a1 + 280);
  else
    v4 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)&pftDueTime[0].dwLowDateTime = v4;
  v23 = v4;
  v24 = v4;
  EtwEventActivityIdControl(4LL, &v24);
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
  v5 = g_AudioHealthMonitor;
  v6 = g_AudioSrvWatchDogTimerInMs;
  v7 = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  pv[1] = v7;
  CurrentThreadId = GetCurrentThreadId();
  v20 = 0;
  v21 = 0;
  v16 = CurrentThreadId;
  v17 = L"AudioServerGetChannelCount";
  v18 = v5;
  v19 = 0;
  if ( (unsigned int)v6 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime[0] = (struct _FILETIME)(-10000 * v6 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, pftDueTime, (unsigned int)v6 / 3, 0);
    }
  }
  v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 176LL))(a1, a2);
  v11 = v10;
  if ( v10 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerGetChannelCount", 3358, v10);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v24);
  return v11;
}
