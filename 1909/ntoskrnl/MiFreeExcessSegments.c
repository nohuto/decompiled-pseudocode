/*
 * XREFs of MiFreeExcessSegments @ 0x1402B972C
 * Callers:
 *     MiCountSystemPool @ 0x140023588 (MiCountSystemPool.c)
 *     MmResourcesAvailable @ 0x14003A6E0 (MmResourcesAvailable.c)
 *     MiChargeCommit @ 0x140052270 (MiChargeCommit.c)
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     PsGetNextPartition @ 0x1401231DC (PsGetNextPartition.c)
 *     MiShouldTrimUnusedSegments @ 0x1402BA514 (MiShouldTrimUnusedSegments.c)
 */

unsigned __int64 MiFreeExcessSegments()
{
  unsigned __int64 result; // rax
  void *i; // rcx
  void *v2; // rbx

  result = 9 * (qword_14046A328 / 0xAuLL);
  if ( qword_14046A2A8 >= result )
  {
    result = MiShouldTrimUnusedSegments(qword_14046A328, qword_14046A328 / 0xAuLL, qword_14046A2A8);
    if ( (_DWORD)result )
    {
      for ( i = 0LL; ; i = v2 )
      {
        result = (unsigned __int64)PsGetNextPartition(i);
        v2 = (void *)result;
        if ( !result )
          break;
        if ( *(_QWORD *)(*(_QWORD *)result + 1632LL) )
          KeSetEvent((PRKEVENT)(*(_QWORD *)result + 1336LL), 0, 0);
      }
    }
  }
  return result;
}
