/*
 * XREFs of ?Resume@CAudioDeviceGraph@@UEAAJXZ @ 0x1400389F0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x14000EEB0 (_TlgKeywordOn.c)
 *     ?Start@DurationTracker@CAudioDeviceGraph@@QEAAXXZ @ 0x1400104A4 (-Start@DurationTracker@CAudioDeviceGraph@@QEAAXXZ.c)
 *     _TlgWrite @ 0x140014224 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 *     atexit @ 0x140016558 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     TraceLoggingRegisterEx @ 0x140025D60 (TraceLoggingRegisterEx.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028134 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::Resume(CAudioDeviceGraph *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  int v3; // eax
  unsigned int v4; // ebx
  TLG_PENABLECALLBACK v5; // rdx
  PVOID v6; // r8
  const struct _TlgProvider_t *v7; // rcx
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r9
  WINBOOL fPending; // [rsp+30h] [rbp-48h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 56LL))(*((_QWORD *)this + 19));
  v4 = v3;
  if ( v3 >= 0 )
  {
    CAudioDeviceGraph::DurationTracker::Start((LARGE_INTEGER *)this + 10);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = &qword_140085EE8;
      qword_140085EE8 = (__int64)&AudioDgTelemetryProvider::`vftable';
      qword_140085F00 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
      qword_140085EF0 = (__int64)qword_140085F00;
      byte_140085EF8 = 1;
      TraceLoggingRegisterEx(qword_140085F00, v5, v6);
      dword_140085EFC = 1;
      (*(void (__fastcall **)(__int64 *))(qword_140085EE8 + 8))(&qword_140085EE8);
      InitOnceComplete(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_140085EE8);
    }
    v7 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v7 > 4u && TlgKeywordOn(v7, 1uLL) )
      TlgWrite(v8, &unk_14006FB10, (LPCGUID)this + 22, v9, 2u, &pData);
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x415,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v3);
  }
  if ( v1 )
    LeaveCriticalSection(v1);
  return v4;
}
