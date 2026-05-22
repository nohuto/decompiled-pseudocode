/*
 * XREFs of ?PropertyCache_Cleared_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@@Z @ 0x18015BDA4
 * Callers:
 *     ?LogCleared@PropertyCache@Holographic@Internal@Windows@@MEAAXXZ @ 0x180159900 (-LogCleared@PropertyCache@Holographic@Internal@Windows@@MEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x180052EFC (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?TraceDriverTypeToString@@YAPEBDW4TraceDriverType@@@Z @ 0x18015FD68 (-TraceDriverTypeToString@@YAPEBDW4TraceDriverType@@@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161844 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

char __fastcall HolographicDriverClientTrace::PropertyCache_Cleared_(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rax
  const CHAR *v6; // rax
  TraceLoggingHProvider v7; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-38h] BYREF
  __int64 v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]

  v5 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
         a1,
         lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v5 + 8) > 4u )
  {
    LOBYTE(v5) = TlgKeywordOn(*(TraceLoggingHProvider *)(v5 + 8), 2uLL);
    if ( (_BYTE)v5 )
    {
      v6 = (const CHAR *)TraceDriverTypeToString(a2);
      TlgCreateSz(&pDesc, v6);
      v13 = 0;
      v11 = a3;
      v12 = 16;
      LOBYTE(v5) = TlgWrite(v7, &unk_1801A4344, 0LL, 0LL, 4u, &pData);
    }
  }
  return v5;
}
