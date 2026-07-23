/*
 * XREFs of RtlpLogCapabilityCheckLatency @ 0x18004B4B8
 * Callers:
 *     RtlCapabilityCheck @ 0x180048270 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1800213E0 (RtlRunOnceExecuteOnce.c)
 *     _TlgKeywordOn @ 0x18004B5F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18004D1E8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 */

char __fastcall RtlpLogCapabilityCheckLatency(_QWORD *a1, _QWORD *a2, char a3, char a4, char a5, char a6)
{
  struct _PEB *v6; // rax
  const struct _TlgProvider_t *v11; // rcx
  const GUID *v12; // r8
  const GUID *v13; // r9
  __int64 v14; // r10
  __int64 v15; // r10
  char v17; // [rsp+38h] [rbp-49h] BYREF
  char v18; // [rsp+39h] [rbp-48h] BYREF
  char v19; // [rsp+3Ah] [rbp-47h] BYREF
  char v20; // [rsp+3Bh] [rbp-46h] BYREF
  __int64 v21; // [rsp+40h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  __int64 *v23; // [rsp+68h] [rbp-19h]
  int v24; // [rsp+70h] [rbp-11h]
  int v25; // [rsp+74h] [rbp-Dh]
  char *v26; // [rsp+78h] [rbp-9h]
  int v27; // [rsp+80h] [rbp-1h]
  int v28; // [rsp+84h] [rbp+3h]
  char *v29; // [rsp+88h] [rbp+7h]
  int v30; // [rsp+90h] [rbp+Fh]
  int v31; // [rsp+94h] [rbp+13h]
  char *v32; // [rsp+98h] [rbp+17h]
  int v33; // [rsp+A0h] [rbp+1Fh]
  int v34; // [rsp+A4h] [rbp+23h]
  char *v35; // [rsp+A8h] [rbp+27h]
  int v36; // [rsp+B0h] [rbp+2Fh]
  int v37; // [rsp+B4h] [rbp+33h]

  v6 = NtCurrentPeb();
  if ( v6->ProcessHeap )
  {
    LOBYTE(v6) = RtlRunOnceExecuteOnce(&RtlpCapChkTelemetryRunOnceCtx, RtlpCapChkTelemetryRunOnce, 0LL, 0LL);
    if ( a1 )
    {
      if ( a2 )
      {
        if ( *a1 )
        {
          if ( *a2 )
          {
            if ( RtlpPerformanceCounterFrequency )
            {
              if ( hProvider > 5u )
              {
                LOBYTE(v6) = TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL);
                if ( (_BYTE)v6 )
                {
                  v15 = v14 - *a1;
                  v25 = 0;
                  v28 = 0;
                  v31 = 0;
                  v34 = 0;
                  v17 = a3;
                  v18 = a4;
                  v37 = 0;
                  v21 = 1000000 * v15 / (__int64)v13;
                  v19 = a5;
                  v20 = a6;
                  v23 = &v21;
                  v26 = &v17;
                  v29 = &v18;
                  v32 = &v19;
                  v35 = &v20;
                  v24 = 8;
                  v27 = 1;
                  v30 = 1;
                  v33 = 1;
                  v36 = 1;
                  LOBYTE(v6) = TlgWrite(v11, &unk_18012C6D3, v12, v13, 7u, &pData);
                }
              }
            }
          }
        }
      }
    }
  }
  return (char)v6;
}
