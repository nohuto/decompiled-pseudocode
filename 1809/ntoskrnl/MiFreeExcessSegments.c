/*
 * XREFs of MiFreeExcessSegments @ 0x1401644D4
 * Callers:
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MmResourcesAvailable @ 0x1400FD980 (MmResourcesAvailable.c)
 *     MiAllocatePoolPages @ 0x140162C10 (MiAllocatePoolPages.c)
 *     MiAllocatePagedPoolPages @ 0x140162D70 (MiAllocatePagedPoolPages.c)
 *     MiExpandPagedPool @ 0x1401642EC (MiExpandPagedPool.c)
 *     MiCountSystemPool @ 0x1401B4F60 (MiCountSystemPool.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     PsGetNextPartition @ 0x140120058 (PsGetNextPartition.c)
 *     MiShouldTrimUnusedSegments @ 0x1402A35F4 (MiShouldTrimUnusedSegments.c)
 */

unsigned __int64 MiFreeExcessSegments()
{
  unsigned __int64 result; // rax
  void *i; // rcx
  void *v2; // rbx

  result = 9 * (qword_14043F868 / 0xAuLL);
  if ( qword_14043F7E8 >= result )
  {
    result = MiShouldTrimUnusedSegments(qword_14043F868, qword_14043F868 / 0xAuLL);
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
