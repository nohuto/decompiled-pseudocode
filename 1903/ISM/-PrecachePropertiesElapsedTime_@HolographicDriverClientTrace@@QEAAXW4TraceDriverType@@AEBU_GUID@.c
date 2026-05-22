/*
 * XREFs of ?PrecachePropertiesElapsedTime_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@_K@Z @ 0x18015B438
 * Callers:
 *     _lambda_2b98ef75b445f08568c37aeca5d9510e_::operator() @ 0x180152440 (_lambda_2b98ef75b445f08568c37aeca5d9510e_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x18005319C (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?TraceDriverTypeToString@@YAPEBDW4TraceDriverType@@@Z @ 0x18015FD38 (-TraceDriverTypeToString@@YAPEBDW4TraceDriverType@@@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161814 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

char HolographicDriverClientTrace::PrecachePropertiesElapsedTime_(__int64 a1, unsigned int a2, __int64 a3, ...)
{
  __int64 v5; // rax
  const CHAR *v6; // rax
  TraceLoggingHProvider v7; // r10
  const CHAR *v8; // rax
  TraceLoggingHProvider v9; // r10
  __int64 v11; // [rsp+38h] [rbp-39h] BYREF
  __int64 v12; // [rsp+40h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp-9h] BYREF
  __int64 v15; // [rsp+78h] [rbp+7h]
  __int64 v16; // [rsp+80h] [rbp+Fh]
  va_list v17; // [rsp+88h] [rbp+17h]
  __int64 v18; // [rsp+90h] [rbp+1Fh]
  __int64 *v19; // [rsp+98h] [rbp+27h]
  __int64 v20; // [rsp+A0h] [rbp+2Fh]
  __int64 *v21; // [rsp+A8h] [rbp+37h]
  __int64 v22; // [rsp+B0h] [rbp+3Fh]
  unsigned __int64 v23; // [rsp+F0h] [rbp+7Fh] BYREF
  va_list va; // [rsp+F0h] [rbp+7Fh]
  va_list va1; // [rsp+F8h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v23 = va_arg(va1, _QWORD);
  if ( v23 < 0xBB8 )
  {
    v5 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
           a1,
           lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
    if ( **(_DWORD **)(v5 + 8) > 4u )
    {
      LOBYTE(v5) = TlgKeywordOn(*(TraceLoggingHProvider *)(v5 + 8), 2uLL);
      if ( (_BYTE)v5 )
      {
        v8 = (const CHAR *)TraceDriverTypeToString(a2);
        TlgCreateSz(&pDesc, v8);
        v15 = a3;
        va_copy(v17, va);
        v16 = 16LL;
        v18 = 8LL;
        LOBYTE(v5) = TlgWrite(v9, &unk_1801A287C, 0LL, 0LL, 5u, &pData);
      }
    }
  }
  else
  {
    v5 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
           a1,
           lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
    if ( **(_DWORD **)(v5 + 8) > 4u )
    {
      LOBYTE(v5) = TlgKeywordOn(*(TraceLoggingHProvider *)(v5 + 8), 0x200000000000uLL);
      if ( (_BYTE)v5 )
      {
        v6 = (const CHAR *)TraceDriverTypeToString(a2);
        TlgCreateSz(&pDesc, v6);
        v15 = a3;
        v19 = &v11;
        v16 = 16LL;
        v21 = &v12;
        va_copy(v17, va);
        v18 = 8LL;
        v11 = 3000LL;
        v20 = 8LL;
        v12 = 0x1000000LL;
        v22 = 8LL;
        LOBYTE(v5) = TlgWrite(v7, &unk_1801A3016, 0LL, 0LL, 7u, &pData);
      }
    }
  }
  return v5;
}
