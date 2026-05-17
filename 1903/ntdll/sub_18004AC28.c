/*
 * XREFs of sub_18004AC28 @ 0x18004AC28
 * Callers:
 *     RtlDestroyHeap @ 0x18004A960 (RtlDestroyHeap.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_180101750 @ 0x180101750 (sub_180101750.c)
 */

signed __int64 __fastcall sub_18004AC28(__int64 a1)
{
  __int64 v3; // rcx

  RtlAcquireSRWLockExclusive(&qword_180166390);
  if ( (dword_180166398 & 1) != 0 && (dword_180166398 & 2) != 0 )
  {
    v3 = 104LL;
    if ( *(_DWORD *)(a1 + 16) != -571548178 )
      v3 = 368LL;
    sub_180101750(a1 + v3, 0LL, 0LL);
  }
  return RtlReleaseSRWLockExclusive(&qword_180166390);
}
