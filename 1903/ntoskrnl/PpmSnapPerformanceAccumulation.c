/*
 * XREFs of PpmSnapPerformanceAccumulation @ 0x140035500
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140035810 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmPerfAction @ 0x1400BC600 (PpmPerfAction.c)
 *     PpmResetPerfTimes @ 0x14018040C (PpmResetPerfTimes.c)
 *     PpmCapturePerformanceDistributionCallback @ 0x1402FFD80 (PpmCapturePerformanceDistributionCallback.c)
 *     PpmGetThroughputInfoCallback @ 0x1402FFFD0 (PpmGetThroughputInfoCallback.c)
 * Callees:
 *     PpmConvertTime @ 0x140004E24 (PpmConvertTime.c)
 *     PpmUpdatePerformanceFeedback @ 0x140033D20 (PpmUpdatePerformanceFeedback.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

char __fastcall PpmSnapPerformanceAccumulation(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        char a4,
        LARGE_INTEGER *a5)
{
  __int64 v5; // r12
  __int64 *v6; // r15
  LARGE_INTEGER v10; // rbp
  LARGE_INTEGER PerformanceCounter; // rsi
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  char result; // al
  __int64 v15; // r8
  LARGE_INTEGER v16; // r10
  __int64 v17; // r8
  LARGE_INTEGER v18; // r9
  __int64 v19; // rax
  signed __int64 v20; // rax
  signed __int64 v21; // rtt
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v28; // [rsp+38h] [rbp-70h]
  _QWORD v29[3]; // [rsp+48h] [rbp-60h] BYREF

  v5 = *(_QWORD *)(a1 + 24168);
  v6 = 0LL;
  memset(v29, 0, sizeof(v29));
  v10.QuadPart = 0LL;
  if ( a3 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    _m_prefetchw((const void *)(a1 + 23840));
    v12 = *(_QWORD *)(a1 + 23840);
    do
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 23840), v12, v12);
    }
    while ( v13 != v12 );
    v10.QuadPart = v12;
    if ( v12 )
    {
      if ( *(_DWORD *)(a1 + 24024) == 3 )
      {
        v26 = *(_QWORD *)(a1 + 24656);
        v10.QuadPart = *(_QWORD *)(v26 + 8LL * DWORD2(xmmword_14050B170)) >> 1;
        if ( (*(_QWORD *)(v26 + 8LL * DWORD2(xmmword_14050B170)) & 1) == 0 )
          v10.QuadPart = 0LL;
      }
    }
    if ( !v10.QuadPart )
      return 0;
  }
  else
  {
    _disable();
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v22 = __rdtsc();
    if ( (*(_QWORD *)(a1 + 25248) & 0x8000000000LL) != 0 )
      v23 = __readmsr(0xDB2u);
    else
      v23 = 0LL;
    v28 = v23;
    v24 = PerformanceCounter.QuadPart - *(_QWORD *)(a1 + 23920);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 23936), v24);
    if ( (*(_QWORD *)(a1 + 25248) & 0x8000000000LL) != 0 )
    {
      *(_QWORD *)(a1 + 24008) += PpmConvertTime(v24, v22 - *(_QWORD *)(a1 + 23888), v23 - *(_QWORD *)(a1 + 24000));
      v23 = v28;
    }
    v25 = *(_QWORD *)(a1 + 23888);
    *(LARGE_INTEGER *)(a1 + 23920) = PerformanceCounter;
    if ( v22 > v25 )
      *(_QWORD *)(a1 + 23896) += v22 - v25;
    *(_QWORD *)(a1 + 23888) = v22;
    v6 = 0LL;
    if ( (*(_QWORD *)(a1 + 25248) & 0x8000000000LL) != 0 )
      *(_QWORD *)(a1 + 24000) = v23;
  }
  memset(a5, 0, 0x58uLL);
  a5[7].QuadPart = *(_QWORD *)(a1 + 23528) + *(_QWORD *)(a1 + 23608);
  if ( v5 )
  {
    a5[8] = *(LARGE_INTEGER *)(a1 + 23504);
    a5[9] = *(LARGE_INTEGER *)(a1 + 23512);
  }
  if ( !a3 )
    _enable();
  if ( *(_DWORD *)(a1 + 24024) == 3 )
    v6 = v29;
  result = PpmUpdatePerformanceFeedback(a1, a2, a3, 0, v6);
  if ( result )
  {
    if ( a4 && PopSnapEnergyCounters )
    {
      LOBYTE(v15) = 1;
      PopSnapEnergyCounters(*(unsigned int *)(a1 + 36), a3, v15);
    }
    if ( v6 )
    {
      PerformanceCounter.QuadPart = *v6;
      v17 = v6[1];
      v18.QuadPart = v6[2];
      v16.QuadPart = 0LL;
    }
    else
    {
      v16 = v10;
      if ( PerformanceCounter.QuadPart <= (unsigned __int64)v10.QuadPart )
        PerformanceCounter = v10;
      v17 = *(_QWORD *)(a1 + 23832);
      v18 = *(LARGE_INTEGER *)(a1 + 23896);
    }
    if ( *(_QWORD *)(a1 + 23904) )
    {
      v19 = *(_QWORD *)(a1 + 23944);
    }
    else if ( *(_QWORD *)(a1 + 23912) )
    {
      v19 = *(_QWORD *)(a1 + 23952);
    }
    else
    {
      v19 = 100LL * *(_QWORD *)(a1 + 23928);
    }
    a5[3].QuadPart = v19;
    if ( *(_QWORD *)(a1 + 23912) )
      v19 = *(_QWORD *)(a1 + 23952);
    a5[4].QuadPart = v19;
    a5[5] = *(LARGE_INTEGER *)(a1 + 23968);
    a5[2] = *(LARGE_INTEGER *)(a1 + 24008);
    a5[10].LowPart = *(_DWORD *)(a1 + 11804);
    if ( !a3 )
    {
      if ( !v6 )
        v17 += *(_QWORD *)(a1 + 23824);
      goto LABEL_33;
    }
    _m_prefetchw((const void *)(a1 + 23840));
    v20 = *(_QWORD *)(a1 + 23840);
    do
    {
      v21 = v20;
      v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 23840), v20, v20);
    }
    while ( v21 != v20 );
    if ( v20 )
    {
      if ( *(_DWORD *)(a1 + 24024) == 3 )
      {
        v20 = *(_QWORD *)(*(_QWORD *)(a1 + 24656) + 8LL * DWORD2(xmmword_14050B170)) >> 1;
        if ( (*(_QWORD *)(*(_QWORD *)(a1 + 24656) + 8LL * DWORD2(xmmword_14050B170)) & 1) == 0 )
          v20 = 0LL;
      }
    }
    if ( v10.QuadPart == v20 )
    {
      if ( !v6 )
        v17 += PerformanceCounter.QuadPart - v16.QuadPart;
LABEL_33:
      *a5 = PerformanceCounter;
      result = 1;
      a5[6] = v18;
      a5[1].QuadPart = PerformanceCounter.QuadPart - v17;
      return result;
    }
    return 0;
  }
  return result;
}
