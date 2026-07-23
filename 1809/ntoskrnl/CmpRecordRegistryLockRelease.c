/*
 * XREFs of CmpRecordRegistryLockRelease @ 0x1401B3164
 * Callers:
 *     CmEnumerateKey @ 0x1405D3A20 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1405D7900 (CmQueryKey.c)
 *     CmpDeleteKeyObject @ 0x140640520 (CmpDeleteKeyObject.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmQueryValueKey @ 0x1406461B0 (CmQueryValueKey.c)
 * Callees:
 *     CmpThreadInfoLogStack @ 0x1401B3194 (CmpThreadInfoLogStack.c)
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
