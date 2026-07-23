/*
 * XREFs of RtlDeleteBarrier @ 0x1800ED4B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 */

NTSTATUS __cdecl RtlDeleteBarrier(PRTL_BARRIER Barrier)
{
  _RTL_SRWLOCK *v1; // rbx
  NTSTATUS result; // eax

  v1 = (_RTL_SRWLOCK *)(((unsigned __int64)&Barrier->Reserved2 + 3) & 0xFFFFFFFFFFFFFFF8uLL);
  if ( v1 )
  {
    RtlAcquireSRWLockExclusive(v1 + 1);
    RtlReleaseSRWLockExclusive(v1 + 1);
  }
  return result;
}
