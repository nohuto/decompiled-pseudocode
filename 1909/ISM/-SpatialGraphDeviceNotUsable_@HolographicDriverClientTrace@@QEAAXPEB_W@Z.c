/*
 * XREFs of ?SpatialGraphDeviceNotUsable_@HolographicDriverClientTrace@@QEAAXPEB_W@Z @ 0x18015D69C
 * Callers:
 *     ?CreateDynamicNodeReferenceWithState@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@AEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x180153EB0 (-CreateDynamicNodeReferenceWithState@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windo.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x180052F34 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161844 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

void __fastcall HolographicDriverClientTrace::SpatialGraphDeviceNotUsable_(
        HolographicDriverClientTrace *this,
        const wchar_t *a2)
{
  __int64 v3; // rax
  TraceLoggingHProvider v4; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-28h] BYREF

  v3 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
         this,
         lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v3 + 8) > 2u )
  {
    if ( TlgKeywordOn(*(TraceLoggingHProvider *)(v3 + 8), 2uLL) )
    {
      TlgCreateWsz(&pDesc, a2);
      TlgWrite(v4, &unk_1801A41ED, 0LL, 0LL, 3u, &pData);
    }
  }
}
