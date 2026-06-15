/*
 * XREFs of ?SetMute@CMuteControlBase@@UEAAJHPEBU_GUID@@PEAH@Z @ 0x1800B65C0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800255F0 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qd_guid_ @ 0x1800B6B44 (WPP_SF_qd_guid_.c)
 */

__int64 __fastcall CMuteControlBase::SetMute(CMuteControlBase *this, unsigned int a2, const struct _GUID *a3, int *a4)
{
  int v7; // r14d
  int v8; // ebx
  void *v9; // r8
  const WCHAR *v10; // rdx
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  TraceLoggingHProvider v13; // r10
  int v14; // eax
  unsigned int v15; // esi
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // edi
  unsigned int v20; // [rsp+30h] [rbp-49h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-41h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  unsigned int *v24; // [rsp+70h] [rbp-9h]
  __int64 v25; // [rsp+78h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v20 = a2;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), a2, (_DWORD)a3, (_DWORD)this, a2, (__int64)a3);
    a2 = v20;
  }
  v7 = *((_DWORD *)this + 6);
  v8 = 0;
  if ( v7 != a2 )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_1801B3518;
      qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
      qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v9);
      InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
    }
    if ( **((_DWORD **)Context + 1) > 4u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v10 = (const WCHAR *)*((_QWORD *)this + 4);
      v24 = &v20;
      v25 = 4LL;
      TlgCreateWsz(&pDesc, v10);
      TlgWrite(v13, &unk_1801726D2, v11, v12, 4u, &pData);
    }
    v14 = (*(__int64 (__fastcall **)(CMuteControlBase *, _QWORD))(*(_QWORD *)this + 80LL))(this, v20);
    v15 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        207LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
        (const char *)(unsigned int)v14);
      return v15;
    }
    v17 = *((_QWORD *)this + 2);
    *((_DWORD *)this + 6) = v20;
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, const struct _GUID *))(*(_QWORD *)v17 + 40LL))(v17, 0LL, a3);
    v19 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        211LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
        (const char *)(unsigned int)v18);
      return v19;
    }
    a2 = v20;
  }
  if ( a4 )
  {
    LOBYTE(v8) = v7 == a2;
    *a4 = v8;
  }
  return 0LL;
}
