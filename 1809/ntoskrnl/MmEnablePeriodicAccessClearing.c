/*
 * XREFs of MmEnablePeriodicAccessClearing @ 0x1405670A4
 * Callers:
 *     PfTAccessTracingCleanup @ 0x14056698C (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140566FF4 (PfTAccessTracingStart.c)
 * Callees:
 *     PsGetNextPartition @ 0x140120058 (PsGetNextPartition.c)
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
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)result + 7024LL) + 55LL) = a1;
  }
  return result;
}
