/*
 * XREFs of ?SendRemoteDisconnectionRequest@CAudioStream@@UEAAJXZ @ 0x1800CC320
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::SendRemoteDisconnectionRequest(CAudioStream *this)
{
  void *v2; // r8
  const struct _TlgProvider_t *v3; // rbx
  __int64 v4; // rcx
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // r8
  int MediaEvent; // eax
  unsigned int v11; // ebx
  WINBOOL fPending; // [rsp+38h] [rbp-59h] BYREF
  int v14; // [rsp+3Ch] [rbp-55h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-51h] BYREF
  _DWORD v16[12]; // [rsp+48h] [rbp-49h] BYREF
  __int64 v17; // [rsp+78h] [rbp-19h]
  __int16 v18; // [rsp+90h] [rbp-1h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp+7h] BYREF
  char *v20; // [rsp+B8h] [rbp+27h]
  __int64 v21; // [rsp+C0h] [rbp+2Fh]
  int *v22; // [rsp+C8h] [rbp+37h]
  __int64 v23; // [rsp+D0h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v2);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  v3 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v3 > 4u )
  {
    v4 = *((_QWORD *)this + 8);
    v20 = (char *)this + 312;
    v21 = 8LL;
    v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4);
    v22 = &v14;
    v23 = 4LL;
    TlgWrite(v3, &unk_180172ACF, v5, v6, 4u, &pData);
  }
  v7 = *((_QWORD *)this + 8);
  v17 = *((_QWORD *)this + 39);
  v16[0] = 80;
  v16[6] = 2;
  v16[1] = 0x8000;
  v18 = 0;
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7);
  MediaEvent = GenerateMediaEvent(v16, v8, v9);
  v11 = MediaEvent;
  if ( MediaEvent >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    1425LL,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)MediaEvent);
  return v11;
}
