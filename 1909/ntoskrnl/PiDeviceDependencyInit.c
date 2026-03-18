/*
 * XREFs of PiDeviceDependencyInit @ 0x1409F7C44
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140047770 (ExInitializeResourceLite.c)
 *     PnpReleaseDependencyRelationsLock @ 0x14066FC88 (PnpReleaseDependencyRelationsLock.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406700E0 (PnpAcquireDependencyRelationsLock.c)
 */

__int64 PiDeviceDependencyInit()
{
  ExInitializeResourceLite(&PiDependencyRelationsLock);
  PiDependencyEdgeWriteLock = 0LL;
  PnpAcquireDependencyRelationsLock(1);
  qword_140461068 = (__int64)&PiDependencyNodeListHead;
  PiDependencyNodeListHead = (__int64)&PiDependencyNodeListHead;
  qword_140461078 = (__int64)&PiDependencyNodeEmptyList;
  PiDependencyNodeEmptyList = (__int64)&PiDependencyNodeEmptyList;
  qword_140461088 = (__int64)&PiRebuildPowerRelationsQueue;
  PiRebuildPowerRelationsQueue = (__int64)&PiRebuildPowerRelationsQueue;
  PnpReleaseDependencyRelationsLock();
  return 0LL;
}
