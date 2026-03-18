/*
 * XREFs of KeDeleteMutant @ 0x140014474
 * Callers:
 *     ExpDeleteMutant @ 0x140014460 (ExpDeleteMutant.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     KiExitDispatcher @ 0x140067BE0 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x1400A9C50 (KiAcquireKobjectLockSafe.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x1400AA810 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiAcquireThreadLock @ 0x1401BE710 (KiAcquireThreadLock.c)
 *     KeAbCrossThreadDelete @ 0x1402B07D8 (KeAbCrossThreadDelete.c)
 *     KiSignalSynchronizationObjectEx @ 0x1402B1FCC (KiSignalSynchronizationObjectEx.c)
 */

LONG_PTR __fastcall KeDeleteMutant(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v2; // r12d
  struct _KTHREAD *v3; // rdi
  char v4; // r14
  char CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r15
  int v8; // eax
  LONG_PTR result; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  _QWORD *v14; // rax
  volatile signed __int32 v15; // [rsp+30h] [rbp-48h]
  __int64 v16; // [rsp+80h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v3 = 0LL;
  v4 = 0;
  v16 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(BugCheckParameter2);
  v8 = *(_DWORD *)(BugCheckParameter2 + 4);
  *(_BYTE *)(BugCheckParameter2 + 48) |= 1u;
  *(_DWORD *)(BugCheckParameter2 + 4) = 1;
  if ( v8 <= 0 )
  {
    v15 = *(_DWORD *)BugCheckParameter2;
    BYTE2(v15) = 0;
    *(_DWORD *)BugCheckParameter2 = v15;
    v3 = *(struct _KTHREAD **)(BugCheckParameter2 + 40);
    v2 = *(unsigned __int8 *)(BugCheckParameter2 + 49);
    KiAcquireThreadLock(v3);
    v13 = *(_QWORD *)(BugCheckParameter2 + 24);
    v14 = *(_QWORD **)(BugCheckParameter2 + 32);
    if ( *(_QWORD *)(v13 + 8) != BugCheckParameter2 + 24 || *v14 != BugCheckParameter2 + 24 )
      __fastfail(3u);
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    if ( (*(_BYTE *)(BugCheckParameter2 + 48) & 2) != 0 )
    {
      v4 = 1;
      if ( v3 != CurrentThread )
        ObfReferenceObject(v3);
    }
    KiReleaseThreadLockSafe(v3);
    *(_QWORD *)(BugCheckParameter2 + 40) = 0LL;
    KiSignalSynchronizationObjectEx(CurrentPrcb, BugCheckParameter2, &v16);
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
    KiAcquireReleaseObjectRundownLockExclusive(BugCheckParameter2);
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
  }
  result = KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 1, CurrentIrql);
  if ( v4 )
  {
    if ( v3 == CurrentThread )
    {
      result = KeAbPostRelease(BugCheckParameter2);
    }
    else
    {
      KeAbCrossThreadDelete(BugCheckParameter2, v3);
      result = ObfDereferenceObject(v3);
    }
  }
  if ( v3 == CurrentThread )
  {
    if ( v2 )
      return KeLeaveCriticalRegionThread(CurrentThread, v10, v11, v12);
  }
  return result;
}
