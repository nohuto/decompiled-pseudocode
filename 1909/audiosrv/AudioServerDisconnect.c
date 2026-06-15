/*
 * XREFs of AudioServerDisconnect @ 0x18004A9A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800132C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioServerDisconnect(_QWORD *a1)
{
  GUID v2; // xmm0
  __int64 v3; // rcx
  void *v4; // rbx
  __int64 v5; // rsi
  struct _TP_TIMER *ThreadpoolTimer; // r10
  LPCRITICAL_SECTION v7; // rbx
  struct CAudioThreadPool *v9; // rdi
  __int64 v10; // rax
  HANDLE OwningThread; // rdx
  WINBOOL fPending; // [rsp+48h] [rbp-49h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-41h] BYREF
  _QWORD pv[2]; // [rsp+58h] [rbp-39h] BYREF
  DWORD CurrentThreadId; // [rsp+68h] [rbp-29h]
  const wchar_t *v17; // [rsp+70h] [rbp-21h]
  void *v18; // [rsp+78h] [rbp-19h]
  char v19; // [rsp+80h] [rbp-11h]
  __int64 v20; // [rsp+84h] [rbp-Dh]
  __int64 v21; // [rsp+90h] [rbp-1h]
  struct _FILETIME pftDueTime[2]; // [rsp+98h] [rbp+7h] BYREF
  GUID v23; // [rsp+A8h] [rbp+17h]
  GUID v24; // [rsp+B8h] [rbp+27h] BYREF

  v21 = -2LL;
  if ( *a1 )
    v2 = *(GUID *)(*a1 + 280LL);
  else
    v2 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)&pftDueTime[0].dwLowDateTime = v2;
  v23 = v2;
  v24 = v2;
  EtwEventActivityIdControl(4LL, &v24);
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
  v3 = *((_QWORD *)Context + 1);
  v4 = g_AudioHealthMonitor;
  v5 = g_AudioSrvWatchDogTimerInMs;
  pv[0] = 0LL;
  pv[1] = v3;
  CurrentThreadId = GetCurrentThreadId();
  v17 = L"AudioServerDisconnect";
  v18 = v4;
  v19 = 0;
  v20 = 0LL;
  if ( (unsigned int)v5 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime[0] = (struct _FILETIME)(-10000 * v5 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, pftDueTime, (unsigned int)v5 / 3, 0);
    }
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  *a1 = 0LL;
  v7 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  if ( LODWORD(v7[1].DebugInfo)-- == 1 )
  {
    v9 = ThreadPool;
    if ( !v7[3].OwningThread )
      v7[3].OwningThread = (HANDLE)(*(__int64 (__fastcall **)(struct CAudioThreadPool *, _QWORD, LPCRITICAL_SECTION))(*(_QWORD *)ThreadPool + 8LL))(
                                     ThreadPool,
                                     CAudioDGProcess::OnADGInactivityTimerFiredHandler,
                                     v7);
    LODWORD(Context) = 4;
    if ( RegGetValueW(
           HKEY_LOCAL_MACHINE,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
           L"AudioDGInactiveTimeout",
           0x18u,
           0LL,
           &fPending,
           (LPDWORD)&Context) )
    {
      v10 = 300LL;
      fPending = 300;
    }
    else
    {
      v10 = (unsigned int)fPending;
    }
    OwningThread = v7[3].OwningThread;
    if ( OwningThread )
    {
      pftDueTime[0] = (struct _FILETIME)(-10000000 * v10);
      (*(void (__fastcall **)(struct CAudioThreadPool *, HANDLE, struct _FILETIME *, _QWORD, _DWORD))(*(_QWORD *)v9 + 24LL))(
        v9,
        OwningThread,
        pftDueTime,
        0LL,
        0);
    }
  }
  LeaveCriticalSection(v7);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v24);
  return 0LL;
}
