/*
 * XREFs of ?GetPolicyVolumeForStream@CAudioSession@@IEAAXPEAVCAudioStream@@PEAMPEA_J@Z @ 0x1800C0414
 * Callers:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x180012888 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x1800BE930 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_TlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x1800271E0 (-GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x180060C74 (atexit.c)
 */

void __fastcall CAudioSession::GetPolicyVolumeForStream(
        CAudioSession *this,
        struct CAudioStream *a2,
        float *a3,
        __int64 *a4)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rcx
  void *v8; // r8
  CAudioSession *v9; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+58h] [rbp+10h] BYREF

  v9 = this;
  *a3 = 1.0;
  *a4 = 0LL;
  v10 = 0LL;
  v6 = ((unsigned __int64)a2 + 16) & -(__int64)(a2 != 0LL);
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&v9, (LPVOID *)&v10)
    && (_DWORD)v9 )
  {
    v10 = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v8);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  GetPolicyVolumeForAudioStream(v7, v6, v10[1], a3, a4);
}
