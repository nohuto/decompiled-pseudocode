/*
 * XREFs of UnlockObjectAssignment @ 0x1C00342F0
 * Callers:
 *     UserDeleteW32Thread @ 0x1C0010550 (UserDeleteW32Thread.c)
 *     HMFreeObject @ 0x1C0028D60 (HMFreeObject.c)
 *     xxxDestroyThreadInfo @ 0x1C00322E8 (xxxDestroyThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C0035D10 (DestroyProcessInfo.c)
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
