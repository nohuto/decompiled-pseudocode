/*
 * XREFs of UnlockObjectAssignment @ 0x1C002E730
 * Callers:
 *     UserDeleteW32Thread @ 0x1C002D540 (UserDeleteW32Thread.c)
 *     HMFreeObject @ 0x1C002DB60 (HMFreeObject.c)
 *     DestroyProcessInfo @ 0x1C0032CF4 (DestroyProcessInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C0099D40 (xxxDestroyThreadInfo.c)
 * Callees:
 *     <none>
 */

void *__fastcall UnlockObjectAssignment(void **a1)
{
  void *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (void *)ObfDereferenceObject(result);
  }
  return result;
}
