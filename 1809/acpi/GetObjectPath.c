/*
 * XREFs of GetObjectPath @ 0x1C0023478
 * Callers:
 *     ReadFieldObj @ 0x1C00013A0 (ReadFieldObj.c)
 *     ProcessEvalObj @ 0x1C0001D60 (ProcessEvalObj.c)
 *     ACPIGet @ 0x1C0003980 (ACPIGet.c)
 *     SyncEvalObject @ 0x1C0003F70 (SyncEvalObject.c)
 *     AsyncEvalObject @ 0x1C0005370 (AsyncEvalObject.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B954 (AMLIEvalNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x1C0011EC4 (AMLIEvalPackageElement.c)
 *     AMLIFindNameSpaceObject @ 0x1C001398C (AMLIFindNameSpaceObject.c)
 *     AMLIAsyncEvalObject @ 0x1C00140BC (AMLIAsyncEvalObject.c)
 *     Acquire @ 0x1C00226E0 (Acquire.c)
 *     Release @ 0x1C0022840 (Release.c)
 *     CreateNativeNameSpaceObject @ 0x1C00229A0 (CreateNativeNameSpaceObject.c)
 *     GetFieldUnitRegionObj @ 0x1C0024410 (GetFieldUnitRegionObj.c)
 *     Simulator_NotifyNamespaceCollision @ 0x1C00618B4 (Simulator_NotifyNamespaceCollision.c)
 *     DebugNotify @ 0x1C0063C20 (DebugNotify.c)
 *     DebugRunMethod @ 0x1C0063F20 (DebugRunMethod.c)
 *     RunMethodCallBack @ 0x1C0064560 (RunMethodCallBack.c)
 *     DumpObject @ 0x1C0065214 (DumpObject.c)
 *     NestAsyncEvalObject @ 0x1C0065EDC (NestAsyncEvalObject.c)
 *     ResetSignal @ 0x1C00664D0 (ResetSignal.c)
 *     Wait @ 0x1C0068B70 (Wait.c)
 * Callees:
 *     GetObjectPathNoLock @ 0x1C0009230 (GetObjectPathNoLock.c)
 */

_QWORD *__fastcall GetObjectPath(__int64 a1)
{
  KIRQL v2; // bl
  _QWORD *ObjectPathNoLock; // rdi

  v2 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  ObjectPathNoLock = GetObjectPathNoLock(a1);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  return ObjectPathNoLock;
}
