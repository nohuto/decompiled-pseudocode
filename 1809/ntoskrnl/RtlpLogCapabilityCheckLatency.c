/*
 * XREFs of RtlpLogCapabilityCheckLatency @ 0x14089B5D8
 * Callers:
 *     RtlCapabilityCheck @ 0x140894B20 (RtlCapabilityCheck.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlRunOnceExecuteOnce @ 0x14060E910 (RtlRunOnceExecuteOnce.c)
 */

char __fastcall RtlpLogCapabilityCheckLatency(_QWORD *a1, _QWORD *a2, char a3, char a4, char a5, char a6)
{
  char result; // al
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // r11
  char v14; // [rsp+38h] [rbp-49h] BYREF
  char v15; // [rsp+39h] [rbp-48h] BYREF
  char v16; // [rsp+3Ah] [rbp-47h] BYREF
  char v17; // [rsp+3Bh] [rbp-46h] BYREF
  __int64 v18; // [rsp+40h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  __int64 *v20; // [rsp+68h] [rbp-19h]
  int v21; // [rsp+70h] [rbp-11h]
  int v22; // [rsp+74h] [rbp-Dh]
  char *v23; // [rsp+78h] [rbp-9h]
  int v24; // [rsp+80h] [rbp-1h]
  int v25; // [rsp+84h] [rbp+3h]
  char *v26; // [rsp+88h] [rbp+7h]
  int v27; // [rsp+90h] [rbp+Fh]
  int v28; // [rsp+94h] [rbp+13h]
  char *v29; // [rsp+98h] [rbp+17h]
  int v30; // [rsp+A0h] [rbp+1Fh]
  int v31; // [rsp+A4h] [rbp+23h]
  char *v32; // [rsp+A8h] [rbp+27h]
  int v33; // [rsp+B0h] [rbp+2Fh]
  int v34; // [rsp+B4h] [rbp+33h]

  result = RtlRunOnceExecuteOnce(
             &RtlpCapChkTelemetryRunOnceCtx,
             (PRTL_RUN_ONCE_INIT_FN)RtlpCapChkTelemetryRunOnce,
             0LL,
             0LL);
  if ( a1 && a2 && *a1 && *a2 && RtlpPerformanceCounterFrequency.QuadPart && stru_140402B10.LevelPlus1 > 5 )
  {
    result = TlgKeywordOn(&stru_140402B10, 0x200000000000uLL);
    if ( result )
    {
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v14 = a3;
      v15 = a4;
      v34 = 0;
      v18 = 1000000 * (v12 - v13) / v11;
      v16 = a5;
      v17 = a6;
      v20 = &v18;
      v23 = &v14;
      v26 = &v15;
      v29 = &v16;
      v32 = &v17;
      v21 = 8;
      v24 = 1;
      v27 = 1;
      v30 = 1;
      v33 = 1;
      return TlgWrite(&stru_140402B10, &unk_140373B8C, 0LL, 0LL, 7u, &pData);
    }
  }
  return result;
}
