/*
 * XREFs of ?WriteDxgDiagnosticsEvent_OUTPUTDUPL@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0041C80
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00031C0 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C0003680 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C00036AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000E9D0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_OUTPUTDUPL(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v1; // r10
  unsigned int v2; // r11d
  int v3; // ecx
  int v4; // ecx
  const GUID *v5; // r9
  __int64 v6; // r10
  __int64 v7; // r11
  const GUID *v8; // r9
  __int64 v9; // r10
  __int64 v10; // r11
  const GUID *v11; // r9
  __int64 v12; // r10
  __int64 v13; // r11
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-9h] BYREF
  void *v15; // [rsp+50h] [rbp+17h]
  __int64 v16; // [rsp+58h] [rbp+1Fh]
  int *v17; // [rsp+60h] [rbp+27h]
  __int64 v18; // [rsp+68h] [rbp+2Fh]
  __int64 v19; // [rsp+70h] [rbp+37h]
  int v20; // [rsp+78h] [rbp+3Fh] BYREF
  int v21; // [rsp+7Ch] [rbp+43h]

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000200uLL) )
  {
    v3 = *(_DWORD *)(v1 + 48);
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 10 && hProvider > v2 )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000200uLL) )
          {
            v16 = v7;
            v15 = &unk_1C006E57C;
            v17 = &v20;
            v20 = *(_DWORD *)(v6 + 4);
            v18 = 2LL;
            v19 = v6;
            v21 = (int)v5;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0072F02, 0LL, v5, 5u, &pData);
          }
        }
      }
      else if ( hProvider > v2 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000200uLL) )
      {
        v16 = v10;
        v15 = &unk_1C006E57C;
        v17 = &v20;
        v20 = *(_DWORD *)(v9 + 4);
        v18 = 2LL;
        v19 = v9;
        v21 = (int)v8;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0072ED1, 0LL, v8, 5u, &pData);
      }
    }
    else if ( hProvider > v2 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000200uLL) )
    {
      v16 = v13;
      v15 = &unk_1C006E57C;
      v17 = &v20;
      v20 = *(_DWORD *)(v12 + 4);
      v18 = 2LL;
      v19 = v12;
      v21 = (int)v11;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0072F39, 0LL, v11, 5u, &pData);
    }
  }
}
