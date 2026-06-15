/*
 * XREFs of ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x180057430
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800255F0 (_TlgKeywordOn.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?StartRpcServer@@YAJPEAG0PEAX1@Z @ 0x180057648 (-StartRpcServer@@YAJPEAG0PEAX1@Z.c)
 *     ?ListenTo_Initialize@@YAJXZ @ 0x18005789C (-ListenTo_Initialize@@YAJXZ.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0zq @ 0x1800B3DD0 (McTemplateU0zq.c)
 */

// Hidden C++ exception states: #wind=1
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
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  void *v16; // r8
  const struct _TlgProvider_t *v17; // rcx
  const struct _TlgProvider_t *v18; // rcx
  const GUID *v19; // r8
  const GUID *v20; // r9
  WINBOOL fPending; // [rsp+48h] [rbp-9h] BYREF
  DWORD pcbData[2]; // [rsp+50h] [rbp-1h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor[2]; // [rsp+58h] [rbp+7h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp+17h] BYREF
  int *v25; // [rsp+88h] [rbp+37h]
  int v26; // [rsp+90h] [rbp+3Fh]
  int v27; // [rsp+94h] [rbp+43h]
  int v28; // [rsp+C0h] [rbp+6Fh] BYREF

  v28 = a2;
  SecurityDescriptor[1] = (PSECURITY_DESCRIPTOR)-2LL;
  SecurityDescriptor[0] = 0LL;
  if ( !a2 )
  {
    if ( !*((_QWORD *)this + 25) )
      *((_QWORD *)this + 25) = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, _QWORD, CAudioSrv *))(*(_QWORD *)ThreadPool + 56LL))(
                                 ThreadPool,
                                 CAudioSrv::OnDeviceWorkItem,
                                 this);
    v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&g_DeviceEnumerator + 48LL))(
            *(_QWORD *)&g_DeviceEnumerator,
            ((unsigned __int64)this + 72) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    if ( v28 < 0 )
    {
LABEL_16:
      if ( !v28 )
        goto LABEL_17;
      goto LABEL_23;
    }
    *((_DWORD *)this + 27) = 1;
    if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
           L"D:(A;;GRGWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)(A;;GR;;;S-1-15-3-1024-1692970155-40548"
            "93335-185714091-3362601943-3526593181-1159816984-2199008581-497492991)",
           1u,
           SecurityDescriptor,
           0LL) )
    {
      LastError = v28;
    }
    else
    {
      LastError = GetLastError();
      v28 = LastError;
    }
    if ( !LastError )
    {
      started = StartRpcServer(v3, L"Audiosrv", &unk_18014C8F0, SecurityDescriptor[0]);
      v28 = started;
      v6 = started == 0;
      *((_DWORD *)this + 14) = v6;
      if ( !started )
      {
        v7 = StartRpcServer((unsigned __int16 *)v6, L"PlaybackManagerRpc", &unk_18014C890, 0LL);
        v28 = v7;
        v8 = v7 == 0;
        *((_DWORD *)this + 15) = v8;
        if ( !v7 )
        {
          v9 = StartRpcServer((unsigned __int16 *)v8, L"AudioSrvDiagnosticsRpc", &unk_18014C830, 0LL);
          v28 = v9;
          v10 = v9 == 0;
          *((_DWORD *)this + 16) = v10;
          if ( !v9 )
          {
            v11 = StartRpcServer(
                    (unsigned __int16 *)v10,
                    L"SpatialSoundDataManagerRpc",
                    &unk_18014C7D0,
                    SecurityDescriptor[0]);
            v28 = v11;
            *((_DWORD *)this + 17) = v11 == 0;
            if ( !v11 )
            {
              pcbData[0] = 4;
              if ( RegGetValueW(
                     HKEY_LOCAL_MACHINE,
                     L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
                     L"EnableCaptureMonitor",
                     0x18u,
                     0LL,
                     &fPending,
                     pcbData)
                || fPending )
              {
                v12 = ListenTo_Initialize();
                if ( v12 < 0 )
                {
                  if ( (Microsoft_Windows_AudioEnableBits & 4) != 0 )
                    McTemplateU0zq(v14, v13, L"ListenTo", (unsigned int)v12);
                }
                else
                {
                  *((_DWORD *)this + 26) = 1;
                }
              }
              goto LABEL_16;
            }
          }
        }
      }
    }
  }
LABEL_23:
  *(_QWORD *)pcbData = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, (LPVOID *)pcbData)
    && fPending )
  {
    *(_QWORD *)pcbData = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v16);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  v17 = *(const struct _TlgProvider_t **)(*(_QWORD *)pcbData + 8LL);
  if ( *(_DWORD *)v17 > 2u && TlgKeywordOn(v17, 0x400000000000uLL) )
  {
    v25 = &v28;
    v26 = 4;
    v27 = 0;
    TlgWrite(v18, &unk_180172493, v19, v20, 3u, &pData);
  }
LABEL_17:
  if ( SecurityDescriptor[0] )
    LocalFree(SecurityDescriptor[0]);
  return (unsigned int)v28;
}
