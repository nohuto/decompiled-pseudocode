/*
 * XREFs of ??0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x18002BF04
 * Callers:
 *     ?ManipulationThreadCallback@CManipulationManager@@CAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z @ 0x18001D840 (-ManipulationThreadCallback@CManipulationManager@@CAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z.c)
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18002B4B4 (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x18002BCCC (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?OnInput@CManipulationManager@@AEAAXXZ @ 0x1801EAF8C (-OnInput@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18002BFF8 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     TraceLoggingProviderEnabled @ 0x18002C0A0 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x18014D554 (_TlgCreateWsz.c)
 */

InputTraceLogging::PerfRegion *__fastcall InputTraceLogging::PerfRegion::PerfRegion(
        InputTraceLogging::PerfRegion *this,
        const unsigned __int16 *a2,
        const struct InputTraceLogging::PerfRegion *a3)
{
  GUID *v3; // rdi
  _OWORD *v5; // rax
  __int64 v6; // rax
  __int128 v8; // xmm0
  __int64 v9; // rcx
  __int64 v10; // rax
  TraceLoggingHProvider v11; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+60h] [rbp-28h] BYREF

  *(_QWORD *)this = a2;
  v3 = (GUID *)((char *)this + 8);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  v5 = (_OWORD *)((char *)this + 24);
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  if ( a3 )
  {
    v8 = *(_OWORD *)((char *)a3 + 8);
    *((_QWORD *)this + 5) = v5;
    *v5 = v8;
  }
  v6 = wil::details::static_lazy<InputTraceLogging>::get(
         0LL,
         lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  if ( TraceLoggingProviderEnabled(*(TraceLoggingHProvider *)(v6 + 8), 0, 1uLL) )
  {
    EventActivityIdControl(3u, v3);
    v10 = wil::details::static_lazy<InputTraceLogging>::get(
            v9,
            lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    if ( **(_DWORD **)(v10 + 8) > 6u )
    {
      if ( TlgKeywordOn(*(TraceLoggingHProvider *)(v10 + 8), 1uLL) )
      {
        TlgCreateWsz(&pDesc, *(LPCWSTR *)this);
        TlgCreateWsz(&v14, L"Start");
        TlgWrite(v11, &unk_1802B661D, v3, *((LPCGUID *)this + 5), 4u, &pData);
      }
    }
  }
  return this;
}
