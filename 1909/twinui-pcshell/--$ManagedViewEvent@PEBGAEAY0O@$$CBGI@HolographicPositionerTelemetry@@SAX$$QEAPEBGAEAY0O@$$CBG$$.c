/*
 * XREFs of ??$ManagedViewEvent@PEBGAEAY0O@$$CBGI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAY0O@$$CBG$$QEAI@Z @ 0x18021BE3C
 * Callers:
 *     _LogEventWithApplicationViewData_unsigned_short_const_(&)[10]_unsigned_int_ @ 0x18021C738 (_LogEventWithApplicationViewData_unsigned_short_const_(-)[10]_unsigned_int_.c)
 *     _LogEventWithApplicationViewData_unsigned_short_const_(&)[11]_unsigned_int_ @ 0x18021C800 (_LogEventWithApplicationViewData_unsigned_short_const_(-)[11]_unsigned_int_.c)
 *     _LogEventWithApplicationViewData_unsigned_short_const_(&)[12]_unsigned_int_ @ 0x18021C8C8 (_LogEventWithApplicationViewData_unsigned_short_const_(-)[12]_unsigned_int_.c)
 *     _LogEventWithApplicationViewData_unsigned_short_const_(&)[14]_unsigned_int_ @ 0x18021C990 (_LogEventWithApplicationViewData_unsigned_short_const_(-)[14]_unsigned_int_.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerProvider@@P6AXXZ@Z @ 0x18022560C (-get@-$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerPr.c)
 */

char __fastcall HolographicPositionerTelemetry::ManagedViewEvent<unsigned short const *,unsigned short const (&)[14],unsigned int>(
        LPCWSTR *a1,
        const WCHAR *a2,
        __int64 a3)
{
  __int64 v6; // rax
  TraceLoggingHProvider v7; // r10
  __int64 v9; // [rsp+30h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+70h] [rbp-48h] BYREF
  __int64 v13; // [rsp+80h] [rbp-38h]
  int v14; // [rsp+88h] [rbp-30h]
  int v15; // [rsp+8Ch] [rbp-2Ch]
  __int64 *v16; // [rsp+90h] [rbp-28h]
  int v17; // [rsp+98h] [rbp-20h]
  int v18; // [rsp+9Ch] [rbp-1Ch]

  v6 = wil::details::static_lazy<HolographicPositionerProvider>::get(
         a1,
         lambda_c2de52b76b02464b55ca8bf6e2d5d141_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v6 + 8) > 4u )
  {
    LOBYTE(v6) = TlgKeywordOn(*(TraceLoggingHProvider *)(v6 + 8), 0x200000000000uLL);
    if ( (_BYTE)v6 )
    {
      TlgCreateWsz(&pDesc, *a1);
      TlgCreateWsz(&v12, a2);
      v15 = 0;
      v18 = 0;
      v16 = &v9;
      v13 = a3;
      v14 = 4;
      v9 = 0x2000000LL;
      v17 = 8;
      LOBYTE(v6) = TlgWrite(v7, &unk_1804EFA7E, 0LL, 0LL, 6u, &pData);
    }
  }
  return v6;
}
