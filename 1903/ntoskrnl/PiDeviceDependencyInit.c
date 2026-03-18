/*
 * XREFs of PiDeviceDependencyInit @ 0x1409F7D34
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409F8558 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400476D0 (ExInitializeResourceLite.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1406A27A8 (PnpReleaseDependencyRelationsLock.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406A2C00 (PnpAcquireDependencyRelationsLock.c)
 */

__int64 PiDeviceDependencyInit()
{
  ExInitializeResourceLite(&PiDependencyRelationsLock);
  PiDependencyEdgeWriteLock = 0LL;
  PnpAcquireDependencyRelationsLock(1);
  qword_140461398 = (__int64)&PiDependencyNodeListHead;
  PiDependencyNodeListHead = (__int64)&PiDependencyNodeListHead;
  qword_140461418 = (__int64)&PiDependencyNodeEmptyList;
  PiDependencyNodeEmptyList = (__int64)&PiDependencyNodeEmptyList;
  qword_140461388 = (__int64)&PiRebuildPowerRelationsQueue;
  PiRebuildPowerRelationsQueue = (__int64)&PiRebuildPowerRelationsQueue;
  PnpReleaseDependencyRelationsLock();
  return 0LL;
}
