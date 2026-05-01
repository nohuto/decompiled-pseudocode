/*
 * XREFs of ??$Win32SlateViewConsideredForOwnership@PEBGIAEAY0BF@$$CBG@HolographicPositionerTelemetry@@SAX$$QEAPEBG$$QEAIAEAY0BF@$$CBG@Z @ 0x1801FD378
 * Callers:
 *     _LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_(&)[20]_ @ 0x1801FD858 (_LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_(-)[20]_.c)
 *     _LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_(&)[21]_ @ 0x1801FD920 (_LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_(-)[21]_.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerProvider@@P6AXXZ@Z @ 0x1802064FC (-get@-$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerPr.c)
 */

char __fastcall HolographicPositionerTelemetry::Win32SlateViewConsideredForOwnership<unsigned short const *,unsigned int,unsigned short const (&)[21]>(
        LPCWSTR *a1,
        __int64 a2,
        const WCHAR *a3)
{
  __int64 v6; // rax
  TraceLoggingHProvider v7; // r10
  __int64 v9; // [rsp+30h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-58h] BYREF
  __int64 v12; // [rsp+70h] [rbp-48h]
  int v13; // [rsp+78h] [rbp-40h]
  int v14; // [rsp+7Ch] [rbp-3Ch]
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+80h] [rbp-38h] BYREF
  __int64 *v16; // [rsp+90h] [rbp-28h]
  int v17; // [rsp+98h] [rbp-20h]
  int v18; // [rsp+9Ch] [rbp-1Ch]

  v6 = wil::details::static_lazy<HolographicPositionerProvider>::get(
         a1,
         lambda_c2de52b76b02464b55ca8bf6e2d5d141_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v6 + 8) > 4u )
  {
    LOBYTE(v6) = TlgKeywordOn(*(TraceLoggingHProvider *)(v6 + 8), 0x400000000000uLL);
    if ( (_BYTE)v6 )
    {
      TlgCreateWsz(&pDesc, *a1);
      v14 = 0;
      v12 = a2;
      v13 = 4;
      TlgCreateWsz(&v15, a3);
      v18 = 0;
      v16 = &v9;
      v9 = 0x2000000LL;
      v17 = 8;
      LOBYTE(v6) = TlgWrite(v7, &unk_1804C9206, 0LL, 0LL, 6u, &pData);
    }
  }
  return v6;
}
