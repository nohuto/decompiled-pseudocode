/*
 * XREFs of sub_180081630 @ 0x180081630
 * Callers:
 *     sub_18002F270 @ 0x18002F270 (sub_18002F270.c)
 *     sub_180033CE0 @ 0x180033CE0 (sub_180033CE0.c)
 *     sub_18003741C @ 0x18003741C (sub_18003741C.c)
 *     sub_180037DCC @ 0x180037DCC (sub_180037DCC.c)
 *     TpReleasePool @ 0x180081400 (TpReleasePool.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_180081740 @ 0x180081740 (sub_180081740.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 */

LOGICAL __fastcall sub_180081630(char *BaseAddress)
{
  void *v2; // rcx
  char **v3; // r8
  PVOID *v4; // rdx

  v2 = (void *)*((_QWORD *)BaseAddress + 7);
  if ( v2 )
  {
    ZwClose(v2);
    *((_QWORD *)BaseAddress + 7) = 0LL;
  }
  sub_180081740(BaseAddress + 120);
  sub_180081740(BaseAddress + 240);
  ZwClose(*((HANDLE *)BaseAddress + 8));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_180166080 + 786432, *((PVOID *)BaseAddress + 2));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_180166080 + 786432, *((PVOID *)BaseAddress + 5));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_180166080 + 786432, *((PVOID *)BaseAddress + 6));
  RtlAcquireSRWLockExclusive(&stru_180166460);
  v3 = (char **)*((_QWORD *)BaseAddress + 48);
  v4 = (PVOID *)*((_QWORD *)BaseAddress + 49);
  if ( v3[1] != BaseAddress + 384 || *v4 != BaseAddress + 384 )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = (char *)v4;
  RtlReleaseSRWLockExclusive(&stru_180166460);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_180166080 + 786432, BaseAddress);
}
