/*
 * XREFs of SmpKeyedStoreReference @ 0x14014F794
 * Callers:
 *     SmpPageWrite @ 0x14014D794 (SmpPageWrite.c)
 * Callees:
 *     SmpKeyedStoreEntryGet @ 0x140011FDC (SmpKeyedStoreEntryGet.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     SmKmStoreReference @ 0x1400E1134 (SmKmStoreReference.c)
 */

__int64 __fastcall SmpKeyedStoreReference(signed __int64 *BugCheckParameter2, __int64 a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // esi
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  CurrentThread = KeGetCurrentThread();
  v4 = -1;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)BugCheckParameter2, 0LL);
  v7 = SmpKeyedStoreEntryGet((ULONG_PTR)BugCheckParameter2, &v10, 0, 1);
  v8 = v7;
  if ( v7 )
  {
    SmKmStoreReference(a2, *(unsigned __int16 *)(v7 + 16));
    v4 = *(unsigned __int16 *)(v8 + 16);
  }
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
  return v4;
}
