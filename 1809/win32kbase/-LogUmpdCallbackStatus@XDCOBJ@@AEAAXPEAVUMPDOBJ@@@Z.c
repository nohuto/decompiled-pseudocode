/*
 * XREFs of ?LogUmpdCallbackStatus@XDCOBJ@@AEAAXPEAVUMPDOBJ@@@Z @ 0x1C00A9B60
 * Callers:
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C00A9968 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C0030480 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

void __fastcall XDCOBJ::LogUmpdCallbackStatus(XDCOBJ *this, struct UMPDOBJ *a2)
{
  __int64 v2; // r10
  __int64 v3; // r11
  __int64 v4; // rdi
  unsigned __int16 v5; // si
  __int64 v6; // rcx
  const WCHAR *v7; // rbx
  int v8; // r10d
  int v9; // [rsp+50h] [rbp-59h] BYREF
  __int64 v10; // [rsp+58h] [rbp-51h] BYREF
  __int64 v11; // [rsp+60h] [rbp-49h] BYREF
  __int64 v12; // [rsp+68h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-39h] BYREF
  int *v14; // [rsp+90h] [rbp-19h]
  int v15; // [rsp+98h] [rbp-11h]
  int v16; // [rsp+9Ch] [rbp-Dh]
  __int64 *v17; // [rsp+A0h] [rbp-9h]
  int v18; // [rsp+A8h] [rbp-1h]
  int v19; // [rsp+ACh] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp+7h] BYREF
  __int64 *v21; // [rsp+C0h] [rbp+17h]
  int v22; // [rsp+C8h] [rbp+1Fh]
  int v23; // [rsp+CCh] [rbp+23h]
  __int64 *v24; // [rsp+D0h] [rbp+27h]
  int v25; // [rsp+D8h] [rbp+2Fh]
  int v26; // [rsp+DCh] [rbp+33h]

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 0, 0x400000000000uLL) )
  {
    v4 = *(unsigned int *)(v3 + 428);
    v5 = *(_WORD *)(*(_QWORD *)v2 + 12LL);
    if ( *(_DWORD *)(*(_QWORD *)v2 + 2144LL) != (_DWORD)v4 )
    {
      *(_DWORD *)(*(_QWORD *)v2 + 2144LL) = v4;
      v6 = *(_QWORD *)(*(_QWORD *)v2 + 48LL);
      v7 = *(const WCHAR **)(v6 + 3560);
      if ( !v7 )
      {
        v7 = L"unknown";
        if ( (*(_DWORD *)(v6 + 40) & 0x8000) == 0 )
          v7 = L"display";
      }
      v9 = 20;
      if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
      {
        v16 = 0;
        v19 = 0;
        v14 = &v9;
        v15 = 4;
        v17 = &v10;
        v10 = 0x2000000LL;
        v18 = 8;
        TlgCreateWsz(&pDesc, v7);
        v23 = 0;
        v26 = 0;
        v21 = &v11;
        v12 = v5;
        v24 = &v12;
        v11 = v4;
        v22 = v8;
        v25 = v8;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C019DE54, 0LL, 0LL, 7u, &pData);
      }
      if ( !gUmpdDumpCreated )
      {
        gUmpdDumpCreated = 1;
        DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, 29LL, v7, v4, v5, v7, DumpDriverName, 0);
      }
    }
  }
}
