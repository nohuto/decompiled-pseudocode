/*
 * XREFs of MiFindProcessImageHotPatchRecord @ 0x140854E38
 * Callers:
 *     MiHotPatchImage @ 0x140855350 (MiHotPatchImage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400914B0 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     PsReferencePrimaryToken @ 0x1405DD640 (PsReferencePrimaryToken.c)
 *     SeQueryUserSidToken @ 0x1406102AC (SeQueryUserSidToken.c)
 *     MiFindHotPatchRecord @ 0x140682224 (MiFindHotPatchRecord.c)
 *     MiFindUserSidHotPatchContext @ 0x140854F80 (MiFindUserSidHotPatchContext.c)
 */

__int64 __fastcall MiFindProcessImageHotPatchRecord(
        PEPROCESS Process,
        int a2,
        int a3,
        PUNICODE_STRING StringOut,
        _DWORD *a5)
{
  struct _KTHREAD *CurrentThread; // rsi
  PACCESS_TOKEN v10; // rbx
  __int64 UserSidHotPatchContext; // rax
  unsigned int HotPatchRecord; // edi
  _BYTE v14[80]; // [rsp+40h] [rbp-A8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v10 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&MiHotPatchListLock, 0LL);
  if ( !MiUserSidPatchLists
    || (v10 = PsReferencePrimaryToken(Process),
        SeQueryUserSidToken((__int64)v10, v14, 0x44u, 0LL),
        (UserSidHotPatchContext = MiFindUserSidHotPatchContext(v14)) == 0)
    || (HotPatchRecord = MiFindHotPatchRecord(
                           (const UNICODE_STRING **)(UserSidHotPatchContext + 24),
                           1uLL,
                           a2,
                           a3,
                           StringOut,
                           a5),
        HotPatchRecord == -1073741275) )
  {
    HotPatchRecord = MiFindHotPatchRecord((const UNICODE_STRING **)&MiGlobalHotPatchList, 1uLL, a2, a3, StringOut, a5);
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&MiHotPatchListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&MiHotPatchListLock);
  KeAbPostRelease((ULONG_PTR)&MiHotPatchListLock);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v10 )
    ObfDereferenceObject(v10);
  return HotPatchRecord;
}
