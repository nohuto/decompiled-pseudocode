/*
 * XREFs of ?StartTracking_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x18015E4E0
 * Callers:
 *     ?OnDriverHandleOpened@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@EEAAJXZ @ 0x18015AC20 (-OnDriverHandleOpened@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@EEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x180052EFC (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?SpatialTrackingStateToString@@YAPEBDW4SPATIAL_TRACKING_STATE@@@Z @ 0x18015DA04 (-SpatialTrackingStateToString@@YAPEBDW4SPATIAL_TRACKING_STATE@@@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161844 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

char __fastcall HolographicDriverClientTrace::StartTracking_(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v7; // rax
  const char *v8; // rax
  TraceLoggingHProvider v9; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-78h] BYREF
  __int64 v12; // [rsp+50h] [rbp-58h]
  __int64 v13; // [rsp+58h] [rbp-50h]
  __int64 v14; // [rsp+60h] [rbp-48h]
  __int64 v15; // [rsp+68h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-38h] BYREF
  __int64 *v17; // [rsp+80h] [rbp-28h]
  __int64 v18; // [rsp+88h] [rbp-20h]

  v7 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
         a1,
         lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v7 + 8) > 4u )
  {
    LOBYTE(v7) = TlgKeywordOn(*(TraceLoggingHProvider *)(v7 + 8), 2uLL);
    if ( (_BYTE)v7 )
    {
      v12 = a2;
      v13 = 16LL;
      v14 = a3;
      v15 = 16LL;
      v8 = SpatialTrackingStateToString(a4);
      TlgCreateSz(&pDesc, v8);
      v18 = 8LL;
      v17 = &qword_1801E0C60;
      LOBYTE(v7) = TlgWrite(v9, &unk_1801A3BBD, 0LL, 0LL, 6u, &pData);
    }
  }
  return v7;
}
