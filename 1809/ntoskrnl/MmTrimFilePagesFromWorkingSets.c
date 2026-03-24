/*
 * XREFs of MmTrimFilePagesFromWorkingSets @ 0x1402B4338
 * Callers:
 *     PopTransitionToSleep @ 0x14056C0F0 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x14011FFE8 (PsGetNextPartition.c)
 *     MiQueueWorkingSetRequest @ 0x140175CFC (MiQueueWorkingSetRequest.c)
 */

void MmTrimFilePagesFromWorkingSets()
{
  __int64 *i; // rcx
  __int64 *NextPartition; // rax
  __int64 *v2; // rbx

  if ( byte_14043AED4 )
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
