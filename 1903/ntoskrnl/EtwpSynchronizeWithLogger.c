/*
 * XREFs of EtwpSynchronizeWithLogger @ 0x1406CC554
 * Callers:
 *     EtwpFlushTrace @ 0x1406CBED4 (EtwpFlushTrace.c)
 *     EtwpRealtimeConnect @ 0x1406CC098 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1406CC4B0 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpUpdateTrace @ 0x14077F2B0 (EtwpUpdateTrace.c)
 *     EtwpIncrementTraceFile @ 0x1408F2E5C (EtwpIncrementTraceFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     KeInsertQueueDpc @ 0x1400BCAD0 (KeInsertQueueDpc.c)
 *     KeGetEffectiveIrql @ 0x1400C1830 (KeGetEffectiveIrql.c)
 */

__int64 __fastcall EtwpSynchronizeWithLogger(__int64 a1, unsigned int a2)
{
  struct _KEVENT *v2; // rsi
  unsigned int v5; // ebx

  v2 = (struct _KEVENT *)(a1 + 472);
  KeResetEvent((PRKEVENT)(a1 + 472));
  _InterlockedOr((volatile signed __int32 *)(a1 + 836), a2);
  if ( KeGetEffectiveIrql() > 2u )
  {
    if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 836), 8u) )
      KeInsertQueueDpc((PRKDPC)(a1 + 584), 0LL, 0LL);
  }
  else
  {
    KeSetEvent((PRKEVENT)(a1 + 496), 0, 0);
  }
  KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
  v5 = *(_DWORD *)(a1 + 56);
  KeResetEvent(v2);
  *(_DWORD *)(a1 + 56) = 0;
  return v5;
}
