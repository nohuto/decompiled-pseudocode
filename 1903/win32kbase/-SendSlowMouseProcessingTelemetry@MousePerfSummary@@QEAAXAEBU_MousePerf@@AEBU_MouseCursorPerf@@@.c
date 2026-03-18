/*
 * XREFs of ?SendSlowMouseProcessingTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@AEBU_MouseCursorPerf@@@Z @ 0x1C0193C80
 * Callers:
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C0192274 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C00983C4 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

void __fastcall MousePerfSummary::SendSlowMouseProcessingTelemetry(
        const WCHAR *this,
        const struct _MousePerf *a2,
        const struct _MouseCursorPerf *a3)
{
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v7; // r9
  int v8; // ecx
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v11; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v14; // [rsp+70h] [rbp-90h]
  __int64 v15; // [rsp+78h] [rbp-88h]
  const struct _MousePerf *v16; // [rsp+80h] [rbp-80h]
  __int64 v17; // [rsp+88h] [rbp-78h]
  char *v18; // [rsp+90h] [rbp-70h]
  __int64 v19; // [rsp+98h] [rbp-68h]
  char *v20; // [rsp+A0h] [rbp-60h]
  __int64 v21; // [rsp+A8h] [rbp-58h]
  char *v22; // [rsp+B0h] [rbp-50h]
  __int64 v23; // [rsp+B8h] [rbp-48h]
  char *v24; // [rsp+C0h] [rbp-40h]
  __int64 v25; // [rsp+C8h] [rbp-38h]
  const struct _MouseCursorPerf *v26; // [rsp+D0h] [rbp-30h]
  __int64 v27; // [rsp+D8h] [rbp-28h]
  char *v28; // [rsp+E0h] [rbp-20h]
  __int64 v29; // [rsp+E8h] [rbp-18h]
  char *v30; // [rsp+F0h] [rbp-10h]
  __int64 v31; // [rsp+F8h] [rbp-8h]
  char *v32; // [rsp+100h] [rbp+0h]
  __int64 v33; // [rsp+108h] [rbp+8h]
  __int64 v34; // [rsp+110h] [rbp+10h]
  __int64 v35; // [rsp+118h] [rbp+18h]
  char *v36; // [rsp+120h] [rbp+20h]
  __int64 v37; // [rsp+128h] [rbp+28h]
  char *v38; // [rsp+130h] [rbp+30h]
  __int64 v39; // [rsp+138h] [rbp+38h]
  char *v40; // [rsp+140h] [rbp+40h]
  __int64 v41; // [rsp+148h] [rbp+48h]
  char *v42; // [rsp+150h] [rbp+50h]
  __int64 v43; // [rsp+158h] [rbp+58h]
  char *v44; // [rsp+160h] [rbp+60h]
  __int64 v45; // [rsp+168h] [rbp+68h]
  char *v46; // [rsp+170h] [rbp+70h]
  __int64 v47; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+180h] [rbp+80h] BYREF
  int *v49; // [rsp+190h] [rbp+90h]
  __int64 v50; // [rsp+198h] [rbp+98h]
  int *v51; // [rsp+1A0h] [rbp+A0h]
  __int64 v52; // [rsp+1A8h] [rbp+A8h]
  __int64 *v53; // [rsp+1B0h] [rbp+B0h]
  __int64 v54; // [rsp+1B8h] [rbp+B8h]

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - *((_QWORD *)this + 49))) / gliQpcFreq.QuadPart > 0x927C0
    && (*((_QWORD *)this + 35) > 0x32uLL
     || *((_QWORD *)this + 36) > 0x64uLL
     || *((_QWORD *)this + 37) > 0x1F4uLL
     || *((_QWORD *)this + 38) > 0x64uLL
     || *((_QWORD *)this + 39) > 0xC8uLL
     || *((_QWORD *)this + 40) > 0x190uLL
     || *((_QWORD *)this + 41) > 0x32uLL) )
  {
    if ( hProvider > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
      {
        v11 = 0x2000000LL;
        v14 = &v11;
        v15 = 8LL;
        v18 = (char *)a2 + 8;
        v16 = a2;
        v20 = (char *)a2 + 16;
        v22 = (char *)a2 + 24;
        v24 = (char *)a2 + 32;
        v28 = (char *)a3 + 8;
        v30 = (char *)a3 + 16;
        v32 = (char *)a3 + 24;
        v36 = (char *)(this + 144);
        v38 = (char *)(this + 148);
        v40 = (char *)(this + 152);
        v42 = (char *)(this + 156);
        v44 = (char *)(this + 160);
        v46 = (char *)(this + 164);
        v17 = 8LL;
        v19 = 8LL;
        v21 = 8LL;
        v23 = 8LL;
        v25 = 8LL;
        v26 = a3;
        v27 = 8LL;
        v29 = 8LL;
        v31 = 8LL;
        v33 = 8LL;
        v34 = v7;
        v35 = 8LL;
        v37 = 8LL;
        v39 = 8LL;
        v41 = 8LL;
        v43 = 8LL;
        v45 = 8LL;
        v47 = 8LL;
        TlgCreateWsz(&pDesc, this + 168);
        v8 = *((_DWORD *)this + 92);
        v49 = &v9;
        v51 = &v10;
        v12 = *((int *)this + 94);
        v53 = &v12;
        v9 = v8;
        v50 = 4LL;
        v10 = v8;
        v52 = 4LL;
        v54 = 8LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01E8691, 0LL, 0LL, 0x17u, &pData);
      }
    }
    *((LARGE_INTEGER *)this + 49) = PerformanceCounter;
  }
}
