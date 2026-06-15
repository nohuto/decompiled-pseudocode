/*
 * XREFs of ?SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z @ 0x1800CC854
 * Callers:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x180012888 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x1800BE930 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800255F0 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::SetPolicyVolume(CAudioStream *this, float a2, __int64 a3, char a4)
{
  bool v4; // zf
  void *v7; // r8
  const struct _TlgProvider_t *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  const WCHAR *v12; // rax
  int v13; // eax
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  int v16; // eax
  unsigned int v17; // ebx
  WINBOOL fPending; // [rsp+30h] [rbp-49h] BYREF
  int v20; // [rsp+34h] [rbp-45h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-41h] BYREF
  __int64 v22; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  float *v24; // [rsp+70h] [rbp-9h]
  int v25; // [rsp+78h] [rbp-1h]
  int v26; // [rsp+7Ch] [rbp+3h]
  __int64 *v27; // [rsp+80h] [rbp+7h]
  int v28; // [rsp+88h] [rbp+Fh]
  int v29; // [rsp+8Ch] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp+17h] BYREF
  int *v31; // [rsp+A0h] [rbp+27h]
  int v32; // [rsp+A8h] [rbp+2Fh]
  int v33; // [rsp+ACh] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  float v35; // [rsp+E8h] [rbp+6Fh] BYREF

  v35 = a2;
  v4 = a2 == *((float *)this + 23);
  *((_QWORD *)this + 12) = a3;
  if ( v4 )
    return 0LL;
  v4 = *((_QWORD *)this + 8) == 0LL;
  *((float *)this + 23) = a2;
  if ( !v4 )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_1801B3518;
      qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
      qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v7);
      InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
    }
    v8 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v8 > 4u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v26 = 0;
      v24 = &v35;
      v9 = *((_QWORD *)this + 1);
      v25 = 4;
      v10 = (*(__int64 (__fastcall **)(char *))(v9 + 80))((char *)this + 8);
      v11 = *((_QWORD *)this + 8);
      v29 = 0;
      v22 = v10;
      v27 = &v22;
      v28 = 8;
      v12 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 64LL))(v11);
      TlgCreateWsz(&pDesc, v12);
      v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9));
      v33 = 0;
      v20 = v13;
      v31 = &v20;
      v32 = 4;
      TlgWrite(v8, &unk_180172BE2, v14, v15, 6u, &pData);
    }
  }
  if ( !a4 )
    return 0LL;
  v16 = (*(__int64 (__fastcall **)(CAudioStream *, _QWORD, _QWORD))(*(_QWORD *)this + 120LL))(this, 0LL, 0LL);
  v17 = v16;
  if ( v16 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    1042LL,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)v16);
  return v17;
}
