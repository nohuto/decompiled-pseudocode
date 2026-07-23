/*
 * XREFs of sub_18002FFB0 @ 0x18002FFB0
 * Callers:
 *     sub_180033CE0 @ 0x180033CE0 (sub_180033CE0.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall sub_18002FFB0(_RTL_SRWLOCK *a1, __int64 a2)
{
  _RTL_SRWLOCK *v4; // rax
  _RTL_SRWLOCK **Ptr; // rdx

  *(_DWORD *)(a2 + 40) = NtCurrentTeb()->ClientId.UniqueThread;
  *(_QWORD *)(a2 + 48) = a1;
  RtlAcquireSRWLockExclusive(a1 + 9);
  v4 = (_RTL_SRWLOCK *)(a2 + 16);
  Ptr = (_RTL_SRWLOCK **)a1[13].Ptr;
  if ( *Ptr != &a1[12] )
    __fastfail(3u);
  v4->Ptr = &a1[12];
  *(_QWORD *)(a2 + 24) = Ptr;
  *Ptr = v4;
  a1[13].Ptr = v4;
  RtlReleaseSRWLockExclusive(a1 + 9);
}
