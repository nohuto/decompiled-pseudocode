/*
 * XREFs of ??$TryClose@PEBGIAEAE@Win32BackedViewHostItemTelemetry@@SAX$$QEAPEBG$$QEAIAEAE@Z @ 0x18020AB0C
 * Callers:
 *     ?TryClose@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z @ 0x180214E10 (-TryClose@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VWin32BackedViewHostItemTelemetryProvider@@@details@wil@@QEAAPEAVWin32BackedViewHostItemTelemetryProvider@@P6AXXZ@Z @ 0x180217098 (-get@-$static_lazy@VWin32BackedViewHostItemTelemetryProvider@@@details@wil@@QEAAPEAVWin32BackedV.c)
 */

char __fastcall Win32BackedViewHostItemTelemetry::TryClose<unsigned short const *,unsigned int,unsigned char &>(
        LPCWSTR *a1,
        __int64 a2,
        _BYTE *a3)
{
  __int64 v6; // rax
  unsigned __int8 v7; // r11
  bool v8; // zf
  TraceLoggingHProvider v9; // r10
  bool v11; // [rsp+38h] [rbp-29h] BYREF
  __int64 v12; // [rsp+40h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp+7h] BYREF
  __int64 v15; // [rsp+78h] [rbp+17h]
  __int64 v16; // [rsp+80h] [rbp+1Fh]
  bool *v17; // [rsp+88h] [rbp+27h]
  __int64 v18; // [rsp+90h] [rbp+2Fh]
  __int64 *v19; // [rsp+98h] [rbp+37h]
  __int64 v20; // [rsp+A0h] [rbp+3Fh]

  v6 = wil::details::static_lazy<Win32BackedViewHostItemTelemetryProvider>::get(
         a1,
         lambda_ec1d4b054d630c017dce9880fb168525_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v6 + 8) > 5u )
  {
    LOBYTE(v6) = TlgKeywordOn(*(TraceLoggingHProvider *)(v6 + 8), 0x400000000000uLL);
    if ( (_BYTE)v6 )
    {
      TlgCreateWsz(&pDesc, *a1);
      v8 = *a3 == v7;
      v17 = &v11;
      v19 = &v12;
      v11 = !v8;
      v15 = a2;
      v16 = 4LL;
      v18 = 1LL;
      v12 = 0x2000000LL;
      v20 = 8LL;
      LOBYTE(v6) = TlgWrite(v9, &unk_1804C9CED, 0LL, 0LL, 6u, &pData);
    }
  }
  return v6;
}
