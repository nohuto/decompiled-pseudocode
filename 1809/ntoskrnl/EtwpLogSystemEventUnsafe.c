/*
 * XREFs of EtwpLogSystemEventUnsafe @ 0x14017C82C
 * Callers:
 *     NtTraceEvent @ 0x1400CB590 (NtTraceEvent.c)
 *     EtwpTraceThreadRundown @ 0x14017C50C (EtwpTraceThreadRundown.c)
 *     EtwpLogRegistryEvent @ 0x1408B9794 (EtwpLogRegistryEvent.c)
 *     EtwpSetMark @ 0x1408B9C4C (EtwpSetMark.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x1400C7540 (EtwpReserveTraceBuffer.c)
 *     EtwpOpenLogger @ 0x140113820 (EtwpOpenLogger.c)
 *     EtwpCloseLogger @ 0x1401138CC (EtwpCloseLogger.c)
 *     EtwpReleaseTraceBuffer @ 0x140113908 (EtwpReleaseTraceBuffer.c)
 *     EtwpUpdateEventsLostCount @ 0x140113944 (EtwpUpdateEventsLostCount.c)
 *     EtwpCopyEventData @ 0x14017D110 (EtwpCopyEventData.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     EtwpStackTraceDispatcher @ 0x14030F70C (EtwpStackTraceDispatcher.c)
 *     EtwpSendTraceEvent @ 0x14031344C (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x140313F44 (EtwpInvokeEventCallback.c)
 *     EtwpTraceLastBranchRecord @ 0x140318048 (EtwpTraceLastBranchRecord.c)
 *     EtwpTraceProcessorTrace @ 0x14031822C (EtwpTraceProcessorTrace.c)
 */

_QWORD *__fastcall EtwpLogSystemEventUnsafe(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        __int16 a6,
        unsigned int a7)
{
  _DWORD *v7; // r14
  _QWORD *result; // rax
  __int64 v10; // rbx
  unsigned int v11; // edi
  unsigned int v12; // esi
  _DWORD *v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // r9
  int v16; // edx
  void *v17; // r13
  _QWORD *v18; // r15
  int v19; // edx
  __int16 v20; // si
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rcx
  char v24[4]; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v25; // [rsp+34h] [rbp-84h]
  __int64 v26; // [rsp+38h] [rbp-80h] BYREF
  int v27; // [rsp+40h] [rbp-78h]
  _QWORD *v28; // [rsp+48h] [rbp-70h]
  _QWORD *v29; // [rsp+50h] [rbp-68h]
  unsigned __int64 v30; // [rsp+58h] [rbp-60h]
  signed __int64 v31[10]; // [rsp+68h] [rbp-50h] BYREF

  v7 = (_DWORD *)a3;
  LOBYTE(a3) = 1;
  result = (_QWORD *)EtwpOpenLogger(a4, a1, a3, v24);
  v28 = result;
  v10 = (__int64)result;
  v29 = result;
  v11 = 0;
  if ( result )
  {
    v12 = 0;
    v25 = 0;
    if ( a5 )
    {
      v13 = (_DWORD *)(a2 + 8);
      v14 = a5;
      do
      {
        v12 += *v13;
        v13 += 4;
        --v14;
      }
      while ( v14 );
      v25 = v12;
    }
    v15 = EtwpReserveTraceBuffer((unsigned int *)v10, v12 + 32, (__int64)v31, &v26, a7);
    if ( v15 )
    {
      v16 = -1073676288;
      if ( (a7 & 0xC0000000) != 0x80000000 )
        v16 = -1073610752;
      *(_DWORD *)v15 = (unsigned __int8)a7 | v16;
      *(_QWORD *)(v15 + 16) = v26;
      *(_WORD *)(v15 + 4) = v12 + 32;
      *(_WORD *)(v15 + 6) = a6;
      *(_DWORD *)(v15 + 8) = v7[400];
      *(_DWORD *)(v15 + 12) = v7[398];
      *(_DWORD *)(v15 + 24) = v7[163];
      *(_DWORD *)(v15 + 28) = v7[183];
      v17 = (void *)(v15 + 32);
      v30 = v15 + 32;
      if ( v15 != -32LL )
      {
        v27 = EtwpCopyEventData(v17);
        v18 = v28;
        if ( v27 )
        {
          memset(v17, 0, v12);
          EtwpUpdateEventsLostCount(v10);
        }
        if ( (*(_DWORD *)(v10 + 12) & 0x80000) != 0
          && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
        {
          EtwpSendTraceEvent(v10, v31);
        }
        if ( *(_QWORD *)(v10 + 1272) )
          EtwpInvokeEventCallback(v10, v31);
        EtwpReleaseTraceBuffer(v31);
        v19 = *(_DWORD *)(v10 + 832);
        if ( (v19 & 0x80u) != 0 )
        {
          v20 = a6;
          if ( _bittest(*(const signed __int32 **)(v10 + 984), a6 & 0x1FFF) )
          {
            EtwpStackTraceDispatcher(v10, &v26, v7, a7);
            v19 = *((_DWORD *)v18 + 208);
          }
        }
        else
        {
          v20 = a6;
        }
        if ( (v19 & 0x8000) != 0 )
        {
          v21 = 0;
          if ( *(_DWORD *)(*(_QWORD *)(v10 + 1008) + 8LL) )
          {
            while ( 1 )
            {
              v22 = *(_QWORD *)(v10 + 1008);
              if ( *(_WORD *)(v22 + 2LL * v21 + 12) == v20 )
                break;
              if ( ++v21 >= *(_DWORD *)(v22 + 8) )
                goto LABEL_18;
            }
            EtwpTraceLastBranchRecord(v10, &v26, v7, a7);
          }
        }
LABEL_18:
        if ( (*(_DWORD *)(v10 + 832) & 0x4000000) != 0 && *(_DWORD *)(*(_QWORD *)(v10 + 1016) + 24LL) )
        {
          while ( 1 )
          {
            v23 = *(_QWORD *)(v10 + 1016);
            if ( *(_WORD *)(v23 + 2LL * v11 + 28) == v20 )
              break;
            if ( ++v11 >= *(_DWORD *)(v23 + 24) )
              return EtwpCloseLogger(a4, a1, v24[0]);
          }
          EtwpTraceProcessorTrace(v10, &v26, v7, a7);
        }
      }
    }
    return EtwpCloseLogger(a4, a1, v24[0]);
  }
  return result;
}
