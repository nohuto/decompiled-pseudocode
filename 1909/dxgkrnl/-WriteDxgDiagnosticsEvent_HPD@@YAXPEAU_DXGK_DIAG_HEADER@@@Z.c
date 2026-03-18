/*
 * XREFs of ?WriteDxgDiagnosticsEvent_HPD@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000E8DC
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00031C0 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C0003680 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C00036AC (_TlgKeywordOn.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _TlgWrite @ 0x1C000E9D0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_HPD(struct _DXGK_DIAG_HEADER *a1, __int64 a2)
{
  const struct _TlgProvider_t *v3; // r10
  ULONGLONG v4; // r11
  const GUID *v5; // r9
  const struct _TlgProvider_t *v6; // r10
  const struct _TlgProvider_t *v7; // r10
  ULONGLONG v8; // r11
  const GUID *v9; // r9
  const struct _TlgProvider_t *v10; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-9h] BYREF
  void *v12; // [rsp+50h] [rbp+17h]
  int v13; // [rsp+58h] [rbp+1Fh]
  int v14; // [rsp+5Ch] [rbp+23h]
  int *v15; // [rsp+60h] [rbp+27h]
  int v16; // [rsp+68h] [rbp+2Fh]
  int v17; // [rsp+6Ch] [rbp+33h]
  struct _DXGK_DIAG_HEADER *v18; // [rsp+70h] [rbp+37h]
  int v19; // [rsp+78h] [rbp+3Fh] BYREF
  int v20; // [rsp+7Ch] [rbp+43h]

  if ( *((_BYTE *)DXGGLOBAL::GetGlobal((__int64)a1, a2) + 303928) )
  {
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 1u, 0x200000000002uLL)
      && hProvider > 1u
      && TlgKeywordOn(v7, v8) )
    {
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v12 = &unk_1C006E57C;
      v15 = &v19;
      v19 = *((_DWORD *)a1 + 1);
      v13 = 4;
      v16 = 2;
      v18 = a1;
      TlgWrite(v10, &unk_1C0073537, 0LL, v9, 5u, &pData);
    }
  }
  else if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000002uLL) && hProvider > 4u )
  {
    if ( TlgKeywordOn(v3, v4) )
    {
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v12 = &unk_1C006E57C;
      v15 = &v19;
      v19 = *((_DWORD *)a1 + 1);
      v13 = 4;
      v16 = 2;
      v18 = a1;
      TlgWrite(v6, &unk_1C0073515, 0LL, v5, 5u, &pData);
    }
  }
}
