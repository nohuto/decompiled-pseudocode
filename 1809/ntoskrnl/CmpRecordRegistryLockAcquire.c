/*
 * XREFs of CmpRecordRegistryLockAcquire @ 0x1401B3134
 * Callers:
 *     CmpLockRegistryExclusive @ 0x1405B26C8 (CmpLockRegistryExclusive.c)
 *     CmEnumerateKey @ 0x1405D3A20 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1405D7900 (CmQueryKey.c)
 *     CmpDeleteKeyObject @ 0x140640520 (CmpDeleteKeyObject.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmQueryValueKey @ 0x1406461B0 (CmQueryValueKey.c)
 * Callees:
 *     CmpThreadInfoLogStack @ 0x1401B3194 (CmpThreadInfoLogStack.c)
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
