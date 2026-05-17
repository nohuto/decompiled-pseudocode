/*
 * XREFs of sub_1800078BC @ 0x1800078BC
 * Callers:
 *     sub_180006E00 @ 0x180006E00 (sub_180006E00.c)
 *     sub_180009D9C @ 0x180009D9C (sub_180009D9C.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall sub_1800078BC(__int64 a1)
{
  __int64 v3; // rcx
  _QWORD *v4; // rdx

  RtlAcquireSRWLockExclusive(qword_180166088 + 48);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFFF) != 1 )
    return RtlReleaseSRWLockExclusive(qword_180166088 + 48);
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v3 + 8) != a1 + 8 || (v4 = *(_QWORD **)(a1 + 16), *v4 != a1 + 8) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  RtlReleaseSRWLockExclusive(qword_180166088 + 48);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
}
