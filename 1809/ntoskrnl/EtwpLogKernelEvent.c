/*
 * XREFs of EtwpLogKernelEvent @ 0x1400C7110
 * Callers:
 *     EtwTraceSiloKernelEvent @ 0x1400891D0 (EtwTraceSiloKernelEvent.c)
 *     KiExecuteAllDpcs @ 0x1400C6C80 (KiExecuteAllDpcs.c)
 *     PerfInfoLogInterrupt @ 0x1400C82E0 (PerfInfoLogInterrupt.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     EtwTraceTimedEvent @ 0x14011BCDC (EtwTraceTimedEvent.c)
 *     EtwpCCSwapFlush @ 0x14017D004 (EtwpCCSwapFlush.c)
 *     EtwpTraceFileName @ 0x140183ED0 (EtwpTraceFileName.c)
 *     EtwTracePool @ 0x1401B7350 (EtwTracePool.c)
 *     EtwpTraceStackWalk @ 0x14030F934 (EtwpTraceStackWalk.c)
 *     EtwTraceSiloDcEvent @ 0x140310770 (EtwTraceSiloDcEvent.c)
 *     EtwTraceSiloTimedEvent @ 0x1403107A8 (EtwTraceSiloTimedEvent.c)
 *     EtwpLogMemInfo @ 0x140311110 (EtwpLogMemInfo.c)
 *     EtwpTraceKernelEventWithFilter @ 0x140311E48 (EtwpTraceKernelEventWithFilter.c)
 *     EtwpTraceCachedStack @ 0x140315D2C (EtwpTraceCachedStack.c)
 *     EtwpTraceStackKey @ 0x140315E04 (EtwpTraceStackKey.c)
 *     EtwpTraceLastBranchRecord @ 0x140318048 (EtwpTraceLastBranchRecord.c)
 *     EtwpWriteProcessorTrace @ 0x1403182D0 (EtwpWriteProcessorTrace.c)
 *     EtwpEnumerateAddressSpace @ 0x1405F6E18 (EtwpEnumerateAddressSpace.c)
 *     EtwpLogGroupMask @ 0x140727394 (EtwpLogGroupMask.c)
 *     EtwpLogAlwaysPresentRundown @ 0x140727600 (EtwpLogAlwaysPresentRundown.c)
 *     EtwpTraceProcessRundown @ 0x140727ADC (EtwpTraceProcessRundown.c)
 *     EtwpSysModuleRunDown @ 0x140727CD8 (EtwpSysModuleRunDown.c)
 *     EtwpTraceImageRundown @ 0x1407419EC (EtwpTraceImageRundown.c)
 *     EtwpSystemImageEnumCallback @ 0x14074E4C0 (EtwpSystemImageEnumCallback.c)
 *     EtwpLogMemInfoWsHelper @ 0x1408B95C8 (EtwpLogMemInfoWsHelper.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x1408B9884 (EtwpLogSessionWorkingSetInfo.c)
 *     EtwpLogTxREvent @ 0x1408B9A88 (EtwpLogTxREvent.c)
 *     EtwLogPfnInfoRundown @ 0x1408BF69C (EtwLogPfnInfoRundown.c)
 *     EtwpClockSourceRunDown @ 0x1408BF9BC (EtwpClockSourceRunDown.c)
 *     EtwpExecutiveResourceConfigRunDown @ 0x1408BFB44 (EtwpExecutiveResourceConfigRunDown.c)
 *     EtwpLogPmcCounterRundown @ 0x1408BFCF4 (EtwpLogPmcCounterRundown.c)
 *     EtwpObjectHandleEnumCallback @ 0x1408BFEC0 (EtwpObjectHandleEnumCallback.c)
 *     EtwpObjectTypeRundown @ 0x1408C019C (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x1408C02F4 (EtwpPoolRunDown.c)
 *     EtwpProcessPerfCtrsRundown @ 0x1408C072C (EtwpProcessPerfCtrsRundown.c)
 *     EtwpProcessorRundown @ 0x1408C0860 (EtwpProcessorRundown.c)
 *     EtwpSampledProfileRunDown @ 0x1408C0CB4 (EtwpSampledProfileRunDown.c)
 *     EtwpSpinLockConfigRunDown @ 0x1408C0E48 (EtwpSpinLockConfigRunDown.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwpReserveTraceBuffer @ 0x1400C7540 (EtwpReserveTraceBuffer.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400D78F0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400F9890 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpCloseLogger @ 0x1401138CC (EtwpCloseLogger.c)
 *     EtwpUpdateEventsLostCount @ 0x140113944 (EtwpUpdateEventsLostCount.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     EtwpStackTraceDispatcher @ 0x14030F70C (EtwpStackTraceDispatcher.c)
 *     EtwpReserveWithPebsIndex @ 0x1403117C8 (EtwpReserveWithPebsIndex.c)
 *     EtwpReserveWithPmcCounters @ 0x14031185C (EtwpReserveWithPmcCounters.c)
 *     EtwpSendTraceEvent @ 0x14031344C (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x140313F44 (EtwpInvokeEventCallback.c)
 *     EtwpTraceLastBranchRecord @ 0x140318048 (EtwpTraceLastBranchRecord.c)
 *     EtwpTraceProcessorTrace @ 0x14031822C (EtwpTraceProcessorTrace.c)
 */

