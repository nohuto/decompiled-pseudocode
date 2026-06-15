/*
 * XREFs of ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x1800B14F8
 * Callers:
 *     ?OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180013AB0 (-OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x1800B14F8 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 * Callees:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180003514 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000F170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18001EF78 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180020980 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x1800236D0 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x1800B14F8 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     WPP_SF_S @ 0x1800B3ED8 (WPP_SF_S.c)
 *     ?TryGetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x1800CAB30 (-TryGetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@.c)
 *     ?GetAliasedEndpointId@@YAJPEBGPEAPEAGPEAH@Z @ 0x180109E38 (-GetAliasedEndpointId@@YAJPEBGPEAPEAGPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall CAudioSrv::ProcessDeviceInternal(CAudioSrv *this, const unsigned __int16 *a2)
{
  int v4; // r15d
  bool v5; // r14
  unsigned int i; // ebx
  void *v7; // r8
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  TraceLoggingHProvider v10; // r10
  int AudioSessionManagerProvider; // eax
  CAudioSessionManagerProvider *v12; // rdi
  int AudioSessionManager; // eax
  LPVOID v14; // rbx
  struct IUnknown *v15; // rcx
  __int64 v16; // r8
  LPVOID Context; // [rsp+38h] [rbp-59h] BYREF
  WINBOOL fPending[2]; // [rsp+40h] [rbp-51h] BYREF
  int v19; // [rsp+48h] [rbp-49h] BYREF
  unsigned int v20; // [rsp+4Ch] [rbp-45h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-41h] BYREF
  unsigned __int16 *v22; // [rsp+58h] [rbp-39h] BYREF
  struct IUnknown *v23; // [rsp+60h] [rbp-31h] BYREF
  __int64 v24; // [rsp+68h] [rbp-29h] BYREF
  struct IUnknown *v25; // [rsp+70h] [rbp-21h] BYREF
  _QWORD v26[2]; // [rsp+78h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A8h] [rbp+17h] BYREF

  v26[1] = -2LL;
  v4 = 0;
  v25 = 0LL;
  v26[0] = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  fPending[0] = 0;
  v19 = 0;
  v20 = 0;
  if ( (*(int (__fastcall **)(_QWORD, const unsigned __int16 *, struct IUnknown **))(**(_QWORD **)&g_DeviceEnumerator
                                                                                   + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         a2,
         &v25) >= 0
    && ((int (__fastcall *)(struct IUnknown *, int *))v25->lpVtbl[2].QueryInterface)(v25, &v19) >= 0
    && v19 == 1 )
  {
    v5 = 1;
LABEL_22:
    Context = 0LL;
    (*(void (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, LPVOID *))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                      + 24LL))(
      g_pEndpointCharacteristicsCache,
      a2,
      0LL,
      0LL,
      &Context);
    if ( Context )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)Context + 16LL))(Context);
    goto LABEL_43;
  }
  v5 = 0;
  if ( GetAliasedEndpointId(a2, &v22, fPending) >= 0
    && (*(int (__fastcall **)(_QWORD, unsigned __int16 *, _QWORD *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         v22,
         v26) >= 0
    && (*(int (__fastcall **)(_QWORD, int *))(*(_QWORD *)v26[0] + 48LL))(v26[0], &v19) >= 0 )
  {
    v5 = v19 == 1;
  }
  if ( fPending[0] )
  {
    if ( (*(int (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 24LL))(
           *(_QWORD *)&g_DeviceEnumerator,
           2LL,
           14LL,
           &v24) < 0
      || (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v24 + 24LL))(v24, &v20) < 0 )
    {
      goto LABEL_51;
    }
    for ( i = 0; i < v20; ++i )
    {
      Context = 0LL;
      *(_QWORD *)fPending = 0LL;
      pv = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, LPVOID *))(*(_QWORD *)v24 + 32LL))(v24, i, &Context) >= 0
        && (*(int (__fastcall **)(LPVOID, WINBOOL *))(*(_QWORD *)Context + 40LL))(Context, fPending) >= 0
        && GetAliasedEndpointId(*(const unsigned __int16 **)fPending, (unsigned __int16 **)&pv, 0LL) >= 0
        && !(unsigned int)_o__wcsicmp(pv, a2) )
      {
        CAudioSrv::ProcessDeviceInternal(this, *(const unsigned __int16 **)fPending);
      }
      CoTaskMemFree(pv);
      pv = 0LL;
      CoTaskMemFree(*(LPVOID *)fPending);
      *(_QWORD *)fPending = 0LL;
      if ( Context )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)Context + 16LL))(Context);
    }
  }
  if ( v5 )
    goto LABEL_22;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context)
    && fPending[0] )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v7);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  if ( **((_DWORD **)Context + 1) > 4u )
  {
    TlgCreateWsz(&pDesc, a2);
    TlgWrite(v10, &unk_180172377, v8, v9, 3u, &pData);
  }
  (*(void (__fastcall **)(struct IAudioPolicyManager *, const unsigned __int16 *))(*(_QWORD *)g_PolicyManager + 240LL))(
    g_PolicyManager,
    a2);
  Context = 0LL;
  AudioSessionManagerProvider = GetAudioSessionManagerProvider((struct CAudioSessionManagerProvider **)&Context);
  v12 = (CAudioSessionManagerProvider *)Context;
  if ( AudioSessionManagerProvider >= 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 42LL, &WPP_02a848516c583aee7a5d82f92b33b2e5_Traceguids, a2);
    }
    pv = 0LL;
    AudioSessionManager = CAudioSessionManagerProvider::TryGetAudioSessionManager(
                            v12,
                            a2,
                            (struct CAudioSessionManager **)&pv);
    v14 = pv;
    if ( AudioSessionManager >= 0 )
    {
      if ( pv )
      {
        v4 = CAudioSessionManager::Disconnect((__int64)pv, 0, 1);
        if ( v4 < 0 )
        {
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release((__int64)v14);
          if ( v12 )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((__int64)v12);
          goto LABEL_49;
        }
      }
    }
    if ( v14 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release((__int64)v14);
  }
  if ( v12 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((__int64)v12);
LABEL_43:
  v15 = v23;
  if ( v23 != v25 )
  {
    ATL::AtlComQIPtrAssign(&v23, v25, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
    v15 = v23;
  }
  if ( v15
    && ((int (__fastcall *)(struct IUnknown *, WINBOOL *))v15->lpVtbl[1].QueryInterface)(v15, fPending) >= 0
    && !fPending[0] )
  {
    LOBYTE(v16) = v5;
    (*(void (__fastcall **)(struct IAudioPolicyManager *, const unsigned __int16 *, __int64))(*(_QWORD *)g_PolicyManager
                                                                                            + 248LL))(
      g_PolicyManager,
      a2,
      v16);
  }
LABEL_49:
  if ( v4 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSrv::ProcessDeviceInternal", 2069, v4);
LABEL_51:
  CoTaskMemFree(v22);
  v22 = 0LL;
  if ( v23 )
    ((void (__fastcall *)(struct IUnknown *))v23->lpVtbl->Release)(v23);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v26[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v26[0] + 16LL))(v26[0]);
  if ( v25 )
    ((void (__fastcall *)(struct IUnknown *))v25->lpVtbl->Release)(v25);
}
