/*
 * XREFs of ??$GetLastActiveItem@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAI@Z @ 0x1801B9B3C
 * Callers:
 *     _LogEventWithViewHostItemData_0 @ 0x1801BAA10 (_LogEventWithViewHostItemData_0.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerProvider@@P6AXXZ@Z @ 0x1801B8A68 (-get@-$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerPr.c)
 */

char __fastcall HolographicPositionerTelemetry::GetLastActiveItem<unsigned short const *,unsigned int &>(
        LPCWSTR *a1,
        __int64 a2)
{
  _QWORD *v4; // rax
  UINT32 cData; // r11d
  TraceLoggingHProvider v6; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-38h] BYREF
  __int64 v10; // [rsp+60h] [rbp-28h]
  UINT32 v11; // [rsp+68h] [rbp-20h]
  int v12; // [rsp+6Ch] [rbp-1Ch]

  v4 = wil::details::static_lazy<HolographicPositionerProvider>::get(
         (__int64)a1,
         (void (__cdecl *)())lambda_c2de52b76b02464b55ca8bf6e2d5d141_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v4[1] > 4u )
  {
    LOBYTE(v4) = TlgKeywordOn((TraceLoggingHProvider)v4[1], 0x400000000000uLL);
    if ( (_BYTE)v4 )
    {
      TlgCreateWsz(&pDesc, *a1);
      v12 = 0;
      v10 = a2;
      v11 = cData;
      LOBYTE(v4) = TlgWrite(v6, &unk_180455DC1, 0LL, 0LL, cData, &pData);
    }
  }
  return (char)v4;
}
