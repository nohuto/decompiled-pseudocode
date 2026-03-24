/*
 * XREFs of EtwpSynchronizeWithLogger @ 0x1406C2FA8
 * Callers:
 *     EtwpFlushTrace @ 0x1406C2940 (EtwpFlushTrace.c)
 *     EtwpRealtimeConnect @ 0x1406C2AF8 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1406C2F04 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpUpdateTrace @ 0x140725ADC (EtwpUpdateTrace.c)
 *     EtwpIncrementTraceFile @ 0x1408B6510 (EtwpIncrementTraceFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeInsertQueueDpc @ 0x140062190 (KeInsertQueueDpc.c)
 *     KeResetEvent @ 0x1400B8AA0 (KeResetEvent.c)
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 *     KeGetEffectiveIrql @ 0x1400CAAD0 (KeGetEffectiveIrql.c)
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
