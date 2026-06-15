/*
 * XREFs of GetAudioSessionManager @ 0x18000F1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180020980 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180026FF0 (-GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManag.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x180063980 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800B3ED8 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800B5888 (WPP_SF_q.c)
 *     ??$query_dispatch@VCAudioSessionManagerProvider@@V1@@default_query_policy@details@wil@@CAJPEAVCAudioSessionManagerProvider@@U?$integral_constant@_N$00@wistd@@PEAPEAV3@@Z @ 0x1800CA1C0 (--$query_dispatch@VCAudioSessionManagerProvider@@V1@@default_query_policy@details@wil@@CAJPEAVCA.c)
 */

__int64 __fastcall GetAudioSessionManager(
        __int64 a1,
        const unsigned __int16 *a2,
        struct CAudioSessionManager ***a3,
        _DWORD *a4)
{
  struct CAudioSessionManager *v8; // r14
  void *v9; // rbx
  __int64 v10; // rdi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v12; // edi
  __int64 v13; // rdx
  int *v14; // rbx
  int v15; // eax
  int v16; // eax
  int AudioSessionManagerInternal; // eax
  struct CAudioSessionManager **v18; // rax
  struct CAudioSessionManager **v19; // rbx
  struct CAudioSessionManager *v20; // rcx
  struct CAudioSessionManager *v21; // rcx
  LPVOID Context; // [rsp+20h] [rbp-60h] BYREF
  WINBOOL fPending[2]; // [rsp+28h] [rbp-58h] BYREF
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp-50h] BYREF
  struct CAudioSessionManager *v26; // [rsp+38h] [rbp-48h] BYREF
  struct CAudioSessionManager *v27; // [rsp+40h] [rbp-40h] BYREF
  _QWORD pv[2]; // [rsp+48h] [rbp-38h] BYREF
  DWORD CurrentThreadId; // [rsp+58h] [rbp-28h]
  const wchar_t *v30; // [rsp+60h] [rbp-20h]
  void *v31; // [rsp+68h] [rbp-18h]
  char v32; // [rsp+70h] [rbp-10h]
  __int64 v33; // [rsp+74h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v27 = 0LL;
  v26 = 0LL;
  Context = 0LL;
  v8 = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context)
    && fPending[0] )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  v9 = g_AudioHealthMonitor;
  v10 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v30 = L"GetAudioSessionManager";
  v31 = v9;
  v32 = 0;
  v33 = 0LL;
  if ( (unsigned int)v10 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v10 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v10 / 3, 0);
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
          &v26);
  if ( v12 < 0 )
    goto LABEL_44;
  pftDueTime = 0LL;
  EnterCriticalSection(&g_SessionManagerProviderLock);
  if ( g_SingletonAudioSessionManagerProvider )
  {
    wil::details::default_query_policy::query_dispatch<CAudioSessionManagerProvider,CAudioSessionManagerProvider>(
      g_SingletonAudioSessionManagerProvider,
      v13,
      &pftDueTime);
    v14 = (int *)pftDueTime;
  }
  else
  {
    v14 = 0LL;
  }
  LeaveCriticalSection(&g_SessionManagerProviderLock);
  if ( v14 )
  {
    if ( !a2 )
    {
      v12 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA3,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
        (const char *)0x80070057LL,
        (int)Context);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v14);
      goto LABEL_41;
    }
    Context = 0LL;
    v15 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, LPVOID *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
            *(_QWORD *)&g_DeviceEnumerator,
            a2,
            &Context);
    v12 = v15;
    if ( v15 >= 0 )
    {
      *(_QWORD *)fPending = 0LL;
      v16 = (**(__int64 (__fastcall ***)(LPVOID, GUID *, WINBOOL *))Context)(
              Context,
              &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
              fPending);
      v12 = v16;
      if ( v16 >= 0 )
      {
        AudioSessionManagerInternal = CAudioSessionManagerProvider::GetAudioSessionManagerInternal(
                                        (CAudioSessionManagerProvider *)v14,
                                        a2,
                                        &v27);
        v12 = AudioSessionManagerInternal;
        if ( AudioSessionManagerInternal >= 0 )
        {
          if ( *(_QWORD *)fPending )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)fPending + 16LL))(*(_QWORD *)fPending);
          if ( Context )
            (*(void (__fastcall **)(LPVOID))(*(_QWORD *)Context + 16LL))(Context);
          v8 = v27;
          v12 = 0;
LABEL_32:
          if ( !ATL::SafeDecrementReferenceMultiThread(v14 + 3) )
          {
            (*(void (__fastcall **)(int *, __int64))(*(_QWORD *)v14 + 24LL))(v14, 1LL);
            if ( Microsoft::WRL::Details::ModuleBase::module_ )
              (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                   + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
          }
          goto LABEL_35;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAE,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
          (const char *)(unsigned int)AudioSessionManagerInternal,
          (int)Context);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(fPending);
        v8 = v27;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAC,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
          (const char *)(unsigned int)v16,
          (int)Context);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(fPending);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA9,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
        (const char *)(unsigned int)v15,
        (int)Context);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&Context);
    if ( v12 < 0 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v14);
      goto LABEL_41;
    }
    goto LABEL_32;
  }
  v12 = -2147467259;
LABEL_35:
  v18 = (struct CAudioSessionManager **)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v19 = v18;
  if ( v18 )
  {
    v20 = v26;
    *v18 = v8;
    v18[1] = v20;
    (*(void (__fastcall **)(struct CAudioSessionManager *))(*(_QWORD *)v20 + 8LL))(v20);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 56LL, &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids, v8);
    }
    v21 = v26;
    *a3 = v19;
    *a4 = (*(__int64 (__fastcall **)(struct CAudioSessionManager *))(*(_QWORD *)v21 + 112LL))(v21) == 0;
LABEL_41:
    if ( v12 >= 0 )
      goto LABEL_45;
    goto LABEL_44;
  }
  v12 = -2147024882;
LABEL_44:
  AudSrvTraceLoggingErrorHelper("GetAudioSessionManager", 1987, v12);
LABEL_45:
  if ( v26 )
  {
    (*(void (__fastcall **)(struct CAudioSessionManager *))(*(_QWORD *)v26 + 16LL))(v26);
    v26 = 0LL;
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return (unsigned int)v12;
}
