/*
 * XREFs of MiUnloadHotPatchForUserSid @ 0x1408582D0
 * Callers:
 *     NtManageHotPatch @ 0x140858470 (NtManageHotPatch.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     MiDeleteHotPatchRecord @ 0x140854BEC (MiDeleteHotPatchRecord.c)
 *     MiFindUserSidHotPatchContext @ 0x140854F80 (MiFindUserSidHotPatchContext.c)
 *     MiHotPatchAllProcesses @ 0x1408552A8 (MiHotPatchAllProcesses.c)
 */

__int64 __fastcall MiUnloadHotPatchForUserSid(void *a1, int *a2)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 *v3; // rbp
  unsigned __int64 *UserSidHotPatchContext; // rax
  unsigned __int64 *v7; // r14

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&MiHotPatchListLock, 0LL);
  UserSidHotPatchContext = MiFindUserSidHotPatchContext(a1);
  v7 = UserSidHotPatchContext;
  if ( UserSidHotPatchContext )
  {
    MiDeleteHotPatchRecord(UserSidHotPatchContext + 3, 1uLL, *a2, a2[1]);
    if ( !v7[3] )
    {
      RtlAvlRemoveNode((unsigned __int64 *)&MiUserSidPatchLists, v7);
      v3 = v7;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&MiHotPatchListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&MiHotPatchListLock);
  KeAbPostRelease((ULONG_PTR)&MiHotPatchListLock);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  MiHotPatchAllProcesses(*a2, a2[1]);
  return 0LL;
}
