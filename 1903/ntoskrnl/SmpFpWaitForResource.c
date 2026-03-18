/*
 * XREFs of SmpFpWaitForResource @ 0x140325D54
 * Callers:
 *     SmFpAllocate @ 0x140148B24 (SmFpAllocate.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     SmpFpAllocateResource @ 0x140325BEC (SmpFpAllocateResource.c)
 */

__int64 __fastcall SmpFpWaitForResource(PEX_SPIN_LOCK SpinLock, int a2, struct _KTHREAD *a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _KTHREAD *i; // rax
  __int64 result; // rax

  CurrentThread = a3;
  if ( !a3 )
    CurrentThread = KeGetCurrentThread();
  for ( i = (struct _KTHREAD *)*((_QWORD *)SpinLock + 13);
        CurrentThread != i
     && (*((_QWORD *)SpinLock + 13)
      || _InterlockedCompareExchange64((volatile signed __int64 *)SpinLock + 13, (signed __int64)CurrentThread, 0LL));
        i = (struct _KTHREAD *)*((_QWORD *)SpinLock + 13) )
  {
    KeWaitForSingleObject((PVOID)(SpinLock + 2), Executive, 0, 0, 0LL);
  }
  result = SmpFpAllocateResource(SpinLock, a2);
  if ( !a3 )
    _InterlockedExchange64((volatile __int64 *)SpinLock + 13, result);
  return result;
}
