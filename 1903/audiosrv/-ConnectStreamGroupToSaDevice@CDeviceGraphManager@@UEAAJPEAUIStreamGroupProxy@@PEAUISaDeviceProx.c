/*
 * XREFs of ?ConnectStreamGroupToSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18003F060
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDeviceGraphManager::ConnectStreamGroupToSaDevice(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  unsigned __int16 *v10; // rax
  __int64 v11; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-51h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-49h] BYREF
  unsigned int v15; // [rsp+40h] [rbp-41h]
  __int64 v16; // [rsp+48h] [rbp-39h] BYREF
  __int64 v17; // [rsp+50h] [rbp-31h] BYREF
  _DWORD v18[2]; // [rsp+58h] [rbp-29h] BYREF
  __int64 v19; // [rsp+60h] [rbp-21h]
  unsigned __int16 *v20; // [rsp+70h] [rbp-11h] BYREF
  int v21; // [rsp+78h] [rbp-9h]
  int v22; // [rsp+7Ch] [rbp-5h]
  void *v23; // [rsp+80h] [rbp-1h]
  int v24; // [rsp+88h] [rbp+7h]
  int v25; // [rsp+8Ch] [rbp+Bh]
  __int64 *v26; // [rsp+90h] [rbp+Fh]
  int v27; // [rsp+98h] [rbp+17h]
  int v28; // [rsp+9Ch] [rbp+1Bh]
  __int64 *v29; // [rsp+A0h] [rbp+1Fh]
  int v30; // [rsp+A8h] [rbp+27h]
  int v31; // [rsp+ACh] [rbp+2Bh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]

  v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a2 + 184LL))(a2, a3, a4, a5);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9C8,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
  else
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = &qword_1801B8588;
      qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
      qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0);
      InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
    }
    v9 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v9 > 4u )
    {
      v28 = 0;
      v31 = 0;
      v26 = &v16;
      v29 = &v17;
      v16 = a2;
      v27 = 8;
      v17 = a3;
      v30 = 8;
      v19 = 0LL;
      v18[1] = 4;
      v10 = *(unsigned __int16 **)(v9 + 8);
      v11 = *(_QWORD *)(v9 + 32);
      v20 = v10;
      v18[0] = 184549376;
      v21 = *v10;
      v23 = &unk_1801785EB;
      v22 = 2;
      v24 = 57;
      v25 = 1;
      v15 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwEventWriteTransfer(v11, v18, 0LL, 0LL, 4, &v20);
    }
    return 0LL;
  }
}
