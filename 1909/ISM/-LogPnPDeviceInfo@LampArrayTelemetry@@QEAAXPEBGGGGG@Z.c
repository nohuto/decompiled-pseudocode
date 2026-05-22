/*
 * XREFs of ?LogPnPDeviceInfo@LampArrayTelemetry@@QEAAXPEBGGGGG@Z @ 0x1800B1558
 * Callers:
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z @ 0x180017000 (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x180052F34 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 */

void __fastcall LampArrayTelemetry::LogPnPDeviceInfo(
        LampArrayTelemetry *this,
        const unsigned __int16 *a2,
        __int16 a3,
        __int16 a4,
        char a5,
        char a6)
{
  const WCHAR *v6; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-19h] BYREF
  __int16 *v9; // [rsp+60h] [rbp-9h]
  __int64 v10; // [rsp+68h] [rbp-1h]
  __int16 *v11; // [rsp+70h] [rbp+7h]
  __int64 v12; // [rsp+78h] [rbp+Fh]
  char *v13; // [rsp+80h] [rbp+17h]
  __int64 v14; // [rsp+88h] [rbp+1Fh]
  char *v15; // [rsp+90h] [rbp+27h]
  __int64 v16; // [rsp+98h] [rbp+2Fh]
  __int16 v17; // [rsp+D0h] [rbp+67h] BYREF
  __int16 v18; // [rsp+D8h] [rbp+6Fh] BYREF

  v18 = a4;
  v17 = a3;
  if ( (unsigned int)hProvider > 5 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      TlgCreateWsz(&pDesc, v6);
      v10 = 2LL;
      v11 = &v18;
      v9 = &v17;
      v13 = &a5;
      v15 = &a6;
      v12 = 2LL;
      v14 = 2LL;
      v16 = 2LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18019D3DD, 0LL, 0LL, 7u, &pData);
    }
  }
}
