/*
 * XREFs of ?WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0003374
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00031C0 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C0003680 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C00036AC (_TlgKeywordOn.c)
 *     ?IsCodePointTypeNoisy@@YAHW4_DXGK_DIAG_CODE_POINT_TYPE@@@Z @ 0x1C00036D8 (-IsCodePointTypeNoisy@@YAHW4_DXGK_DIAG_CODE_POINT_TYPE@@@Z.c)
 *     _TlgWrite @ 0x1C000E9D0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID(struct _DXGK_DIAG_HEADER *a1)
{
  ULONGLONG v2; // r11
  unsigned int v3; // r10d
  int v4; // eax
  ULONGLONG v5; // r11
  const GUID *v6; // r9
  const GUID *v7; // r9
  const GUID *v8; // r9
  const GUID *v9; // r9
  const GUID *v10; // r9
  const GUID *v11; // r9
  const GUID *v12; // r9
  unsigned __int8 v13; // r11
  char v14; // [rsp+38h] [rbp-79h] BYREF
  __int64 v15; // [rsp+40h] [rbp-71h] BYREF
  int v16; // [rsp+48h] [rbp-69h] BYREF
  __int64 v17; // [rsp+50h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-59h] BYREF
  void *v19; // [rsp+78h] [rbp-39h]
  __int64 v20; // [rsp+80h] [rbp-31h]
  __int64 *v21; // [rsp+88h] [rbp-29h]
  __int64 v22; // [rsp+90h] [rbp-21h]
  struct _DXGK_DIAG_HEADER *v23; // [rsp+98h] [rbp-19h]
  __int64 v24; // [rsp+A0h] [rbp-11h] BYREF
  const GUID *v25; // [rsp+A8h] [rbp-9h]
  __int64 v26; // [rsp+B0h] [rbp-1h]
  char *v27; // [rsp+B8h] [rbp+7h]
  __int64 v28; // [rsp+C0h] [rbp+Fh]
  int *v29; // [rsp+C8h] [rbp+17h]
  __int64 v30; // [rsp+D0h] [rbp+1Fh]
  __int64 *v31; // [rsp+D8h] [rbp+27h]
  __int64 v32; // [rsp+E0h] [rbp+2Fh]

  if ( (unsigned int)IsCodePointTypeNoisy(*((unsigned int *)a1 + 12)) )
  {
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x10uLL)
      && hProvider > 4u
      && TlgKeywordOn((TraceLoggingHProvider)&hProvider, v2) )
    {
      v19 = &unk_1C006E57C;
      v21 = &v24;
      v24 = *((unsigned int *)a1 + 1);
      v20 = 4LL;
      v22 = 2LL;
      v23 = a1;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0073370, 0LL, v7, 5u, &pData);
    }
  }
  else if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000010uLL)
         && hProvider > 4u
         && TlgKeywordOn((TraceLoggingHProvider)&hProvider, v5) )
  {
    v19 = &unk_1C006E57C;
    v21 = &v24;
    v24 = *((unsigned int *)a1 + 1);
    v20 = 4LL;
    v22 = 2LL;
    v23 = a1;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0073347, 0LL, v6, 5u, &pData);
  }
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x400000000010uLL) )
  {
    v4 = *((_DWORD *)a1 + 12);
    switch ( v4 )
    {
      case 'D':
        if ( *((int *)a1 + 13) < 0 != ((*((_DWORD *)a1 + 13) & 0x40000000) != 0)
          && v3 > 4
          && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000010uLL) )
        {
          v17 = *((_QWORD *)a1 + 8);
          v21 = &v17;
          v14 = *((_BYTE *)a1 + 52);
          v23 = (struct _DXGK_DIAG_HEADER *)&v14;
          v25 = (const GUID *)((char *)a1 + 56);
          v27 = (char *)a1 + 60;
          v16 = v13;
          v29 = &v16;
          LODWORD(v15) = (unsigned __int8)v12;
          v31 = &v15;
          v19 = &unk_1C006E57C;
          v20 = 4LL;
          v22 = 8LL;
          v24 = 1LL;
          v26 = 4LL;
          v28 = 4LL;
          v30 = 4LL;
          v32 = 4LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C007318D, 0LL, v12, 9u, &pData);
        }
        break;
      case 'X':
        if ( v3 > 4 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000010uLL) )
        {
          v15 = *((_QWORD *)a1 + 8);
          v21 = &v15;
          v23 = (struct _DXGK_DIAG_HEADER *)((char *)a1 + 52);
          v25 = (const GUID *)((char *)a1 + 56);
          v27 = (char *)a1 + 60;
          v19 = &unk_1C006E57C;
          v20 = 4LL;
          v22 = 8LL;
          v24 = 4LL;
          v26 = 4LL;
          v28 = 4LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C00732EE, 0LL, v11, 7u, &pData);
        }
        break;
      case '`':
        if ( v3 > 4 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000010uLL) )
        {
          v15 = *((_QWORD *)a1 + 8);
          v21 = &v15;
          v23 = (struct _DXGK_DIAG_HEADER *)((char *)a1 + 52);
          v25 = (const GUID *)((char *)a1 + 56);
          v27 = (char *)a1 + 60;
          v19 = &unk_1C006E57C;
          v20 = 4LL;
          v22 = 8LL;
          v24 = 4LL;
          v26 = 4LL;
          v28 = 4LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0073288, 0LL, v10, 7u, &pData);
        }
        break;
      case 'b':
        if ( *((int *)a1 + 14) < 0 && v3 > 4 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000010uLL) )
        {
          v15 = *((_QWORD *)a1 + 8);
          v21 = &v15;
          v23 = (struct _DXGK_DIAG_HEADER *)((char *)a1 + 52);
          v19 = &unk_1C006E57C;
          v20 = 4LL;
          v22 = 8LL;
          v24 = 4LL;
          v25 = v9;
          v26 = 4LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0073214, 0LL, v9, 6u, &pData);
        }
        break;
      default:
        if ( v4 == 104 && v3 > 4 )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000010uLL) )
          {
            v15 = *((_QWORD *)a1 + 8);
            v21 = &v15;
            v23 = (struct _DXGK_DIAG_HEADER *)((char *)a1 + 52);
            v25 = (const GUID *)((char *)a1 + 56);
            v27 = (char *)a1 + 60;
            v19 = &unk_1C006E57C;
            v20 = 4LL;
            v22 = 8LL;
            v24 = 4LL;
            v26 = 4LL;
            v28 = 4LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0073136, 0LL, v8, 7u, &pData);
          }
        }
        break;
    }
  }
}
