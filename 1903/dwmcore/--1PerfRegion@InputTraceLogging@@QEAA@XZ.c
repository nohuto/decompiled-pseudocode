/*
 * XREFs of ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180086A34
 * Callers:
 *     ?ManipulationThreadCallback@CGlobalManipulationManager@@CAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z @ 0x18001FB50 (-ManipulationThreadCallback@CGlobalManipulationManager@@CAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@.c)
 *     ?s_HitTestRequest@CGlobalInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180086130 (-s_HitTestRequest@CGlobalInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?OnInteractionUpdate@CGlobalManipulationManager@@AEAAXXZ @ 0x1800C3440 (-OnInteractionUpdate@CGlobalManipulationManager@@AEAAXXZ.c)
 *     ?OnInput@CGlobalManipulationManager@@AEAAXXZ @ 0x180238D70 (-OnInput@CGlobalManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180086A80 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x18015A2B8 (_TlgCreateWsz.c)
 */

void __fastcall InputTraceLogging::PerfRegion::~PerfRegion(InputTraceLogging::PerfRegion *this)
{
  __int64 v2; // rax
  TraceLoggingHProvider v3; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-28h] BYREF

  v2 = wil::details::static_lazy<InputTraceLogging>::get(
         this,
         lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v2 + 8) > 6u )
  {
    if ( TlgKeywordOn(*(TraceLoggingHProvider *)(v2 + 8), 1uLL) )
    {
      TlgCreateWsz(&pDesc, *(LPCWSTR *)this);
      TlgWrite(v3, &unk_1802DF87E, (LPCGUID)((char *)this + 8), *((LPCGUID *)this + 5), 3u, &pData);
    }
  }
}
