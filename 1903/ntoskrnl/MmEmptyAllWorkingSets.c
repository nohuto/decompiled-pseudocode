/*
 * XREFs of MmEmptyAllWorkingSets @ 0x1402C9654
 * Callers:
 *     PopTransitionToSleep @ 0x14059BD10 (PopTransitionToSleep.c)
 *     EtwpSetMark @ 0x1408F54BC (EtwpSetMark.c)
 * Callees:
 *     PsGetNextPartition @ 0x1400F9644 (PsGetNextPartition.c)
 *     MiEmptyAllWorkingSets @ 0x1402C83FC (MiEmptyAllWorkingSets.c)
 */

__int64 *MmEmptyAllWorkingSets()
{
  __int64 *i; // rcx
  __int64 *result; // rax
  __int64 *v2; // rbx

  for ( i = 0LL; ; i = v2 )
  {
    result = (__int64 *)PsGetNextPartition(i);
    v2 = result;
    if ( !result )
      break;
    MiEmptyAllWorkingSets(*result);
  }
  return result;
}
