/*
 * XREFs of PopEtProcessEnumSnapshotCallback @ 0x1405FD3D0
 * Callers:
 *     PopEtProcessEnumSnapshotCallback @ 0x1405FD3D0 (PopEtProcessEnumSnapshotCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PopEtProcessEnumSnapshotCallback @ 0x1405FD3D0 (PopEtProcessEnumSnapshotCallback.c)
 *     PopEtProcessSnapshotUpdate @ 0x1405FD4C0 (PopEtProcessSnapshotUpdate.c)
 *     PsQueryProcessEnergyValues @ 0x1406382C0 (PsQueryProcessEnergyValues.c)
 *     PopEtIsrDpcQuery @ 0x1406B477C (PopEtIsrDpcQuery.c)
 */

__int64 __fastcall PopEtProcessEnumSnapshotCallback(_QWORD *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v5; // rcx
  _BYTE v7[432]; // [rsp+20h] [rbp-1C8h] BYREF

  if ( !*(_DWORD *)(a2 + 4) && a1 != PsIdleProcess )
    PopEtProcessEnumSnapshotCallback();
  if ( a1[231] )
  {
    *(_QWORD *)(a2 + 8) = a1;
    *(_QWORD *)(a2 + 24) = v7;
    CurrentThread = KeGetCurrentThread();
    v5 = a1[231] + 432LL;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx(v5, 0LL);
    if ( a1 == PsIdleProcess )
      PopEtIsrDpcQuery(a1, v7);
    else
      PsQueryProcessEnergyValues(a1, v7);
    PopEtProcessSnapshotUpdate(a2);
    PopReleaseRwLock(a1[231] + 432LL);
    *(_QWORD *)(a2 + 8) = 0LL;
    ++*(_DWORD *)(a2 + 4);
  }
  return 0LL;
}
