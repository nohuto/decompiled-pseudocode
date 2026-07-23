/*
 * XREFs of MmTrimFilePagesFromWorkingSets @ 0x1402B4528
 * Callers:
 *     PopTransitionToSleep @ 0x14056D0F0 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x140120058 (PsGetNextPartition.c)
 *     MiQueueWorkingSetRequest @ 0x140175DFC (MiQueueWorkingSetRequest.c)
 */

void MmTrimFilePagesFromWorkingSets()
{
  __int64 *i; // rcx
  __int64 *NextPartition; // rax
  __int64 *v2; // rbx

  if ( byte_14043BF94 )
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
