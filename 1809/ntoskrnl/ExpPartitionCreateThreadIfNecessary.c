/*
 * XREFs of ExpPartitionCreateThreadIfNecessary @ 0x14012AFF0
 * Callers:
 *     ExpTryQueueWorkItem @ 0x1400D17AC (ExpTryQueueWorkItem.c)
 * Callees:
 *     ExpNewThreadNecessary @ 0x1400B6A40 (ExpNewThreadNecessary.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 */

char __fastcall ExpPartitionCreateThreadIfNecessary(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al
  __int64 v4; // r9
  __int64 v5; // r10

  result = ExpNewThreadNecessary(a3, *(_DWORD *)(a3 + 720));
  if ( result )
    return KeSetEvent(
             (PRKEVENT)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 8LL * *(unsigned __int16 *)(v4 + 146)) + 16LL),
             0,
             0);
  return result;
}
