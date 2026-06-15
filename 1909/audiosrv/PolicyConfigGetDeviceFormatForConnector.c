/*
 * XREFs of PolicyConfigGetDeviceFormatForConnector @ 0x1800E1BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800132C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x18002DF80 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     MIDL_user_allocate @ 0x1800471A0 (MIDL_user_allocate.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     memcpy_0 @ 0x18006C963 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PolicyConfigGetDeviceFormatForConnector(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5)
{
  __int64 v8; // r8
  void *v9; // r8
  int v10; // ebx
  void *v11; // rcx
  __int64 v12; // rdx
  void *v13; // rax
  void *v14; // rcx
  void *Src; // [rsp+38h] [rbp-21h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-19h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-11h] BYREF
  void **p_Src; // [rsp+50h] [rbp-9h]
  int v20[2]; // [rsp+58h] [rbp-1h] BYREF
  char v21; // [rsp+60h] [rbp+7h]
  struct _TP_TIMER *pv[8]; // [rsp+68h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+57h]

  Src = 0LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1801B7588;
    qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v9);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)Context + 1),
    v8,
    (struct _TP_TIMER *)L"PolicyConfigGetDeviceFormatForConnector");
  *(_QWORD *)v20 = 0LL;
  p_Src = &Src;
  v21 = 1;
  *a5 = 0LL;
  v10 = (*(__int64 (__fastcall **)(CPolicyConfig *, __int64, _QWORD, _QWORD, int *))(*(_QWORD *)g_PolicyConfig + 304LL))(
          g_PolicyConfig,
          a2,
          a3,
          a4,
          v20);
  if ( v21 )
  {
    v11 = *p_Src;
    *p_Src = *(void **)v20;
    if ( v11 )
      CoTaskMemFree(v11);
  }
  if ( v10 < 0 )
  {
    v12 = 4937LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_13;
  }
  v13 = MIDL_user_allocate(*((unsigned __int16 *)Src + 8) + 18LL);
  *a5 = v13;
  if ( !v13 )
  {
    v10 = -2147024882;
    v12 = 4944LL;
    goto LABEL_11;
  }
  memcpy_0(v13, Src, *((unsigned __int16 *)Src + 8) + 18LL);
  v10 = 0;
LABEL_13:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  v14 = Src;
  Src = 0LL;
  if ( v14 )
    CoTaskMemFree(v14);
  return (unsigned int)v10;
}
