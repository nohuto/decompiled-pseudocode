/*
 * XREFs of EtwpLogKernelEvent @ 0x1400C2B10
 * Callers:
 *     EtwTraceSiloKernelEvent @ 0x14001D360 (EtwTraceSiloKernelEvent.c)
 *     PerfInfoLogInterrupt @ 0x1400C16B0 (PerfInfoLogInterrupt.c)
 *     KiExecuteAllDpcs @ 0x1400C2660 (KiExecuteAllDpcs.c)
 *     EtwTraceTimedEvent @ 0x14011CCD0 (EtwTraceTimedEvent.c)
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     EtwpCCSwapFlush @ 0x140147688 (EtwpCCSwapFlush.c)
 *     EtwpTraceFileName @ 0x140157720 (EtwpTraceFileName.c)
 *     EtwpTraceStackWalk @ 0x14032D3E4 (EtwpTraceStackWalk.c)
 *     EtwTracePool @ 0x14032DF54 (EtwTracePool.c)
 *     EtwTraceSiloDcEvent @ 0x14032E420 (EtwTraceSiloDcEvent.c)
 *     EtwTraceSiloTimedEvent @ 0x14032E458 (EtwTraceSiloTimedEvent.c)
 *     EtwpLogMemInfo @ 0x14032EE90 (EtwpLogMemInfo.c)
 *     EtwpTraceKernelEventWithFilter @ 0x14032FD8C (EtwpTraceKernelEventWithFilter.c)
 *     PerfInfoLogIpiSend @ 0x1403304A0 (PerfInfoLogIpiSend.c)
 *     EtwpTraceCachedStack @ 0x140334530 (EtwpTraceCachedStack.c)
 *     EtwpTraceStackKey @ 0x140334608 (EtwpTraceStackKey.c)
 *     EtwpTraceLastBranchRecord @ 0x140336884 (EtwpTraceLastBranchRecord.c)
 *     EtwpWriteProcessorTrace @ 0x140336B40 (EtwpWriteProcessorTrace.c)
 *     EtwpEnumerateAddressSpace @ 0x1405E9F34 (EtwpEnumerateAddressSpace.c)
 *     EtwpLogGroupMask @ 0x140707B3C (EtwpLogGroupMask.c)
 *     EtwpTraceProcessRundown @ 0x1407080D4 (EtwpTraceProcessRundown.c)
 *     EtwpSysModuleRunDown @ 0x140708308 (EtwpSysModuleRunDown.c)
 *     EtwpLogAlwaysPresentRundown @ 0x1407085D4 (EtwpLogAlwaysPresentRundown.c)
 *     EtwpTraceImageRundown @ 0x1407121D8 (EtwpTraceImageRundown.c)
 *     EtwpSystemImageEnumCallback @ 0x140719460 (EtwpSystemImageEnumCallback.c)
 *     EtwpLogMemInfoWsHelper @ 0x1408F4E1C (EtwpLogMemInfoWsHelper.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x1408F50E8 (EtwpLogSessionWorkingSetInfo.c)
 *     EtwpLogTxREvent @ 0x1408F52EC (EtwpLogTxREvent.c)
 *     EtwLogPfnInfoRundown @ 0x1408FB0F4 (EtwLogPfnInfoRundown.c)
 *     EtwpClockSourceRunDown @ 0x1408FB424 (EtwpClockSourceRunDown.c)
 *     EtwpExecutiveResourceConfigRunDown @ 0x1408FB5C0 (EtwpExecutiveResourceConfigRunDown.c)
 *     EtwpLogPmcCounterRundown @ 0x1408FB780 (EtwpLogPmcCounterRundown.c)
 *     EtwpObjectHandleEnumCallback @ 0x1408FB9C0 (EtwpObjectHandleEnumCallback.c)
 *     EtwpObjectTypeRundown @ 0x1408FBC9C (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x1408FBDFC (EtwpPoolRunDown.c)
 *     EtwpProcessPerfCtrsRundown @ 0x1408FC248 (EtwpProcessPerfCtrsRundown.c)
 *     EtwpProcessorRundown @ 0x1408FC38C (EtwpProcessorRundown.c)
 *     EtwpSampledProfileRunDown @ 0x1408FC804 (EtwpSampledProfileRunDown.c)
 *     EtwpSpinLockConfigRunDown @ 0x1408FC9AC (EtwpSpinLockConfigRunDown.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140096A80 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KeAreInterruptsEnabled @ 0x1400C31C0 (KeAreInterruptsEnabled.c)
 *     EtwpReserveTraceBuffer @ 0x1400C31E0 (EtwpReserveTraceBuffer.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400FA0F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpUpdateEventsLostCount @ 0x14013B510 (EtwpUpdateEventsLostCount.c)
 *     EtwpCloseLogger @ 0x14014779C (EtwpCloseLogger.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     EtwpStackTraceDispatcher @ 0x14032D1BC (EtwpStackTraceDispatcher.c)
 *     EtwpReserveWithPebsIndex @ 0x14032F710 (EtwpReserveWithPebsIndex.c)
 *     EtwpReserveWithPmcCounters @ 0x14032F7A4 (EtwpReserveWithPmcCounters.c)
 *     EtwpSendTraceEvent @ 0x1403314A8 (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x140332024 (EtwpInvokeEventCallback.c)
 *     EtwpTraceLastBranchRecord @ 0x140336884 (EtwpTraceLastBranchRecord.c)
 *     EtwpTraceProcessorTrace @ 0x140336A78 (EtwpTraceProcessorTrace.c)
 */

