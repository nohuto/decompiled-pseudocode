/*
 * XREFs of ?VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z @ 0x18002C4D8
 * Callers:
 *     ?OnDGProcessTerminated@CAudioSrv@@EEAAX_N@Z @ 0x18002BF00 (-OnDGProcessTerminated@CAudioSrv@@EEAAX_N@Z.c)
 * Callees:
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18002BF10 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z @ 0x18002BF6C (-NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002C480 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VAD_AudiosrvAudioDGProcessTerminated(unsigned __int8 a1)
{
  __int64 v2; // rcx
  int AudioSessionManagerProvider; // eax
  struct CAudioSessionManagerProvider *v4; // rbx
  WINBOOL fPending; // [rsp+38h] [rbp-19h] BYREF
  int v6; // [rsp+3Ch] [rbp-15h] BYREF
  struct CAudioSessionManagerProvider *v7; // [rsp+40h] [rbp-11h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-9h] BYREF
  _DWORD v9[2]; // [rsp+50h] [rbp-1h] BYREF
  __int64 v10; // [rsp+58h] [rbp+7h]
  __int64 v11; // [rsp+60h] [rbp+Fh]
  unsigned __int16 *v12; // [rsp+68h] [rbp+17h] BYREF
  int v13; // [rsp+70h] [rbp+1Fh]
  int v14; // [rsp+74h] [rbp+23h]
  void *v15; // [rsp+78h] [rbp+27h]
  int v16; // [rsp+80h] [rbp+2Fh]
  int v17; // [rsp+84h] [rbp+33h]
  int *v18; // [rsp+88h] [rbp+37h]
  int v19; // [rsp+90h] [rbp+3Fh]
  int v20; // [rsp+94h] [rbp+43h]

  v11 = -2LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1801B7588;
    qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
  }
  v2 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v2 > 5u )
  {
    v6 = a1;
    v18 = &v6;
    v19 = 4;
    v20 = 0;
    v9[0] = 184549376;
    v9[1] = 5;
    v10 = 0LL;
    v12 = *(unsigned __int16 **)(v2 + 8);
    v13 = *v12;
    v14 = 2;
    v15 = &unk_180176691;
    v16 = 29;
    v17 = 1;
    LODWORD(v7) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwEventWriteTransfer(*(_QWORD *)(v2 + 32), v9, 0LL, 0LL, 3, &v12);
  }
  v7 = 0LL;
  AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v7);
  v4 = v7;
  if ( AudioSessionManagerProvider >= 0 )
    CAudioSessionManagerProvider::NotifyAudioDGTerminated(v7, a1);
  if ( g_pVolumeProvider )
    (*(void (__fastcall **)(struct IVolumeProvider *))(*(_QWORD *)g_pVolumeProvider + 40LL))(g_pVolumeProvider);
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((__int64)v4);
}
