/*
 * XREFs of MiFindProcessImageHotPatchRecord @ 0x14088E284
 * Callers:
 *     MiHotPatchImage @ 0x14088E7A4 (MiHotPatchImage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PsReferencePrimaryToken @ 0x1405D59B0 (PsReferencePrimaryToken.c)
 *     SeQueryUserSidToken @ 0x1406431CC (SeQueryUserSidToken.c)
 *     MiFindHotPatchRecord @ 0x14070F784 (MiFindHotPatchRecord.c)
 *     MiFindUserSidHotPatchContext @ 0x14088E3DC (MiFindUserSidHotPatchContext.c)
 */

__int64 __fastcall MiFindProcessImageHotPatchRecord(
        PEPROCESS Process,
        int a2,
        int a3,
        PUNICODE_STRING StringOut,
        _DWORD *a5)
{
  struct _KTHREAD *CurrentThread; // r12
  PACCESS_TOKEN v10; // rdi
  __int64 UserSidHotPatchContext; // rax
  unsigned int HotPatchRecord; // ebx
  _BYTE v14[80]; // [rsp+40h] [rbp-A8h] BYREF

  memset(v14, 0, 0x44uLL);
  CurrentThread = KeGetCurrentThread();
  v10 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&MiHotPatchListLock, 0LL);
  if ( !MiUserSidPatchLists
    || (v10 = PsReferencePrimaryToken(Process),
        SeQueryUserSidToken((__int64)v10, v14, 0x44u, 0LL),
        (UserSidHotPatchContext = MiFindUserSidHotPatchContext(v14)) == 0)
    || (HotPatchRecord = MiFindHotPatchRecord((__int64 *)(UserSidHotPatchContext + 24), 1, a2, a3, StringOut, a5),
        HotPatchRecord == -1073741275) )
  {
    HotPatchRecord = MiFindHotPatchRecord((__int64 *)&MiGlobalHotPatchList, 1, a2, a3, StringOut, a5);
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&MiHotPatchListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&MiHotPatchListLock);
  KeAbPostRelease((ULONG_PTR)&MiHotPatchListLock);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v10 )
    ObfDereferenceObject(v10);
  return HotPatchRecord;
}