void __fastcall EtwpLogKernelEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int16 a5,
        unsigned int a6)
{
  __int64 v6; // r15
  unsigned int v7; // r13d
  unsigned __int8 v11; // bl
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // r14
  unsigned int v16; // r15d
  unsigned int v17; // r10d
  __m128i v18; // xmm5
  __m128i v19; // xmm4
  unsigned int v20; // r15d
  __int64 v21; // r9
  __int64 v22; // rdx
  __m128i v23; // xmm3
  __m128i v24; // xmm0
  __int64 v25; // r9
  __int64 v26; // rcx
  __m128i v27; // xmm3
  __m128i v28; // xmm3
  __m128i v29; // xmm4
  __m128i v30; // xmm4
  _DWORD *v31; // rcx
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rax
  char *v35; // rax
  char *v36; // r12
  __int64 v37; // r14
  signed __int64 *v38; // roff
  signed __int64 v39; // rax
  unsigned __int64 v40; // rdx
  signed __int64 v41; // rtt
  int v42; // edx
  unsigned __int16 v43; // r8
  unsigned int v44; // esi
  unsigned int v45; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v47; // rax
  _DWORD *v48; // r8
  __int64 v49; // rax
  unsigned int v50; // r8d
  __int64 v51; // rcx
  unsigned int v52; // edx
  __int64 v53; // rcx
  __int64 v54; // rcx
  unsigned int Size; // [rsp+30h] [rbp-40h]
  __int64 v56; // [rsp+38h] [rbp-38h] BYREF
  void *v57; // [rsp+40h] [rbp-30h]
  __int64 v58; // [rsp+48h] [rbp-28h]
  __int64 v59; // [rsp+50h] [rbp-20h]
  unsigned __int64 v60; // [rsp+58h] [rbp-18h] BYREF
  signed __int64 *v61; // [rsp+60h] [rbp-10h]
  __int64 v62; // [rsp+68h] [rbp-8h]

  v6 = a3;
  v7 = 0;
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v56 = 0LL;
  v11 = 0;
  if ( (unsigned __int8)KeAreInterruptsEnabled() && KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v13 = v6;
    if ( !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v12 + 448) + 8 * v6), 1u) )
    {
      KeLeaveCriticalRegion();
      return;
    }
    v11 = 1;
  }
  else
  {
    v13 = v6;
  }
  v14 = *(_QWORD *)(a2 + 456);
  v59 = 8 * v13;
  v15 = *(_QWORD *)(8 * v13 + v14);
  v58 = v15;
  if ( (v15 & 1) != 0 )
  {
    EtwpCloseLogger((unsigned int)v6, a2, v11);
    return;
  }
  if ( v15 )
  {
    Size = 0;
    v16 = 0;
    v17 = 0;
    if ( a4 )
    {
      if ( a4 >= 8 )
      {
        v18 = 0LL;
        v19 = 0LL;
        v20 = 2;
        do
        {
          v21 = 2LL * v17;
          v17 += 8;
          v22 = v20 + 3;
          v23 = _mm_unpacklo_epi32(
                  _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v21 + 8)),
                  _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * v20 + 8)));
          v24 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v20 + 4) + 8));
          v25 = 2LL * (v20 + 5);
          v26 = 2LL * (v20 + 2);
          v27 = _mm_unpacklo_epi32(
                  v23,
                  _mm_unpacklo_epi32(
                    _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v20 - 1) + 8)),
                    _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v20 + 1) + 8))));
          v20 += 8;
          v18 = _mm_add_epi32(v27, v18);
          v28 = _mm_add_epi32(
                  _mm_unpacklo_epi32(
                    _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v26 + 8)), v24),
                    _mm_unpacklo_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)(16 * v22 + a1 + 8)),
                      _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v25 + 8)))),
                  v19);
          v19 = v28;
        }
        while ( v17 < (a4 & 0xFFFFFFF8) );
        v29 = _mm_add_epi32(v28, v18);
        v30 = _mm_add_epi32(v29, _mm_srli_si128(v29, 8));
        v16 = _mm_cvtsi128_si32(_mm_add_epi32(v30, _mm_srli_si128(v30, 4)));
        Size = v16;
      }
      if ( v17 < a4 )
      {
        v31 = (_DWORD *)(16LL * v17 + a1 + 8);
        v32 = a4 - v17;
        do
        {
          v16 += *v31;
          v31 += 4;
          --v32;
        }
        while ( v32 );
        Size = v16;
      }
    }
    if ( (a6 & 0x100) != 0 )
    {
      if ( (a6 & 0x10000000) != 0 )
      {
        v49 = EtwpReserveTraceBuffer(v15, v16 + 24, (unsigned int)&v60, (unsigned int)&v56, a6);
        if ( !v49 )
          goto LABEL_34;
        *(_DWORD *)v49 = (unsigned __int8)a6 | 0xC0040000;
        *(_QWORD *)(v49 + 16) = v56;
        *(_WORD *)(v49 + 4) = v16 + 24;
        *(_WORD *)(v49 + 6) = a5;
        *(_DWORD *)(v49 + 8) = KeGetCurrentThread()[1].CurrentRunTime;
        *(_DWORD *)(v49 + 12) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
        v35 = (char *)(v49 + 24);
      }
      else
      {
        v57 = KeGetCurrentThread();
        v47 = EtwpReserveTraceBuffer(v15, v16 + 32, (unsigned int)&v60, (unsigned int)&v56, a6);
        if ( !v47 )
          goto LABEL_34;
        v48 = v57;
        *(_DWORD *)v47 = (unsigned __int8)a6 | 0xC0020000;
        *(_QWORD *)(v47 + 16) = v56;
        *(_WORD *)(v47 + 4) = v16 + 32;
        *(_WORD *)(v47 + 6) = a5;
        *(_DWORD *)(v47 + 8) = v48[404];
        *(_DWORD *)(v47 + 12) = v48[402];
        *(_DWORD *)(v47 + 24) = v48[163];
        *(_DWORD *)(v47 + 28) = v48[183];
        v35 = (char *)(v47 + 32);
      }
    }
    else
    {
      v33 = *(_DWORD *)(v15 + 832);
      if ( (v33 & 0xC00) == 0 )
      {
LABEL_17:
        v34 = EtwpReserveTraceBuffer(v15, v16 + 16, (unsigned int)&v60, (unsigned int)&v56, a6);
        if ( !v34 )
          goto LABEL_34;
        *(_QWORD *)(v34 + 8) = v56;
        *(_DWORD *)v34 = (unsigned __int8)a6 | 0xC0110000;
        *(_WORD *)(v34 + 4) = v16 + 16;
        *(_WORD *)(v34 + 6) = a5;
        v35 = (char *)(v34 + 16);
        goto LABEL_19;
      }
      if ( (v33 & 0x400) != 0 && a5 == 1316 )
      {
        v35 = (char *)EtwpReserveWithPebsIndex(v15, 1316, v16, (unsigned int)&v60, (__int64)&v56, a6);
      }
      else
      {
        if ( (v33 & 0x800) == 0 )
          goto LABEL_17;
        v50 = 0;
        if ( !*(_DWORD *)(*(_QWORD *)(v15 + 1000) + 8LL) )
          goto LABEL_17;
        while ( 1 )
        {
          v51 = *(_QWORD *)(v15 + 1000);
          if ( *(_WORD *)(v51 + 2LL * v50 + 12) == a5 )
            break;
          if ( ++v50 >= *(_DWORD *)(v51 + 8) )
            goto LABEL_17;
        }
        v35 = (char *)EtwpReserveWithPmcCounters(v15, a5, v16, (unsigned int)&v60, (__int64)&v56, a6);
      }
    }
