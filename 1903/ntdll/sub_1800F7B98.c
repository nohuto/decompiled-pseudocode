/*
 * XREFs of sub_1800F7B98 @ 0x1800F7B98
 * Callers:
 *     sub_1800F86AC @ 0x1800F86AC (sub_1800F86AC.c)
 *     sub_1800F8798 @ 0x1800F8798 (sub_1800F8798.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

void __fastcall sub_1800F7B98(PVOID **BaseAddress)
{
  __int64 v2; // rdi
  char v3; // si
  PVOID *v5; // rax
  PVOID *v6; // rcx

  v2 = *((_WORD *)BaseAddress + 9) & 0xF;
  v3 = 0;
  RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180166A00 + 8 * v2));
  if ( (*((_DWORD *)BaseAddress + 5))-- == 1 )
  {
    v5 = *BaseAddress;
    if ( (*BaseAddress)[1] != BaseAddress || (v6 = BaseAddress[1], *v6 != BaseAddress) )
      __fastfail(3u);
    *v6 = v5;
    v3 = 1;
    v5[1] = v6;
    _InterlockedDecrement(&dword_180166878);
  }
  RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180166A00 + 8 * v2));
  if ( v3 )
    RtlFreeHeap(qword_180166A08, 0, BaseAddress);
}
