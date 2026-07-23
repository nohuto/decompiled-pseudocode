/*
 * XREFs of PpmSnapPerformanceAccumulation @ 0x14005BDC0
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x14005B980 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x14010BAC0 (PpmPerfSnapDeliveredPerformance.c)
 *     PoGetPerfStateAndParkingInfo @ 0x140131D74 (PoGetPerfStateAndParkingInfo.c)
 *     PpmResetPerfTimes @ 0x14017690C (PpmResetPerfTimes.c)
 *     PpmCapturePerformanceDistributionCallback @ 0x1402E3240 (PpmCapturePerformanceDistributionCallback.c)
 *     PpmGetThroughputInfoCallback @ 0x1402E3490 (PpmGetThroughputInfoCallback.c)
 * Callees:
 *     PpmUpdatePerformanceFeedback @ 0x14005FA00 (PpmUpdatePerformanceFeedback.c)
 *     PpmConvertTime @ 0x1400A7C54 (PpmConvertTime.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

char __fastcall PpmSnapPerformanceAccumulation(
        LARGE_INTEGER *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        char a4,
        LARGE_INTEGER *a5)
{
  LARGE_INTEGER *v5; // r14
  LARGE_INTEGER v6; // r12
  LARGE_INTEGER v10; // rsi
  LARGE_INTEGER PerformanceCounter; // r15
  signed __int64 QuadPart; // rax
  signed __int64 v13; // rtt
  char result; // al
  __int64 v15; // r8
  LARGE_INTEGER v16; // r9
  LARGE_INTEGER v17; // r11
  LARGE_INTEGER v18; // r8
  LARGE_INTEGER v19; // r10
  __int64 v20; // rax
  signed __int64 v21; // rax
  signed __int64 v22; // rtt
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rcx
  LARGE_INTEGER v26; // rcx
  LARGE_INTEGER v27; // rax
  unsigned __int64 v29; // [rsp+38h] [rbp-70h]
  char v30; // [rsp+48h] [rbp-60h] BYREF

  v5 = 0LL;
  v6 = a1[3021];
  v10.QuadPart = 0LL;
  if ( a3 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    _m_prefetchw(&a1[2980]);
    QuadPart = a1[2980].QuadPart;
    do
    {
      v13 = QuadPart;
      QuadPart = _InterlockedCompareExchange64((volatile signed __int64 *)&a1[2980], QuadPart, QuadPart);
    }
    while ( v13 != QuadPart );
    v10.QuadPart = QuadPart;
    if ( QuadPart )
    {
      if ( a1[3003].LowPart == 3 )
      {
        v27 = a1[3082];
        v10.QuadPart = *(_QWORD *)(v27.QuadPart + 8LL * DWORD2(xmmword_1404DEB68)) >> 1;
        if ( (*(_QWORD *)(v27.QuadPart + 8LL * DWORD2(xmmword_1404DEB68)) & 1) == 0 )
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
    v23 = __rdtsc();
    if ( (a1[3156].QuadPart & 0x8000000000LL) != 0 )
      v24 = __readmsr(0xDB2u);
    else
      v24 = 0LL;
    v29 = v24;
    v25 = PerformanceCounter.QuadPart - a1[2990].QuadPart;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&a1[2992], v25);
    if ( (a1[3156].QuadPart & 0x8000000000LL) != 0 )
    {
      a1[3001].QuadPart += PpmConvertTime(v25, v23 - a1[2986].QuadPart, v24 - a1[3000].QuadPart, 0x8000000000LL);
      v24 = v29;
    }
    v26 = a1[2986];
    a1[2990] = PerformanceCounter;
    if ( v23 > v26.QuadPart )
      a1[2987].QuadPart += v23 - v26.QuadPart;
    a1[2986].QuadPart = v23;
    v5 = 0LL;
    if ( (a1[3156].QuadPart & 0x8000000000LL) != 0 )
      a1[3000].QuadPart = v24;
  }
  memset(a5, 0, 0x58uLL);
  a5[7].QuadPart = a1[2941].QuadPart + a1[2951].QuadPart;
  if ( v6.QuadPart )
  {
    a5[8] = a1[2938];
    a5[9] = a1[2939];
  }
  if ( !a3 )
    _enable();
  if ( a1[3003].LowPart == 3 )
    v5 = (LARGE_INTEGER *)&v30;
  result = PpmUpdatePerformanceFeedback((_DWORD)a1, a2, a3, 0, (__int64)v5);
  if ( result )
  {
    if ( a4 && PopSnapEnergyCounters )
    {
      LOBYTE(v15) = 1;
      PopSnapEnergyCounters((unsigned int)a1[4].HighPart, a3, v15);
    }
    if ( v5 )
    {
      v18 = *v5;
      v16 = v5[1];
      v17 = v5[2];
      v19.QuadPart = 0LL;
    }
    else
    {
      v16 = a1[2979];
      v17 = a1[2987];
      v18 = v10;
      if ( PerformanceCounter.QuadPart > (unsigned __int64)v10.QuadPart )
        v18 = PerformanceCounter;
      v19 = v10;
    }
    if ( a1[2988].QuadPart )
    {
      v20 = a1[2993].QuadPart;
    }
    else if ( a1[2989].QuadPart )
    {
      v20 = a1[2994].QuadPart;
    }
    else
    {
      v20 = 100 * a1[2991].QuadPart;
    }
    a5[3].QuadPart = v20;
    if ( a1[2989].QuadPart )
      v20 = a1[2994].QuadPart;
    a5[4].QuadPart = v20;
    a5[5] = a1[2996];
    a5[2] = a1[3001];
    a5[10].LowPart = a1[1475].HighPart;
    if ( !a3 )
    {
      if ( !v5 )
        v16.QuadPart += a1[2978].QuadPart;
      goto LABEL_33;
    }
    _m_prefetchw(&a1[2980]);
    v21 = a1[2980].QuadPart;
    do
    {
      v22 = v21;
      v21 = _InterlockedCompareExchange64((volatile signed __int64 *)&a1[2980], v21, v21);
    }
    while ( v22 != v21 );
    if ( v21 )
    {
      if ( a1[3003].LowPart == 3 )
      {
        v21 = *(_QWORD *)(a1[3082].QuadPart + 8LL * DWORD2(xmmword_1404DEB68)) >> 1;
        if ( (*(_QWORD *)(a1[3082].QuadPart + 8LL * DWORD2(xmmword_1404DEB68)) & 1) == 0 )
          v21 = 0LL;
      }
    }
    if ( v10.QuadPart == v21 )
    {
      if ( !v5 )
        v16.QuadPart += v18.QuadPart - v19.QuadPart;
LABEL_33:
      *a5 = v18;
      result = 1;
      a5[6] = v17;
      a5[1].QuadPart = v18.QuadPart - v16.QuadPart;
      return result;
    }
    return 0;
  }
  return result;
}