LABEL_19:
    v57 = v35;
    if ( v35 )
    {
      v36 = v35;
      if ( a4 )
      {
        while ( 1 )
        {
          v37 = *(unsigned int *)(a1 + 8);
          if ( (unsigned int)v37 > v16 )
            break;
          memmove(v36, *(const void **)a1, (unsigned int)v37);
          v36 += v37;
          v16 -= v37;
          ++v7;
          a1 += 16LL;
          if ( v7 >= a4 )
          {
            v15 = v58;
            goto LABEL_24;
          }
        }
        memset(v57, 0, Size);
        v15 = v58;
        EtwpUpdateEventsLostCount(v58);
      }
LABEL_24:
      if ( (*(_DWORD *)(v15 + 12) & 0x80000) != 0
        && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
      {
        EtwpSendTraceEvent(v15, &v60);
      }
      if ( *(_QWORD *)(v15 + 1304) )
        EtwpInvokeEventCallback(v15, &v60, 0LL, 0LL);
      v38 = v61;
      _m_prefetchw(v61);
      v39 = *v38;
      v40 = v60;
      if ( (*v38 ^ v60) >= 0xF )
      {
LABEL_42:
        _InterlockedDecrement((volatile signed __int32 *)(v40 + 12));
      }
      else
      {
        while ( 1 )
        {
          v41 = v39;
          v39 = _InterlockedCompareExchange64(v61, v39 + 1, v39);
          if ( v41 == v39 )
            break;
          v40 = v60;
          if ( (v39 ^ v60) >= 0xF )
            goto LABEL_42;
        }
      }
      v42 = *(_DWORD *)(v15 + 832);
      if ( (v42 & 0x80u) != 0 )
      {
        v43 = a5;
        if ( _bittest(*(const signed __int32 **)(v15 + 984), a5 & 0x1FFF) )
        {
          v44 = a6;
          EtwpStackTraceDispatcher(v15, &v56, 0LL, a6);
          v42 = *(_DWORD *)(v15 + 832);
          v43 = a5;
LABEL_32:
          v45 = 0;
          if ( (v42 & 0x8000) != 0 )
          {
            v52 = 0;
            if ( *(_DWORD *)(*(_QWORD *)(v15 + 1008) + 8LL) )
            {
              while ( 1 )
              {
                v53 = *(_QWORD *)(v15 + 1008);
                if ( *(_WORD *)(v53 + 2LL * v52 + 12) == v43 )
                  break;
                if ( ++v52 >= *(_DWORD *)(v53 + 8) )
                  goto LABEL_33;
              }
              EtwpTraceLastBranchRecord(v15, &v56, 0LL, v44);
              v43 = a5;
            }
          }
LABEL_33:
          if ( (*(_DWORD *)(v15 + 832) & 0x4000000) != 0 && *(_DWORD *)(*(_QWORD *)(v15 + 1016) + 24LL) )
          {
            while ( 1 )
            {
              v54 = *(_QWORD *)(v15 + 1016);
              if ( *(_WORD *)(v54 + 2LL * v45 + 28) == v43 )
                break;
              if ( ++v45 >= *(_DWORD *)(v54 + 24) )
                goto LABEL_34;
            }
            EtwpTraceProcessorTrace(v15, &v56, 0LL, v44);
          }
          goto LABEL_34;
        }
      }
      else
      {
        v43 = a5;
      }
      v44 = a6;
      goto LABEL_32;
    }
LABEL_34:
    if ( v11 )
    {
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a2 + 448) + v59), 1u);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
  }
}
