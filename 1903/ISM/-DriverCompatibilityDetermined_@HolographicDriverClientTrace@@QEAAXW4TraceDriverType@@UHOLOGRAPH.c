/*
 * XREFs of ?DriverCompatibilityDetermined_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@UHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@1_N@Z @ 0x1801553D4
 * Callers:
 *     ??$DriverCompatibilityDetermined@W4TraceDriverType@@AEBUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@AEAU2@_N@HolographicDriverClientTrace@@SAX$$QEAW4TraceDriverType@@AEBUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@AEAU2@$$QEA_N@Z @ 0x18014A118 (--$DriverCompatibilityDetermined@W4TraceDriverType@@AEBUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x18005319C (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?TraceDriverTypeToString@@YAPEBDW4TraceDriverType@@@Z @ 0x18015FD38 (-TraceDriverTypeToString@@YAPEBDW4TraceDriverType@@@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161814 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

char __fastcall HolographicDriverClientTrace::DriverCompatibilityDetermined_(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  __int64 v6; // rax
  const CHAR *v7; // rax
  __int64 v8; // r11
  TraceLoggingHProvider v9; // r10
  __int64 v11; // [rsp+30h] [rbp-51h] BYREF
  __int64 v12; // [rsp+38h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-21h] BYREF
  __int64 *v15; // [rsp+70h] [rbp-11h]
  __int64 v16; // [rsp+78h] [rbp-9h]
  char *v17; // [rsp+80h] [rbp-1h]
  __int64 v18; // [rsp+88h] [rbp+7h]
  __int64 *v19; // [rsp+90h] [rbp+Fh]
  __int64 v20; // [rsp+98h] [rbp+17h]
  char *v21; // [rsp+A0h] [rbp+1Fh]
  __int64 v22; // [rsp+A8h] [rbp+27h]
  char *v23; // [rsp+B0h] [rbp+2Fh]
  __int64 v24; // [rsp+B8h] [rbp+37h]

  v11 = a3;
  v12 = a4;
  v6 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
         a1,
         lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v6 + 8) > 4u )
  {
    LOBYTE(v6) = TlgKeywordOn(*(TraceLoggingHProvider *)(v6 + 8), 0x400000000000uLL);
    if ( (_BYTE)v6 )
    {
      v7 = (const CHAR *)TraceDriverTypeToString(a2);
      TlgCreateSz(&pDesc, v7);
      v16 = v8;
      v17 = (char *)&v11 + 4;
      v15 = &v11;
      v19 = &v12;
      v21 = (char *)&v12 + 4;
      v23 = &a5;
      v18 = v8;
      v20 = v8;
      v22 = v8;
      v24 = 1LL;
      LOBYTE(v6) = TlgWrite(v9, &unk_1801A3538, 0LL, 0LL, 8u, &pData);
    }
  }
  return v6;
}
