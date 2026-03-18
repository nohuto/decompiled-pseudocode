/*
 * XREFs of MmSetTrimWhileAgingState @ 0x14011FF8C
 * Callers:
 *     PfSetSuperfetchInformation @ 0x140665898 (PfSetSuperfetchInformation.c)
 * Callees:
 *     PsGetNextPartition @ 0x14011FFC8 (PsGetNextPartition.c)
 *     MiSetTrimWhileAgingState @ 0x140120300 (MiSetTrimWhileAgingState.c)
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
