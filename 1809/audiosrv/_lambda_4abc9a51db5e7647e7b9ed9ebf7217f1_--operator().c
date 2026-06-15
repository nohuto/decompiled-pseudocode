/*
 * XREFs of _lambda_4abc9a51db5e7647e7b9ed9ebf7217f1_::operator() @ 0x1800E0098
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_4abc9a51db5e7647e7b9ed9ebf7217f1__void_::_Do_call @ 0x1800E0CE0 (std--_Func_impl_no_alloc__lambda_4abc9a51db5e7647e7b9ed9ebf7217f1__void_--_Do_call.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     ?RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z @ 0x1800D3494 (-RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z.c)
 */

void __fastcall lambda_4abc9a51db5e7647e7b9ed9ebf7217f1_::operator()(__int64 a1)
{
  void *v2; // r8
  const WCHAR **v3; // rax
  const WCHAR *v4; // rdx
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  TraceLoggingHProvider v7; // r10
  UINT32 cData; // r11d
  const WCHAR **v9; // rax
  const WCHAR *v10; // rcx
  int refreshed; // eax
  WINBOOL v12; // [rsp+30h] [rbp-68h] BYREF
  _DWORD **v13; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 v15; // [rsp+60h] [rbp-38h]
  int v16; // [rsp+68h] [rbp-30h]
  int v17; // [rsp+6Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v13 = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v12, (LPVOID *)&v13) && v12 )
  {
    v13 = (_DWORD **)qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v2);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  if ( *v13[1] > 4u )
  {
    v17 = 0;
    v3 = *(const WCHAR ***)(a1 + 8);
    v15 = a1;
    v16 = 4;
    if ( v3 )
      v4 = *v3;
    else
      v4 = 0LL;
    TlgCreateWsz(&pDesc, v4);
    TlgWrite(v7, &unk_180173317, v5, v6, cData, &pData);
  }
  v9 = *(const WCHAR ***)(a1 + 8);
  if ( v9 )
    v10 = *v9;
  else
    v10 = 0LL;
  refreshed = CPolicyConfig::RefreshConnectorFormats(v10);
  if ( refreshed < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC0,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp",
      (const char *)(unsigned int)refreshed);
}
