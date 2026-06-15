/*
 * XREFs of ?CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180040BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM@@K@Z @ 0x180040E50 (-AddStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM@@K@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?UpdateCountOfFormatSensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800F0BAC (-UpdateCountOfFormatSensitiveClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfLazyRequestClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800F0C8C (-UpdateCountOfLazyRequestClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfPeriodicitySensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800F0D6C (-UpdateCountOfPeriodicitySensitiveClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 */

__int64 __fastcall CProcessSubmixProxy::CreateStream(
        CProcessSubmixProxy *this,
        struct IAudioStreamInfo *a2,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a3,
        struct IAudioGraphCallback *a4,
        unsigned int a5,
        struct SYSTEM_AUDIO_STREAM *a6)
{
  int v10; // eax
  unsigned int v11; // r12d
  int v12; // eax
  unsigned int v13; // esi
  CProcessSubmixProxy *v14; // r14
  __int64 v15; // rsi
  CProcessSubmixProxy *v16; // rax
  __int64 v17; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-89h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-81h] BYREF
  unsigned int v21; // [rsp+40h] [rbp-79h]
  CProcessSubmixProxy *v22; // [rsp+48h] [rbp-71h] BYREF
  __int64 v23; // [rsp+50h] [rbp-69h] BYREF
  __int64 v24; // [rsp+58h] [rbp-61h] BYREF
  _DWORD v25[2]; // [rsp+60h] [rbp-59h] BYREF
  __int64 v26; // [rsp+68h] [rbp-51h]
  unsigned __int16 *v27; // [rsp+70h] [rbp-49h] BYREF
  int v28; // [rsp+78h] [rbp-41h]
  int v29; // [rsp+7Ch] [rbp-3Dh]
  void *v30; // [rsp+80h] [rbp-39h]
  int v31; // [rsp+88h] [rbp-31h]
  int v32; // [rsp+8Ch] [rbp-2Dh]
  CProcessSubmixProxy **v33; // [rsp+90h] [rbp-29h]
  __int64 v34; // [rsp+98h] [rbp-21h]
  __int64 *v35; // [rsp+A0h] [rbp-19h]
  __int64 v36; // [rsp+A8h] [rbp-11h]
  __int64 *v37; // [rsp+B0h] [rbp-9h]
  __int64 v38; // [rsp+B8h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+4Fh]

  v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 296LL))(*((_QWORD *)this + 24));
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA37,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v10);
    return v11;
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct IAudioGraphCallback *, struct SYSTEM_AUDIO_STREAM *))(**((_QWORD **)this + 5) + 24LL))(
            *((_QWORD *)this + 5),
            a3,
            a4,
            a6);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA39,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v12);
      return v13;
    }
    else
    {
      v14 = 0LL;
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
      v15 = *((_QWORD *)Context + 1);
      if ( *(_DWORD *)v15 > 4u )
      {
        v34 = 8LL;
        v36 = 8LL;
        v16 = 0LL;
        if ( this != (CProcessSubmixProxy *)8 )
          v16 = this;
        v22 = v16;
        v33 = &v22;
        v23 = *((_QWORD *)this + 24);
        v35 = &v23;
        v24 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 80LL))(a2);
        v37 = &v24;
        v38 = 8LL;
        v25[1] = 4;
        v27 = *(unsigned __int16 **)(v15 + 8);
        v25[0] = 184549376;
        v26 = 0LL;
        v28 = *v27;
        v30 = &unk_1801774A9;
        v29 = 2;
        v17 = *(_QWORD *)(v15 + 32);
        v31 = 70;
        v32 = 1;
        v21 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EtwEventWriteTransfer(v17, v25, 0LL, 0LL, 5, &v27);
      }
      if ( this != (CProcessSubmixProxy *)8 )
        v14 = this;
      *((_QWORD *)a6 + 6) = v14;
      (*(void (__fastcall **)(char *))(*((_QWORD *)this - 1) + 8LL))((char *)this - 8);
      if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 136LL))(a2) )
        CProcessSubmixProxy::UpdateCountOfPeriodicitySensitiveClients((CProcessSubmixProxy *)((char *)this - 8), 1);
      if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 144LL))(a2) )
        CProcessSubmixProxy::UpdateCountOfFormatSensitiveClients((CProcessSubmixProxy *)((char *)this - 8), 1);
      if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 152LL))(a2) )
        CProcessSubmixProxy::UpdateCountOfLazyRequestClients((CProcessSubmixProxy *)((char *)this - 8), 1);
      if ( (*(unsigned int (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 56LL))(a2) != 2 )
        ++*((_DWORD *)this + 28);
      CProcessSubmixProxy::AddStream((CProcessSubmixProxy *)((char *)this - 8), a2, a6, a5);
      return 0LL;
    }
  }
}
