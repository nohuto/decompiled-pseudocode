/*
 * XREFs of CmpRecordRegistryLockRelease @ 0x1401B3004
 * Callers:
 *     CmEnumerateKey @ 0x1405D2A20 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1405D6900 (CmQueryKey.c)
 *     CmpDeleteKeyObject @ 0x14063F520 (CmpDeleteKeyObject.c)
 *     CmpUnlockRegistry @ 0x140645170 (CmpUnlockRegistry.c)
 *     CmQueryValueKey @ 0x1406451B0 (CmQueryValueKey.c)
 * Callees:
 *     CmpThreadInfoLogStack @ 0x1401B3034 (CmpThreadInfoLogStack.c)
 */

struct _KTHREAD *CmpRecordRegistryLockRelease()
{
  struct _KTHREAD *result; // rax
  _DWORD *SparePtr; // rcx

  result = KeGetCurrentThread();
  SparePtr = result[1].WaitBlock[2].SparePtr;
  if ( !SparePtr )
    return (struct _KTHREAD *)CmpThreadInfoLogStack();
  --SparePtr[2];
  return result;
}