void __fastcall EtwpLogKernelEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int16 a5,
        unsigned int a6)
{
  __int64 v7; // rbp
  unsigned __int8 v10; // bl
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned int v13; // r12d
  int v14; // ebp
  unsigned int v15; // r10d
  __m128i v16; // xmm5
  __m128i v17; // xmm4
  unsigned int v18; // ebp
  __int64 v19; // r9
  __int64 v20; // rdx
  __m128i v21; // xmm3
  __m128i v22; // xmm0
  __int64 v23; // r9
  __int64 v24; // rcx
  __m128i v25; // xmm3
  __m128i v26; // xmm3
  __m128i v27; // xmm4
  __m128i v28; // xmm4
  _DWORD *v29; // rcx
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rax
  unsigned __int16 v33; // r8
  char *v34; // rax
  unsigned int v35; // r14d
  char *v36; // r15
  __int64 v37; // rbp
  signed __int64 *v38; // roff
  signed __int64 v39; // rax
  unsigned __int64 v40; // rdx
  signed __int64 v41; // rtt
  int v42; // edx
  __int64 v43; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v45; // r15
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned int v48; // r8d
  __int64 v49; // rcx
  unsigned int v50; // edx
  __int64 v51; // rcx
  __int64 v52; // rcx
  unsigned int Size; // [rsp+30h] [rbp-68h]
  __int64 v54; // [rsp+38h] [rbp-60h] BYREF
  void *v55; // [rsp+40h] [rbp-58h]
  __int64 v56; // [rsp+48h] [rbp-50h]
  __int64 v57; // [rsp+50h] [rbp-48h]
  unsigned __int64 v58; // [rsp+58h] [rbp-40h] BYREF
  signed __int64 *v59; // [rsp+60h] [rbp-38h]

  v7 = a3;
  v10 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a2 + 448) + 8LL * a3), 1u) )
    {
      KeLeaveCriticalRegion();
      return;
    }
    v10 = 1;
  }
  v11 = *(_QWORD *)(a2 + 456);
  v57 = 8 * v7;
  v12 = *(_QWORD *)(8 * v7 + v11);
  v56 = v12;
  if ( (v12 & 1) != 0 )
  {
    EtwpCloseLogger((unsigned int)v7, a2, v10);
    return;
  }
  if ( v12 )
  {
    v13 = 0;
    Size = 0;
    v14 = 0;
    v15 = 0;
    if ( a4 )
    {
      if ( a4 >= 8 )
      {
        v16 = 0LL;
        v17 = 0LL;
        v18 = 2;
        do
        {
          v19 = 2LL * v15;
          v15 += 8;
          v20 = v18 + 3;
          v21 = _mm_unpacklo_epi32(
                  _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v19 + 8)),
                  _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * v18 + 8)));
          v22 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v18 + 4) + 8));
          v23 = 2LL * (v18 + 5);
          v24 = 2LL * (v18 + 2);
          v25 = _mm_unpacklo_epi32(
                  v21,
                  _mm_unpacklo_epi32(
                    _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v18 - 1) + 8)),
                    _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v18 + 1) + 8))));
          v18 += 8;
          v16 = _mm_add_epi32(v25, v16);
          v26 = _mm_add_epi32(
                  _mm_unpacklo_epi32(
                    _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v24 + 8)), v22),
                    _mm_unpacklo_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)(16 * v20 + a1 + 8)),
                      _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v23 + 8)))),
                  v17);
          v17 = v26;
        }
        while ( v15 < (a4 & 0xFFFFFFF8) );
        v27 = _mm_add_epi32(v26, v16);
        v28 = _mm_add_epi32(v27, _mm_srli_si128(v27, 8));
        v14 = _mm_cvtsi128_si32(_mm_add_epi32(v28, _mm_srli_si128(v28, 4)));
        Size = v14;
      }
      if ( v15 < a4 )
      {
        v29 = (_DWORD *)(16LL * v15 + a1 + 8);
        v30 = a4 - v15;
        do
        {
          v14 += *v29;
          v29 += 4;
          --v30;
        }
        while ( v30 );
        Size = v14;
      }
    }
    if ( (a6 & 0x100) != 0 )
    {
      if ( (a6 & 0x10000000) != 0 )
      {
        v47 = EtwpReserveTraceBuffer(v12, v14 + 24, (unsigned int)&v58, (unsigned int)&v54, a6);
        if ( !v47 )
          goto LABEL_31;
        v33 = a5;
        *(_WORD *)(v47 + 4) = v14 + 24;
        *(_WORD *)(v47 + 6) = a5;
        *(_DWORD *)v47 = (unsigned __int8)a6 | 0xC0040000;
        *(_QWORD *)(v47 + 16) = v54;
        *(_DWORD *)(v47 + 8) = KeGetCurrentThread()[1].CurrentRunTime;
        *(_DWORD *)(v47 + 12) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
        v34 = (char *)(v47 + 24);
      }
      else
      {
        v45 = KeGetCurrentThread();
        v46 = EtwpReserveTraceBuffer(v12, v14 + 32, (unsigned int)&v58, (unsigned int)&v54, a6);
        if ( !v46 )
          goto LABEL_31;
        v33 = a5;
        *(_DWORD *)v46 = (unsigned __int8)a6 | 0xC0020000;
        *(_QWORD *)(v46 + 16) = v54;
        *(_WORD *)(v46 + 4) = v14 + 32;
        *(_WORD *)(v46 + 6) = a5;
        *(_DWORD *)(v46 + 8) = v45[1].CurrentRunTime;
        *(_DWORD *)(v46 + 12) = v45[1].CycleTime;
        *(_DWORD *)(v46 + 24) = v45->SchedulerApc.SpareLong0;
        *(_DWORD *)(v46 + 28) = v45->UserTime;
        v34 = (char *)(v46 + 32);
      }
    }
    else
    {
      v31 = *(_DWORD *)(v12 + 832);
      if ( (v31 & 0xC00) == 0 )
        goto LABEL_15;
      if ( (v31 & 0x400) == 0 || a5 != 1316 )
      {
        if ( (v31 & 0x800) != 0 )
        {
          v48 = 0;
          if ( *(_DWORD *)(*(_QWORD *)(v12 + 1000) + 32LL) )
          {
            while ( 1 )
            {
              v49 = *(_QWORD *)(v12 + 1000);
              if ( *(_WORD *)(v49 + 2LL * v48 + 36) == a5 )
                break;
              if ( ++v48 >= *(_DWORD *)(v49 + 32) )
                goto LABEL_15;
            }
            v34 = (char *)EtwpReserveWithPmcCounters(v12, a5, v14, (unsigned int)&v58, (__int64)&v54, a6);
            v33 = a5;
            goto LABEL_17;
          }
        }
LABEL_15:
        v32 = EtwpReserveTraceBuffer(v12, v14 + 16, (unsigned int)&v58, (unsigned int)&v54, a6);
        if ( v32 )
        {
          v33 = a5;
          *(_QWORD *)(v32 + 8) = v54;
          *(_WORD *)(v32 + 4) = v14 + 16;
          *(_DWORD *)v32 = (unsigned __int8)a6 | 0xC0110000;
          *(_WORD *)(v32 + 6) = a5;
          v34 = (char *)(v32 + 16);
          goto LABEL_17;
        }
LABEL_31:
        if ( v10 )
        {
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a2 + 448) + v57), 1u);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        }
        return;
      }
      v34 = (char *)EtwpReserveWithPebsIndex(v12, 1316, v14, (unsigned int)&v58, (__int64)&v54, a6);
      v33 = 1316;
    }
