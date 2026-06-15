/*
 * XREFs of ?DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800EEC60
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A220 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?RemoveStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800F0890 (-RemoveStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?UpdateCountOfFormatSensitiveClients@CBaseStreamGroupProxy@@IEAAXH@Z @ 0x1800F0FC4 (-UpdateCountOfFormatSensitiveClients@CBaseStreamGroupProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfLazyRequestClients@CBaseStreamGroupProxy@@IEAAXH@Z @ 0x1800F10A4 (-UpdateCountOfLazyRequestClients@CBaseStreamGroupProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfPeriodicitySensitiveClients@CBaseStreamGroupProxy@@IEAAXH@Z @ 0x1800F1184 (-UpdateCountOfPeriodicitySensitiveClients@CBaseStreamGroupProxy@@IEAAXH@Z.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::DestroyStream(unsigned __int64 this, struct IAudioStreamInfo *a2)
{
  __int64 *v2; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  int v7; // eax
  void *v8; // r8
  const struct _TlgProvider_t *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  WINBOOL fPending; // [rsp+30h] [rbp-29h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-21h] BYREF
  unsigned __int64 v17; // [rsp+40h] [rbp-19h] BYREF
  __int64 v18; // [rsp+48h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  unsigned __int64 *v20; // [rsp+70h] [rbp+17h]
  int v21; // [rsp+78h] [rbp+1Fh]
  int v22; // [rsp+7Ch] [rbp+23h]
  __int64 *v23; // [rsp+80h] [rbp+27h]
  int v24; // [rsp+88h] [rbp+2Fh]
  int v25; // [rsp+8Ch] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v2 = *(__int64 **)(this + 80);
  v5 = *v2;
  v6 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 40LL))(a2);
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v5 + 32))(v2, v6);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x41F,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v7);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1801B8588;
    qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0, v8);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
  }
  v9 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v9 > 4u )
  {
    v21 = 8;
    v20 = &v17;
    v10 = *(_QWORD *)a2;
    v22 = 0;
    v17 = this & -(__int64)(this != 8);
    v11 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(v10 + 80))(a2);
    v25 = 0;
    v18 = v11;
    v23 = &v18;
    v24 = 8;
    TlgWrite(v9, &unk_18017893F, v12, v13, 4u, &pData);
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 136LL))(a2) )
    CBaseStreamGroupProxy::UpdateCountOfPeriodicitySensitiveClients((CBaseStreamGroupProxy *)this, -1);
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 144LL))(a2) )
    CBaseStreamGroupProxy::UpdateCountOfFormatSensitiveClients((CBaseStreamGroupProxy *)this, -1);
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 152LL))(a2) )
    CBaseStreamGroupProxy::UpdateCountOfLazyRequestClients((CBaseStreamGroupProxy *)this, -1);
  CBaseStreamGroupProxy::RemoveStream((CBaseStreamGroupProxy *)this, a2);
  return 0LL;
}
