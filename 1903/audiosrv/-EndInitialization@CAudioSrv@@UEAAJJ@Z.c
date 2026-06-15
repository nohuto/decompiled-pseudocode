/*
 * XREFs of ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x18005AF60
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001ADAC (_TlgKeywordOn.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003EA64 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?StartRpcServer@@YAJPEAG0PEAX1@Z @ 0x18005B1F0 (-StartRpcServer@@YAJPEAG0PEAX1@Z.c)
 *     ?GetInstance@CStreamConnectionManagerImpl@@SA?AV?$shared_ptr@VCStreamConnectionManager@@@std@@XZ @ 0x18005C5CC (-GetInstance@CStreamConnectionManagerImpl@@SA-AV-$shared_ptr@VCStreamConnectionManager@@@std@@XZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800632A0 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0zq @ 0x1800C2580 (McTemplateU0zq.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CAudioSrv::EndInitialization(CAudioSrv *this, int a2)
{
  unsigned __int16 *v3; // rcx
  DWORD LastError; // eax
  int started; // eax
  _BOOL8 v6; // rcx
  int v7; // eax
  _BOOL8 v8; // rcx
  int v9; // eax
  _BOOL8 v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  std::_Ref_count_base *v13; // rdx
  std::_Ref_count_base *v14; // rcx
  std::_Ref_count_base *v15; // rdx
  std::_Ref_count_base *v16; // rcx
  void *v18; // r8
  const struct _TlgProvider_t *v19; // rcx
  const struct _TlgProvider_t *v20; // rcx
  const GUID *v21; // r8
  const GUID *v22; // r9
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+48h] [rbp-19h] BYREF
  DWORD pcbData; // [rsp+50h] [rbp-11h] BYREF
  int pvData; // [rsp+54h] [rbp-Dh] BYREF
  WINBOOL fPending; // [rsp+5Ch] [rbp-5h] BYREF
  LPVOID Context; // [rsp+60h] [rbp-1h] BYREF
  __int64 v28; // [rsp+68h] [rbp+7h] BYREF
  std::_Ref_count_base *v29; // [rsp+70h] [rbp+Fh]
  __int64 v30; // [rsp+78h] [rbp+17h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp+1Fh] BYREF
  int *v32; // [rsp+A0h] [rbp+3Fh]
  __int64 v33; // [rsp+A8h] [rbp+47h]
  int v34; // [rsp+D0h] [rbp+6Fh] BYREF

  v34 = a2;
  v30 = -2LL;
  SecurityDescriptor = 0LL;
  if ( !a2 )
  {
    if ( !*((_QWORD *)this + 25) )
      *((_QWORD *)this + 25) = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, _QWORD, CAudioSrv *))(*(_QWORD *)ThreadPool + 56LL))(
                                 ThreadPool,
                                 CAudioSrv::OnDeviceWorkItem,
                                 this);
    v34 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&g_DeviceEnumerator + 48LL))(
            *(_QWORD *)&g_DeviceEnumerator,
            ((unsigned __int64)this + 72) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    if ( v34 < 0 )
    {
LABEL_21:
      if ( !v34 )
        goto LABEL_22;
      goto LABEL_28;
    }
    *((_DWORD *)this + 26) = 1;
    if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
           L"D:(A;;GRGWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)(A;;GR;;;S-1-15-3-1024-1692970155-40548"
            "93335-185714091-3362601943-3526593181-1159816984-2199008581-497492991)",
           1u,
           &SecurityDescriptor,
           0LL) )
    {
      LastError = v34;
    }
    else
    {
      LastError = GetLastError();
      v34 = LastError;
    }
    if ( !LastError )
    {
      started = StartRpcServer(v3, L"Audiosrv", &unk_180151A90, SecurityDescriptor);
      v34 = started;
      v6 = started == 0;
      *((_DWORD *)this + 14) = v6;
      if ( !started )
      {
        v7 = StartRpcServer((unsigned __int16 *)v6, L"PlaybackManagerRpc", &unk_180151A30, 0LL);
        v34 = v7;
        v8 = v7 == 0;
        *((_DWORD *)this + 15) = v8;
        if ( !v7 )
        {
          v9 = StartRpcServer((unsigned __int16 *)v8, L"AudioSrvDiagnosticsRpc", &unk_1801519D0, 0LL);
          v34 = v9;
          v10 = v9 == 0;
          *((_DWORD *)this + 16) = v10;
          if ( !v9 )
          {
            v11 = StartRpcServer(
                    (unsigned __int16 *)v10,
                    L"SpatialSoundDataManagerRpc",
                    &unk_180151970,
                    SecurityDescriptor);
            v34 = v11;
            *((_DWORD *)this + 17) = v11 == 0;
            if ( !v11 )
            {
              pcbData = 4;
              if ( RegGetValueW(
                     HKEY_LOCAL_MACHINE,
                     L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
                     L"EnableCaptureMonitor",
                     0x18u,
                     0LL,
                     &pvData,
                     &pcbData)
                || pvData )
              {
                CStreamConnectionManagerImpl::GetInstance(&v28);
                v12 = v28;
                v13 = v29;
                v28 = 0LL;
                v29 = 0LL;
                g_streamMonitorManager = v12;
                v14 = qword_1801B8C00;
                qword_1801B8C00 = v13;
                if ( v14 )
                  std::_Ref_count_base::_Decref(v14);
                if ( g_streamMonitorManager )
                {
                  v15 = qword_1801B8C00;
                  if ( qword_1801B8C00 )
                  {
                    _InterlockedIncrement((volatile signed __int32 *)qword_1801B8C00 + 3);
                    v15 = qword_1801B8C00;
                  }
                  g_weakStreamMonitorManager = g_streamMonitorManager;
                  v16 = qword_1801B8C10;
                  qword_1801B8C10 = v15;
                  if ( v16 )
                    std::_Ref_count_base::_Decwref(v16);
                }
                else if ( (Microsoft_Windows_AudioEnableBits & 4) != 0 )
                {
                  McTemplateU0zq(v14, v13, L"ListenTo", 0LL);
                }
              }
              goto LABEL_21;
            }
          }
        }
      }
    }
  }
LABEL_28:
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1801B8588;
    qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0, v18);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
  }
  v19 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v19 > 2u && TlgKeywordOn(v19, 0x400000000000uLL) )
  {
    v32 = &v34;
    v33 = 4LL;
    TlgWrite(v20, &unk_1801777EB, v21, v22, 3u, &pData);
  }
LABEL_22:
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  return (unsigned int)v34;
}
