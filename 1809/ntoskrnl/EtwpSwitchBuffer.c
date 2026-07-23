/*
 * XREFs of EtwpSwitchBuffer @ 0x140014FB8
 * Callers:
 *     EtwpReserveTraceBuffer @ 0x1400C7540 (EtwpReserveTraceBuffer.c)
 * Callees:
 *     EtwpRequestFlushTimer @ 0x140014B58 (EtwpRequestFlushTimer.c)
 *     EtwpDequeueFreeBuffer @ 0x140015278 (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1400153E0 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpQueryUsedProcessorCount @ 0x14001557C (EtwpQueryUsedProcessorCount.c)
 *     EtwpPrepareDirtyBuffer @ 0x140015598 (EtwpPrepareDirtyBuffer.c)
 *     KeInsertQueueDpc @ 0x140062190 (KeInsertQueueDpc.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KeGetEffectiveIrql @ 0x1400CABB0 (KeGetEffectiveIrql.c)
 *     EtwpAllocateFreeBuffers @ 0x1400DD1D4 (EtwpAllocateFreeBuffers.c)
 *     EtwpEnqueueOverflowBuffer @ 0x14013A90C (EtwpEnqueueOverflowBuffer.c)
 *     EtwpGetTimeStampAndQpcDelta @ 0x140313F8C (EtwpGetTimeStampAndQpcDelta.c)
 */

__int64 __fastcall EtwpSwitchBuffer(unsigned int *a1, __int64 a2, signed __int64 *a3, __int16 a4, __int16 a5)
{
  __int64 v9; // rsi
  int v10; // r15d
  unsigned int Number; // ebx
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  signed __int64 i; // rbx
  signed __int64 v15; // rax
  unsigned __int64 v17; // r14
  __int64 v18; // rdx
  signed __int64 v19; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v20[4]; // [rsp+28h] [rbp-20h] BYREF

  v9 = ((__int64 (*)(void))EtwpDequeueFreeBuffer)();
  if ( v9 )
  {
LABEL_7:
    v10 = a1[3] & 0x400;
    if ( (a1[3] & 0x10000000) == 0 )
      *(_WORD *)(v9 + 40) = a4;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFu);
    if ( (a1[208] & 0x8000000) != 0 )
    {
      Number = KeGetCurrentPrcb()->Number;
      EtwpGetTimeStampAndQpcDelta(a1, v20, &v19);
      v12 = *(_QWORD *)(*((_QWORD *)a1 + 135) + 4136LL) + ((unsigned __int64)Number << 6);
      _InterlockedCompareExchange64(
        (volatile signed __int64 *)(8LL * *a1 + *(_QWORD *)(v12 + 16)),
        v19,
        *(_QWORD *)(*(_QWORD *)(v12 + 16) + 8LL * *a1));
      v13 = v9 + *(unsigned int *)(v9 + 8);
      *(_QWORD *)(v13 + 8) = v20[0];
      *(_QWORD *)(v13 + 16) = v19;
      *(_DWORD *)(v13 + 4) = 5308440;
      *(_DWORD *)v13 = -1072627710;
      *(_DWORD *)(v9 + 8) += 24;
    }
    while ( 1 )
    {
      if ( !v10 )
        *(_QWORD *)(v9 + 32) = a2;
      _m_prefetchw(a3);
      for ( i = *a3; (a2 ^ (unsigned __int64)i) <= 0xF; i = v15 )
      {
        v15 = _InterlockedCompareExchange64(a3, (v9 | 0xF) & -(__int64)(v9 != 0), i);
        if ( i == v15 )
          break;
      }
      v17 = i & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (i & 0xFFFFFFFFFFFFFFF0uLL) == a2 )
        break;
      if ( v17 )
      {
        if ( a2 )
          _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
        _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFFFFFFF1);
        if ( v10 )
          EtwpEnqueueOverflowBuffer(a1, v9);
        else
          EtwpEnqueueAvailableBuffer(a1, v9, 0LL);
        return 0LL;
      }
      if ( a2 )
        _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
      a2 = 0LL;
    }
    if ( v17 )
    {
      EtwpPrepareDirtyBuffer(a1, i & 0xFFFFFFFFFFFFFFF0uLL);
      _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 12), ~(i & 0xF));
      if ( !v10 && (!a1[57] || (int)(a1[62] - EtwpQueryUsedProcessorCount(a1, v18) - a1[61]) >= (int)a1[57]) )
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
      EtwpRequestFlushTimer((__int64)a1, (a5 & 0x600) != 0);
    }
    return 0LL;
  }
  else
  {
    while ( (a5 & 0x200) == 0
         && (unsigned __int8)KeGetEffectiveIrql() <= 2u
         && (a1[3] & 0x40000) == 0
         && (unsigned int)EtwpAllocateFreeBuffers(a1, 1LL) == 1 )
    {
      v9 = EtwpDequeueFreeBuffer(a1);
      if ( v9 )
        goto LABEL_7;
    }
    if ( a2 )
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
    return 3221225495LL;
  }
}
