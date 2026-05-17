/*
 * XREFs of sub_18002E988 @ 0x18002E988
 * Callers:
 *     sub_18002EA00 @ 0x18002EA00 (sub_18002EA00.c)
 * Callees:
 *     TpSetWaitEx @ 0x1800312D0 (TpSetWaitEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall sub_18002E988(__int64 a1, int a2)
{
  RtlAcquireSRWLockExclusive(a1 + 16);
  if ( (*(_BYTE *)(a1 + 8) & 8) == 0 && (!a2 || a2 == 258) )
    TpSetWaitEx(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 72), 0LL);
  return RtlReleaseSRWLockExclusive(a1 + 16);
}
