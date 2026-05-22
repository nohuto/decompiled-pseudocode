/*
 * XREFs of ?DevicePropertyRequestFailed_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1J@Z @ 0x1801552F0
 * Callers:
 *     ??$DevicePropertyRequestFailed@W4TraceDriverType@@AEBU_GUID@@AEBU2@AEAJ@HolographicDriverClientTrace@@SAX$$QEAW4TraceDriverType@@AEBU_GUID@@1AEAJ@Z @ 0x18014A0B0 (--$DevicePropertyRequestFailed@W4TraceDriverType@@AEBU_GUID@@AEBU2@AEAJ@HolographicDriverClientT.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x18005319C (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?TraceDriverTypeToString@@YAPEBDW4TraceDriverType@@@Z @ 0x18015FD38 (-TraceDriverTypeToString@@YAPEBDW4TraceDriverType@@@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161814 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

char __fastcall HolographicDriverClientTrace::DevicePropertyRequestFailed_(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  __int64 v8; // rax
  const CHAR *v9; // rax
  TraceLoggingHProvider v10; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+58h] [rbp-1h] BYREF
  __int64 v14; // [rsp+68h] [rbp+Fh]
  __int64 v15; // [rsp+70h] [rbp+17h]
  __int64 v16; // [rsp+78h] [rbp+1Fh]
  __int64 v17; // [rsp+80h] [rbp+27h]
  char *v18; // [rsp+88h] [rbp+2Fh]
  __int64 v19; // [rsp+90h] [rbp+37h]

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
      v14 = a3;
      v18 = &a5;
      v15 = 16LL;
      v16 = a4;
      v17 = 16LL;
      v19 = 4LL;
      LOBYTE(v8) = TlgWrite(v10, &unk_1801A4247, 0LL, 0LL, 6u, &pData);
    }
  }
  return v8;
}
