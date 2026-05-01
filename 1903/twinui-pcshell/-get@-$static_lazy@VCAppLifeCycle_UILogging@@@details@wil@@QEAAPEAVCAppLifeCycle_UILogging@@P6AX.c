/*
 * XREFs of ?get@?$static_lazy@VCAppLifeCycle_UILogging@@@details@wil@@QEAAPEAVCAppLifeCycle_UILogging@@P6AXXZ@Z @ 0x180367DF4
 * Callers:
 *     ??1Completer@?$static_lazy@VAppSwitchTelemetry@PerfTrack@@@details@wil@@QEAA@XZ @ 0x180367B80 (--1Completer@-$static_lazy@VAppSwitchTelemetry@PerfTrack@@@details@wil@@QEAA@XZ.c)
 *     ?AppSwitched_@AppSwitchTelemetry@PerfTrack@@QEAAXW4SwitchLocation@2@PEBGW4SwitchInvokeMethod@2@1@Z @ 0x180367BEC (-AppSwitched_@AppSwitchTelemetry@PerfTrack@@QEAAXW4SwitchLocation@2@PEBGW4SwitchInvokeMethod@2@1.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x1800FFF24 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x1801002A4 (--2@YAPEAX_KPEAX@Z.c)
 */

LPVOID __fastcall wil::details::static_lazy<CAppLifeCycle_UILogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v3; // rcx
  wil::TraceLoggingProvider *v4; // rax
  _QWORD *v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = a1;
  v8 = 0LL;
  if ( InitOnceBeginInitialize(&`CAppLifeCycle_UILogging::Instance'::`2'::wrapper, 0, (PBOOL)&v7, &v8) && (_DWORD)v7 )
  {
    v8 = &unk_18059A600;
    v4 = (wil::TraceLoggingProvider *)operator new(v3, &unk_18059A600);
    wil::TraceLoggingProvider::TraceLoggingProvider(v4);
    *v5 = &ImmersiveIconsLogging::`vftable';
    v5[3] = &`CAppLifeCycle_UILogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_18059A600, qword_18059A618);
    InitOnceComplete(&`CAppLifeCycle_UILogging::Instance'::`2'::wrapper, 0, &unk_18059A600);
  }
  return v8;
}
