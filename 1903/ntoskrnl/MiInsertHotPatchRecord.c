/*
 * XREFs of MiInsertHotPatchRecord @ 0x14088ED68
 * Callers:
 *     MiLoadHotPatch @ 0x14088EEB0 (MiLoadHotPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x14088F1E8 (MiLoadHotPatchForUserSid.c)
 *     MmRegisterHotPatch @ 0x140A3C83C (MmRegisterHotPatch.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140029870 (RtlAvlRemoveNode.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     RtlAvlInsertNodeEx @ 0x140072C40 (RtlAvlInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiCompareHotPatchNodes @ 0x1405B0E68 (MiCompareHotPatchNodes.c)
 */

void __fastcall MiInsertHotPatchRecord(unsigned __int64 *a1, _QWORD *a2, int a3)
{
  unsigned __int64 *v3; // rbp
  __int64 v5; // rax
  struct _KTHREAD *CurrentThread; // rsi
  bool v8; // r14
  unsigned __int64 *v9; // rdi
  int v10; // r15d
  int v11; // eax
  unsigned __int64 v12; // rax

  v3 = 0LL;
  v5 = (__int64)a2;
  if ( a3 )
  {
    CurrentThread = 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&MiHotPatchListLock, 0LL);
    v5 = (__int64)a2;
  }
  v8 = 0;
LABEL_5:
  v9 = (unsigned __int64 *)*a1;
  v10 = 1;
  if ( *a1 )
  {
    while ( 1 )
    {
      v11 = MiCompareHotPatchNodes(v5, (__int64)v9);
      if ( v11 <= 0 )
      {
        if ( v11 >= 0 )
        {
          v3 = v9;
          RtlAvlRemoveNode(a1, v9);
          v5 = (__int64)a2;
          goto LABEL_5;
        }
        v12 = *v9;
        if ( !*v9 )
        {
          v8 = 0;
          break;
        }
      }
      else
      {
        v12 = v9[1];
        if ( !v12 )
        {
          v8 = 1;
          break;
        }
      }
      v9 = (unsigned __int64 *)v12;
      v5 = (__int64)a2;
    }
  }
  RtlAvlInsertNodeEx(a1, (unsigned __int64)v9, v8, a2);
  if ( MiHotPatchGeneration != -1 )
    v10 = MiHotPatchGeneration + 1;
  MiHotPatchGeneration = v10;
  if ( !a3 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&MiHotPatchListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&MiHotPatchListLock);
    KeAbPostRelease((ULONG_PTR)&MiHotPatchListLock);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
