/*
 * XREFs of MmAssignProcessToJob @ 0x140694C70
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x140694880 (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x140695C0C (PspAssignProcessToJob.c)
 * Callees:
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140072FFC (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14007320C (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiUnlockVadRange @ 0x140694D90 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x140694EA0 (MiLockVadRange.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1406AF6C0 (PspChangeJobMemoryUsageByProcess.c)
 */

__int64 __fastcall MmAssignProcessToJob(__int64 BugCheckParameter1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // r14
  int v6; // esi
  __int64 v7; // rbp
  __int64 v8; // rdx
  unsigned __int8 v9; // di
  _BYTE v11[48]; // [rsp+20h] [rbp-68h] BYREF

  memset(v11, 0, sizeof(v11));
  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  if ( CurrentThread->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
  {
    v6 = 1;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v11);
  }
  v7 = MiLockVadRange(BugCheckParameter1, -1LL, -1LL, 0LL);
  if ( v7 || (*(_DWORD *)(BugCheckParameter1 + 1788) & 1) != 0 )
  {
    LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, BugCheckParameter1);
    v8 = *(_QWORD *)(BugCheckParameter1 + 1264);
    *(_QWORD *)(BugCheckParameter1 + 912) = *(_QWORD *)(BugCheckParameter1 + 952);
    v9 = PspChangeJobMemoryUsageByProcess(a3 | 3u, v8, BugCheckParameter1);
    _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 776), 0x10u);
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, BugCheckParameter1);
  }
  else
  {
    v9 = 0;
  }
  MiUnlockVadRange(BugCheckParameter1, -1LL, v7, 0LL);
  if ( v6 )
    KiUnstackDetachProcess((struct _KTHREAD *)v11, 0);
  return v9;
}
