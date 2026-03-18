/*
 * XREFs of PopEtProcessEnumSnapshotCallback @ 0x14060F990
 * Callers:
 *     PopEtProcessEnumSnapshotCallback @ 0x14060F990 (PopEtProcessEnumSnapshotCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PsQueryProcessEnergyValues @ 0x1405E3F00 (PsQueryProcessEnergyValues.c)
 *     PopEtProcessEnumSnapshotCallback @ 0x14060F990 (PopEtProcessEnumSnapshotCallback.c)
 *     PopEtProcessSnapshotUpdate @ 0x14060FA98 (PopEtProcessSnapshotUpdate.c)
 *     PopEtIsrDpcQuery @ 0x1406D4854 (PopEtIsrDpcQuery.c)
 */

__int64 __fastcall PopEtProcessEnumSnapshotCallback(_QWORD *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v5; // rcx
  _OWORD v7[27]; // [rsp+20h] [rbp-1C8h] BYREF

  memset(v7, 0, sizeof(v7));
  if ( !*(_DWORD *)(a2 + 4) && a1 != PsIdleProcess )
    PopEtProcessEnumSnapshotCallback(PsIdleProcess, a2);
  if ( a1[237] )
  {
    *(_QWORD *)(a2 + 8) = a1;
    *(_QWORD *)(a2 + 24) = v7;
    CurrentThread = KeGetCurrentThread();
    v5 = a1[237] + 432LL;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx(v5, 0LL);
    if ( a1 == PsIdleProcess )
      PopEtIsrDpcQuery(a1, v7);
    else
      PsQueryProcessEnergyValues(a1, v7);
    PopEtProcessSnapshotUpdate(a2);
    PopReleaseRwLock(a1[237] + 432LL);
    *(_QWORD *)(a2 + 8) = 0LL;
    ++*(_DWORD *)(a2 + 4);
  }
  return 0LL;
}