LABEL_17:
    v55 = v34;
    if ( v34 )
    {
      v35 = v14;
      v36 = v34;
      if ( a4 )
      {
        while ( 1 )
        {
          v37 = *(unsigned int *)(a1 + 8);
          if ( (unsigned int)v37 > v35 )
            break;
          memmove(v36, *(const void **)a1, (unsigned int)v37);
          v36 += v37;
          v35 -= v37;
          ++v13;
          a1 += 16LL;
          if ( v13 >= a4 )
          {
            v12 = v56;
            goto LABEL_22;
          }
        }
        memset(v55, 0, Size);
        v12 = v56;
        EtwpUpdateEventsLostCount(v56);
LABEL_22:
        v33 = a5;
      }
      if ( (*(_DWORD *)(v12 + 12) & 0x80000) != 0
        && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
      {
        EtwpSendTraceEvent(v12, &v58);
        v33 = a5;
      }
      if ( *(_QWORD *)(v12 + 1272) )
      {
        EtwpInvokeEventCallback(v12, &v58);
        v33 = a5;
      }
      v38 = v59;
      _m_prefetchw(v59);
      v39 = *v38;
      v40 = v58;
      if ( (*v38 ^ v58) >= 0xF )
      {
LABEL_40:
        _InterlockedDecrement((volatile signed __int32 *)(v40 + 12));
      }
      else
      {
        while ( 1 )
        {
          v41 = v39;
          v39 = _InterlockedCompareExchange64(v59, v39 + 1, v39);
          if ( v41 == v39 )
            break;
          v40 = v58;
          if ( (v39 ^ v58) >= 0xF )
            goto LABEL_40;
        }
      }
      v42 = *(_DWORD *)(v12 + 832);
      if ( (v42 & 0x80u) != 0 && _bittest(*(const signed __int32 **)(v12 + 984), v33 & 0x1FFF) )
      {
        EtwpStackTraceDispatcher(v12, &v54, 0LL, a6);
        v42 = *(_DWORD *)(v12 + 832);
        v33 = a5;
      }
      v43 = 0LL;
      if ( (v42 & 0x8000) != 0 )
      {
        v50 = 0;
        if ( *(_DWORD *)(*(_QWORD *)(v12 + 1008) + 8LL) )
        {
          while ( 1 )
          {
            v51 = *(_QWORD *)(v12 + 1008);
            if ( *(_WORD *)(v51 + 2LL * v50 + 12) == v33 )
              break;
            if ( ++v50 >= *(_DWORD *)(v51 + 8) )
              goto LABEL_30;
          }
          EtwpTraceLastBranchRecord(v12, &v54, 0LL, a6);
          v33 = a5;
        }
      }
LABEL_30:
      if ( (*(_DWORD *)(v12 + 832) & 0x4000000) != 0 && *(_DWORD *)(*(_QWORD *)(v12 + 1016) + 24LL) )
      {
        while ( 1 )
        {
          v52 = *(_QWORD *)(v12 + 1016);
          if ( *(_WORD *)(v52 + 2 * v43 + 28) == v33 )
            break;
          v43 = (unsigned int)(v43 + 1);
          if ( (unsigned int)v43 >= *(_DWORD *)(v52 + 24) )
            goto LABEL_31;
        }
        EtwpTraceProcessorTrace(v12, &v54, 0LL, a6);
      }
    }
    goto LABEL_31;
  }
}
