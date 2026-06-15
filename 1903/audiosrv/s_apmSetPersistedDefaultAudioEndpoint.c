/*
 * XREFs of s_apmSetPersistedDefaultAudioEndpoint @ 0x1800FA740
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FFE0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x18002B0F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A220 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800D1388 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
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
  void *v20; // rcx
  HRESULT v21; // eax
  void *v22; // rcx
  unsigned __int64 i; // rbx
  int v24; // eax
  void *v25; // rcx
  WINBOOL fPending[2]; // [rsp+38h] [rbp-41h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-39h] BYREF
  unsigned int Pid; // [rsp+48h] [rbp-31h] BYREF
  unsigned __int64 v30; // [rsp+50h] [rbp-29h] BYREF
  __int64 v31; // [rsp+58h] [rbp-21h] BYREF
  __int64 v32; // [rsp+60h] [rbp-19h] BYREF
  WINBOOL *v33; // [rsp+68h] [rbp-11h]
  __int64 v34; // [rsp+70h] [rbp-9h] BYREF
  char v35; // [rsp+78h] [rbp-1h]
  struct _TP_TIMER *pv[7]; // [rsp+80h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+57h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context)
    && fPending[0] )
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
      goto LABEL_45;
    }
    if ( a4 > 2 )
    {
      v15 = 95LL;
LABEL_45:
      v12 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
        (const char *)0x80070057LL);
      goto LABEL_46;
    }
    v31 = 0LL;
    v16 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64 *))(*(_QWORD *)g_PolicyManager + 40LL))(
            g_PolicyManager,
            a2,
            &v31);
    v12 = v16;
    if ( v16 < 0 )
    {
      v17 = 100LL;
LABEL_19:
      v18 = (unsigned int)v16;
      goto LABEL_20;
    }
    if ( !v31 )
    {
      v12 = -2147024809;
      v17 = 101LL;
      v18 = 2147942487LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
        (const char *)v18);
LABEL_43:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v31);
      goto LABEL_46;
    }
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v31 + 24LL))(v31, a3, a4, a5);
    v12 = v16;
    if ( v16 < 0 )
    {
      v17 = 103LL;
      goto LABEL_19;
    }
    v32 = 0LL;
    if ( a5 )
    {
      MMDeviceFromInterfaceId = mmdDevGetMMDeviceFromInterfaceId(a5, &v32);
      v12 = MMDeviceFromInterfaceId;
      if ( MMDeviceFromInterfaceId < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6E,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
          (const char *)(unsigned int)MMDeviceFromInterfaceId);
LABEL_42:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v32);
        goto LABEL_43;
      }
      v33 = fPending;
      v30 = 0LL;
      *(_QWORD *)fPending = 0LL;
      v34 = 0LL;
      v35 = 1;
      v12 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *, __int64 *))(*(_QWORD *)v31 + 56LL))(v31, &v30, &v34);
      if ( v35 )
      {
        v20 = *(void **)v33;
        *(_QWORD *)v33 = v34;
        if ( v20 )
          CoTaskMemFree(v20);
      }
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x74,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
          (const char *)(unsigned int)v12);
        goto LABEL_32;
      }
      if ( v30 )
      {
        Context = 0LL;
        v21 = CoCreateInstance(
                &GUID_06cca63e_9941_441b_b004_39f999ada412,
                0LL,
                0x17u,
                &GUID_4d809b8a_96c4_4f77_9bb7_76bd429c16bb,
                &Context);
        v12 = v21;
        if ( v21 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x7A,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
            (const char *)(unsigned int)v21);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&Context);
LABEL_32:
          v22 = *(void **)fPending;
          *(_QWORD *)fPending = 0LL;
          if ( v22 )
            CoTaskMemFree(v22);
          goto LABEL_42;
        }
        for ( i = 0LL; i < v30; ++i )
        {
          v24 = (*(__int64 (__fastcall **)(LPVOID, __int64, _QWORD, _QWORD))(*(_QWORD *)Context + 88LL))(
                  Context,
                  v32,
                  a4,
                  *(unsigned int *)(*(_QWORD *)fPending + 4 * i));
          if ( v24 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x7E,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
              (const char *)(unsigned int)v24);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&Context);
      }
      v25 = *(void **)fPending;
      *(_QWORD *)fPending = 0LL;
      if ( v25 )
        CoTaskMemFree(v25);
    }
    v12 = 0;
    goto LABEL_42;
  }
  v12 = wil::details::in1diag3::Return_Win32(
          retaddr,
          86LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
          (const char *)v11);
LABEL_46:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v12;
}
