/*
 * XREFs of ??$GetLastActiveItem@AEAY06$$CBGH@HolographicPositionerTelemetry@@SAXAEAY06$$CBG$$QEAH@Z @ 0x18022671C
 * Callers:
 *     ?GetLastActiveItem@HolographicViewHostItemLedger@@UEAAJPEAPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x180227220 (-GetLastActiveItem@HolographicViewHostItemLedger@@UEAAJPEAPEAUIViewHostItem@Holographic@Shell@In.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerProvider@@P6AXXZ@Z @ 0x18022560C (-get@-$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerPr.c)
 */

char __fastcall HolographicPositionerTelemetry::GetLastActiveItem<unsigned short const (&)[7],int>(__int64 a1, int *a2)
{
  TraceLoggingHProvider *v3; // rax
  int v4; // r10d
  TraceLoggingHProvider v5; // r11
  int v7; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-38h] BYREF
  int *v10; // [rsp+70h] [rbp-28h]
  int v11; // [rsp+78h] [rbp-20h]
  int v12; // [rsp+7Ch] [rbp-1Ch]

  v3 = (TraceLoggingHProvider *)wil::details::static_lazy<HolographicPositionerProvider>::get(
                                  a1,
                                  (void (__cdecl *)())lambda_c2de52b76b02464b55ca8bf6e2d5d141_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v3[1] > 4u )
  {
    LOBYTE(v3) = TlgKeywordOn(v3[1], 0x400000000000uLL);
    if ( (_BYTE)v3 )
    {
      TlgCreateWsz(&pDesc, L"<none>");
      v4 = *a2;
      v12 = 0;
      v10 = &v7;
      v7 = v4;
      v11 = 4;
      LOBYTE(v3) = TlgWrite(v5, &unk_1804F0217, 0LL, 0LL, 4u, &pData);
    }
  }
  return (char)v3;
}
