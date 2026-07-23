/*
 * XREFs of EtwpUpdateGlobalGroupMasks @ 0x1406C6838
 * Callers:
 *     EtwpUpdateKernelGroupsWork @ 0x1406C6810 (EtwpUpdateKernelGroupsWork.c)
 *     EtwpUpdateGroupMasks @ 0x1407270E8 (EtwpUpdateGroupMasks.c)
 *     EtwDereferenceSpinLockCounters @ 0x1408BEFAC (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x1408BF008 (EtwReferenceSpinLockCounters.c)
 *     EtwpCoverageSamplerStart @ 0x1408C9E10 (EtwpCoverageSamplerStart.c)
 *     EtwpCoverageSamplerStop @ 0x1408CA0F0 (EtwpCoverageSamplerStop.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     PsGetServerSiloGlobals @ 0x1400922CC (PsGetServerSiloGlobals.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PspGetNextSilo @ 0x140601968 (PspGetNextSilo.c)
 *     EtwpEnableKernelTrace @ 0x1406C6A30 (EtwpEnableKernelTrace.c)
 *     EtwpDisableKernelTrace @ 0x1406C6CCC (EtwpDisableKernelTrace.c)
 */

__int64 __fastcall EtwpUpdateGlobalGroupMasks(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rcx
  _DWORD *v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // rbx
  void *v13; // rcx
  __int128 v14; // xmm1
  void *NextSilo; // rax
  __int64 v16; // rdx
  _DWORD *v17; // rcx
  __int64 v18; // r8
  __m128i si128; // xmm3
  __int64 v20; // rax
  __int64 v21; // rcx
  __m128i v22; // xmm1
  __m128i v23; // xmm2
  int v24; // r14d
  __int64 v26; // rdx
  void *v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  _DWORD *v30; // rcx
  int v31; // eax
  _OWORD v32[2]; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v33[32]; // [rsp+50h] [rbp-19h] BYREF
  char v34[32]; // [rsp+70h] [rbp+7h] BYREF

  v4 = a3;
  v5 = a2;
  KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
  v6 = 8LL;
  if ( (unsigned int)v4 < 8
    && ((unsigned int)v5 >= *(_DWORD *)(a1 + 16) ? (LOBYTE(v7) = 1) : (v7 = *(_QWORD *)(*(_QWORD *)(a1 + 456) + 8 * v5)),
        (v7 & 1) != 0) )
  {
    v24 = -2147483611;
  }
  else
  {
    memset(v32, 0, sizeof(v32));
    v8 = 10LL;
    v9 = a1 - (_QWORD)v32 + 4260;
    do
    {
      v10 = v32;
      v11 = 8LL;
      do
      {
        *v10 |= *(_DWORD *)((char *)v10 + v9);
        ++v10;
        --v11;
      }
      while ( v11 );
      v9 += 32LL;
      --v8;
    }
    while ( v8 );
    v12 = (_DWORD *)(a1 + 4228);
    v13 = 0LL;
    v14 = v32[1];
    *(_OWORD *)(a1 + 4228) = v32[0];
    *(_OWORD *)(a1 + 4244) = v14;
    while ( 1 )
    {
      NextSilo = PspGetNextSilo(v13, 1);
      if ( !NextSilo )
        break;
      v26 = *((_QWORD *)PsGetServerSiloGlobals((__int64)NextSilo) + 108);
      if ( v26 )
      {
        v28 = 8LL;
        v29 = v26 - (_QWORD)v32;
        v30 = v32;
        do
        {
          *v30 |= *(_DWORD *)((char *)v30 + v29 + 4228);
          ++v30;
          --v28;
        }
        while ( v28 );
      }
      v13 = v27;
    }
    v16 = EtwpHostSiloState - (_QWORD)v32;
    v17 = v32;
    v18 = 8LL;
    do
    {
      *v17 |= *(_DWORD *)((char *)v17 + v16 + 4228);
      ++v17;
      --v18;
    }
    while ( v18 );
    si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    v20 = 0LL;
    v21 = 2LL;
    do
    {
      v22 = _mm_loadu_si128((const __m128i *)&PerfGlobalGroupMask[v20]);
      v23 = _mm_loadu_si128((const __m128i *)&v32[v20++]);
      *(__m128i *)&v33[v20 * 16 + 16] = _mm_and_si128(_mm_andnot_si128(v23, si128), v22);
      v32[v20 + 1] = _mm_and_si128(_mm_andnot_si128(v22, si128), v23);
      --v21;
    }
    while ( v21 );
    EtwpDisableKernelTrace(v32, v34, a1, (unsigned int)v5);
    v24 = EtwpEnableKernelTrace(v32, v33, a1, (unsigned int)v5);
    if ( v24 < 0 )
    {
      do
      {
        v31 = ~*(_DWORD *)&v33[(_QWORD)v12 - a1 - 4228];
        *v12 &= v31;
        v12[8 * v4 + 8] &= v31;
        *(_DWORD *)((char *)v12++ + (_QWORD)v32 - a1 - 4228) &= v31;
        --v6;
      }
      while ( v6 );
    }
    PerfGlobalGroupMask[0] = v32[0];
    xmmword_140542350 = v32[1];
    if ( (BYTE4(v32[0]) & 4) != 0 )
      _interlockedbittestandset(&KiCpuTracingFlags, 0);
    else
      _interlockedbittestandreset(&KiCpuTracingFlags, 0);
  }
  KeReleaseMutex(&EtwpGroupMaskMutex, 0);
  return (unsigned int)v24;
}
