/*
 * XREFs of AudioSessionManagerGetExistingSession @ 0x1800C9C90
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180002FF8 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x1800040F0 (-GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSess.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180010050 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18001FA4C (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800B5888 (WPP_SF_q.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x1800C7FD0 (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800CDFBC (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall AudioSessionManagerGetExistingSession(
        CAudioSessionManager ***a1,
        const unsigned __int16 *a2,
        struct CServerAudioSessionControl **a3)
{
  CAudioSessionManager **v3; // rsi
  __int64 v6; // r8
  void *v7; // r8
  RPC_STATUS v8; // eax
  int AudioSessionControl; // ebx
  int AudioSession; // eax
  struct CAudioSession *v11; // rdi
  WINBOOL fPending; // [rsp+30h] [rbp-89h] BYREF
  unsigned int Pid; // [rsp+34h] [rbp-85h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-81h] BYREF
  struct CAudioSession *v16; // [rsp+40h] [rbp-79h] BYREF
  struct CServerAudioSessionControl *v17; // [rsp+48h] [rbp-71h] BYREF
  struct _TP_TIMER *pv[8]; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v19[80]; // [rsp+90h] [rbp-29h] BYREF

  v3 = *a1;
  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v19);
  v16 = 0LL;
  v17 = 0LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v7);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)Context + 1),
    v6,
    (struct _TP_TIMER *)L"AudioSessionManagerGetExistingSession");
  *a3 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x3Eu, (__int64)&WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids, *v3);
  }
  v8 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  AudioSessionControl = v8;
  if ( v8 )
  {
    if ( v8 > 0 )
      AudioSessionControl = (unsigned __int16)v8 | 0x80070000;
  }
  else
  {
    AudioSessionControl = CAudioSessionInstanceId::Initialize((CAudioSessionInstanceId *)v19, a2);
    if ( AudioSessionControl < 0 )
    {
LABEL_18:
      AudSrvTraceLoggingErrorHelper("AudioSessionManagerGetExistingSession", 2284, AudioSessionControl);
      goto LABEL_19;
    }
    AudioSession = CAudioSessionManager::FindAudioSession(*v3, (struct CAudioSessionInstanceId *)v19, &v16);
    v11 = v16;
    AudioSessionControl = AudioSession;
    if ( AudioSession >= 0 )
    {
      AudioSessionControl = CAudioSessionManager::GetAudioSessionControl(*v3, Pid, 0, v16, &v17);
      if ( AudioSessionControl >= 0 )
        *a3 = v17;
    }
    if ( v11 )
      (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( AudioSessionControl < 0 )
    goto LABEL_18;
LABEL_19:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v19);
  return (unsigned int)AudioSessionControl;
}
