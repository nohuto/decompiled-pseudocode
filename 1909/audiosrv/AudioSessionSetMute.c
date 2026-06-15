/*
 * XREFs of AudioSessionSetMute @ 0x180045040
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800132C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionSetMute(__int64 *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  void *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v13; // eax
  unsigned int v14; // ebx
  LPVOID Context; // [rsp+30h] [rbp-50h] BYREF
  struct _FILETIME pftDueTime; // [rsp+38h] [rbp-48h] BYREF
  _QWORD pv[2]; // [rsp+40h] [rbp-40h] BYREF
  DWORD v19; // [rsp+50h] [rbp-30h]
  const wchar_t *v20; // [rsp+58h] [rbp-28h]
  void *v21; // [rsp+60h] [rbp-20h]
  char v22; // [rsp+68h] [rbp-18h]
  int v23; // [rsp+6Ch] [rbp-14h]
  int v24; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  WINBOOL fPending; // [rsp+B0h] [rbp+30h] BYREF

  v4 = *a1;
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
  v10 = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  pv[1] = v10;
  CurrentThreadId = GetCurrentThreadId();
  v23 = 0;
  v24 = 0;
  v19 = CurrentThreadId;
  v20 = L"AudioSessionSetMute";
  v21 = v8;
  v22 = 0;
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
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v4 + 312LL))(v4, a2, a3, a4);
  v14 = v13;
  if ( v13 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x85B,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessioncontrol.cpp",
      (const char *)(unsigned int)v13);
  else
    v14 = 0;
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v14;
}
