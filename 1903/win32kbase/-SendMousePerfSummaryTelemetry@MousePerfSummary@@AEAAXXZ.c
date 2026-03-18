/*
 * XREFs of ?SendMousePerfSummaryTelemetry@MousePerfSummary@@AEAAXXZ @ 0x1C01938B4
 * Callers:
 *     ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x1C0193700 (-CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     ?Reset@MousePerfSummary@@AEAAXXZ @ 0x1C01937E8 (-Reset@MousePerfSummary@@AEAAXXZ.c)
 */

void __fastcall MousePerfSummary::SendMousePerfSummaryTelemetry(MousePerfSummary *this)
{
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v3; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v4; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v5; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v6; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v7; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v8; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v9; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v10; // [rsp+68h] [rbp-98h] BYREF
  __int64 v11; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v13; // [rsp+A0h] [rbp-60h]
  __int64 v14; // [rsp+A8h] [rbp-58h]
  char *v15; // [rsp+B0h] [rbp-50h]
  __int64 v16; // [rsp+B8h] [rbp-48h]
  MousePerfSummary *v17; // [rsp+C0h] [rbp-40h]
  __int64 v18; // [rsp+C8h] [rbp-38h]
  char *v19; // [rsp+D0h] [rbp-30h]
  __int64 v20; // [rsp+D8h] [rbp-28h]
  __int64 *v21; // [rsp+E0h] [rbp-20h]
  __int64 v22; // [rsp+E8h] [rbp-18h]
  char *v23; // [rsp+F0h] [rbp-10h]
  __int64 v24; // [rsp+F8h] [rbp-8h]
  char *v25; // [rsp+100h] [rbp+0h]
  __int64 v26; // [rsp+108h] [rbp+8h]
  char *v27; // [rsp+110h] [rbp+10h]
  __int64 v28; // [rsp+118h] [rbp+18h]
  __int64 *v29; // [rsp+120h] [rbp+20h]
  __int64 v30; // [rsp+128h] [rbp+28h]
  char *v31; // [rsp+130h] [rbp+30h]
  __int64 v32; // [rsp+138h] [rbp+38h]
  char *v33; // [rsp+140h] [rbp+40h]
  __int64 v34; // [rsp+148h] [rbp+48h]
  char *v35; // [rsp+150h] [rbp+50h]
  __int64 v36; // [rsp+158h] [rbp+58h]
  __int64 *v37; // [rsp+160h] [rbp+60h]
  __int64 v38; // [rsp+168h] [rbp+68h]
  char *v39; // [rsp+170h] [rbp+70h]
  __int64 v40; // [rsp+178h] [rbp+78h]
  char *v41; // [rsp+180h] [rbp+80h]
  __int64 v42; // [rsp+188h] [rbp+88h]
  char *v43; // [rsp+190h] [rbp+90h]
  __int64 v44; // [rsp+198h] [rbp+98h]
  __int64 *v45; // [rsp+1A0h] [rbp+A0h]
  __int64 v46; // [rsp+1A8h] [rbp+A8h]
  char *v47; // [rsp+1B0h] [rbp+B0h]
  __int64 v48; // [rsp+1B8h] [rbp+B8h]
  char *v49; // [rsp+1C0h] [rbp+C0h]
  __int64 v50; // [rsp+1C8h] [rbp+C8h]
  char *v51; // [rsp+1D0h] [rbp+D0h]
  __int64 v52; // [rsp+1D8h] [rbp+D8h]
  __int64 *v53; // [rsp+1E0h] [rbp+E0h]
  __int64 v54; // [rsp+1E8h] [rbp+E8h]
  char *v55; // [rsp+1F0h] [rbp+F0h]
  __int64 v56; // [rsp+1F8h] [rbp+F8h]
  char *v57; // [rsp+200h] [rbp+100h]
  __int64 v58; // [rsp+208h] [rbp+108h]
  char *v59; // [rsp+210h] [rbp+110h]
  __int64 v60; // [rsp+218h] [rbp+118h]
  __int64 *v61; // [rsp+220h] [rbp+120h]
  __int64 v62; // [rsp+228h] [rbp+128h]
  char *v63; // [rsp+230h] [rbp+130h]
  __int64 v64; // [rsp+238h] [rbp+138h]
  char *v65; // [rsp+240h] [rbp+140h]
  __int64 v66; // [rsp+248h] [rbp+148h]
  char *v67; // [rsp+250h] [rbp+150h]
  __int64 v68; // [rsp+258h] [rbp+158h]
  __int64 *v69; // [rsp+260h] [rbp+160h]
  __int64 v70; // [rsp+268h] [rbp+168h]
  __int64 *v71; // [rsp+270h] [rbp+170h]
  __int64 v72; // [rsp+278h] [rbp+178h]

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - *((_QWORD *)this + 48))) / gliQpcFreq.QuadPart > 0x927C0
    || *((_DWORD *)this + 94) != *((_DWORD *)this + 93) )
  {
    if ( hProvider > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
      {
        v3 = 0x1000000LL;
        v13 = &v3;
        v15 = (char *)this + 8;
        v19 = (char *)this + 16;
        v4 = *((unsigned int *)this + 8);
        v21 = &v4;
        v23 = (char *)this + 48;
        v25 = (char *)this + 40;
        v27 = (char *)this + 56;
        v5 = *((unsigned int *)this + 18);
        v29 = &v5;
        v31 = (char *)this + 88;
        v33 = (char *)this + 80;
        v35 = (char *)this + 96;
        v6 = *((unsigned int *)this + 28);
        v37 = &v6;
        v39 = (char *)this + 128;
        v41 = (char *)this + 120;
        v43 = (char *)this + 136;
        v7 = *((unsigned int *)this + 38);
        v45 = &v7;
        v47 = (char *)this + 168;
        v49 = (char *)this + 160;
        v51 = (char *)this + 176;
        v8 = *((unsigned int *)this + 48);
        v53 = &v8;
        v55 = (char *)this + 208;
        v57 = (char *)this + 200;
        v59 = (char *)this + 216;
        v14 = 8LL;
        v16 = 8LL;
        v17 = this;
        v18 = 8LL;
        v20 = 8LL;
        v22 = 8LL;
        v24 = 8LL;
        v26 = 8LL;
        v28 = 8LL;
        v30 = 8LL;
        v32 = 8LL;
        v34 = 8LL;
        v36 = 8LL;
        v38 = 8LL;
        v40 = 8LL;
        v42 = 8LL;
        v44 = 8LL;
        v46 = 8LL;
        v48 = 8LL;
        v50 = 8LL;
        v52 = 8LL;
        v54 = 8LL;
        v56 = 8LL;
        v58 = 8LL;
        v9 = *((unsigned int *)this + 58);
        v61 = &v9;
        v63 = (char *)this + 248;
        v65 = (char *)this + 240;
        v67 = (char *)this + 256;
        v10 = *((unsigned int *)this + 68);
        v69 = &v10;
        v11 = *((int *)this + 94);
        v71 = &v11;
        v60 = 8LL;
        v62 = 8LL;
        v64 = 8LL;
        v66 = 8LL;
        v68 = 8LL;
        v70 = 8LL;
        v72 = 8LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01E8858, 0LL, 0LL, 0x20u, &pData);
      }
    }
    MousePerfSummary::Reset(this);
    *((_DWORD *)this + 93) = *((_DWORD *)this + 94);
    *((LARGE_INTEGER *)this + 48) = PerformanceCounter;
  }
}
