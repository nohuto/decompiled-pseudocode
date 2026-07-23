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
  char *v1; // rdi
  __int64 v2; // rdx
  void *v3; // rdx
  void *v4; // rcx

  RtlAcquireSRWLockExclusive(&stru_1801664B0);
  if ( dword_180164340 )
  {
    for ( i = 0; i < dword_180164340; ++i )
    {
      v1 = (char *)BaseAddress + 64 * (unsigned __int64)i;
      v2 = *((_QWORD *)v1 + 4);
      if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        v3 = (void *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( *((_DWORD *)v1 + 14) == -1073741799 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
        else
          ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v3);
        *((_QWORD *)v1 + 4) = 0LL;
        v4 = (void *)*((_QWORD *)v1 + 5);
        if ( v4 )
        {
          ZwClose(v4);
          *((_QWORD *)v1 + 5) = 0LL;
        }
      }
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    BaseAddress = 0LL;
    dword_180164340 = 0;
    dword_180164344 = 0;
  }
  RtlReleaseSRWLockExclusive(&stru_1801664B0);
  return 1;
}
