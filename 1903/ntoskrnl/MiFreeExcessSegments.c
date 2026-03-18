/*
 * XREFs of MiFreeExcessSegments @ 0x1402B99CC
 * Callers:
 *     MiCountSystemPool @ 0x140023198 (MiCountSystemPool.c)
 *     MmResourcesAvailable @ 0x14003A2E0 (MmResourcesAvailable.c)
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     PsGetNextPartition @ 0x1400F9644 (PsGetNextPartition.c)
 *     MiShouldTrimUnusedSegments @ 0x1402BA7B4 (MiShouldTrimUnusedSegments.c)
 */

unsigned __int64 MiFreeExcessSegments()
{
  unsigned __int64 result; // rax
  void *i; // rcx
  void *v2; // rbx

  result = 9 * (qword_14046A5E8 / 0xAuLL);
  if ( qword_14046A568 >= result )
  {
    result = MiShouldTrimUnusedSegments(qword_14046A5E8, qword_14046A5E8 / 0xAuLL, qword_14046A568);
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
