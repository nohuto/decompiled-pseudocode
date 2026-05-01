/*
 * XREFs of ??$TerminatePendingAppViewForOOBE@PEBG@HolographicPositionerTelemetry@@SAX$$QEAPEBG@Z @ 0x1801B03E0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerProvider@@P6AXXZ@Z @ 0x1801B8A68 (-get@-$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerPr.c)
 */

char __fastcall HolographicPositionerTelemetry::TerminatePendingAppViewForOOBE<unsigned short const *>(LPCWSTR *a1)
{
  __int64 v2; // rax
  TraceLoggingHProvider v3; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-28h] BYREF

  v2 = wil::details::static_lazy<HolographicPositionerProvider>::get(
         a1,
         lambda_c2de52b76b02464b55ca8bf6e2d5d141_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v2 + 8) > 4u )
  {
    LOBYTE(v2) = TlgKeywordOn(*(TraceLoggingHProvider *)(v2 + 8), 0x400000000000uLL);
    if ( (_BYTE)v2 )
    {
      TlgCreateWsz(&pDesc, *a1);
      LOBYTE(v2) = TlgWrite(v3, &unk_1804556B7, 0LL, 0LL, 3u, &pData);
    }
  }
  return v2;
}
