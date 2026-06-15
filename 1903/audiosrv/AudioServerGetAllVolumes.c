/*
 * XREFs of AudioServerGetAllVolumes @ 0x18003FDD0
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

__int64 __fastcall AudioServerGetAllVolumes(__int64 a1, unsigned int a2, __int64 a3)
{
  GUID v6; // xmm0
  void *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rcx
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v12; // eax
  unsigned int v13; // ebx
  WINBOOL fPending; // [rsp+20h] [rbp-49h] BYREF
  LPVOID Context; // [rsp+28h] [rbp-41h] BYREF
  _QWORD pv[2]; // [rsp+30h] [rbp-39h] BYREF
  DWORD v18; // [rsp+40h] [rbp-29h]
  const wchar_t *v19; // [rsp+48h] [rbp-21h]
  void *v20; // [rsp+50h] [rbp-19h]
  char v21; // [rsp+58h] [rbp-11h]
  int v22; // [rsp+5Ch] [rbp-Dh]
  int v23; // [rsp+60h] [rbp-9h]
  struct _FILETIME pftDueTime[2]; // [rsp+68h] [rbp-1h] BYREF
  GUID v25; // [rsp+78h] [rbp+Fh]
  GUID v26; // [rsp+88h] [rbp+1Fh] BYREF

  if ( a1 )
    v6 = *(GUID *)(a1 + 280);
  else
    v6 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)&pftDueTime[0].dwLowDateTime = v6;
  v25 = v6;
  v26 = v6;
  EtwEventActivityIdControl(4LL, &v26);
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
  v7 = g_AudioHealthMonitor;
  v8 = g_AudioSrvWatchDogTimerInMs;
  v9 = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  pv[1] = v9;
  CurrentThreadId = GetCurrentThreadId();
  v22 = 0;
  v23 = 0;
  v18 = CurrentThreadId;
  v19 = L"AudioServerGetAllVolumes";
  v20 = v7;
  v21 = 0;
  if ( (unsigned int)v8 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime[0] = (struct _FILETIME)(-10000 * v8 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, pftDueTime, (unsigned int)v8 / 3, 0);
    }
  }
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 208LL))(a1, a2, a3);
  v13 = v12;
  if ( v12 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerGetAllVolumes", 3577, v12);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v26);
  return v13;
}
