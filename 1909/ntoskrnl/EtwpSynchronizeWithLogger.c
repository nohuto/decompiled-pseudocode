/*
 * XREFs of EtwpSynchronizeWithLogger @ 0x1406CB384
 * Callers:
 *     EtwpFlushTrace @ 0x1406CAD04 (EtwpFlushTrace.c)
 *     EtwpRealtimeConnect @ 0x1406CAEC8 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1406CB2E0 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpUpdateTrace @ 0x140781CD0 (EtwpUpdateTrace.c)
 *     EtwpIncrementTraceFile @ 0x1408F27C8 (EtwpIncrementTraceFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     KeInsertQueueDpc @ 0x14009C950 (KeInsertQueueDpc.c)
 *     KeGetEffectiveIrql @ 0x1400A16B0 (KeGetEffectiveIrql.c)
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
