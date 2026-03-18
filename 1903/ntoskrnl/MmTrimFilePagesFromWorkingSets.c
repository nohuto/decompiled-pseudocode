/*
 * XREFs of MmTrimFilePagesFromWorkingSets @ 0x1402C97D8
 * Callers:
 *     PopTransitionToSleep @ 0x14059BD10 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x1400F9644 (PsGetNextPartition.c)
 *     MiQueueWorkingSetRequest @ 0x14017F1F0 (MiQueueWorkingSetRequest.c)
 */

void MmTrimFilePagesFromWorkingSets()
{
  __int64 *i; // rcx
  __int64 *NextPartition; // rax
  __int64 *v2; // rbx

  if ( byte_140466954 )
  {
    for ( i = 0LL; ; i = v2 )
    {
      NextPartition = (__int64 *)PsGetNextPartition(i);
      v2 = NextPartition;
      if ( !NextPartition )
        break;
      MiQueueWorkingSetRequest(*NextPartition, 256);
    }
  }
}
