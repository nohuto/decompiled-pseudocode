/*
 * XREFs of StorpTelemetrySendUnitPerfData @ 0x1C0006510
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C0002BC0 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C00081B4 (RaidAllocatePool.c)
 *     StorpTelemetryLogUnitPerfDataMeasures @ 0x1C00117AC (StorpTelemetryLogUnitPerfDataMeasures.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     McTemplateK0quuujjqzqssszsxuxxqqxxxxxxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx @ 0x1C0028838 (McTemplateK0quuujjqzqssszsxuxxqqxxxxxxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.c)
 *     memmove @ 0x1C002C080 (memmove.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 *     StorpTelemetryLogUnitPerfDataCriticalData @ 0x1C004FD70 (StorpTelemetryLogUnitPerfDataCriticalData.c)
 */

__int64 __fastcall StorpTelemetrySendUnitPerfData(__int64 a1)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  _QWORD *Pool; // r14
  _QWORD *v5; // r15
  __int64 v6; // r12
  __int64 v7; // r13
  unsigned int v8; // ebx
  LARGE_INTEGER v9; // rax
  LARGE_INTEGER v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r10
  const void *v14; // rdx
  unsigned int i; // r9d
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r10
  char *v19; // rcx
  _QWORD *v20; // r9
  signed __int64 v21; // r10
  signed __int64 v22; // r11
  __int64 v23; // r12
  size_t v24; // r13
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rax
  void *v28; // rax
  __int64 v29; // rdx
  unsigned int v30; // r9d
  _QWORD *v31; // r10
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned __int16 v36; // dx
  unsigned __int64 *v37; // rcx
  unsigned __int64 v38; // rax
  bool v39; // cc
  __int64 v40; // r12
  __int64 v41; // r13
  __int64 v42; // xmm1_8
  __int64 v43; // rdi
  void *v44; // rdi
  __int64 v45; // rdi
  void *v46; // rbx
  unsigned __int64 *p_Logger; // r9
  __int64 v48; // rdi
  size_t Size; // [rsp+258h] [rbp-80h]
  void *v51; // [rsp+260h] [rbp-78h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+268h] [rbp-70h] BYREF
  __int64 v53; // [rsp+270h] [rbp-68h]
  __int64 v54; // [rsp+278h] [rbp-60h]
  __int128 v55; // [rsp+280h] [rbp-58h]
  __int64 v56; // [rsp+290h] [rbp-48h]
  _QWORD v57[44]; // [rsp+298h] [rbp-40h] BYREF

  memset(v57, 0, sizeof(v57));
  v2 = (unsigned int)qword_1C0061560;
  v3 = 0LL;
  v53 = 0LL;
  Pool = 0LL;
  v51 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v54 = 0LL;
  if ( !*(_QWORD *)(a1 + 2224) )
  {
    v8 = -1073741823;
    goto LABEL_77;
  }
  Pool = (_QWORD *)RaidAllocatePool(512LL, (unsigned int)::Size, 1700028754LL, *(_QWORD *)(a1 + 8));
  if ( !Pool
    || (v5 = (_QWORD *)RaidAllocatePool(512LL, (unsigned int)(24 * v2), 1700028754LL, *(_QWORD *)(a1 + 8))) == 0LL )
  {
    v8 = -1073741801;
    goto LABEL_77;
  }
  if ( UseQPCTime )
    v9 = KeQueryPerformanceCounter(&PerformanceFrequency);
  else
    v9.QuadPart = KeQueryUnbiasedInterruptTime();
  v10 = v9;
  if ( v9.QuadPart <= 0 || (v11 = *(_QWORD *)(a1 + 2232), v9.QuadPart >= v11) )
    v12 = v9.QuadPart - *(_QWORD *)(a1 + 2232);
  else
    v12 = v9.QuadPart - v11 - 1;
  if ( UseQPCTime )
  {
    v13 = 0LL;
    if ( PerformanceFrequency.QuadPart && v12 )
      v13 = 10000
          * (1000 * (v12 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
          / PerformanceFrequency.QuadPart
          + 10000
          * (1000 * (v12 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
           + 1000 * (v12 / PerformanceFrequency.QuadPart));
  }
  else
  {
    v13 = v12;
  }
  qword_1C0061570 = v10.QuadPart;
  v14 = *(const void **)(a1 + 2224);
  *(LARGE_INTEGER *)(a1 + 2232) = v10;
  v57[0] = v13;
  memmove(Pool, v14, (unsigned int)::Size);
  for ( i = 1; i < g_RaidNumberProcessors; ++i )
  {
    if ( (_DWORD)v2 )
    {
      v16 = Pool + 1;
      v17 = i * HIDWORD(qword_1C0061560);
      v18 = v2;
      do
      {
        *(v16 - 1) += *(_QWORD *)((char *)v16 + v17 - 8);
        *v16 += *(_QWORD *)((char *)v16 + v17);
        v16[1] += *(_QWORD *)((char *)v16 + v17 + 8);
        v16 += 3;
        --v18;
      }
      while ( v18 );
    }
  }
  memset(v5, 0, (unsigned int)(24 * v2));
  v19 = *(char **)(a1 + 2240);
  Size = 0LL;
  if ( (_DWORD)v2 )
  {
    v20 = v19 + 8;
    v21 = (char *)Pool - v19;
    v22 = (char *)v5 - v19;
    v23 = v2;
    v24 = 0LL;
    do
    {
      v25 = *(_QWORD *)((char *)v20 + v21 - 8) - *(v20 - 1);
      *(_QWORD *)((char *)v20 + v22 - 8) = v25;
      v26 = *(_QWORD *)((char *)v20 + v21) - *v20;
      *(_QWORD *)((char *)v20 + v22) = v26;
      *(_QWORD *)((char *)v20 + v22 + 8) = *(_QWORD *)((char *)v20 + v21 + 8) - v20[1];
      v20 += 3;
      v24 += v26 + v25;
      --v23;
    }
    while ( v23 );
    v19 = *(char **)(a1 + 2240);
    v6 = v53;
    Size = v24;
    v7 = v54;
  }
  memmove(v19, Pool, HIDWORD(qword_1C0061560));
  v27 = *(_QWORD *)(a1 + 152);
  if ( v27 )
  {
    v28 = (void *)(v27 + 90);
  }
  else
  {
    v29 = *(_QWORD *)(a1 + 144);
    if ( !v29 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 544LL) + 184LL) & 0x40) == 0 )
      goto LABEL_33;
    v28 = (void *)(v29 + 41);
  }
  v51 = v28;
