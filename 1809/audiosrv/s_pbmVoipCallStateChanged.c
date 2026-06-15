/*
 * XREFs of s_pbmVoipCallStateChanged @ 0x1800FA6C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180010050 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmVoipCallStateChanged(__int64 a1, int a2)
{
  __int64 v4; // r8
  void *v5; // r8
  int (__fastcall **v6)(struct IAudioPolicyManager *, GUID *, __int64 *); // rax
  int v7; // eax
  __int64 v8; // r8
  unsigned int v9; // ebx
  __int64 v10; // rdx
  LPVOID Context; // [rsp+30h] [rbp-40h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+38h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  __int64 fPending; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+38h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v5);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)Context + 1),
    v4,
    (struct _TP_TIMER *)L"s_pbmVoipCallStateChanged");
  if ( !g_PolicyManager )
    goto LABEL_18;
  v6 = *(int (__fastcall ***)(struct IAudioPolicyManager *, GUID *, __int64 *))g_PolicyManager;
  v16 = 0LL;
  if ( (*v6)(g_PolicyManager, &GUID_4daceb65_66e6_401c_bbb5_03e1343d4a0c, &v16) < 0 )
  {
LABEL_16:
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
LABEL_18:
    v9 = 0;
    goto LABEL_19;
  }
  fPending = 0LL;
  v7 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
         g_PolicyManager,
         a1,
         &fPending);
  v9 = v7;
  if ( v7 >= 0 )
  {
    LOBYTE(v8) = a2 == 0;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v16 + 64LL))(v16, fPending, v8);
    v9 = v7;
    if ( v7 < 0 )
    {
      v10 = 523LL;
      goto LABEL_10;
    }
    if ( fPending )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)fPending + 16LL))(fPending);
    goto LABEL_16;
  }
  v10 = 521LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    v10,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\onecore\\playbackmanagerrpc.cpp",
    (const char *)(unsigned int)v7);
  if ( fPending )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)fPending + 16LL))(fPending);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
LABEL_19:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v9;
}
