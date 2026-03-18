/*
 * XREFs of EtwpLogSystemEventUnsafe @ 0x14014753C
 * Callers:
 *     NtTraceEvent @ 0x1400C8CF0 (NtTraceEvent.c)
 *     EtwpTraceThreadRundown @ 0x140147240 (EtwpTraceThreadRundown.c)
 *     EtwpLogRegistryEvent @ 0x1408F4958 (EtwpLogRegistryEvent.c)
 *     EtwpSetMark @ 0x1408F4E2C (EtwpSetMark.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x1400A3060 (EtwpReserveTraceBuffer.c)
 *     EtwpOpenLogger @ 0x1400C8C44 (EtwpOpenLogger.c)
 *     EtwpReleaseTraceBuffer @ 0x1400C9A50 (EtwpReleaseTraceBuffer.c)
 *     EtwpUpdateEventsLostCount @ 0x14013BB30 (EtwpUpdateEventsLostCount.c)
 *     EtwpCloseLogger @ 0x140147E3C (EtwpCloseLogger.c)
 *     EtwpCopyEventData @ 0x140147E78 (EtwpCopyEventData.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     EtwpStackTraceDispatcher @ 0x14032CC1C (EtwpStackTraceDispatcher.c)
 *     EtwpSendTraceEvent @ 0x140330F08 (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x140331A84 (EtwpInvokeEventCallback.c)
 *     EtwpTraceLastBranchRecord @ 0x1403362E4 (EtwpTraceLastBranchRecord.c)
 *     EtwpTraceProcessorTrace @ 0x1403364D8 (EtwpTraceProcessorTrace.c)
 */

unsigned int *EtwpLogSystemEventUnsafe(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        __int16 a6,
        unsigned int a7,
        char a8,
        ...)
{
  unsigned int v10; // ebx
  unsigned int *result; // rax
  __int64 v12; // rdi
  unsigned int v13; // esi
  _DWORD *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r8
  void *v18; // r12
  __int64 v19; // r9
  unsigned int v20; // edx
  __int16 v21; // si
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rcx
  _BYTE v25[4]; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v26; // [rsp+34h] [rbp-84h]
  __int64 v27; // [rsp+38h] [rbp-80h] BYREF
  signed __int64 v29[5]; // [rsp+48h] [rbp-70h] BYREF
  unsigned int *v30; // [rsp+70h] [rbp-48h]

  memset(v29, 0, 24);
  v10 = 0;
  v25[0] = 0;
  v27 = 0LL;
  result = (unsigned int *)EtwpOpenLogger(a4, a1, 1, v25);
  v30 = result;
  v12 = (__int64)result;
  v29[3] = (signed __int64)result;
  if ( result )
  {
    v13 = 0;
    v26 = 0;
    if ( a5 )
    {
      v14 = (_DWORD *)(a2 + 8);
      v15 = a5;
      do
      {
        v13 += *v14;
        v14 += 4;
        --v15;
      }
      while ( v15 );
      v26 = v13;
    }
    v16 = EtwpReserveTraceBuffer(result, v13 + 32, (__int64)v29, &v27, a7);
    if ( v16 )
    {
      *(_DWORD *)v16 = (a7 & 0xC0000000) == 0x80000000
                     ? (unsigned __int8)a7 | 0xC0010000
                     : (unsigned __int8)a7 | 0xC0020000;
      *(_QWORD *)(v16 + 16) = v27;
      *(_WORD *)(v16 + 4) = v13 + 32;
      *(_WORD *)(v16 + 6) = a6;
      *(_DWORD *)(v16 + 8) = a3[404];
      *(_DWORD *)(v16 + 12) = a3[402];
      *(_DWORD *)(v16 + 24) = a3[163];
      *(_DWORD *)(v16 + 28) = a3[183];
      v18 = (void *)(v16 + 32);
      v29[4] = v16 + 32;
      if ( v16 != -32 )
      {
        if ( (unsigned int)EtwpCopyEventData(v18) )
        {
          memset(v18, 0, v13);
          EtwpUpdateEventsLostCount(v12);
        }
        if ( (*(_DWORD *)(v12 + 12) & 0x80000) != 0
          && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
        {
          EtwpSendTraceEvent(v12, v29);
        }
        if ( *(_QWORD *)(v12 + 1272) )
        {
          LOBYTE(v19) = a8;
          EtwpInvokeEventCallback(v12, v29, 0LL, v19);
        }
        EtwpReleaseTraceBuffer(v29);
        v20 = *(_DWORD *)(v12 + 832);
        if ( (v20 & 0x80u) != 0 )
        {
          v21 = a6;
          if ( _bittest(*(const signed __int32 **)(v12 + 984), a6 & 0x1FFF) )
          {
            EtwpStackTraceDispatcher(v12, &v27, a3, a7);
            v20 = v30[208];
          }
        }
        else
        {
          v21 = a6;
        }
        if ( (v20 & 0x8000) != 0 )
        {
          v22 = 0;
          if ( *(_DWORD *)(*(_QWORD *)(v12 + 1008) + 8LL) )
          {
            while ( 1 )
            {
              v23 = *(_QWORD *)(v12 + 1008);
              if ( *(_WORD *)(v23 + 2LL * v22 + 12) == v21 )
                break;
              if ( ++v22 >= *(_DWORD *)(v23 + 8) )
                goto LABEL_18;
            }
            EtwpTraceLastBranchRecord(v12, &v27, a3, a7);
          }
        }
LABEL_18:
        if ( (*(_DWORD *)(v12 + 832) & 0x4000000) != 0 && *(_DWORD *)(*(_QWORD *)(v12 + 1016) + 24LL) )
        {
          while ( 1 )
          {
            v24 = *(_QWORD *)(v12 + 1016);
            if ( *(_WORD *)(v24 + 2LL * v10 + 28) == v21 )
              break;
            if ( ++v10 >= *(_DWORD *)(v24 + 24) )
              goto LABEL_19;
          }
          EtwpTraceProcessorTrace(v12, &v27, a3, a7);
        }
      }
    }
LABEL_19:
    LOBYTE(v17) = v25[0];
    return (unsigned int *)EtwpCloseLogger(a4, a1, v17);
  }
  return result;
}
