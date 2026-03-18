/*
 * XREFs of FsRtlCompleteLockIrpReal @ 0x140282770
 * Callers:
 *     FsRtlPrivateLock @ 0x140006870 (FsRtlPrivateLock.c)
 *     FsRtlPrivateFastUnlockAll @ 0x140106834 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140107CD4 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlUninitializeFileLock @ 0x14013C1D0 (FsRtlUninitializeFileLock.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x140282BB0 (FsRtlPrivateCancelFileLockIrp.c)
 *     FsRtlProcessFileLock @ 0x140282DA0 (FsRtlProcessFileLock.c)
 * Callees:
 *     IofCompleteRequest @ 0x140066B30 (IofCompleteRequest.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

NTSTATUS *__fastcall FsRtlCompleteLockIrpReal(
        __int64 (__fastcall *a1)(__int64, IRP *),
        __int64 a2,
        IRP *a3,
        NTSTATUS a4,
        NTSTATUS *a5,
        __int64 a6)
{
  NTSTATUS v6; // ebx
  NTSTATUS *result; // rax

  v6 = a4;
  if ( a1 )
  {
    if ( a6 )
      *(_QWORD *)(a6 + 120) = 0LL;
    a3->IoStatus.Status = a4;
    v6 = a1(a2, a3);
  }
  else
  {
    a3->IoStatus.Status = a4;
    IofCompleteRequest(a3, 1);
  }
  result = a5;
  *a5 = v6;
  return result;
}
