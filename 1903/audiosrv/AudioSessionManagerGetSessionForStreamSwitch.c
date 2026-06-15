/*
 * XREFs of AudioSessionManagerGetSessionForStreamSwitch @ 0x1800D8860
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x1800046E8 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180004778 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FFE0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180021E90 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x18002B0F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x180030D90 (-GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSess.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800C3F68 (WPP_SF_q.c)
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x1800D05BC (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D1EF0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?SetDuckingOptOutPreference@CAudioSession@@QEAAJ_N@Z @ 0x1800D31FC (-SetDuckingOptOutPreference@CAudioSession@@QEAAJ_N@Z.c)
 */

__int64 __fastcall AudioSessionManagerGetSessionForStreamSwitch(
        CAudioSessionManager ***a1,
        unsigned __int16 *a2,
        LPVOID *a3)
{
  __int64 v6; // r8
  void *v7; // r8
  CAudioSessionManager **v8; // rsi
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  struct IAudioProcess *v12; // rdi
  CAudioSessionManager *v13; // rbx
  unsigned int v14; // eax
  int AudioSessionControl; // eax
  __int64 v16; // rdx
  struct CAudioSession *v17; // rbx
  CAudioSessionManager *v18; // rdi
  unsigned int v19; // eax
  bool v21; // [rsp+40h] [rbp-89h] BYREF
  WINBOOL fPending; // [rsp+44h] [rbp-85h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-81h] BYREF
  struct IAudioProcess *v24; // [rsp+50h] [rbp-79h] BYREF
  CAudioSession *v25; // [rsp+58h] [rbp-71h] BYREF
  struct _TP_TIMER *pv[8]; // [rsp+60h] [rbp-69h] BYREF
  _BYTE v27[80]; // [rsp+A0h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1801B8588;
    qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0, v7);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)Context + 1),
    v6,
    (struct _TP_TIMER *)L"AudioSessionManagerGetSessionForStreamSwitch");
  *a3 = 0LL;
  v8 = *a1;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x3Fu, (__int64)&WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids, *v8);
  }
  v24 = 0LL;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&v24);
  v9 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager
                                                                                                + 32LL))(
         g_PolicyManager,
         0LL,
         &v24);
  v10 = v9;
  if ( v9 >= 0 )
  {
    CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v27);
    v11 = CAudioSession::ParseStreamSwitchId(
            *((const unsigned __int16 **)*v8 + 37),
            a2,
            (struct CAudioSessionInstanceId *)v27,
            (unsigned int *)&Context,
            (unsigned int *)&fPending,
            &v21);
    v10 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x912,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v11);
LABEL_22:
      CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v27);
      goto LABEL_23;
    }
    v12 = v24;
    v25 = 0LL;
    v13 = *v8;
    v14 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v24 + 40LL))(v24);
    AudioSessionControl = CAudioSessionManager::CreateAudioSession(
                            v13,
                            v12,
                            (struct CAudioSessionInstanceId *)v27,
                            (unsigned int)Context,
                            fPending,
                            v14,
                            &v25);
    v10 = AudioSessionControl;
    if ( AudioSessionControl >= 0 )
    {
      v17 = v25;
      if ( (*(unsigned int (__fastcall **)(CAudioSession *))(*(_QWORD *)v25 + 56LL))(v25)
        || (AudioSessionControl = CAudioSession::SetDuckingOptOutPreference(v17, v21),
            v10 = AudioSessionControl,
            AudioSessionControl >= 0) )
      {
        v18 = *v8;
        v19 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v24 + 40LL))(v24);
        AudioSessionControl = CAudioSessionManager::GetAudioSessionControl(
                                v18,
                                v19,
                                0,
                                v17,
                                (struct CServerAudioSessionControl **)&Context);
        v10 = AudioSessionControl;
        if ( AudioSessionControl >= 0 )
        {
          v10 = 0;
          *a3 = Context;
          goto LABEL_21;
        }
        v16 = 2343LL;
      }
      else
      {
        v16 = 2336LL;
      }
    }
    else
    {
      v16 = 2328LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)AudioSessionControl);
LABEL_21:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v25);
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x907,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
    (const char *)(unsigned int)v9);
LABEL_23:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v24);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v10;
}
