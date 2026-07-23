/*
 * XREFs of LdrRemoveDllDirectory @ 0x18008C400
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_18007F040 @ 0x18007F040 (sub_18007F040.c)
 */

NTSTATUS __cdecl LdrRemoveDllDirectory(DLL_DIRECTORY_COOKIE Cookie)
{
  _QWORD *v2; // rdx
  DLL_DIRECTORY_COOKIE *v3; // rax
  void *v4; // rdi

  if ( (dword_180162714 & 4) == 0 )
    return -1073741811;
  RtlAcquireSRWLockExclusive(&stru_1801664A8);
  v2 = *(_QWORD **)Cookie;
  if ( *(DLL_DIRECTORY_COOKIE *)(*(_QWORD *)Cookie + 8LL) != Cookie
    || (v3 = (DLL_DIRECTORY_COOKIE *)*((_QWORD *)Cookie + 1), *v3 != Cookie) )
  {
    __fastfail(3u);
  }
  *v3 = v2;
  v2[1] = v3;
  word_18015F3E8 += -2 - *((_WORD *)Cookie + 8);
  RtlReleaseSRWLockExclusive(&stru_1801664A8);
  RtlAcquireSRWLockExclusive(&stru_1801664A0);
  v4 = (void *)sub_18007F040(&qword_180164358);
  RtlReleaseSRWLockExclusive(&stru_1801664A0);
  if ( v4 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Cookie);
  return 0;
}
