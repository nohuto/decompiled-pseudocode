/*
 * XREFs of EtwpAddLogHeader @ 0x1406AE8E0
 * Callers:
 *     EtwpUpdateFileHeader @ 0x1406AE298 (EtwpUpdateFileHeader.c)
 *     EtwpPreserveLogger @ 0x14090704C (EtwpPreserveLogger.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140003B44 (EtwpQueryUsedProcessorCount.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     EtwpPrepareHeader @ 0x140633C00 (EtwpPrepareHeader.c)
 *     EtwpAddDebugInfoEvents @ 0x1406ADCC0 (EtwpAddDebugInfoEvents.c)
 *     EtwpIsWow64Logger @ 0x1406AEE98 (EtwpIsWow64Logger.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x1406AEEB0 (RtlpQueryTimeZoneInformationWorker.c)
 *     EtwpAddBinaryInfoEvents @ 0x1408FA478 (EtwpAddBinaryInfoEvents.c)
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
  __int64 v13; // rdx
  bool v14; // zf
  int v15; // ecx
  LARGE_INTEGER v16; // rax
  __int64 v17; // rcx
  char *v18; // rax
  __int64 v19; // r13
  unsigned int *v20; // rbx
  char *v21; // r13
  __int64 v22; // rdx
  unsigned __int64 v23; // xmm0_8
  __m128i v24; // xmm0
  __int64 v25; // rdx
  void *v26; // rcx
  char *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int128 v30; // xmm1
  char *v31; // rdx
  unsigned int v32; // r8d
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-40h] BYREF
  int v34; // [rsp+38h] [rbp-38h] BYREF
  void *v35; // [rsp+40h] [rbp-30h]
  __m128i v36; // [rsp+48h] [rbp-28h]
  __int64 v37; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v38; // [rsp+60h] [rbp-10h]

  v34 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  v37 = 0LL;
  v38 = 0;
  v4 = (unsigned __int8)EtwpIsWow64Logger(a1, a2) != 0;
  result = *(unsigned int *)(a1 + 4);
  v7 = *(_WORD *)(v6 + 168) + *(_WORD *)(v6 + 152) + (v4 ? 276 : 284);
  if ( result >= (unsigned __int64)v7 + 104 )
  {
    if ( ((int (__fastcall *)(__int64, __int64, __int64 *, int *))off_140426798[0])(25LL, 12LL, &v37, &v34) < 0 )
    {
      v37 = 0LL;
      v38 = 0;
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
    a2[28] = 18363 - (KernelVersionBump != 1);
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
    v14 = (unsigned __int8)EtwpIsWow64Logger(a1, v13) == 0;
    v15 = 1;
    v16 = PerformanceFrequency;
    if ( v14 )
    {
      *((LARGE_INTEGER *)a2 + 45) = PerformanceFrequency;
      *((_QWORD *)a2 + 46) = *(_QWORD *)(a1 + 320);
      *((_QWORD *)a2 + 44) = EtwpBootTime;
      a2[37] = 8;
      if ( *(_DWORD *)(a1 + 216) != 4 )
        v15 = *(_DWORD *)(a1 + 216);
      a2[94] = v15;
      v17 = 26LL;
      *((_QWORD *)a2 + 20) = HIDWORD(v37);
      *((_QWORD *)a2 + 21) = v38;
      v18 = (char *)(a2 + 96);
    }
    else
    {
      a2[18] = -1073676286;
      *((LARGE_INTEGER *)a2 + 44) = v16;
      a2[37] = 4;
      *((_QWORD *)a2 + 45) = *(_QWORD *)(a1 + 320);
      *((_QWORD *)a2 + 43) = EtwpBootTime;
      if ( *(_DWORD *)(a1 + 216) != 4 )
        v15 = *(_DWORD *)(a1 + 216);
      a2[92] = v15;
      v17 = 24LL;
      a2[40] = HIDWORD(v37);
      a2[41] = v38;
      v18 = (char *)(a2 + 94);
    }
    v19 = *(unsigned __int16 *)(a1 + 152);
    v20 = &a2[v17];
    v35 = v18;
    v21 = &v18[v19];
    RtlpQueryTimeZoneInformationWorker(&a2[v17 + 18], 0xACuLL);
    v22 = *(_QWORD *)(v20 + 35);
    v23 = _mm_srli_si128(*(__m128i *)(v20 + 35), 8).m128i_u64[0];
    *((_WORD *)v20 + 70) = v22;
    *((_WORD *)v20 + 75) = v23;
    *((_WORD *)v20 + 71) = WORD1(v22);
    *((_WORD *)v20 + 73) = WORD2(v22);
    *((_WORD *)v20 + 72) = HIWORD(v23);
    *((_WORD *)v20 + 76) = WORD1(v23);
    *((_WORD *)v20 + 74) = HIWORD(v22);
    *((_WORD *)v20 + 77) = WORD2(v23);
    v24 = *((__m128i *)v20 + 14);
    v25 = *((_QWORD *)v20 + 28);
    v20[56] = v25;
    *((_WORD *)v20 + 115) = WORD2(v25);
    *((_WORD *)v20 + 116) = HIWORD(v25);
    v36 = v24;
    v24.m128i_i64[0] = _mm_srli_si128(v24, 8).m128i_u64[0];
    *((_WORD *)v20 + 117) = v24.m128i_i16[0];
    *((_WORD *)v20 + 114) = v24.m128i_i16[3];
    *((_WORD *)v20 + 119) = v24.m128i_i16[2];
    v26 = v35;
    *((_WORD *)v20 + 118) = v24.m128i_i16[1];
    memmove(v26, *(const void **)(a1 + 160), *(unsigned __int16 *)(a1 + 152) + 2LL);
    memmove(v21 + 2, *(const void **)(a1 + 176), *(unsigned __int16 *)(a1 + 168) + 2LL);
    a2[2] += (v7 + 39) & 0xFFFFFFF8;
    if ( (*(_DWORD *)(a1 + 12) & 0x2000000) != 0 && a2[2] + 68 <= *a2 )
    {
      v27 = (char *)a2 + a2[2];
      *((_DWORD *)v27 + 1) = 327748;
      *(_DWORD *)v27 = -1073610750;
      *((_DWORD *)v27 + 2) = CurrentThread[1].CurrentRunTime;
      *((_DWORD *)v27 + 3) = CurrentThread[1].CycleTime;
      *((_DWORD *)v27 + 6) = CurrentThread->SchedulerApc.SpareLong0;
      *((_DWORD *)v27 + 7) = CurrentThread->UserTime;
      *((_QWORD *)v27 + 2) = *v9;
      v28 = *(_QWORD *)(a1 + 1080);
      v29 = 32LL * *(unsigned __int8 *)(a1 + 834);
      *((_OWORD *)v27 + 2) = *(_OWORD *)(v29 + v28 + 4260);
      v30 = *(_OWORD *)(v29 + v28 + 4276);
      *((_DWORD *)v27 + 16) = 70;
      *((_OWORD *)v27 + 3) = v30;
      a2[2] += 72;
    }
    if ( a2[2] + 80 <= *a2 )
    {
      v31 = (char *)a2 + a2[2];
      *((_DWORD *)v31 + 1) = 5242960;
      *(_DWORD *)v31 = -1073610750;
      *((_DWORD *)v31 + 2) = CurrentThread[1].CurrentRunTime;
      *((_DWORD *)v31 + 3) = CurrentThread[1].CycleTime;
      *((_DWORD *)v31 + 6) = CurrentThread->SchedulerApc.SpareLong0;
      *((_DWORD *)v31 + 7) = CurrentThread->UserTime;
      *((_QWORD *)v31 + 2) = *v9;
      *((_DWORD *)v31 + 8) = 0;
      *((_DWORD *)v31 + 9) = *(_DWORD *)(*(_QWORD *)(a1 + 1080) + 4204LL);
      *((_OWORD *)v31 + 3) = *(_OWORD *)(*(_QWORD *)(a1 + 1080) + 4152LL);
      *((_QWORD *)v31 + 5) = *(_QWORD *)(a1 + 1264);
      *((_OWORD *)v31 + 4) = *(_OWORD *)(*(_QWORD *)(a1 + 1080) + 4168LL);
      a2[2] += 80;
    }
    v32 = *a2;
    a2[12] = a2[2];
    if ( a2[2] < v32 )
    {
      if ( *(_QWORD *)(a1 + 112) != a1 + 112 || *(_DWORD *)(a1 + 136) )
        EtwpAddDebugInfoEvents(a1, (__int64)a2, v32, (__int64 *)(a1 + 328), 3);
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
