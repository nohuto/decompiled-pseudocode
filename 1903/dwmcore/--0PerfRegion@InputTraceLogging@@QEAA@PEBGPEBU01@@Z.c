/*
 * XREFs of ??0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x18008699C
 * Callers:
 *     ?ManipulationThreadCallback@CGlobalManipulationManager@@CAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z @ 0x18001FB50 (-ManipulationThreadCallback@CGlobalManipulationManager@@CAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@.c)
 *     ?s_HitTestRequest@CGlobalInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180086130 (-s_HitTestRequest@CGlobalInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?OnInteractionUpdate@CGlobalManipulationManager@@AEAAXXZ @ 0x1800C3440 (-OnInteractionUpdate@CGlobalManipulationManager@@AEAAXXZ.c)
 *     ?OnInput@CGlobalManipulationManager@@AEAAXXZ @ 0x180238D70 (-OnInput@CGlobalManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180086A80 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     TraceLoggingProviderEnabled @ 0x180086B28 (TraceLoggingProviderEnabled.c)
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x18015A2B8 (_TlgCreateWsz.c)
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
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-28h] BYREF

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
        TlgWrite(v11, &unk_1802DF89D, v3, *((LPCGUID *)this + 5), 3u, &pData);
      }
    }
  }
  return this;
}
