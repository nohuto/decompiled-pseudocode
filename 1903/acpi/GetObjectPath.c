/*
 * XREFs of GetObjectPath @ 0x1C0006C18
 * Callers:
 *     ProcessEvalObj @ 0x1C0001620 (ProcessEvalObj.c)
 *     ACPIGet @ 0x1C0002200 (ACPIGet.c)
 *     SyncEvalObject @ 0x1C0002800 (SyncEvalObject.c)
 *     AsyncEvalObject @ 0x1C0002B10 (AsyncEvalObject.c)
 *     CreateNativeNameSpaceObject @ 0x1C0006870 (CreateNativeNameSpaceObject.c)
 *     AMLIFindNameSpaceObject @ 0x1C00084CC (AMLIFindNameSpaceObject.c)
 *     AMLIAsyncEvalObject @ 0x1C000E3CC (AMLIAsyncEvalObject.c)
 *     AMLIEvalNameSpaceObject @ 0x1C00116EC (AMLIEvalNameSpaceObject.c)
 *     Release @ 0x1C001F230 (Release.c)
 *     Acquire @ 0x1C001F460 (Acquire.c)
 *     ReadFieldObj @ 0x1C001FB60 (ReadFieldObj.c)
 *     GetFieldUnitRegionObj @ 0x1C00205D8 (GetFieldUnitRegionObj.c)
 *     AMLIEvalPackageElement @ 0x1C00246E0 (AMLIEvalPackageElement.c)
 *     Simulator_NotifyNamespaceCollision @ 0x1C0063834 (Simulator_NotifyNamespaceCollision.c)
 *     DebugNotify @ 0x1C0065C60 (DebugNotify.c)
 *     DebugRunMethod @ 0x1C0065F60 (DebugRunMethod.c)
 *     RunMethodCallBack @ 0x1C0066540 (RunMethodCallBack.c)
 *     DumpObject @ 0x1C0067204 (DumpObject.c)
 *     NestAsyncEvalObject @ 0x1C0067F3C (NestAsyncEvalObject.c)
 *     ResetSignal @ 0x1C0068530 (ResetSignal.c)
 *     Wait @ 0x1C006ABD0 (Wait.c)
 * Callees:
 *     GetObjectPathNoLock @ 0x1C0004750 (GetObjectPathNoLock.c)
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
