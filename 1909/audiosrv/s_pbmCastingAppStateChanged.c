/*
 * XREFs of s_pbmCastingAppStateChanged @ 0x180012EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800132C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmCastingAppStateChanged(__int64 a1, unsigned int a2)
{
  int v4; // ebx
  __int64 v5; // rsi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  __int64 v8; // r8
  LPVOID v9; // rcx
  struct _FILETIME pftDueTime; // [rsp+20h] [rbp-40h] BYREF
  _QWORD pv[2]; // [rsp+28h] [rbp-38h] BYREF
  DWORD CurrentThreadId; // [rsp+38h] [rbp-28h]
  const wchar_t *v13; // [rsp+40h] [rbp-20h]
  void *v14; // [rsp+48h] [rbp-18h]
  char v15; // [rsp+50h] [rbp-10h]
  __int64 v16; // [rsp+54h] [rbp-Ch]
  __int64 fPending; // [rsp+A0h] [rbp+40h] BYREF
  LPVOID Context; // [rsp+A8h] [rbp+48h] BYREF

  v4 = 0;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    Context = &qword_1801B7588;
    qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
  }
  v5 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  v14 = g_AudioHealthMonitor;
  CurrentThreadId = GetCurrentThreadId();
  v13 = L"s_pbmCastingAppStateChanged";
  v15 = 0;
  v16 = 0LL;
  if ( (unsigned int)v5 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v5 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v5 / 3, 0);
    }
  }
  if ( (unsigned int)IsPbmCastingAppStateChangedSupported() )
  {
    v4 = PbmCastingAppStateChanged(a1, a2);
    goto LABEL_9;
  }
  if ( !g_PolicyManager )
    goto LABEL_9;
  Context = 0LL;
  if ( (**(int (__fastcall ***)(struct IAudioPolicyManager *, GUID *, LPVOID *))g_PolicyManager)(
         g_PolicyManager,
         &GUID_41a1b37a_c1a0_4645_b93b_95270d3396e6,
         &Context) < 0 )
    goto LABEL_19;
  fPending = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
         g_PolicyManager,
         a1,
         &fPending);
  if ( v4 >= 0 )
  {
    LOBYTE(v8) = a2 == 0;
    v4 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64))(*(_QWORD *)Context + 32LL))(Context, fPending, v8);
    if ( fPending )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)fPending + 16LL))(fPending);
LABEL_19:
    v9 = Context;
    if ( !Context )
      goto LABEL_9;
LABEL_20:
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v9 + 16LL))(v9);
    goto LABEL_9;
  }
  if ( fPending )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)fPending + 16LL))(fPending);
  v9 = Context;
  if ( Context )
    goto LABEL_20;
LABEL_9:
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return (unsigned int)v4;
}
