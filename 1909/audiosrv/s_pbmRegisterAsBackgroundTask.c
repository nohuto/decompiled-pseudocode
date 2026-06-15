/*
 * XREFs of s_pbmRegisterAsBackgroundTask @ 0x1801061D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800132C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x18002DF80 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmRegisterAsBackgroundTask(__int64 a1, __int128 *a2)
{
  int v4; // ebx
  __int64 v5; // r8
  void *v6; // r8
  void (__fastcall *v7)(__int64, __int128 *); // rax
  __int128 v9; // [rsp+30h] [rbp-50h] BYREF
  struct _TP_TIMER *pv[8]; // [rsp+40h] [rbp-40h] BYREF
  __int64 fPending; // [rsp+B0h] [rbp+30h] BYREF
  LPVOID Context; // [rsp+B8h] [rbp+38h] BYREF

  v4 = 0;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    Context = &qword_1801B7588;
    qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v6);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)Context + 1),
    v5,
    (struct _TP_TIMER *)L"s_pbmRegisterAsBackgroundTask");
  if ( g_PolicyManager )
  {
    fPending = 0LL;
    v4 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
           g_PolicyManager,
           a1,
           &fPending);
    if ( v4 >= 0 )
    {
      v7 = *(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)fPending + 288LL);
      v9 = *a2;
      v7(fPending, &v9);
      if ( fPending )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)fPending + 16LL))(fPending);
    }
    else if ( fPending )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)fPending + 16LL))(fPending);
    }
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v4;
}
