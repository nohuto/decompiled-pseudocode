/*
 * XREFs of AudioSessionManagerGetAudioSessions @ 0x1800D84F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FFE0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x18002B0F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800C3F68 (WPP_SF_q.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x1800D6C80 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 */

__int64 __fastcall AudioSessionManagerGetAudioSessions(
        _QWORD **a1,
        unsigned int *a2,
        void ***a3,
        unsigned __int16 ***a4)
{
  __int64 v8; // r8
  void *v9; // r8
  _QWORD *v10; // rbx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r9
  int AudioSessions; // eax
  struct _TP_TIMER **v16; // [rsp+30h] [rbp-58h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+38h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  WINBOOL v19; // [rsp+90h] [rbp+8h] BYREF

  v16 = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v19, (LPVOID *)&v16) && v19 )
  {
    v16 = (struct _TP_TIMER **)&qword_1801B8588;
    qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0, v9);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v16[1], v8, (struct _TP_TIMER *)L"AudioSessionManagerGetAudioSessions");
  v10 = *a1;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x3Cu,
      (__int64)&WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids,
      *v10);
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v10[1] + 112LL))(v10[1]) )
  {
    v11 = -2147024891;
    v12 = 2079LL;
    v13 = 2147942405LL;
  }
  else
  {
    AudioSessions = CAudioSessionManager::GetAudioSessions(
                      (const unsigned __int16 **)*v10,
                      (struct IAudioProcess *)v10[1],
                      a2,
                      a3,
                      a4);
    v11 = AudioSessions;
    if ( AudioSessions >= 0 )
    {
      v11 = 0;
      goto LABEL_14;
    }
    v13 = (unsigned int)AudioSessions;
    v12 = 2081LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
    (const char *)v13);
LABEL_14:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v11;
}
