/*
 * XREFs of EtwpAddLogHeader @ 0x14069B7E8
 * Callers:
 *     EtwpUpdateFileHeader @ 0x14069AFDC (EtwpUpdateFileHeader.c)
 *     EtwpPreserveLogger @ 0x1408CB38C (EtwpPreserveLogger.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x14001557C (EtwpQueryUsedProcessorCount.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     EtwpPrepareHeader @ 0x1405C2DD0 (EtwpPrepareHeader.c)
 *     EtwpIsWow64Logger @ 0x14069BD10 (EtwpIsWow64Logger.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x14069BD28 (RtlpQueryTimeZoneInformationWorker.c)
 *     EtwpAddDebugInfoEvents @ 0x1406FF3A0 (EtwpAddDebugInfoEvents.c)
 *     EtwpAddBinaryInfoEvents @ 0x1408BF15C (EtwpAddBinaryInfoEvents.c)
 */

unsigned __int64 __fastcall EtwpAddLogHeader(__int64 a1, unsigned int *a2)
{
  bool v4; // cf
  unsigned __int64 result; // rax
  __int64 v6; // rcx
  unsigned __int16 v7; // r14
  struct _KTHREAD *CurrentThread; // r15
  _QWORD *v9; // r12
  unsigned int UsedProcessorCount; // eax
  char v11; // al
  char v12; // cl
  bool v13; // zf
  int v14; // ecx
  LARGE_INTEGER v15; // rax
  __int64 v16; // rcx
  char *v17; // rax
  __int64 v18; // r13
  unsigned int *v19; // rbx
  char *v20; // r13
  __int64 v21; // rdx
  unsigned __int64 v22; // xmm0_8
  __int64 v23; // rdx
  unsigned __int64 v24; // xmm0_8
  void *v25; // rcx
  char *v26; // rdx
  unsigned int v27; // r8d
  char *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int128 v31; // xmm1
  int v32; // [rsp+30h] [rbp-30h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-28h] BYREF
  void *v34; // [rsp+40h] [rbp-20h]
  __int64 v35; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v36; // [rsp+50h] [rbp-10h]

  v32 = 0;
  v4 = (unsigned __int8)EtwpIsWow64Logger(a1) != 0;
  result = *(unsigned int *)(a1 + 4);
  v7 = *(_WORD *)(v6 + 168) + *(_WORD *)(v6 + 152) + (v4 ? 276 : 284);
  if ( result >= (unsigned __int64)v7 + 104 )
  {
    if ( ((int (__fastcall *)(__int64, __int64, __int64 *, int *))off_140401458[0])(25LL, 12LL, &v35, &v32) < 0 )
    {
      v35 = 0LL;
      v36 = 0;
    }
    CurrentThread = KeGetCurrentThread();
    *((_WORD *)a2 + 39) = 0;
    v9 = (_QWORD *)(a1 + 328);
    *((_WORD *)a2 + 38) = v7 + 32;
    a2[18] = -1073610750;
    a2[20] = CurrentThread[1].CurrentRunTime;
    a2[21] = CurrentThread[1].CycleTime;
    a2[24] = CurrentThread->SchedulerApc.SpareLong0;
    a2[25] = CurrentThread->UserTime;
    *((_QWORD *)a2 + 11) = *(_QWORD *)(a1 + 328);
    memset(a2 + 26, 0, v7);
    a2[26] = *(_DWORD *)(a1 + 4);
    *((_WORD *)a2 + 54) = 10;
    a2[28] = 17763;
    UsedProcessorCount = EtwpQueryUsedProcessorCount(a1);
    a2[29] = UsedProcessorCount;
    if ( (*(_DWORD *)(a1 + 12) & 0x4000000) != 0 || *(_DWORD *)(a1 + 4) > 0x100000u || UsedProcessorCount > 0x100 )
    {
      v11 = 0;
      v12 = 2;
    }
    else
    {
      v11 = 5;
      v12 = 1;
    }
    *((_BYTE *)a2 + 110) = v12;
    *((_BYTE *)a2 + 111) = v11;
    a2[36] = 1;
    a2[34] = *(_DWORD *)(a1 + 12) & 0xFF3FFEFF;
    a2[33] = *(_DWORD *)(a1 + 308);
    a2[32] = KeMaximumIncrement;
    a2[39] = EtwCPUSpeedInMHz;
    KeQueryPerformanceCounter(&PerformanceFrequency);
    _InterlockedExchange64((volatile __int64 *)&EtwPerfFreq, PerformanceFrequency.QuadPart);
    v13 = (unsigned __int8)EtwpIsWow64Logger(a1) == 0;
    v14 = 1;
    v15 = PerformanceFrequency;
    if ( v13 )
    {
      *((LARGE_INTEGER *)a2 + 45) = PerformanceFrequency;
      *((_QWORD *)a2 + 46) = *(_QWORD *)(a1 + 320);
      *((_QWORD *)a2 + 44) = EtwpBootTime;
      a2[37] = 8;
      if ( *(_DWORD *)(a1 + 216) != 4 )
        v14 = *(_DWORD *)(a1 + 216);
      a2[94] = v14;
      v16 = 26LL;
      *((_QWORD *)a2 + 20) = HIDWORD(v35);
      *((_QWORD *)a2 + 21) = v36;
      v17 = (char *)(a2 + 96);
    }
    else
    {
      a2[18] = -1073676286;
      *((LARGE_INTEGER *)a2 + 44) = v15;
      a2[37] = 4;
      *((_QWORD *)a2 + 45) = *(_QWORD *)(a1 + 320);
      *((_QWORD *)a2 + 43) = EtwpBootTime;
      if ( *(_DWORD *)(a1 + 216) != 4 )
        v14 = *(_DWORD *)(a1 + 216);
      a2[92] = v14;
      v16 = 24LL;
      a2[40] = HIDWORD(v35);
      a2[41] = v36;
      v17 = (char *)(a2 + 94);
    }
    v18 = *(unsigned __int16 *)(a1 + 152);
    v19 = &a2[v16];
    v34 = v17;
    v20 = &v17[v18];
    RtlpQueryTimeZoneInformationWorker(&a2[v16 + 18], 0xACuLL);
    v21 = *(_QWORD *)(v19 + 35);
    v22 = _mm_srli_si128(*(__m128i *)(v19 + 35), 8).m128i_u64[0];
    *((_WORD *)v19 + 70) = v21;
    *((_WORD *)v19 + 75) = v22;
    *((_WORD *)v19 + 71) = WORD1(v21);
    *((_WORD *)v19 + 73) = WORD2(v21);
    *((_WORD *)v19 + 72) = HIWORD(v22);
    *((_WORD *)v19 + 76) = WORD1(v22);
    *((_WORD *)v19 + 74) = HIWORD(v21);
    *((_WORD *)v19 + 77) = WORD2(v22);
    v23 = *((_QWORD *)v19 + 28);
    v24 = _mm_srli_si128(*((__m128i *)v19 + 14), 8).m128i_u64[0];
    *((_WORD *)v19 + 112) = v23;
    *((_WORD *)v19 + 117) = v24;
    *((_WORD *)v19 + 113) = WORD1(v23);
    *((_WORD *)v19 + 115) = WORD2(v23);
    *((_WORD *)v19 + 114) = HIWORD(v24);
    *((_WORD *)v19 + 119) = WORD2(v24);
    v25 = v34;
    *((_WORD *)v19 + 116) = HIWORD(v23);
    *((_WORD *)v19 + 118) = WORD1(v24);
    memmove(v25, *(const void **)(a1 + 160), *(unsigned __int16 *)(a1 + 152) + 2LL);
    memmove(v20 + 2, *(const void **)(a1 + 176), *(unsigned __int16 *)(a1 + 168) + 2LL);
    a2[2] += (v7 + 39) & 0xFFFFFFF8;
    if ( (*(_DWORD *)(a1 + 12) & 0x2000000) != 0 && a2[2] + 68 <= *a2 )
    {
      v28 = (char *)a2 + a2[2];
      *((_DWORD *)v28 + 1) = 327748;
      *(_DWORD *)v28 = -1073610750;
      *((_DWORD *)v28 + 2) = CurrentThread[1].CurrentRunTime;
      *((_DWORD *)v28 + 3) = CurrentThread[1].CycleTime;
      *((_DWORD *)v28 + 6) = CurrentThread->SchedulerApc.SpareLong0;
      *((_DWORD *)v28 + 7) = CurrentThread->UserTime;
      *((_QWORD *)v28 + 2) = *v9;
      v29 = *(_QWORD *)(a1 + 1080);
      v30 = 32LL * *(unsigned __int8 *)(a1 + 834);
      *((_OWORD *)v28 + 2) = *(_OWORD *)(v30 + v29 + 4260);
      v31 = *(_OWORD *)(v30 + v29 + 4276);
      *((_DWORD *)v28 + 16) = 70;
      *((_OWORD *)v28 + 3) = v31;
      a2[2] += 72;
    }
    if ( a2[2] + 80 <= *a2 )
    {
      v26 = (char *)a2 + a2[2];
      *((_DWORD *)v26 + 1) = 5242960;
      *(_DWORD *)v26 = -1073610750;
      *((_DWORD *)v26 + 2) = CurrentThread[1].CurrentRunTime;
      *((_DWORD *)v26 + 3) = CurrentThread[1].CycleTime;
      *((_DWORD *)v26 + 6) = CurrentThread->SchedulerApc.SpareLong0;
      *((_DWORD *)v26 + 7) = CurrentThread->UserTime;
      *((_QWORD *)v26 + 2) = *v9;
      *((_DWORD *)v26 + 8) = 0;
      *((_DWORD *)v26 + 9) = *(_DWORD *)(*(_QWORD *)(a1 + 1080) + 4204LL);
      *((_OWORD *)v26 + 3) = *(_OWORD *)(*(_QWORD *)(a1 + 1080) + 4152LL);
      *((_QWORD *)v26 + 5) = *(_QWORD *)(a1 + 1264);
      *((_OWORD *)v26 + 4) = *(_OWORD *)(*(_QWORD *)(a1 + 1080) + 4168LL);
      a2[2] += 80;
    }
    v27 = *a2;
    a2[12] = a2[2];
    if ( a2[2] < v27 )
    {
      if ( *(_QWORD *)(a1 + 112) != a1 + 112 || *(_DWORD *)(a1 + 136) )
        EtwpAddDebugInfoEvents(a1, (_DWORD)a2, v27, a1 + 328, 3);
      if ( *(_QWORD *)(a1 + 1024) != a1 + 1024 )
        EtwpAddBinaryInfoEvents(a1, a2, *a2, 2LL);
    }
    a2[1] = a2[12];
    a2[11] = 3;
    EtwpPrepareHeader(a1, (__int64)a2, 1);
    result = a2[2];
    a2[1] = result;
  }
  return result;
}
