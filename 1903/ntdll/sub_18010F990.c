/*
 * XREFs of sub_18010F990 @ 0x18010F990
 * Callers:
 *     TpReleasePool @ 0x180081400 (TpReleasePool.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

_RTL_SRWLOCK *__fastcall sub_18010F990(_RTL_SRWLOCK *a1)
{
  _RTL_SRWLOCK *Ptr; // rdi
  _QWORD *v3; // rax
  _RTL_SRWLOCK *result; // rax

  RtlAcquireSRWLockExclusive(a1 + 2);
  Ptr = (_RTL_SRWLOCK *)a1->Ptr;
  if ( *((_RTL_SRWLOCK **)a1->Ptr + 1) != a1 || (v3 = Ptr->Ptr, *((_RTL_SRWLOCK **)Ptr->Ptr + 1) != Ptr) )
    __fastfail(3u);
  a1->Ptr = v3;
  v3[1] = a1;
  RtlReleaseSRWLockExclusive(a1 + 2);
  result = 0LL;
  if ( Ptr != a1 )
    return Ptr;
  return result;
}
