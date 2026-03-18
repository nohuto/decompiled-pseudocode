/*
 * XREFs of ?WriteDxgDiagnosticsEvent_QDC@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0002C40
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00030B4 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C0003574 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C00035A0 (_TlgKeywordOn.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _TlgWrite @ 0x1C0019EC0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_QDC(struct _DXGK_DIAG_HEADER *a1)
{
  const struct _TlgProvider_t *v2; // r10
  ULONGLONG v3; // r11
  const GUID *v4; // r9
  const struct _TlgProvider_t *v5; // r10
  const struct _TlgProvider_t *v6; // r10
  ULONGLONG v7; // r11
  const GUID *v8; // r9
  const struct _TlgProvider_t *v9; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-9h] BYREF
  void *v11; // [rsp+50h] [rbp+17h]
  int v12; // [rsp+58h] [rbp+1Fh]
  int v13; // [rsp+5Ch] [rbp+23h]
  int *v14; // [rsp+60h] [rbp+27h]
  int v15; // [rsp+68h] [rbp+2Fh]
  int v16; // [rsp+6Ch] [rbp+33h]
  struct _DXGK_DIAG_HEADER *v17; // [rsp+70h] [rbp+37h]
  int v18; // [rsp+78h] [rbp+3Fh] BYREF
  int v19; // [rsp+7Ch] [rbp+43h]

  if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 303928) )
  {
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 1u, 0x200000000001uLL)
      && hProvider > 1u
      && TlgKeywordOn(v6, v7) )
    {
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v11 = &unk_1C006E560;
      v14 = &v18;
      v18 = *((_DWORD *)a1 + 1);
      v12 = 4;
      v15 = 2;
      v17 = a1;
      TlgWrite(v9, &unk_1C0073084, 0LL, v8, 5u, &pData);
    }
  }
  else if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000001uLL) && hProvider > 4u )
  {
    if ( TlgKeywordOn(v2, v3) )
    {
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v11 = &unk_1C006E560;
      v14 = &v18;
      v18 = *((_DWORD *)a1 + 1);
      v12 = 4;
      v15 = 2;
      v17 = a1;
      TlgWrite(v5, &unk_1C0073062, 0LL, v4, 5u, &pData);
    }
  }
}
