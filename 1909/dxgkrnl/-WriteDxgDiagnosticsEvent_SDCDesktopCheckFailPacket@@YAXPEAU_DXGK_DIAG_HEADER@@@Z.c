/*
 * XREFs of ?WriteDxgDiagnosticsEvent_SDCDesktopCheckFailPacket@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0041E6C
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00031C0 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C0003680 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C00036AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000E9D0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_SDCDesktopCheckFailPacket(struct _DXGK_DIAG_HEADER *a1)
{
  const struct _TlgProvider_t *v1; // r11
  const GUID *v2; // r9
  __int64 v3; // r10
  const struct _TlgProvider_t *v4; // r11
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-19h] BYREF
  _QWORD *v6; // [rsp+50h] [rbp+7h]
  __int64 v7; // [rsp+58h] [rbp+Fh]
  __int64 v8; // [rsp+60h] [rbp+17h]
  _QWORD v9[4]; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 v10; // [rsp+88h] [rbp+3Fh] BYREF

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000800uLL) && hProvider > 4u )
  {
    if ( TlgKeywordOn(v1, 0x200000000001uLL) )
    {
      v7 = 2LL;
      v6 = v9;
      v8 = v3 + 48;
      v9[1] = &v10;
      v9[3] = v3 + 80;
      v9[0] = 32LL;
      v9[2] = 2LL;
      v10 = 32LL;
      TlgWrite(v4, &unk_1C0072C57, 0LL, v2, 6u, &pData);
    }
  }
}
