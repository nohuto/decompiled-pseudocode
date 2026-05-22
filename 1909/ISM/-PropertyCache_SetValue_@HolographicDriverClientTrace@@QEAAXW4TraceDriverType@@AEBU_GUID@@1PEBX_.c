/*
 * XREFs of ?PropertyCache_SetValue_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1PEBX_K@Z @ 0x18015BF3C
 * Callers:
 *     ?LogValueChanged@PropertyCache@Holographic@Internal@Windows@@MEAAXAEBU_GUID@@AEBV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x180159940 (-LogValueChanged@PropertyCache@Holographic@Internal@Windows@@MEAAXAEBU_GUID@@AEBV-$vector@EV-$al.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x180052EFC (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?TraceDriverTypeToString@@YAPEBDW4TraceDriverType@@@Z @ 0x18015FD68 (-TraceDriverTypeToString@@YAPEBDW4TraceDriverType@@@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161844 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

char __fastcall HolographicDriverClientTrace::PropertyCache_SetValue_(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  __int64 v9; // rax
  const CHAR *v10; // rax
  TraceLoggingHProvider v11; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+58h] [rbp-9h] BYREF
  __int64 v15; // [rsp+68h] [rbp+7h]
  __int64 v16; // [rsp+70h] [rbp+Fh]
  __int64 v17; // [rsp+78h] [rbp+17h]
  __int64 v18; // [rsp+80h] [rbp+1Fh]
  char *v19; // [rsp+88h] [rbp+27h]
  __int64 v20; // [rsp+90h] [rbp+2Fh]

  v9 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
         a1,
         lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v9 + 8) > 4u )
  {
    LOBYTE(v9) = TlgKeywordOn(*(TraceLoggingHProvider *)(v9 + 8), 2uLL);
    if ( (_BYTE)v9 )
    {
      v10 = (const CHAR *)TraceDriverTypeToString(a2);
      TlgCreateSz(&pDesc, v10);
      v15 = a3;
      v19 = &a6;
      v16 = 16LL;
      v17 = a4;
      v18 = 16LL;
      v20 = 8LL;
      LOBYTE(v9) = TlgWrite(v11, &unk_1801A38A8, 0LL, 0LL, 6u, &pData);
    }
  }
  return v9;
}
