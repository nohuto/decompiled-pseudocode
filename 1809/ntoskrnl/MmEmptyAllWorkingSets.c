/*
 * XREFs of MmEmptyAllWorkingSets @ 0x1402B43A4
 * Callers:
 *     PopTransitionToSleep @ 0x14056D0F0 (PopTransitionToSleep.c)
 *     EtwpSetMark @ 0x1408B9C4C (EtwpSetMark.c)
 * Callees:
 *     PsGetNextPartition @ 0x140120058 (PsGetNextPartition.c)
 *     MiEmptyAllWorkingSets @ 0x1402B319C (MiEmptyAllWorkingSets.c)
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