LABEL_33:
  if ( Size )
  {
    v57[39] = 0LL;
    if ( (_WORD)TelemetryPerfContext )
    {
      if ( WORD1(TelemetryPerfContext) )
      {
        v30 = 0;
        if ( (_DWORD)v2 )
        {
          v31 = v5 + 2;
          do
          {
            if ( v30 >= dword_1C006152C && v30 < dword_1C006155C )
            {
              v32 = v30 / (unsigned __int16)TelemetryPerfContext;
              v33 = *(v31 - 2);
              v34 = *(v31 - 1);
              if ( (unsigned int)v32 >= 0xC )
                v32 = 11LL;
              v35 = 3 * v32;
              v57[v35 + 5] += *v31;
              v57[v35 + 3] += v33;
              v57[v35 + 4] += v34;
              v57[39] += v33 + v34;
            }
            ++v30;
            v31 += 3;
          }
          while ( v30 < (unsigned int)v2 );
        }
      }
    }
    if ( *(_QWORD *)(a1 + 2248) )
    {
      v36 = 0;
      do
      {
        v37 = (unsigned __int64 *)(*(_QWORD *)(a1 + 2248) + dword_1C0061578 * (unsigned int)v36);
        v38 = *v37;
        v39 = *v37 <= v3;
        *v37 = 0LL;
        if ( !v39 )
          v3 = v38;
        v6 += v37[1];
        v7 += v37[2];
        ++v36;
      }
      while ( v36 <= (unsigned __int16)g_RaidNumaHighestNodeNumber );
      *((_QWORD *)&v55 + 1) = v6;
      v40 = v6 - *(_QWORD *)(a1 + 2264);
      v56 = v7;
      v41 = v7 - *(_QWORD *)(a1 + 2272);
      v42 = v56;
      *(_QWORD *)&v55 = v3;
      v57[41] = v3;
      v57[42] = v40;
      *(_OWORD *)(a1 + 2256) = v55;
      v57[43] = v41;
      *(_QWORD *)(a1 + 2272) = v42;
    }
    v43 = *(_QWORD *)(a1 + 152);
    if ( v43 )
    {
      v44 = (void *)(v43 + 90);
    }
    else
    {
      v45 = *(_QWORD *)(a1 + 144);
      if ( v45 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 544LL) + 184LL) & 0x40) != 0 )
        v44 = (void *)(v45 + 41);
      else
        v44 = v51;
    }
    v57[2] = L"256us, 1ms, 4ms, 16ms, 64ms, 128ms, 256ms, 2000ms, 6000ms, 10000ms, 20000ms, 20000+ms";
    v57[40] = v5;
    LOBYTE(v57[1]) = 11;
    if ( !g_StorpTraceLoggingPerformanceHighResolutionTimer )
      LOBYTE(v57[1]) = 10;
    if ( g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == 1 && !g_StorpTraceLoggingCriticalEventEnabled
      || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
    {
      goto LABEL_69;
    }
    if ( (*(_DWORD *)(a1 + 1992) & 0x20) != 0 )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( *(_BYTE *)(a1 + 1996) )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( (*(_BYTE *)(a1 + 450) & 2) != 0 )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( g_StorpTraceLoggingCriticalEventEnabled )
      StorpTelemetryLogUnitPerfDataCriticalData(a1, v57, 1LL, 11LL);
    else
LABEL_69:
      StorpTelemetryLogUnitPerfDataMeasures(a1, v57, 1LL, 11LL);
    if ( (byte_1C00617E4 & 2) != 0 )
    {
      v46 = &unk_1C0054E5C;
      p_Logger = &stru_1C0055A88.Logger;
      if ( v44 )
        v46 = v44;
      v48 = *(_QWORD *)(a1 + 24);
      if ( *(_QWORD *)(v48 + 5272) )
        p_Logger = *(unsigned __int64 **)(v48 + 5272);
      McTemplateK0quuujjqzqssszsxuxxqqxxxxxxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx(
        a1 + 186,
        a1 + 169,
        a1 + 160,
        *(unsigned int *)(v48 + 56),
        *(_BYTE *)(a1 + 96),
        *(_BYTE *)(a1 + 97),
        *(_BYTE *)(a1 + 98),
        a1 + 1976,
        v48 + 5256,
        *(_DWORD *)(a1 + 3272),
        *(_QWORD *)(v48 + 4864),
        *(_DWORD *)(v48 + 4268),
        a1 + 160,
        a1 + 169,
        a1 + 186,
        p_Logger,
        v46);
    }
  }
  v8 = 0;
LABEL_77:
  *(_QWORD *)(a1 + 788) = 0LL;
  *(_QWORD *)(a1 + 2280) = 0LL;
  *(_QWORD *)(a1 + 2288) = 0LL;
  *(_QWORD *)(a1 + 2144) = 0LL;
  *(_QWORD *)(a1 + 2152) = 0LL;
  *(_QWORD *)(a1 + 2160) = 0LL;
  *(_QWORD *)(a1 + 2168) = 0LL;
  *(_QWORD *)(a1 + 2176) = 0LL;
  *(_QWORD *)(a1 + 2184) = 0LL;
  *(_QWORD *)(a1 + 2192) = 0LL;
  *(_QWORD *)(a1 + 2200) = 0LL;
  *(_DWORD *)(a1 + 2216) = 0;
  if ( Pool )
    ExFreePoolWithTag(Pool, 0x65546152u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x65546152u);
  return v8;
}
