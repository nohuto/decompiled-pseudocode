/*
 * XREFs of ?IoctlTimeout_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@KK0AEBUSPATIAL_NODE_ID@@PEB_W@Z @ 0x180159748
 * Callers:
 *     ?HandleIoctlTimeout@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAKPEAU_OVERLAPPED@@KKPEBXKPEAK@Z @ 0x180158BBC (-HandleIoctlTimeout@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAKPEAU_OVERL.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x180052F34 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161844 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

void __fastcall HolographicDriverClientTrace::IoctlTimeout_(
        HolographicDriverClientTrace *this,
        const struct _GUID *a2,
        int a3,
        int a4,
        const struct _GUID *a5,
        const struct SPATIAL_NODE_ID *a6,
        LPCWSTR pwsz)
{
  const WCHAR *v7; // rsi
  __int64 v10; // rax
  TraceLoggingHProvider v11; // r10
  int v12; // [rsp+38h] [rbp-71h] BYREF
  __int64 v13; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-61h] BYREF
  const struct _GUID *v15; // [rsp+68h] [rbp-41h]
  __int64 v16; // [rsp+70h] [rbp-39h]
  int *v17; // [rsp+78h] [rbp-31h]
  __int64 v18; // [rsp+80h] [rbp-29h]
  int *v19; // [rsp+88h] [rbp-21h]
  __int64 v20; // [rsp+90h] [rbp-19h]
  const struct _GUID *v21; // [rsp+98h] [rbp-11h]
  __int64 v22; // [rsp+A0h] [rbp-9h]
  const struct SPATIAL_NODE_ID *v23; // [rsp+A8h] [rbp-1h]
  __int64 v24; // [rsp+B0h] [rbp+7h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B8h] [rbp+Fh] BYREF
  __int64 *v26; // [rsp+C8h] [rbp+1Fh]
  __int64 v27; // [rsp+D0h] [rbp+27h]
  int v28; // [rsp+110h] [rbp+67h] BYREF

  v28 = a4;
  v7 = pwsz;
  v10 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
          this,
          lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v10 + 8) > 3u )
  {
    if ( TlgKeywordOn(*(TraceLoggingHProvider *)(v10 + 8), 0x200000000000uLL) )
    {
      v15 = a2;
      v17 = &v12;
      v16 = 16LL;
      v19 = &v28;
      v21 = a5;
      v23 = a6;
      v12 = a3;
      v18 = 4LL;
      v20 = 4LL;
      v22 = 16LL;
      v24 = 16LL;
      TlgCreateWsz(&pDesc, v7);
      v13 = 0x1000000LL;
      v26 = &v13;
      v27 = 8LL;
      TlgWrite(v11, &unk_1801A2E99, 0LL, 0LL, 9u, &pData);
    }
  }
}
