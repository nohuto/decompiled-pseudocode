/*
 * XREFs of ?RegisterPropertiesUpdateCallback_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@PEBX11@Z @ 0x18015CA8C
 * Callers:
 *     ??$RegisterPropertiesUpdateCallback@W4TraceDriverType@@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEAPEAUISpatialGraphPropertiesUpdatedCallback@345@PEAUIWeakReference@@@HolographicDriverClientTrace@@SAX$$QEAW4TraceDriverType@@$$QEAPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEAPEAUISpatialGraphPropertiesUpdatedCallback@345@$$QEAPEAUIWeakReference@@@Z @ 0x18014B204 (--$RegisterPropertiesUpdateCallback@W4TraceDriverType@@PEAVSpatialGraphDriverClient@Holographic@.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x180052EFC (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?TraceDriverTypeToString@@YAPEBDW4TraceDriverType@@@Z @ 0x18015FD68 (-TraceDriverTypeToString@@YAPEBDW4TraceDriverType@@@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161844 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

char HolographicDriverClientTrace::RegisterPropertiesUpdateCallback_(__int64 a1, unsigned int a2, ...)
{
  __int64 v3; // rax
  const CHAR *v4; // rax
  TraceLoggingHProvider v5; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+58h] [rbp-1h] BYREF
  va_list v9; // [rsp+68h] [rbp+Fh]
  __int64 v10; // [rsp+70h] [rbp+17h]
  va_list v11; // [rsp+78h] [rbp+1Fh]
  __int64 v12; // [rsp+80h] [rbp+27h]
  va_list v13; // [rsp+88h] [rbp+2Fh]
  __int64 v14; // [rsp+90h] [rbp+37h]
  __int64 v15; // [rsp+C8h] [rbp+6Fh] BYREF
  va_list va; // [rsp+C8h] [rbp+6Fh]
  __int64 v17; // [rsp+D0h] [rbp+77h] BYREF
  va_list va1; // [rsp+D0h] [rbp+77h]
  va_list va2; // [rsp+D8h] [rbp+7Fh] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  v3 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
         a1,
         lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v3 + 8) > 4u )
  {
    LOBYTE(v3) = TlgKeywordOn(*(TraceLoggingHProvider *)(v3 + 8), 2uLL);
    if ( (_BYTE)v3 )
    {
      v4 = (const CHAR *)TraceDriverTypeToString(a2);
      TlgCreateSz(&pDesc, v4);
      v10 = 8LL;
      va_copy(v11, va1);
      va_copy(v9, va);
      va_copy(v13, va2);
      v12 = 8LL;
      v14 = 8LL;
      LOBYTE(v3) = TlgWrite(v5, &unk_1801A3570, 0LL, 0LL, 6u, &pData);
    }
  }
  return v3;
}
