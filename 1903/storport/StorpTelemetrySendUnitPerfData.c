/*
 * XREFs of StorpTelemetrySendUnitPerfData @ 0x1C000C98C
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C000C660 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006800 (RaidAllocatePool.c)
 *     McTemplateK0quuujjqzqsssxuxxqqxxxxxxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx @ 0x1C000D620 (McTemplateK0quuujjqzqsssxuxxqqxxxxxxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.c)
 *     StorpTelemetryLogUnitPerfDataMeasures @ 0x1C000E0D8 (StorpTelemetryLogUnitPerfDataMeasures.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     memmove @ 0x1C0023500 (memmove.c)
 *     memset @ 0x1C0023840 (memset.c)
 *     StorpTelemetryLogUnitPerfDataCriticalData @ 0x1C004E078 (StorpTelemetryLogUnitPerfDataCriticalData.c)
 */

__int64 __fastcall StorpTelemetrySendUnitPerfData(__int64 a1)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // r14
  _QWORD *Pool; // rdi
  _QWORD *v5; // r15
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // r9
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
  __int64 v23; // r13
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  _QWORD *v27; // r9
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int16 v30; // dx
  unsigned __int64 *v31; // rcx
  unsigned __int64 v32; // rax
  bool v33; // cc
  __int64 v34; // r12
  __int64 v35; // r13
  __int64 v36; // xmm1_8
  __int64 v37; // rcx
  unsigned __int16 v38; // ax
  size_t v39; // r8
  __int64 v40; // r8
  unsigned int v41; // esi
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+238h] [rbp-80h] BYREF
  __int64 v44; // [rsp+240h] [rbp-78h]
  size_t Size; // [rsp+248h] [rbp-70h]
  __int128 v46; // [rsp+250h] [rbp-68h]
  __int64 v47; // [rsp+260h] [rbp-58h]
  _QWORD v48[80]; // [rsp+268h] [rbp-50h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  memset(v48, 0, sizeof(v48));
  v2 = (unsigned int)qword_1C0061480;
  v3 = 0LL;
  v44 = 0LL;
  Pool = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( *(_QWORD *)(a1 + 1952) )
  {
    Pool = RaidAllocatePool(NonPagedPoolNx, (unsigned int)::Size, 0x65546152u, *(_QWORD *)(a1 + 8));
    if ( Pool
      && (v8 = *(_QWORD *)(a1 + 8),
          Size = (unsigned int)(24 * v2),
          (v5 = RaidAllocatePool(NonPagedPoolNx, Size, 0x65546152u, v8)) != 0LL) )
    {
      if ( UseQPCTime )
        v9 = KeQueryPerformanceCounter(&PerformanceFrequency);
      else
        v9.QuadPart = KeQueryUnbiasedInterruptTime();
      v10 = v9;
      if ( v9.QuadPart > 0 && (v11 = *(_QWORD *)(a1 + 1960), v9.QuadPart < v11) )
        v12 = v9.QuadPart - v11 - 1;
      else
        v12 = v9.QuadPart - *(_QWORD *)(a1 + 1960);
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
      qword_1C0061490 = v10.QuadPart;
      v14 = *(const void **)(a1 + 1952);
      *(LARGE_INTEGER *)(a1 + 1960) = v10;
      v48[36] = v13;
      memmove(Pool, v14, (unsigned int)::Size);
      for ( i = 1; i < g_RaidNumberProcessors; ++i )
      {
        if ( (_DWORD)v2 )
        {
          v16 = Pool + 1;
          v17 = i * HIDWORD(qword_1C0061480);
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
      memset(v5, 0, Size);
      v48[75] = 0LL;
      v19 = *(char **)(a1 + 1968);
      if ( (_DWORD)v2 )
      {
        v20 = v19 + 8;
        v21 = (char *)Pool - v19;
        v22 = (char *)v5 - v19;
        v23 = v2;
        do
        {
          v24 = *(_QWORD *)((char *)v20 + v21 - 8) - *(v20 - 1);
          *(_QWORD *)((char *)v20 + v22 - 8) = v24;
          v25 = *(_QWORD *)((char *)v20 + v21) - *v20;
          *(_QWORD *)((char *)v20 + v22) = v25;
          *(_QWORD *)((char *)v20 + v22 + 8) = *(_QWORD *)((char *)v20 + v21 + 8) - v20[1];
          v20 += 3;
          v48[75] += v25 + v24;
          --v23;
        }
        while ( v23 );
        v19 = *(char **)(a1 + 1968);
        v7 = v44;
      }
      memmove(v19, Pool, HIDWORD(qword_1C0061480));
      if ( v48[75] )
      {
        v48[75] = 0LL;
        if ( (_WORD)TelemetryPerfContext )
        {
          if ( WORD1(TelemetryPerfContext) )
          {
            v26 = 0LL;
            if ( (_DWORD)v2 )
            {
              v27 = v5 + 1;
              do
              {
                if ( (unsigned int)v26 < dword_1C006147C && (unsigned int)v26 >= dword_1C006144C )
                {
                  v28 = (unsigned int)v26 / (unsigned __int16)TelemetryPerfContext;
                  if ( (unsigned int)v28 >= 0xC )
                    v28 = 11LL;
                  v29 = 3 * v28;
                  v48[v29 + 39] += *(v27 - 1);
                  v48[v29 + 40] += *v27;
                  v48[v29 + 41] += v27[1];
                  v48[75] += *(v27 - 1) + *v27;
                }
                v26 = (unsigned int)(v26 + 1);
                v27 += 3;
              }
              while ( (unsigned int)v26 < (unsigned int)v2 );
              v7 = v44;
            }
          }
        }
        if ( *(_QWORD *)(a1 + 1976) )
        {
          v30 = 0;
          do
          {
            v31 = (unsigned __int64 *)(*(_QWORD *)(a1 + 1976) + dword_1C0061498 * (unsigned int)v30);
            v32 = *v31;
            v33 = *v31 <= v3;
            *v31 = 0LL;
            if ( !v33 )
              v3 = v32;
            v6 += v31[1];
            v7 += v31[2];
            ++v30;
          }
          while ( v30 <= (unsigned __int16)g_RaidNumaHighestNodeNumber );
          *((_QWORD *)&v46 + 1) = v6;
          v34 = v6 - *(_QWORD *)(a1 + 1992);
          v47 = v7;
          v35 = v7 - *(_QWORD *)(a1 + 2000);
          v36 = v47;
          *(_QWORD *)&v46 = v3;
          v48[77] = v3;
          v48[78] = v34;
          *(_OWORD *)(a1 + 1984) = v46;
          v48[79] = v35;
          *(_QWORD *)(a1 + 2000) = v36;
        }
        v37 = *(_QWORD *)(a1 + 104);
        if ( v37 )
        {
          v48[0] = *(_QWORD *)(v37 + 8);
          *(_OWORD *)((char *)&v48[1] + 1) = *(_OWORD *)(v37 + 16);
        }
        if ( *(_WORD *)(a1 + 114) )
        {
          v38 = *(_WORD *)(a1 + 112);
          v39 = 255LL;
          if ( v38 < 0xFFu )
            v39 = v38;
          memmove((char *)&v48[3] + 2, *(const void **)(a1 + 120), v39);
        }
        v48[76] = v5;
        if ( g_StorpTraceLoggingPerformanceHighResolutionTimer )
          LOBYTE(v48[37]) = 11;
        else
          LOBYTE(v48[37]) = 10;
        v48[38] = L"256us, 1ms, 4ms, 16ms, 64ms, 128ms, 256ms, 2000ms, 6000ms, 10000ms, 20000ms, 20000+ms";
        if ( g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == 1 && !g_StorpTraceLoggingCriticalEventEnabled
          || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
        {
          goto LABEL_57;
        }
        if ( (*(_DWORD *)(a1 + 1736) & 0x10) != 0 )
          g_StorpTraceLoggingCriticalEventEnabled = -1;
        if ( *(_BYTE *)(a1 + 1740) )
          g_StorpTraceLoggingCriticalEventEnabled = -1;
        if ( (*(_BYTE *)(a1 + 162) & 2) != 0 )
          g_StorpTraceLoggingCriticalEventEnabled = -1;
        if ( g_StorpTraceLoggingCriticalEventEnabled )
          StorpTelemetryLogUnitPerfDataCriticalData(a1, v48, v26);
        else
LABEL_57:
          StorpTelemetryLogUnitPerfDataMeasures(a1, v48, v26);
        if ( (byte_1C0061744 & 2) != 0 )
        {
          v40 = *(_QWORD *)(a1 + 24);
          McTemplateK0quuujjqzqsssxuxxqqxxxxxxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx(
            v40 + 5128,
            a1 + 1720,
            v40,
            *(unsigned int *)(v40 + 56),
            *(_BYTE *)(a1 + 96),
            *(_BYTE *)(a1 + 97),
            *(_BYTE *)(a1 + 98),
            a1 + 1720,
            v40 + 5128,
            *(_DWORD *)(v40 + 4356),
            *(_QWORD *)(v40 + 4800),
            *(_DWORD *)(v40 + 4204),
            v48,
            (char *)&v48[1] + 1,
            (char *)&v48[3] + 2);
        }
      }
      v41 = 0;
    }
    else
    {
      v41 = -1073741801;
    }
  }
  else
  {
    v41 = -1073741823;
  }
  *(_QWORD *)(a1 + 556) = 0LL;
  *(_QWORD *)(a1 + 2008) = 0LL;
  *(_QWORD *)(a1 + 2016) = 0LL;
  *(_QWORD *)(a1 + 1880) = 0LL;
  *(_QWORD *)(a1 + 1888) = 0LL;
  *(_QWORD *)(a1 + 1896) = 0LL;
  *(_QWORD *)(a1 + 1904) = 0LL;
  *(_QWORD *)(a1 + 1912) = 0LL;
  *(_QWORD *)(a1 + 1920) = 0LL;
  *(_QWORD *)(a1 + 1928) = 0LL;
  *(_QWORD *)(a1 + 1936) = 0LL;
  if ( Pool )
    ExFreePoolWithTag(Pool, 0x65546152u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x65546152u);
  return v41;
}
