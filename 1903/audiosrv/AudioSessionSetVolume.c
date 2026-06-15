/*
 * XREFs of AudioSessionSetVolume @ 0x180041760
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FFE0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionSetVolume(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  void *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v11; // rdx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v13; // eax
  unsigned int v14; // ebx
  LPVOID Context; // [rsp+38h] [rbp-19h] BYREF
  struct _FILETIME pftDueTime; // [rsp+40h] [rbp-11h] BYREF
  _QWORD pv[2]; // [rsp+48h] [rbp-9h] BYREF
  DWORD v19; // [rsp+58h] [rbp+7h]
  const wchar_t *v20; // [rsp+60h] [rbp+Fh]
  void *v21; // [rsp+68h] [rbp+17h]
  char v22; // [rsp+70h] [rbp+1Fh]
  int v23; // [rsp+74h] [rbp+23h]
  int v24; // [rsp+78h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]
  WINBOOL fPending; // [rsp+B8h] [rbp+67h] BYREF

  v4 = *a1;
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
  v23 = 0;
  v24 = 0;
  v19 = CurrentThreadId;
  v20 = L"AudioSessionSetVolume";
  v21 = v7;
  v22 = 0;
  if ( (unsigned int)v8 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v8 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v8 / 3, 0);
    }
  }
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v4 + 296LL))(v4, v11, a3, a4);
  v14 = v13;
  if ( v13 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x824,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessioncontrol.cpp",
      (const char *)(unsigned int)v13);
  else
    v14 = 0;
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v14;
}
