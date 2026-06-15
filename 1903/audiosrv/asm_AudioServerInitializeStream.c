/*
 * XREFs of asm_AudioServerInitializeStream @ 0x1800FE770
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FFE0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x180028320 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x18002B0F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall asm_AudioServerInitializeStream(
        void *a1,
        struct IProcessSubmixProxy **a2,
        int a3,
        const struct tWAVEFORMATEX *a4,
        void **a5)
{
  __int64 v9; // r8
  void *v10; // r8
  const unsigned __int16 *v11; // rbx
  int v12; // eax
  unsigned int v13; // ebx
  struct IProcessSubmixProxy *v15; // [rsp+40h] [rbp-C0h]
  WINBOOL fPending; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int16 *v18; // [rsp+60h] [rbp-A0h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+68h] [rbp-98h] BYREF
  struct _GUID v20; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v21[160]; // [rsp+B0h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1801B8588;
    qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0, v10);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)Context + 1),
    v9,
    (struct _TP_TIMER *)L"asm_AudioServerInitializeStream");
  v11 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)*a2 + 160LL))(*a2);
  memset_0(v21, 0, sizeof(v21));
  v15 = *a2;
  v20 = GUID_00000000_0000_0000_0000_000000000000;
  v12 = AudioServerInitialize_Internal(a1, v11, 0, a3, a4, &v20, (struct VadServerSettings *)v21, &v18, v15, a5);
  v13 = v12;
  if ( v12 >= 0 )
    v13 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x146,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
      (const char *)(unsigned int)v12);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v13;
}
