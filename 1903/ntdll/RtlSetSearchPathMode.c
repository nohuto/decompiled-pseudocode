/*
 * XREFs of RtlSetSearchPathMode @ 0x1800DDC00
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_18007F040 @ 0x18007F040 (sub_18007F040.c)
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
  RtlAcquireSRWLockExclusive(&stru_1801665F0);
  if ( (_bittest(&dword_180166508, 0xFu) & ((Flags & 0x8000) == 0)) != 0 )
  {
    v3 = -1073741790;
  }
  else
  {
    dword_180166508 = Flags;
    v3 = 0;
  }
  RtlReleaseSRWLockExclusive(&stru_1801665F0);
  if ( v3 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&stru_1801664A0);
    v4 = (void *)sub_18007F040(&qword_180164360);
    RtlReleaseSRWLockExclusive(&stru_1801664A0);
    if ( v4 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  return v3;
}
