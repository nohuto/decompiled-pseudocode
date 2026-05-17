/*
 * XREFs of LdrFlushAlternateResourceModules @ 0x18008AA00
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x18009CC20 (ZwUnmapViewOfSection.c)
 */

char LdrFlushAlternateResourceModules()
{
  unsigned int i; // ebx
  unsigned __int64 v1; // rdi
  __int64 v2; // rdx
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx

  RtlAcquireSRWLockExclusive(&qword_1801664B0);
  if ( dword_180164340 )
  {
    for ( i = 0; i < dword_180164340; ++i )
    {
      v1 = qword_180164338 + ((unsigned __int64)i << 6);
      v2 = *(_QWORD *)(v1 + 32);
      if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        v3 = v2 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( *(_DWORD *)(v1 + 56) == -1073741799 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v3);
        else
          ZwUnmapViewOfSection(-1LL);
        *(_QWORD *)(v1 + 32) = 0LL;
        v4 = *(_QWORD *)(v1 + 40);
        if ( v4 )
        {
          ZwClose(v4);
          *(_QWORD *)(v1 + 40) = 0LL;
        }
      }
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, qword_180164338);
    qword_180164338 = 0LL;
    dword_180164340 = 0;
    dword_180164344 = 0;
  }
  RtlReleaseSRWLockExclusive(&qword_1801664B0);
  return 1;
}
