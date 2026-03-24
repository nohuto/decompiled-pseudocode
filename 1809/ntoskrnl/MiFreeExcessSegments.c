/*
 * XREFs of MiFreeExcessSegments @ 0x1401643D4
 * Callers:
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MmResourcesAvailable @ 0x1400FD900 (MmResourcesAvailable.c)
 *     MiAllocatePoolPages @ 0x140162B10 (MiAllocatePoolPages.c)
 *     MiAllocatePagedPoolPages @ 0x140162C70 (MiAllocatePagedPoolPages.c)
 *     MiExpandPagedPool @ 0x1401641EC (MiExpandPagedPool.c)
 *     MiCountSystemPool @ 0x1401B4E20 (MiCountSystemPool.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 *     PsGetNextPartition @ 0x14011FFE8 (PsGetNextPartition.c)
 *     MiShouldTrimUnusedSegments @ 0x1402A3404 (MiShouldTrimUnusedSegments.c)
 */

unsigned __int64 MiFreeExcessSegments()
{
  unsigned __int64 result; // rax
  void *i; // rcx
  void *v2; // rbx

  result = 9 * (qword_14043E7A8 / 0xAuLL);
  if ( qword_14043E728 >= result )
  {
    result = MiShouldTrimUnusedSegments(qword_14043E7A8, qword_14043E7A8 / 0xAuLL);
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
