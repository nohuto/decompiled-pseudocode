/*
 * XREFs of MmFlushAllPagesEx @ 0x1401530CC
 * Callers:
 *     PopTransitionToSleep @ 0x14056C0F0 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x14011FFC8 (PsGetNextPartition.c)
 *     MiFlushAllPages @ 0x140153118 (MiFlushAllPages.c)
 */

_QWORD *__fastcall MmFlushAllPagesEx(char a1, unsigned int a2)
{
  void *i; // rcx
  _QWORD *result; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rbx

  for ( i = 0LL; ; i = v7 )
  {
    result = PsGetNextPartition(i);
    v7 = result;
    if ( !result )
      break;
    LOBYTE(v6) = a1;
    MiFlushAllPages(*result, v6, a2);
  }
  return result;
}
