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

__int64 __fastcall RtlSetSearchPathMode(int a1)
{
  int v3; // ebx
  __int64 v4; // rdi

  if ( (a1 & 0xFFFE7FFE) != 0 )
    return 3221225485LL;
  if ( (a1 & 1) != 0 )
  {
    if ( (a1 & 0x10000) != 0 )
      return 3221225485LL;
  }
  else if ( (a1 & 0x18000) != 0x10000 )
  {
    return 3221225485LL;
  }
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)&unk_1801665F0);
  if ( (_bittest(&dword_180166508, 0xFu) & ((a1 & 0x8000) == 0)) != 0 )
  {
    v3 = -1073741790;
  }
  else
  {
    dword_180166508 = a1;
    v3 = 0;
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)&unk_1801665F0);
  if ( v3 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&qword_1801664A0);
    v4 = sub_18007F040(&qword_180164360);
    RtlReleaseSRWLockExclusive(&qword_1801664A0);
    if ( v4 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  return (unsigned int)v3;
}
