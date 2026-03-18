/*
 * XREFs of MmEnablePeriodicAccessClearing @ 0x14059E3E4
 * Callers:
 *     PfTAccessTracingCleanup @ 0x14059E1E4 (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x14059E334 (PfTAccessTracingStart.c)
 * Callees:
 *     PsGetNextPartition @ 0x1401231DC (PsGetNextPartition.c)
 */

void *__fastcall MmEnablePeriodicAccessClearing(char a1)
{
  void *v2; // rcx
  void *result; // rax

  v2 = 0LL;
  while ( 1 )
  {
    result = PsGetNextPartition(v2);
    if ( !result )
      break;
    v2 = result;
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)result + 7800LL) + 55LL) = a1;
  }
  return result;
}
