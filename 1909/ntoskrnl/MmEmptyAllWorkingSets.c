/*
 * XREFs of MmEmptyAllWorkingSets @ 0x1402C93B4
 * Callers:
 *     PopTransitionToSleep @ 0x14059D270 (PopTransitionToSleep.c)
 *     EtwpSetMark @ 0x1408F4E2C (EtwpSetMark.c)
 * Callees:
 *     PsGetNextPartition @ 0x1401231DC (PsGetNextPartition.c)
 *     MiEmptyAllWorkingSets @ 0x1402C815C (MiEmptyAllWorkingSets.c)
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
