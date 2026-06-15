/*
 * XREFs of s_pbmCastingAppStateChanged @ 0x180032990
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmCastingAppStateChanged(__int64 a1, unsigned int a2)
{
  int v4; // ebx
  __int64 v5; // rsi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int (__fastcall **v8)(struct IAudioPolicyManager *, GUID *, LPVOID *); // rax
  __int64 v9; // r8
  LPVOID v10; // rcx
  struct _FILETIME pftDueTime; // [rsp+20h] [rbp-40h] BYREF
  _QWORD pv[2]; // [rsp+28h] [rbp-38h] BYREF
  DWORD CurrentThreadId; // [rsp+38h] [rbp-28h]
  const wchar_t *v14; // [rsp+40h] [rbp-20h]
  void *v15; // [rsp+48h] [rbp-18h]
  char v16; // [rsp+50h] [rbp-10h]
  __int64 v17; // [rsp+54h] [rbp-Ch]
  __int64 fPending; // [rsp+A0h] [rbp+40h] BYREF
  LPVOID Context; // [rsp+A8h] [rbp+48h] BYREF

  v4 = 0;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  v5 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  v15 = g_AudioHealthMonitor;
  CurrentThreadId = GetCurrentThreadId();
  v14 = L"s_pbmCastingAppStateChanged";
  v16 = 0;
  v17 = 0LL;
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
  v8 = *(int (__fastcall ***)(struct IAudioPolicyManager *, GUID *, LPVOID *))g_PolicyManager;
  Context = 0LL;
  if ( (*v8)(g_PolicyManager, &GUID_4daceb65_66e6_401c_bbb5_03e1343d4a0c, &Context) < 0 )
    goto LABEL_19;
  fPending = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
         g_PolicyManager,
         a1,
         &fPending);
  if ( v4 >= 0 )
  {
    LOBYTE(v9) = a2 == 0;
    v4 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64))(*(_QWORD *)Context + 32LL))(Context, fPending, v9);
    if ( fPending )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)fPending + 16LL))(fPending);
LABEL_19:
    v10 = Context;
    if ( !Context )
      goto LABEL_9;
LABEL_20:
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v10 + 16LL))(v10);
    goto LABEL_9;
  }
  if ( fPending )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)fPending + 16LL))(fPending);
  v10 = Context;
  if ( Context )
    goto LABEL_20;
LABEL_9:
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return (unsigned int)v4;
}
