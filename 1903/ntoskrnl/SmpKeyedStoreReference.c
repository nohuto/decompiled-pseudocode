/*
 * XREFs of SmpKeyedStoreReference @ 0x14014CBFC
 * Callers:
 *     SmpPageWrite @ 0x14014B13C (SmpPageWrite.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     SmpKeyedStoreEntryGet @ 0x14008AF3C (SmpKeyedStoreEntryGet.c)
 *     SmKmStoreReference @ 0x14009A60C (SmKmStoreReference.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall SmpKeyedStoreReference(signed __int64 *BugCheckParameter2, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // esi
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = a3;
  CurrentThread = KeGetCurrentThread();
  v4 = -1;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)BugCheckParameter2, 0LL);
  v7 = SmpKeyedStoreEntryGet((ULONG_PTR)BugCheckParameter2, &v12, 0, 1);
  v10 = v7;
  if ( v7 )
  {
    SmKmStoreReference(a2, *(unsigned __int16 *)(v7 + 16), v8, v9);
    v4 = *(unsigned __int16 *)(v10 + 16);
  }
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
  return v4;
}
