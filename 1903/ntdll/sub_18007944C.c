/*
 * XREFs of sub_18007944C @ 0x18007944C
 * Callers:
 *     sub_180033CE0 @ 0x180033CE0 (sub_180033CE0.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall sub_18007944C(_QWORD *a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rcx

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1[6] + 72LL));
  v2 = a1[2];
  v3 = (_QWORD *)a1[3];
  if ( *(_QWORD **)(v2 + 8) != a1 + 2 || (_QWORD *)*v3 != a1 + 2 )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1[6] + 72LL));
}
