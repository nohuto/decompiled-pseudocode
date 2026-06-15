/*
 * XREFs of _lambda_45ca10f83369d44ceedcca5d39762dce_::operator() @ 0x1800EB454
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_45ca10f83369d44ceedcca5d39762dce__void_::_Do_call @ 0x1800EBE90 (std--_Func_impl_no_alloc__lambda_45ca10f83369d44ceedcca5d39762dce__void_--_Do_call.c)
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001F9C0 (_TlgCreateWsz.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E4E0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     ?RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z @ 0x1800DFCF4 (-RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z.c)
 */

void __fastcall lambda_45ca10f83369d44ceedcca5d39762dce_::operator()(__int64 a1)
{
  void *v2; // r8
  const WCHAR **v3; // rax
  const WCHAR *v4; // rdx
  LPCGUID v5; // r8
  TraceLoggingHProvider v6; // r9
  UINT32 cData; // r10d
  const WCHAR **v8; // rax
  const WCHAR *v9; // rcx
  int refreshed; // eax
  WINBOOL v11; // [rsp+30h] [rbp-68h] BYREF
  _DWORD **v12; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 v14; // [rsp+60h] [rbp-38h]
  int v15; // [rsp+68h] [rbp-30h]
  int v16; // [rsp+6Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v12 = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v11, (LPVOID *)&v12) && v11 )
  {
    v12 = (_DWORD **)&qword_1801B7588;
    qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v2);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
  }
  if ( *v12[1] > 4u )
  {
    v16 = 0;
    v3 = *(const WCHAR ***)(a1 + 8);
    v14 = a1;
    v15 = 4;
    if ( v3 )
      v4 = *v3;
    else
      v4 = 0LL;
    TlgCreateWsz(&pDesc, v4);
    TlgWrite(v6, &unk_1801773FC, v5, (LPCGUID)v6, cData, &pData);
  }
  v8 = *(const WCHAR ***)(a1 + 8);
  if ( v8 )
    v9 = *v8;
  else
    v9 = 0LL;
  refreshed = CPolicyConfig::RefreshConnectorFormats(v9);
  if ( refreshed < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC0,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp",
      (const char *)(unsigned int)refreshed);
}
