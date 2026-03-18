/*
 * XREFs of CmpRecordRegistryLockAcquire @ 0x1401B2FD4
 * Callers:
 *     CmpLockRegistryExclusive @ 0x1405B16C8 (CmpLockRegistryExclusive.c)
 *     CmEnumerateKey @ 0x1405D2A20 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1405D6900 (CmQueryKey.c)
 *     CmpDeleteKeyObject @ 0x14063F520 (CmpDeleteKeyObject.c)
 *     CmpLockRegistry @ 0x140645120 (CmpLockRegistry.c)
 *     CmQueryValueKey @ 0x1406451B0 (CmQueryValueKey.c)
 * Callees:
 *     CmpThreadInfoLogStack @ 0x1401B3034 (CmpThreadInfoLogStack.c)
 */

struct _KTHREAD *CmpRecordRegistryLockAcquire()
{
  struct _KTHREAD *result; // rax
  _DWORD *SparePtr; // rcx

  result = KeGetCurrentThread();
  SparePtr = result[1].WaitBlock[2].SparePtr;
  if ( !SparePtr )
    return (struct _KTHREAD *)CmpThreadInfoLogStack();
  ++SparePtr[2];
  return result;
}
