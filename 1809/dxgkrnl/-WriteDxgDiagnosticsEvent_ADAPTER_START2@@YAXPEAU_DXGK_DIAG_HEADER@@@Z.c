/*
 * XREFs of ?WriteDxgDiagnosticsEvent_ADAPTER_START2@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0020500
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0005548 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0001F48 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x1C0005A4C (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C0005A7C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_ADAPTER_START2(struct _DXGK_DIAG_HEADER *a1)
{
  ULONGLONG v2; // r10
  ULONGLONG v3; // r10
  const GUID *v4; // r9
  const GUID *v5; // r9
  int v6; // [rsp+38h] [rbp-69h] BYREF
  int v7; // [rsp+3Ch] [rbp-65h] BYREF
  __int64 v8; // [rsp+40h] [rbp-61h] BYREF
  __int64 v9; // [rsp+48h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-49h] BYREF
  int *v11; // [rsp+78h] [rbp-29h]
  int v12; // [rsp+80h] [rbp-21h]
  int v13; // [rsp+84h] [rbp-1Dh]
  int *v14; // [rsp+88h] [rbp-19h]
  int v15; // [rsp+90h] [rbp-11h]
  int v16; // [rsp+94h] [rbp-Dh]
  struct _DXGK_DIAG_HEADER *v17; // [rsp+98h] [rbp-9h]
  int v18; // [rsp+A0h] [rbp-1h] BYREF
  int v19; // [rsp+A4h] [rbp+3h]
  int *v20; // [rsp+A8h] [rbp+7h]
  int v21; // [rsp+B0h] [rbp+Fh]
  int v22; // [rsp+B4h] [rbp+13h]
  char *v23; // [rsp+B8h] [rbp+17h]
  int v24; // [rsp+C0h] [rbp+1Fh]
  int v25; // [rsp+C4h] [rbp+23h]
  char *v26; // [rsp+C8h] [rbp+27h]
  int v27; // [rsp+D0h] [rbp+2Fh]
  int v28; // [rsp+D4h] [rbp+33h]
  char *v29; // [rsp+D8h] [rbp+37h]
  int v30; // [rsp+E0h] [rbp+3Fh]
  int v31; // [rsp+E4h] [rbp+43h]

  v6 = 6;
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000001000uLL)
    && hProvider > 4u
    && TlgKeywordOn((TraceLoggingHProvider)&hProvider, v2) )
  {
    v13 = 0;
    v16 = 0;
    v19 = 0;
    v11 = &v6;
    v14 = &v18;
    v18 = *((_DWORD *)a1 + 1);
    v12 = 4;
    v15 = 2;
    v17 = a1;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C006A50C, 0LL, v4, 5u, &pData);
  }
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x400000001000uLL)
    && *((int *)a1 + 12) < 0
    && hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, v3) )
    {
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v11 = &v6;
      v8 = *((_QWORD *)a1 + 7);
      v14 = (int *)&v8;
      v9 = *((_QWORD *)a1 + 10);
      v17 = (struct _DXGK_DIAG_HEADER *)&v9;
      v20 = &v7;
      v23 = (char *)a1 + 52;
      v26 = (char *)a1 + 64;
      v29 = (char *)a1 + 72;
      v12 = 4;
      v15 = 8;
      v18 = 8;
      v7 = (int)v5;
      v21 = 4;
      v24 = 4;
      v27 = 4;
      v30 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C006A49D, 0LL, v5, 9u, &pData);
    }
  }
}
