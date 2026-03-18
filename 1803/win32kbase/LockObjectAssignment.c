/*
 * XREFs of LockObjectAssignment @ 0x1C0035810
 * Callers:
 *     HMAllocObject @ 0x1C0035000 (HMAllocObject.c)
 *     xxxDestroyThreadInfo @ 0x1C0036210 (xxxDestroyThreadInfo.c)
 *     HMChangeOwnerThread @ 0x1C0069F60 (HMChangeOwnerThread.c)
 *     xxxCreateThreadInfo @ 0x1C006F538 (xxxCreateThreadInfo.c)
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
