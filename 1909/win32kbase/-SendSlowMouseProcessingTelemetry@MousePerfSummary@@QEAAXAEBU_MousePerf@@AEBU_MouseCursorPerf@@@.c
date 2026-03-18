/*
 * XREFs of ?SendSlowMouseProcessingTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@AEBU_MouseCursorPerf@@@Z @ 0x1C0191A1C
 * Callers:
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C0190084 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

void __fastcall MousePerfSummary::SendSlowMouseProcessingTelemetry(
        LARGE_INTEGER *this,
        const struct _MousePerf *a2,
        const struct _MouseCursorPerf *a3)
{
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v7; // r9
  __int64 v8; // [rsp+30h] [rbp-D0h] BYREF
  __int64 HighPart; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v11; // [rsp+60h] [rbp-A0h]
  __int64 v12; // [rsp+68h] [rbp-98h]
  const struct _MousePerf *v13; // [rsp+70h] [rbp-90h]
  __int64 v14; // [rsp+78h] [rbp-88h]
  char *v15; // [rsp+80h] [rbp-80h]
  __int64 v16; // [rsp+88h] [rbp-78h]
  char *v17; // [rsp+90h] [rbp-70h]
  __int64 v18; // [rsp+98h] [rbp-68h]
  char *v19; // [rsp+A0h] [rbp-60h]
  __int64 v20; // [rsp+A8h] [rbp-58h]
  char *v21; // [rsp+B0h] [rbp-50h]
  __int64 v22; // [rsp+B8h] [rbp-48h]
  const struct _MouseCursorPerf *v23; // [rsp+C0h] [rbp-40h]
  __int64 v24; // [rsp+C8h] [rbp-38h]
  char *v25; // [rsp+D0h] [rbp-30h]
  __int64 v26; // [rsp+D8h] [rbp-28h]
  char *v27; // [rsp+E0h] [rbp-20h]
  __int64 v28; // [rsp+E8h] [rbp-18h]
  char *v29; // [rsp+F0h] [rbp-10h]
  __int64 v30; // [rsp+F8h] [rbp-8h]
  __int64 v31; // [rsp+100h] [rbp+0h]
  __int64 v32; // [rsp+108h] [rbp+8h]
  LARGE_INTEGER *v33; // [rsp+110h] [rbp+10h]
  __int64 v34; // [rsp+118h] [rbp+18h]
  LARGE_INTEGER *v35; // [rsp+120h] [rbp+20h]
  __int64 v36; // [rsp+128h] [rbp+28h]
  LARGE_INTEGER *v37; // [rsp+130h] [rbp+30h]
  __int64 v38; // [rsp+138h] [rbp+38h]
  LARGE_INTEGER *v39; // [rsp+140h] [rbp+40h]
  __int64 v40; // [rsp+148h] [rbp+48h]
  LARGE_INTEGER *v41; // [rsp+150h] [rbp+50h]
  __int64 v42; // [rsp+158h] [rbp+58h]
  LARGE_INTEGER *v43; // [rsp+160h] [rbp+60h]
  __int64 v44; // [rsp+168h] [rbp+68h]
  __int64 *p_HighPart; // [rsp+170h] [rbp+70h]
  __int64 v46; // [rsp+178h] [rbp+78h]

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - this[44].QuadPart)) / gliQpcFreq.QuadPart > 0x927C0
    && (this[35].QuadPart > 0x32uLL
     || this[36].QuadPart > 0x64uLL
     || this[37].QuadPart > 0x1F4uLL
     || this[38].QuadPart > 0x64uLL
     || this[39].QuadPart > 0xC8uLL
     || this[40].QuadPart > 0x190uLL
     || this[41].QuadPart > 0x32uLL) )
  {
    if ( hProvider > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
      {
        v8 = 0x2000000LL;
        v11 = &v8;
        v15 = (char *)a2 + 8;
        v17 = (char *)a2 + 16;
        v19 = (char *)a2 + 24;
        v21 = (char *)a2 + 32;
        v25 = (char *)a3 + 8;
        v27 = (char *)a3 + 16;
        v29 = (char *)a3 + 24;
        v33 = this + 36;
        v35 = this + 37;
        v37 = this + 38;
        v39 = this + 39;
        v41 = this + 40;
        v43 = this + 41;
        HighPart = this[42].HighPart;
        p_HighPart = &HighPart;
        v12 = 8LL;
        v13 = a2;
        v14 = 8LL;
        v16 = 8LL;
        v18 = 8LL;
        v20 = 8LL;
        v22 = 8LL;
        v23 = a3;
        v24 = 8LL;
        v26 = 8LL;
        v28 = 8LL;
        v30 = 8LL;
        v31 = v7;
        v32 = 8LL;
        v34 = 8LL;
        v36 = 8LL;
        v38 = 8LL;
        v40 = 8LL;
        v42 = 8LL;
        v44 = 8LL;
        v46 = 8LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01E66D1, 0LL, 0LL, 0x14u, &pData);
      }
    }
    this[44] = PerformanceCounter;
  }
}
