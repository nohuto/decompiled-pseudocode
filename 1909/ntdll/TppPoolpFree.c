/*
 * XREFs of TppPoolpFree @ 0x180081CD0
 * Callers:
 *     TpUnreserveTaskPost @ 0x18002F270 (TpUnreserveTaskPost.c)
 *     TppWorkerThread @ 0x180033CE0 (TppWorkerThread.c)
 *     TppCleanupGroupMemberDestroy @ 0x18003741C (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x180037DCC (TppCleanupGroupMemberInitialize.c)
 *     TpReleasePool @ 0x180081AA0 (TpReleasePool.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     TppDestroyTimerSubQueue @ 0x180081DE0 (TppDestroyTimerSubQueue.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 */

LOGICAL __fastcall TppPoolpFree(char *BaseAddress)
{
  void *v2; // rcx
  char **v3; // r8
  PVOID *v4; // rdx

  v2 = (void *)*((_QWORD *)BaseAddress + 7);
  if ( v2 )
  {
    NtClose(v2);
    *((_QWORD *)BaseAddress + 7) = 0LL;
  }
  TppDestroyTimerSubQueue(BaseAddress + 120);
  TppDestroyTimerSubQueue(BaseAddress + 240);
  NtClose(*((HANDLE *)BaseAddress + 8));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *((PVOID *)BaseAddress + 2));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *((PVOID *)BaseAddress + 5));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *((PVOID *)BaseAddress + 6));
  RtlAcquireSRWLockExclusive(&TppPoolpListLock);
  v3 = (char **)*((_QWORD *)BaseAddress + 48);
  v4 = (PVOID *)*((_QWORD *)BaseAddress + 49);
  if ( v3[1] != BaseAddress + 384 || *v4 != BaseAddress + 384 )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = (char *)v4;
  RtlReleaseSRWLockExclusive(&TppPoolpListLock);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, BaseAddress);
}
