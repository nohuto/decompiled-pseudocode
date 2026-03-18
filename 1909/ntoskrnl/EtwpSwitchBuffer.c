/*
 * XREFs of EtwpSwitchBuffer @ 0x140003560
 * Callers:
 *     EtwpReserveTraceBuffer @ 0x1400A3060 (EtwpReserveTraceBuffer.c)
 * Callees:
 *     EtwpDequeueFreeBuffer @ 0x140003800 (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1400039AC (EtwpEnqueueAvailableBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x140003B60 (EtwpPrepareDirtyBuffer.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KeInsertQueueDpc @ 0x14009C950 (KeInsertQueueDpc.c)
 *     KeGetEffectiveIrql @ 0x1400A16B0 (KeGetEffectiveIrql.c)
 *     EtwpRequestFlushTimer @ 0x1400E28C0 (EtwpRequestFlushTimer.c)
 *     EtwpAllocateFreeBuffers @ 0x1400FCE88 (EtwpAllocateFreeBuffers.c)
 *     EtwpBuffersFlushRequired @ 0x140136260 (EtwpBuffersFlushRequired.c)
 *     EtwpEnqueueOverflowBuffer @ 0x14013CEBC (EtwpEnqueueOverflowBuffer.c)
 *     EtwpGetTimeStampAndQpcDelta @ 0x140331BC0 (EtwpGetTimeStampAndQpcDelta.c)
 */

__int64 __fastcall EtwpSwitchBuffer(unsigned int *a1, __int64 a2, signed __int64 *a3, __int16 a4, __int16 a5)
{
  int v6; // r15d
  signed __int64 v10; // rdx
  __int64 v11; // rsi
  int v12; // ebx
  unsigned __int64 v13; // rbx
  signed __int64 v14; // r14
  __int64 v15; // rcx
  signed __int64 i; // rbx
  signed __int64 v17; // rax
  unsigned __int64 v19; // r14
  signed __int64 v20[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF

  v6 = a1[3] & 0x400;
  v11 = ((__int64 (*)(void))EtwpDequeueFreeBuffer)();
  if ( v11 )
  {
LABEL_8:
    if ( (a1[3] & 0x10000000) == 0 )
      *(_WORD *)(v11 + 40) = a4;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 12), 0xFu);
    if ( (a1[208] & 0x8000000) != 0 )
    {
      v21 = 0LL;
      v13 = *(_QWORD *)(*((_QWORD *)a1 + 135) + 4136LL) + ((unsigned __int64)KeGetCurrentPrcb()->Number << 6);
      do
      {
        v14 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 8LL * *a1);
        if ( (unsigned int)EtwpGetTimeStampAndQpcDelta(a1, &v21, v20) )
          goto LABEL_15;
      }
      while ( v14 != _InterlockedCompareExchange64(
                       (volatile signed __int64 *)(8LL * *a1 + *(_QWORD *)(v13 + 16)),
                       v20[0],
                       v14) );
      v10 = 24LL;
      v15 = v11 + *(unsigned int *)(v11 + 8);
      *(_QWORD *)(v15 + 8) = v21;
      *(_QWORD *)(v15 + 16) = v20[0];
      *(_DWORD *)(v15 + 4) = 5308440;
      *(_DWORD *)v15 = -1072627710;
      *(_DWORD *)(v11 + 8) += 24;
    }
    while ( 1 )
    {
LABEL_15:
      if ( !v6 )
        *(_QWORD *)(v11 + 32) = a2;
      _m_prefetchw(a3);
      for ( i = *a3; (a2 ^ (unsigned __int64)i) <= 0xF; i = v17 )
      {
        v10 = (v11 | 0xF) & -(__int64)(v11 != 0);
        v17 = _InterlockedCompareExchange64(a3, v10, i);
        if ( i == v17 )
          break;
      }
      v19 = i & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (i & 0xFFFFFFFFFFFFFFF0uLL) == a2 )
        break;
      if ( v19 )
      {
        if ( a2 )
          _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
        _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 12), 0xFFFFFFF1);
        if ( v6 )
          EtwpEnqueueOverflowBuffer(a1, v11);
        else
          EtwpEnqueueAvailableBuffer(a1, v11, 0LL);
        return 0LL;
      }
      if ( a2 )
        _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
      a2 = 0LL;
    }
    if ( v19 )
    {
      EtwpPrepareDirtyBuffer(a1, i & 0xFFFFFFFFFFFFFFF0uLL);
      _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 12), ~(i & 0xF));
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
  else
  {
    v12 = a5 & 0x200;
    while ( !v12
         && (unsigned __int8)KeGetEffectiveIrql() <= 2u
         && (a1[3] & 0x40000) == 0
         && (unsigned int)EtwpAllocateFreeBuffers(a1, 1LL) == 1 )
    {
      v11 = EtwpDequeueFreeBuffer(a1);
      if ( v11 )
        goto LABEL_8;
    }
    if ( a2 )
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
    return 3221225495LL;
  }
}
