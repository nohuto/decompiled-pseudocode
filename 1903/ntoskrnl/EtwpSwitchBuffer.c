/*
 * XREFs of EtwpSwitchBuffer @ 0x140003560
 * Callers:
 *     EtwpReserveTraceBuffer @ 0x1400C31E0 (EtwpReserveTraceBuffer.c)
 * Callees:
 *     EtwpDequeueFreeBuffer @ 0x140003774 (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x140003928 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x140003ADC (EtwpPrepareDirtyBuffer.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     EtwpRequestFlushTimer @ 0x1400B27D8 (EtwpRequestFlushTimer.c)
 *     KeInsertQueueDpc @ 0x1400BCAD0 (KeInsertQueueDpc.c)
 *     KeGetEffectiveIrql @ 0x1400C1830 (KeGetEffectiveIrql.c)
 *     EtwpAllocateFreeBuffers @ 0x140108A64 (EtwpAllocateFreeBuffers.c)
 *     EtwpBuffersFlushRequired @ 0x1401358A0 (EtwpBuffersFlushRequired.c)
 *     EtwpEnqueueOverflowBuffer @ 0x14013C8DC (EtwpEnqueueOverflowBuffer.c)
 *     EtwpGetTimeStampAndQpcDelta @ 0x140332160 (EtwpGetTimeStampAndQpcDelta.c)
 */

__int64 __fastcall EtwpSwitchBuffer(unsigned int *a1, __int64 a2, signed __int64 *a3, __int16 a4, __int16 a5)
{
  int v6; // r15d
  signed __int64 v10; // rdx
  __int64 v11; // rbp
  signed __int64 i; // rbx
  signed __int64 v13; // rax
  unsigned __int64 v14; // r14
  int v16; // ebx
  unsigned __int64 v17; // rbx
  signed __int64 v18; // r14
  __int64 v19; // rcx
  signed __int64 v20[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF

  v6 = a1[3] & 0x400;
  v11 = ((__int64 (*)(void))EtwpDequeueFreeBuffer)();
  if ( v11 )
  {
LABEL_2:
    if ( (a1[3] & 0x10000000) == 0 )
      *(_WORD *)(v11 + 40) = a4;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 12), 0xFu);
    if ( (a1[208] & 0x8000000) != 0 )
    {
      v21 = 0LL;
      v17 = *(_QWORD *)(*((_QWORD *)a1 + 139) + 4136LL) + ((unsigned __int64)KeGetCurrentPrcb()->Number << 6);
      do
      {
        v18 = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 8LL * *a1);
        if ( (unsigned int)EtwpGetTimeStampAndQpcDelta(a1, &v21, v20) )
          goto LABEL_5;
      }
      while ( v18 != _InterlockedCompareExchange64(
                       (volatile signed __int64 *)(8LL * *a1 + *(_QWORD *)(v17 + 16)),
                       v20[0],
                       v18) );
      v10 = 24LL;
      v19 = v11 + *(unsigned int *)(v11 + 8);
      *(_QWORD *)(v19 + 8) = v21;
      *(_QWORD *)(v19 + 16) = v20[0];
      *(_DWORD *)(v19 + 4) = 5308440;
      *(_DWORD *)v19 = -1072627710;
      *(_DWORD *)(v11 + 8) += 24;
    }
    while ( 1 )
    {
LABEL_5:
      if ( !v6 )
        *(_QWORD *)(v11 + 32) = a2;
      _m_prefetchw(a3);
      for ( i = *a3; (a2 ^ (unsigned __int64)i) <= 0xF; i = v13 )
      {
        v10 = (v11 | 0xF) & -(__int64)(v11 != 0);
        v13 = _InterlockedCompareExchange64(a3, v10, i);
        if ( i == v13 )
          break;
      }
      v14 = i & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (i & 0xFFFFFFFFFFFFFFF0uLL) == a2 )
      {
        if ( v14 )
        {
          EtwpPrepareDirtyBuffer(a1, i & 0xFFFFFFFFFFFFFFF0uLL);
          _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 12), ~(i & 0xF));
          if ( !v6 && (unsigned __int8)EtwpBuffersFlushRequired(a1) )
          {
            if ( (a5 & 0x600) != 0 || (unsigned __int8)KeGetEffectiveIrql() > 2u )
            {
              if ( !_interlockedbittestandset((volatile signed __int32 *)a1 + 209, 8u) )
                KeInsertQueueDpc((PRKDPC)(a1 + 146), 0LL, 0LL);
            }
            else
            {
              KeSetEvent((PRKEVENT)(a1 + 124), 0, 0);
            }
          }
        }
        else if ( a1[56] )
        {
          LOBYTE(v10) = (a5 & 0x600) != 0;
          EtwpRequestFlushTimer(a1, v10);
        }
        return 0LL;
      }
      if ( v14 )
        break;
      if ( a2 )
        _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
      a2 = 0LL;
    }
    if ( a2 )
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
    _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 12), 0xFFFFFFF1);
    if ( v6 )
      EtwpEnqueueOverflowBuffer(a1, v11);
    else
      EtwpEnqueueAvailableBuffer(a1, v11, 0LL);
    return 0LL;
  }
  else
  {
    v16 = a5 & 0x200;
    while ( !v16 && (unsigned __int8)KeGetEffectiveIrql() <= 2u && (unsigned int)EtwpAllocateFreeBuffers(a1, 1LL) == 1 )
    {
      v11 = EtwpDequeueFreeBuffer(a1);
      if ( v11 )
        goto LABEL_2;
    }
    if ( a2 )
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
    return 3221225495LL;
  }
}
