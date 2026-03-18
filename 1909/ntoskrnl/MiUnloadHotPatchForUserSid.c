/*
 * XREFs of MiUnloadHotPatchForUserSid @ 0x1408917FC
 * Callers:
 *     NtManageHotPatch @ 0x1408918F0 (NtManageHotPatch.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140029C60 (RtlAvlRemoveNode.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiDeleteHotPatchRecord @ 0x14088D844 (MiDeleteHotPatchRecord.c)
 *     MiFindUserSidHotPatchContext @ 0x14088DBFC (MiFindUserSidHotPatchContext.c)
 *     MiHotPatchAllProcesses @ 0x14088DF0C (MiHotPatchAllProcesses.c)
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
    MiDeleteHotPatchRecord(UserSidHotPatchContext + 3, 1, *a2, a2[1]);
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
