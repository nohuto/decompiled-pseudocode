/*
 * XREFs of ?ConnectStreamGroupToSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180011150
 * Callers:
 *     <none>
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDeviceGraphManager::ConnectStreamGroupToSaDevice(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  int v7; // eax
  unsigned int v8; // esi
  __int64 v9; // rcx
  unsigned __int16 *v10; // rax
  __int64 v11; // rcx
  int v13; // [rsp+20h] [rbp-61h]
  WINBOOL fPending; // [rsp+30h] [rbp-51h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-49h] BYREF
  __int64 v16; // [rsp+40h] [rbp-41h] BYREF
  __int64 v17; // [rsp+48h] [rbp-39h] BYREF
  _DWORD v18[2]; // [rsp+50h] [rbp-31h] BYREF
  __int64 v19; // [rsp+58h] [rbp-29h]
  unsigned __int16 *v20; // [rsp+60h] [rbp-21h] BYREF
  int v21; // [rsp+68h] [rbp-19h]
  int v22; // [rsp+6Ch] [rbp-15h]
  void *v23; // [rsp+70h] [rbp-11h]
  int v24; // [rsp+78h] [rbp-9h]
  int v25; // [rsp+7Ch] [rbp-5h]
  __int64 *v26; // [rsp+80h] [rbp-1h]
  __int64 v27; // [rsp+88h] [rbp+7h]
  __int64 *v28; // [rsp+90h] [rbp+Fh]
  __int64 v29; // [rsp+98h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]

  v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a2 + 184LL))(a2, a3, a4, a5);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x836,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v7,
      v13);
    return v8;
  }
  else
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_1801B3518;
      qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
      qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530);
      InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
    }
    v9 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v9 > 4u )
    {
      v16 = a2;
      v26 = &v16;
      v28 = &v17;
      v27 = 8LL;
      v17 = a3;
      v29 = 8LL;
      v18[1] = 4;
      v10 = *(unsigned __int16 **)(v9 + 8);
      v11 = *(_QWORD *)(v9 + 32);
      v20 = v10;
      v18[0] = ((unsigned int)&unk_180173596 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v19 = 0LL;
      v21 = *v10;
      v23 = &unk_1801735A1;
      v22 = 2;
      v24 = 57;
      v25 = 1;
      EtwEventWriteTransfer(v11, v18, 0LL, 0LL, 4, &v20);
    }
    return 0LL;
  }
}
