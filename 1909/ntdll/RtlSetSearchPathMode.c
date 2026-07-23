/*
 * XREFs of RtlSetSearchPathMode @ 0x1800DDCC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlpInvalidatePathCache @ 0x18007F6E0 (RtlpInvalidatePathCache.c)
 */

NTSTATUS __cdecl RtlSetSearchPathMode(ULONG Flags)
{
  NTSTATUS v3; // ebx
  void *v4; // rdi

  if ( (Flags & 0xFFFE7FFE) != 0 )
    return -1073741811;
  if ( (Flags & 1) != 0 )
  {
    if ( (Flags & 0x10000) != 0 )
      return -1073741811;
  }
  else if ( (Flags & 0x18000) != 0x10000 )
  {
    return -1073741811;
  }
  RtlAcquireSRWLockExclusive(&stru_180166600);
  if ( (_bittest(&RtlpSearchPathMode, 0xFu) & ((Flags & 0x8000) == 0)) != 0 )
  {
    v3 = -1073741790;
  }
  else
  {
    RtlpSearchPathMode = Flags;
    v3 = 0;
  }
  RtlReleaseSRWLockExclusive(&stru_180166600);
  if ( v3 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
    v4 = (void *)RtlpInvalidatePathCache(&RtlpSearchPath);
    RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
    if ( v4 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  return v3;
}
