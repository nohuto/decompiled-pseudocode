/*
 * XREFs of LockObjectAssignment @ 0x1C00354C0
 * Callers:
 *     HMAllocObject @ 0x1C0027A70 (HMAllocObject.c)
 *     xxxCreateThreadInfo @ 0x1C002F9C4 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C0033038 (xxxDestroyThreadInfo.c)
 *     HMChangeOwnerThreadWorker @ 0x1C008AC60 (HMChangeOwnerThreadWorker.c)
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
