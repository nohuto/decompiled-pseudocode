/*
 * XREFs of MiFindProcessImageHotPatchRecord @ 0x14088DAA4
 * Callers:
 *     MiHotPatchImage @ 0x14088DFC4 (MiHotPatchImage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PsReferencePrimaryToken @ 0x1405D6170 (PsReferencePrimaryToken.c)
 *     SeQueryUserSidToken @ 0x140656D1C (SeQueryUserSidToken.c)
 *     MiFindHotPatchRecord @ 0x140711564 (MiFindHotPatchRecord.c)
 *     MiFindUserSidHotPatchContext @ 0x14088DBFC (MiFindUserSidHotPatchContext.c)
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
