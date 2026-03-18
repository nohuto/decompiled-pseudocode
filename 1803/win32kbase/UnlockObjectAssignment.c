/*
 * XREFs of UnlockObjectAssignment @ 0x1C0035960
 * Callers:
 *     UserDeleteW32Thread @ 0x1C0034990 (UserDeleteW32Thread.c)
 *     xxxDestroyThreadInfo @ 0x1C0036210 (xxxDestroyThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C003B604 (DestroyProcessInfo.c)
 *     HMFreeObject @ 0x1C005F1D0 (HMFreeObject.c)
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
