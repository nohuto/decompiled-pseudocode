/*
 * XREFs of s_apmSetPersistedDefaultAudioEndpoint @ 0x1800EEAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180010050 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800C2BC4 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall s_apmSetPersistedDefaultAudioEndpoint(
        RPC_BINDING_HANDLE Binding,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 v9; // r8
  void *v10; // r8
  unsigned int v11; // eax
  int v12; // ebx
  bool v13; // dl
  char v14; // al
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r9
  int MMDeviceFromInterfaceId; // eax
  LPVOID *v20; // rsi
  void *v21; // rdi
  void *v22; // rcx
  HRESULT v23; // eax
  unsigned __int64 i; // rbx
  int v25; // eax
  LPVOID Context; // [rsp+38h] [rbp-41h] BYREF
  WINBOOL fPending[2]; // [rsp+40h] [rbp-39h] BYREF
  unsigned int Pid; // [rsp+48h] [rbp-31h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp-29h] BYREF
  __int64 v31; // [rsp+58h] [rbp-21h] BYREF
  __int64 v32; // [rsp+60h] [rbp-19h] BYREF
  LPVOID *p_Context; // [rsp+68h] [rbp-11h]
  LPVOID v34; // [rsp+70h] [rbp-9h] BYREF
  char v35; // [rsp+78h] [rbp-1h]
  struct _TP_TIMER *pv[7]; // [rsp+80h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+57h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context)
    && fPending[0] )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v10);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)Context + 1),
    v9,
    (struct _TP_TIMER *)L"s_apmSetPersistedDefaultAudioEndpoint");
  Pid = 0;
  v11 = I_RpcBindingInqLocalClientPID(Binding, &Pid);
  if ( !v11 )
  {
    v13 = Pid == GetCurrentProcessId();
    if ( !g_ADGProcess || (v14 = 1, Pid != LODWORD(g_ADGProcess[2].OwningThread)) )
      v14 = 0;
    if ( v13 || v14 )
    {
      v15 = 90LL;
      goto LABEL_47;
    }
    if ( a4 > 2 )
    {
      v15 = 95LL;
LABEL_47:
      v12 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        v15,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
        (const char *)0x80070057LL);
      goto LABEL_48;
    }
    v32 = 0LL;
    v16 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64 *))(*(_QWORD *)g_PolicyManager + 40LL))(
            g_PolicyManager,
            a2,
            &v32);
    v12 = v16;
    if ( v16 < 0 )
    {
      v17 = 100LL;
LABEL_19:
      v18 = (unsigned int)v16;
      goto LABEL_20;
    }
    if ( !v32 )
    {
      v12 = -2147024809;
      v17 = 101LL;
      v18 = 2147942487LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        v17,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
        (const char *)v18);
LABEL_45:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v32);
      goto LABEL_48;
    }
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v32 + 24LL))(v32, a3, a4, a5);
    v12 = v16;
    if ( v16 < 0 )
    {
      v17 = 103LL;
      goto LABEL_19;
    }
    v31 = 0LL;
    if ( a5 )
    {
      v31 = 0LL;
      MMDeviceFromInterfaceId = mmdDevGetMMDeviceFromInterfaceId(a5, &v31);
      v12 = MMDeviceFromInterfaceId;
      if ( MMDeviceFromInterfaceId < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          110LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
          (const char *)(unsigned int)MMDeviceFromInterfaceId);
LABEL_44:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v31);
        goto LABEL_45;
      }
      p_Context = &Context;
      *(_QWORD *)fPending = 0LL;
      Context = 0LL;
      v34 = 0LL;
      v35 = 1;
      v12 = (*(__int64 (__fastcall **)(__int64, WINBOOL *, LPVOID *))(*(_QWORD *)v32 + 56LL))(v32, fPending, &v34);
      if ( v35 )
      {
        v20 = p_Context;
        v21 = v34;
        v22 = *p_Context;
        if ( v34 != *p_Context )
        {
          if ( v22 )
            CoTaskMemFree(v22);
          *v20 = v21;
        }
      }
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          116LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
          (const char *)(unsigned int)v12);
        goto LABEL_34;
      }
      if ( *(_QWORD *)fPending )
      {
        ppv = 0LL;
        v23 = CoCreateInstance(
                &GUID_06cca63e_9941_441b_b004_39f999ada412,
                0LL,
                0x17u,
                &GUID_4d809b8a_96c4_4f77_9bb7_76bd429c16bb,
                &ppv);
        v12 = v23;
        if ( v23 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            122LL,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
            (const char *)(unsigned int)v23);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
LABEL_34:
          if ( Context )
            CoTaskMemFree(Context);
          goto LABEL_44;
        }
        for ( i = 0LL; i < *(_QWORD *)fPending; ++i )
        {
          v25 = (*(__int64 (__fastcall **)(LPVOID, __int64, _QWORD, _QWORD))(*(_QWORD *)ppv + 88LL))(
                  ppv,
                  v31,
                  a4,
                  *((unsigned int *)Context + i));
          if ( v25 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x7E,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
              (const char *)(unsigned int)v25);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
      }
      if ( Context )
        CoTaskMemFree(Context);
    }
    v12 = 0;
    goto LABEL_44;
  }
  v12 = wil::details::in1diag3::Return_Win32(
          retaddr,
          86LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
          (const char *)v11);
LABEL_48:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v12;
}
