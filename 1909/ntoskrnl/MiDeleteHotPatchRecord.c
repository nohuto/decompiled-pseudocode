/*
 * XREFs of MiDeleteHotPatchRecord @ 0x14088D844
 * Callers:
 *     MiUnloadHotPatch @ 0x1408916B0 (MiUnloadHotPatch.c)
 *     MiUnloadHotPatchForUserSid @ 0x1408917FC (MiUnloadHotPatchForUserSid.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140029C60 (RtlAvlRemoveNode.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiCompareHotPatchNodes @ 0x1405B0CA4 (MiCompareHotPatchNodes.c)
 */

__int64 __fastcall MiDeleteHotPatchRecord(unsigned __int64 *a1, int a2, int a3, int a4)
{
  unsigned __int64 *v8; // rbp
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 *v10; // rdi
  int v11; // eax
  int v12; // eax
  _DWORD v14[12]; // [rsp+20h] [rbp-48h] BYREF

  memset(v14, 0, sizeof(v14));
  v14[6] = a3;
  v8 = 0LL;
  v14[7] = a4;
  if ( a2 )
  {
    CurrentThread = 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&MiHotPatchListLock, 0LL);
  }
  v10 = (unsigned __int64 *)*a1;
  if ( *a1 )
  {
    do
    {
      v11 = MiCompareHotPatchNodes((__int64)v14, (__int64)v10);
      if ( v11 >= 0 )
      {
        if ( v11 <= 0 )
          break;
        v10 = (unsigned __int64 *)v10[1];
      }
      else
      {
        v10 = (unsigned __int64 *)*v10;
      }
    }
    while ( v10 );
    if ( v10 )
    {
      v8 = v10;
      RtlAvlRemoveNode(a1, v10);
      v12 = 1;
      if ( MiHotPatchGeneration != -1 )
        v12 = MiHotPatchGeneration + 1;
      MiHotPatchGeneration = v12;
    }
  }
  if ( !a2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&MiHotPatchListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&MiHotPatchListLock);
    KeAbPostRelease((ULONG_PTR)&MiHotPatchListLock);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( !v8 )
    return 0LL;
  ExFreePoolWithTag(v8, 0);
  return 1LL;
}
