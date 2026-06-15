/*
 * XREFs of GetAudioSessionManager @ 0x180008EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x1800092B0 (-GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManag.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FFE0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180029620 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006430C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800C2680 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800C3F68 (WPP_SF_q.c)
 */

__int64 __fastcall GetAudioSessionManager(
        __int64 a1,
        const unsigned __int16 *a2,
        struct CAudioSessionManager ***a3,
        _DWORD *a4)
{
  void *v8; // rbx
  __int64 v9; // rdi
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v12; // edi
  volatile signed __int32 *v13; // rbx
  int v14; // eax
  int AudioSessionManagerInternal; // eax
  struct CAudioSessionManager **v16; // rax
  struct CAudioSessionManager **v17; // rbx
  struct CAudioSessionManager *v18; // rcx
  struct CAudioSessionManager *v19; // rsi
  struct CAudioSessionManager *v20; // rcx
  __int64 v22; // rdx
  __int64 v23; // [rsp+20h] [rbp-49h] BYREF
  WINBOOL fPending; // [rsp+28h] [rbp-41h] BYREF
  struct CAudioSessionManager *v25; // [rsp+30h] [rbp-39h] BYREF
  __int64 v26; // [rsp+38h] [rbp-31h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-29h] BYREF
  CAudioSessionManagerProvider *v28; // [rsp+48h] [rbp-21h]
  _FILETIME pftDueTime; // [rsp+50h] [rbp-19h] BYREF
  struct CAudioSessionManager *v30; // [rsp+58h] [rbp-11h] BYREF
  _QWORD pv[2]; // [rsp+60h] [rbp-9h] BYREF
  DWORD v32; // [rsp+70h] [rbp+7h]
  const wchar_t *v33; // [rsp+78h] [rbp+Fh]
  void *v34; // [rsp+80h] [rbp+17h]
  char v35; // [rsp+88h] [rbp+1Fh]
  __int64 v36; // [rsp+8Ch] [rbp+23h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v30 = 0LL;
  v25 = 0LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1801B8588;
    qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
  }
  v8 = g_AudioHealthMonitor;
  v9 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v34 = v8;
  v32 = CurrentThreadId;
  v33 = L"GetAudioSessionManager";
  v35 = 0;
  v36 = 0LL;
  if ( (unsigned int)v9 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (_FILETIME)(-10000 * v9 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v9 / 3, 0);
    }
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 55LL, &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids, a2);
  }
  v12 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, struct CAudioSessionManager **))(*(_QWORD *)g_PolicyManager + 32LL))(
          g_PolicyManager,
          a1,
          &v25);
  if ( v12 < 0 )
    goto LABEL_50;
  EnterCriticalSection(&g_SessionManagerProviderLock);
  if ( g_SingletonAudioSessionManagerProvider )
  {
    v28 = (CAudioSessionManagerProvider *)g_SingletonAudioSessionManagerProvider;
    _InterlockedIncrement((volatile signed __int32 *)(g_SingletonAudioSessionManagerProvider + 12));
    v13 = (volatile signed __int32 *)v28;
  }
  else
  {
    v13 = 0LL;
    v28 = 0LL;
  }
  v12 = -2147467259;
  if ( v13 )
    v12 = 0;
  LeaveCriticalSection(&g_SessionManagerProviderLock);
  if ( v12 >= 0 )
  {
    if ( !a2 )
    {
      v12 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA3,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
        (const char *)0x80070057LL);
      goto LABEL_39;
    }
    v23 = 0LL;
    v14 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, __int64 *))(**(_QWORD **)&g_DeviceEnumerator
                                                                                 + 40LL))(
            *(_QWORD *)&g_DeviceEnumerator,
            a2,
            &v23);
    v12 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA9,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
        (const char *)(unsigned int)v14);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
      goto LABEL_24;
    }
    v26 = 0LL;
    AudioSessionManagerInternal = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v23)(
                                    v23,
                                    &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
                                    &v26);
    v12 = AudioSessionManagerInternal;
    if ( AudioSessionManagerInternal < 0 )
    {
      v22 = 172LL;
    }
    else
    {
      AudioSessionManagerInternal = CAudioSessionManagerProvider::GetAudioSessionManagerInternal(
                                      (CAudioSessionManagerProvider *)v13,
                                      a2,
                                      &v30);
      v12 = AudioSessionManagerInternal;
      if ( AudioSessionManagerInternal >= 0 )
      {
        if ( v26 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        if ( v23 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        v12 = 0;
LABEL_24:
        if ( v12 >= 0 )
          goto LABEL_25;
LABEL_39:
        if ( v13 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v13);
LABEL_31:
        if ( v12 >= 0 )
          goto LABEL_32;
        goto LABEL_50;
      }
      v22 = 174LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      (const char *)(unsigned int)AudioSessionManagerInternal);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
    goto LABEL_24;
  }
LABEL_25:
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(CAudioSessionManagerProvider *, __int64))(*(_QWORD *)v28 + 24LL))(v28, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v16 = (struct CAudioSessionManager **)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v16;
  if ( v16 )
  {
    v18 = v25;
    v19 = v30;
    *v16 = v30;
    v16[1] = v18;
    (*(void (__fastcall **)(struct CAudioSessionManager *))(*(_QWORD *)v18 + 8LL))(v18);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 56LL, &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids, v19);
    }
    v20 = v25;
    *a3 = v17;
    *a4 = (*(__int64 (__fastcall **)(struct CAudioSessionManager *))(*(_QWORD *)v20 + 112LL))(v20) == 0;
    goto LABEL_31;
  }
  v12 = -2147024882;
LABEL_50:
  AudSrvTraceLoggingErrorHelper("GetAudioSessionManager", 0x7C3u, v12);
LABEL_32:
  if ( v25 )
  {
    (*(void (__fastcall **)(struct CAudioSessionManager *))(*(_QWORD *)v25 + 16LL))(v25);
    v25 = 0LL;
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return (unsigned int)v12;
}
