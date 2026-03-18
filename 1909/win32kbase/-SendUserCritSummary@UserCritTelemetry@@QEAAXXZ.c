/*
 * XREFs of ?SendUserCritSummary@UserCritTelemetry@@QEAAXXZ @ 0x1C0026B24
 * Callers:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00268F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

void __fastcall UserCritTelemetry::SendUserCritSummary(LARGE_INTEGER *this)
{
  LARGE_INTEGER PerformanceCounter; // rdi
  __int16 v3; // [rsp+30h] [rbp-79h] BYREF
  __int16 v4; // [rsp+32h] [rbp-77h] BYREF
  __int16 v5; // [rsp+34h] [rbp-75h] BYREF
  __int64 v6; // [rsp+38h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-69h] BYREF
  __int64 *v8; // [rsp+60h] [rbp-49h]
  __int64 v9; // [rsp+68h] [rbp-41h]
  __int16 *v10; // [rsp+70h] [rbp-39h]
  __int64 v11; // [rsp+78h] [rbp-31h]
  LARGE_INTEGER *v12; // [rsp+80h] [rbp-29h]
  __int64 v13; // [rsp+88h] [rbp-21h]
  __int16 *v14; // [rsp+90h] [rbp-19h]
  __int64 v15; // [rsp+98h] [rbp-11h]
  LARGE_INTEGER *v16; // [rsp+A0h] [rbp-9h]
  __int64 v17; // [rsp+A8h] [rbp-1h]
  __int16 *v18; // [rsp+B0h] [rbp+7h]
  __int64 v19; // [rsp+B8h] [rbp+Fh]
  LARGE_INTEGER *v20; // [rsp+C0h] [rbp+17h]
  __int64 v21; // [rsp+C8h] [rbp+1Fh]
  void *v22; // [rsp+D0h] [rbp+27h]
  __int64 v23; // [rsp+D8h] [rbp+2Fh]

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( (unsigned __int64)(1000000 * (PerformanceCounter.QuadPart - this[51].QuadPart)) / gliQpcFreq.QuadPart > 0x6B49D200 )
  {
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v6 = 0x1000000LL;
      v9 = 8LL;
      v8 = &v6;
      v10 = &v3;
      v14 = &v4;
      v16 = this + 15;
      v18 = &v5;
      v20 = this + 30;
      v22 = &UserCritTelemetry::versionNum;
      v3 = 15;
      v11 = 2LL;
      v12 = this;
      v13 = 120LL;
      v4 = 15;
      v15 = 2LL;
      v17 = 120LL;
      v5 = 15;
      v19 = 2LL;
      v21 = 120LL;
      v23 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01E19B2, 0LL, 0LL, 0xAu, &pData);
    }
    memset(this, 0, 0x168uLL);
    this[51] = PerformanceCounter;
  }
  if ( (unsigned __int64)(1000000 * (PerformanceCounter.QuadPart - this[52].QuadPart)) / gliQpcFreq.QuadPart > 0xF4240 )
  {
    if ( hProvider > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x10000000uLL) )
      {
        v9 = 8LL;
        v8 = (__int64 *)&this[45];
        v10 = (__int16 *)&this[46];
        v12 = this + 47;
        v14 = (__int16 *)&this[48];
        v16 = this + 49;
        v18 = (__int16 *)&this[50];
        v11 = 8LL;
        v13 = 8LL;
        v15 = 8LL;
        v17 = 8LL;
        v19 = 8LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01E192D, 0LL, 0LL, 8u, &pData);
      }
    }
    memset(&this[45], 0, 0x30uLL);
    this[52] = PerformanceCounter;
  }
}
