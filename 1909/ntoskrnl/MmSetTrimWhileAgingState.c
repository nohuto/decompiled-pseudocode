/*
 * XREFs of MmSetTrimWhileAgingState @ 0x1401231A0
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1406A75E8 (PfSetSuperfetchInformation.c)
 * Callees:
 *     PsGetNextPartition @ 0x1401231DC (PsGetNextPartition.c)
 *     MiSetTrimWhileAgingState @ 0x140123428 (MiSetTrimWhileAgingState.c)
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
