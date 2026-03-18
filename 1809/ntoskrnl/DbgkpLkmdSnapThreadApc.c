/*
 * XREFs of DbgkpLkmdSnapThreadApc @ 0x140811FD0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     DbgkpLkmdSnapPendingIrps @ 0x140811E98 (DbgkpLkmdSnapPendingIrps.c)
 *     DbgkpLkmdSnapThreadInContext @ 0x14081204C (DbgkpLkmdSnapThreadInContext.c)
 */

void __fastcall DbgkpLkmdSnapThreadApc(__int64 a1, __int64 a2, __int64 a3, void **a4, volatile signed __int32 **a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  void *v6; // rcx
  volatile signed __int32 *v7; // rbx

  CurrentThread = KeGetCurrentThread();
  v6 = *a4;
  v7 = *a5;
  if ( _InterlockedCompareExchange(*a5, 2, 0) )
  {
    ExFreePoolWithTag(v6, 0x704E534Bu);
  }
  else
  {
    if ( (int)DbgkpLkmdSnapThreadInContext(*((_QWORD *)v7 + 1), CurrentThread, *((_QWORD *)v7 + 3)) >= 0 )
      DbgkpLkmdSnapPendingIrps(*((_QWORD *)v7 + 1), (__int64)CurrentThread, *((_DWORD **)v7 + 3));
    KeSetEvent((PRKEVENT)(v7 + 8), 0, 0);
  }
}
