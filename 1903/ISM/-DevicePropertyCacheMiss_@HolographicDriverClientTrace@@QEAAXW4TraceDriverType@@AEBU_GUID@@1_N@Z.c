/*
 * XREFs of ?DevicePropertyCacheMiss_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1_N@Z @ 0x180155128
 * Callers:
 *     ??$DevicePropertyCacheMiss@W4TraceDriverType@@AEBU_GUID@@AEBU2@AEB_N@HolographicDriverClientTrace@@SAX$$QEAW4TraceDriverType@@AEBU_GUID@@1AEB_N@Z @ 0x18014A048 (--$DevicePropertyCacheMiss@W4TraceDriverType@@AEBU_GUID@@AEBU2@AEB_N@HolographicDriverClientTrac.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x18005319C (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?TraceDriverTypeToString@@YAPEBDW4TraceDriverType@@@Z @ 0x18015FD38 (-TraceDriverTypeToString@@YAPEBDW4TraceDriverType@@@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161814 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

char __fastcall HolographicDriverClientTrace::DevicePropertyCacheMiss_(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v8; // rax
  const CHAR *v9; // rax
  TraceLoggingHProvider v10; // r10
  int v12; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp-1h] BYREF
  __int64 v15; // [rsp+78h] [rbp+Fh]
  __int64 v16; // [rsp+80h] [rbp+17h]
  __int64 v17; // [rsp+88h] [rbp+1Fh]
  __int64 v18; // [rsp+90h] [rbp+27h]
  int *v19; // [rsp+98h] [rbp+2Fh]
  __int64 v20; // [rsp+A0h] [rbp+37h]

  v8 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
         a1,
         lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v8 + 8) > 4u )
  {
    LOBYTE(v8) = TlgKeywordOn(*(TraceLoggingHProvider *)(v8 + 8), 2uLL);
    if ( (_BYTE)v8 )
    {
      v9 = (const CHAR *)TraceDriverTypeToString(a2);
      TlgCreateSz(&pDesc, v9);
      v12 = a5;
      v19 = &v12;
      v15 = a3;
      v16 = 16LL;
      v17 = a4;
      v18 = 16LL;
      v20 = 4LL;
      LOBYTE(v8) = TlgWrite(v10, &unk_1801A43A6, 0LL, 0LL, 6u, &pData);
    }
  }
  return v8;
}
