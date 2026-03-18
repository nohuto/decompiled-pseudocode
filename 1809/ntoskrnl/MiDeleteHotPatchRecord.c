/*
 * XREFs of MiDeleteHotPatchRecord @ 0x140854BEC
 * Callers:
 *     MiUnloadHotPatch @ 0x140858218 (MiUnloadHotPatch.c)
 *     MiUnloadHotPatchForUserSid @ 0x1408582D0 (MiUnloadHotPatchForUserSid.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     MiCompareHotPatchNodes @ 0x140854A98 (MiCompareHotPatchNodes.c)
 */

__int64 __fastcall MiDeleteHotPatchRecord(unsigned __int64 *a1, ULONG_PTR a2, int a3, int a4)
{
  unsigned __int64 *v4; // rbp
  int v5; // r14d
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 *v8; // rdi
  int v9; // eax
  int v10; // eax
  _BYTE v12[24]; // [rsp+20h] [rbp-48h] BYREF
  int v13; // [rsp+38h] [rbp-30h]
  int v14; // [rsp+3Ch] [rbp-2Ch]

  v4 = 0LL;
  v13 = a3;
  v14 = a4;
  v5 = a2;
  if ( (_DWORD)a2 )
  {
    CurrentThread = 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&MiHotPatchListLock, a2);
  }
  v8 = (unsigned __int64 *)*a1;
  if ( *a1 )
  {
    do
    {
      v9 = MiCompareHotPatchNodes((__int64)v12, (__int64)v8);
      if ( v9 >= 0 )
      {
        if ( v9 <= 0 )
          break;
        v8 = (unsigned __int64 *)v8[1];
      }
      else
      {
        v8 = (unsigned __int64 *)*v8;
      }
    }
    while ( v8 );
    if ( v8 )
    {
      v4 = v8;
      RtlAvlRemoveNode(a1, v8);
      v10 = 1;
      if ( MiHotPatchGeneration != -1 )
        v10 = MiHotPatchGeneration + 1;
      MiHotPatchGeneration = v10;
    }
  }
  if ( !v5 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&MiHotPatchListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&MiHotPatchListLock);
    KeAbPostRelease((ULONG_PTR)&MiHotPatchListLock);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( !v4 )
    return 0LL;
  ExFreePoolWithTag(v4, 0);
  return 1LL;
}
