/*
 * XREFs of MiInsertHotPatchRecord @ 0x140856AF0
 * Callers:
 *     MiLoadHotPatch @ 0x140856C38 (MiLoadHotPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x140856E98 (MiLoadHotPatchForUserSid.c)
 *     MmRegisterHotPatch @ 0x1409F81D0 (MmRegisterHotPatch.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiCompareHotPatchNodes @ 0x140855CD8 (MiCompareHotPatchNodes.c)
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
