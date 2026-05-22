/*
 * XREFs of ?TrackingStateChanged_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@2@Z @ 0x18015FD90
 * Callers:
 *     ?CheckForTrackingStateTransition@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@PEAUTrackingStateEntry@1234@@Z @ 0x180153668 (-CheckForTrackingStateTransition@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@A.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x180052EFC (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?SpatialTrackingStateToString@@YAPEBDW4SPATIAL_TRACKING_STATE@@@Z @ 0x18015DA04 (-SpatialTrackingStateToString@@YAPEBDW4SPATIAL_TRACKING_STATE@@@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161844 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

char __fastcall HolographicDriverClientTrace::TrackingStateChanged_(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v8; // rax
  const char *v9; // rax
  const char *v10; // rax
  TraceLoggingHProvider v11; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-41h] BYREF
  __int64 v14; // [rsp+50h] [rbp-21h]
  __int64 v15; // [rsp+58h] [rbp-19h]
  __int64 v16; // [rsp+60h] [rbp-11h]
  __int64 v17; // [rsp+68h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+80h] [rbp+Fh] BYREF
  __int64 *v20; // [rsp+90h] [rbp+1Fh]
  __int64 v21; // [rsp+98h] [rbp+27h]

  v8 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
         a1,
         lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v8 + 8) > 4u )
  {
    LOBYTE(v8) = TlgKeywordOn(*(TraceLoggingHProvider *)(v8 + 8), 2uLL);
    if ( (_BYTE)v8 )
    {
      v14 = a2;
      v15 = 16LL;
      v16 = a3;
      v17 = 16LL;
      v9 = SpatialTrackingStateToString(a4);
      TlgCreateSz(&pDesc, v9);
      v10 = SpatialTrackingStateToString(a5);
      TlgCreateSz(&v19, v10);
      v21 = 8LL;
      v20 = &qword_1801E0C60;
      LOBYTE(v8) = TlgWrite(v11, &unk_1801A2586, 0LL, 0LL, 7u, &pData);
    }
  }
  return v8;
}
