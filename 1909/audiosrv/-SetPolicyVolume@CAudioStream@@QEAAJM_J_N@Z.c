/*
 * XREFs of ?SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z @ 0x18004E3AC
 * Callers:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x18002C688 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x1800CCCF0 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001F9C0 (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::SetPolicyVolume(CAudioStream *this, float a2, __int64 a3, char a4)
{
  bool v4; // zf
  const struct _TlgProvider_t *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  const WCHAR *v11; // rax
  int v12; // eax
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  int v16; // eax
  unsigned int v17; // ebx
  WINBOOL fPending; // [rsp+30h] [rbp-49h] BYREF
  int v19; // [rsp+34h] [rbp-45h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-41h] BYREF
  __int64 v21; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  float *v23; // [rsp+70h] [rbp-9h]
  int v24; // [rsp+78h] [rbp-1h]
  int v25; // [rsp+7Ch] [rbp+3h]
  __int64 *v26; // [rsp+80h] [rbp+7h]
  int v27; // [rsp+88h] [rbp+Fh]
  int v28; // [rsp+8Ch] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp+17h] BYREF
  int *v30; // [rsp+A0h] [rbp+27h]
  int v31; // [rsp+A8h] [rbp+2Fh]
  int v32; // [rsp+ACh] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  float v34; // [rsp+E8h] [rbp+6Fh] BYREF

  v34 = a2;
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
      Context = &qword_1801B7588;
      qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
      qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0);
      InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
    }
    v7 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v7 > 4u )
    {
      v25 = 0;
      v23 = &v34;
      v8 = *((_QWORD *)this + 1);
      v24 = 4;
      v9 = (*(__int64 (__fastcall **)(char *))(v8 + 80))((char *)this + 8);
      v10 = *((_QWORD *)this + 8);
      v28 = 0;
      v21 = v9;
      v26 = &v21;
      v27 = 8;
      v11 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 64LL))(v10);
      TlgCreateWsz(&pDesc, v11);
      v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9));
      v32 = 0;
      v19 = v12;
      v30 = &v19;
      v31 = 4;
      TlgWrite(v7, &unk_180176F15, v13, v14, 6u, &pData);
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
    (void *)0x413,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)v16);
  return v17;
}
