/*
 * XREFs of LockObjectAssignment @ 0x1C00349A0
 * Callers:
 *     HMAllocObject @ 0x1C0028410 (HMAllocObject.c)
 *     xxxCreateThreadInfo @ 0x1C002EBB4 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C00322E8 (xxxDestroyThreadInfo.c)
 *     HMChangeOwnerThreadWorker @ 0x1C0086880 (HMChangeOwnerThreadWorker.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall LockObjectAssignment(void **a1, void *a2)
{
  void *v2; // rdi
  LONG_PTR result; // rax

  v2 = *a1;
  if ( a2 )
    result = ObfReferenceObject(a2);
  *a1 = a2;
  if ( v2 )
    return ObfDereferenceObject(v2);
  return result;
}
