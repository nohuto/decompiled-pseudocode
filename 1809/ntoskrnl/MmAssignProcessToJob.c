/*
 * XREFs of MmAssignProcessToJob @ 0x140605944
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x1406057A0 (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x140606664 (PspAssignProcessToJob.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1400769C4 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x140076BD8 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiUnlockVadRange @ 0x140605A50 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x140605B60 (MiLockVadRange.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x14068D8F0 (PspChangeJobMemoryUsageByProcess.c)
 */

__int64 __fastcall MmAssignProcessToJob(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // r14
  int v4; // esi
  __int64 v7; // rbp
  __int64 v8; // rdx
  unsigned __int8 v9; // di
  _BYTE v11[48]; // [rsp+20h] [rbp-68h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  if ( CurrentThread->ApcState.Process != (_KPROCESS *)a1 )
  {
    v4 = 1;
    KiStackAttachProcess((_KPROCESS *)a1, 0LL, (__int64)v11);
  }
  v7 = MiLockVadRange(a1, -1LL, -1LL, 0LL);
  if ( v7 || (*(_DWORD *)(a1 + 1740) & 1) != 0 )
  {
    LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a1);
    v8 = *(_QWORD *)(a1 + 1264);
    *(_QWORD *)(a1 + 904) = *(_QWORD *)(a1 + 944);
    v9 = PspChangeJobMemoryUsageByProcess(a3 | 3u, v8, a1);
    _InterlockedOr((volatile signed __int32 *)(a1 + 768), 0x10u);
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a1);
  }
  else
  {
    v9 = 0;
  }
  MiUnlockVadRange(a1, -1LL, v7, 0LL);
  if ( v4 )
    KiUnstackDetachProcess((__int64)v11, 0LL);
  return v9;
}
