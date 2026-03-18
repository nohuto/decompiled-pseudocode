/*
 * XREFs of FsRtlCancellableWaitForSingleObject @ 0x1406DF2E0
 * Callers:
 *     FsRtlpWaitOnIrp @ 0x140283BBC (FsRtlpWaitOnIrp.c)
 * Callees:
 *     FsRtlCancellableWaitForMultipleObjects @ 0x14060C800 (FsRtlCancellableWaitForMultipleObjects.c)
 */

NTSTATUS __stdcall FsRtlCancellableWaitForSingleObject(PVOID Object, PLARGE_INTEGER Timeout, PIRP Irp)
{
  PVOID v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = Object;
  return FsRtlCancellableWaitForMultipleObjects(1u, &v4, WaitAll, Timeout, 0LL, Irp);
}
