/*
 * XREFs of UnlockObjectAssignment @ 0x1C0035040
 * Callers:
 *     HMFreeObject @ 0x1C00283C0 (HMFreeObject.c)
 *     xxxDestroyThreadInfo @ 0x1C0033038 (xxxDestroyThreadInfo.c)
 *     UserDeleteW32Thread @ 0x1C0036B60 (UserDeleteW32Thread.c)
 *     DestroyProcessInfo @ 0x1C0036D0C (DestroyProcessInfo.c)
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
