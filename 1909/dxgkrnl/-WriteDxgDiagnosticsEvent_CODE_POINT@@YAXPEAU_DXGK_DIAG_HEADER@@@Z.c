/*
 * XREFs of ?WriteDxgDiagnosticsEvent_CODE_POINT@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00034F8
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00031C0 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C0003680 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C00036AC (_TlgKeywordOn.c)
 *     ?IsCodePointTypeNoisy@@YAHW4_DXGK_DIAG_CODE_POINT_TYPE@@@Z @ 0x1C00036D8 (-IsCodePointTypeNoisy@@YAHW4_DXGK_DIAG_CODE_POINT_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _TlgWrite @ 0x1C000E9D0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_CODE_POINT(struct _DXGK_DIAG_HEADER *a1)
{
  ULONGLONG v2; // r10
  ULONGLONG v3; // r10
  int v4; // eax
  ULONGLONG v5; // r10
  const GUID *v6; // r9
  const GUID *v7; // r9
  ULONGLONG v8; // r10
  const GUID *v9; // r9
  const GUID *v10; // r9
  const GUID *v11; // r9
  const GUID *v12; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-29h] BYREF
  void *v14; // [rsp+58h] [rbp-9h]
  __int64 v15; // [rsp+60h] [rbp-1h]
  char *v16; // [rsp+68h] [rbp+7h]
  __int64 v17; // [rsp+70h] [rbp+Fh]
  struct _DXGK_DIAG_HEADER *v18; // [rsp+78h] [rbp+17h]
  _QWORD v19[3]; // [rsp+80h] [rbp+1Fh] BYREF

  if ( (unsigned int)IsCodePointTypeNoisy(*((unsigned int *)a1 + 12)) )
  {
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x10uLL)
      && hProvider > 4u
      && TlgKeywordOn((TraceLoggingHProvider)&hProvider, v2) )
    {
      v14 = &unk_1C006E57C;
      v16 = (char *)v19;
      v19[0] = *((unsigned int *)a1 + 1);
      v15 = 4LL;
      v17 = 2LL;
      v18 = a1;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0073370, 0LL, v7, 5u, &pData);
    }
  }
  else if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 303928) )
  {
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 1u, 0x200000000010uLL)
      && hProvider > 1u
      && TlgKeywordOn((TraceLoggingHProvider)&hProvider, v8) )
    {
      v14 = &unk_1C006E57C;
      v16 = (char *)v19;
      v19[0] = *((unsigned int *)a1 + 1);
      v15 = 4LL;
      v17 = 2LL;
      v18 = a1;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C007346C, 0LL, v9, 5u, &pData);
    }
  }
  else if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000010uLL)
         && hProvider > 4u
         && TlgKeywordOn((TraceLoggingHProvider)&hProvider, v5) )
  {
    v14 = &unk_1C006E57C;
    v16 = (char *)v19;
    v19[0] = *((unsigned int *)a1 + 1);
    v15 = 4LL;
    v17 = 2LL;
    v18 = a1;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0073347, 0LL, v6, 5u, &pData);
  }
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x400000000010uLL) )
  {
    v4 = *((_DWORD *)a1 + 12);
    if ( v4 == 88 )
    {
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, v3) )
      {
        v14 = &unk_1C006E57C;
        v16 = (char *)a1 + 52;
        v18 = (struct _DXGK_DIAG_HEADER *)((char *)a1 + 56);
        v19[1] = (char *)a1 + 60;
        v15 = 4LL;
        v17 = 4LL;
        v19[0] = 4LL;
        v19[2] = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0073420, 0LL, v12, 6u, &pData);
      }
    }
    else if ( v4 == 94 )
    {
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, v3) )
      {
        v14 = &unk_1C006E57C;
        v16 = (char *)a1 + 52;
        v18 = (struct _DXGK_DIAG_HEADER *)((char *)a1 + 56);
        v15 = 4LL;
        v17 = 4LL;
        v19[0] = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C00733E8, 0LL, v11, 5u, &pData);
      }
    }
    else if ( v4 == 111 && hProvider > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, v3) )
      {
        v14 = &unk_1C006E57C;
        v16 = (char *)a1 + 52;
        v18 = (struct _DXGK_DIAG_HEADER *)((char *)a1 + 56);
        v15 = 4LL;
        v17 = 4LL;
        v19[0] = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0073399, 0LL, v10, 5u, &pData);
      }
    }
  }
}
