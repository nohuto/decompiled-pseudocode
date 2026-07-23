/*
 * XREFs of MmSetTrimWhileAgingState @ 0x14012001C
 * Callers:
 *     PfSetSuperfetchInformation @ 0x140666A38 (PfSetSuperfetchInformation.c)
 * Callees:
 *     PsGetNextPartition @ 0x140120058 (PsGetNextPartition.c)
 *     MiSetTrimWhileAgingState @ 0x140120390 (MiSetTrimWhileAgingState.c)
 */

_QWORD *__fastcall MmSetTrimWhileAgingState(unsigned int a1)
{
  _QWORD *i; // rcx
  _QWORD *result; // rax
  _QWORD *v4; // rdi

  for ( i = 0LL; ; i = v4 )
  {
    result = (_QWORD *)PsGetNextPartition(i);
    v4 = result;
    if ( !result )
      break;
    MiSetTrimWhileAgingState(*result, a1);
  }
  return result;
}
