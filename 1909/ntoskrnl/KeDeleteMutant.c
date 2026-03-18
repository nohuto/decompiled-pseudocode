/*
 * XREFs of KeDeleteMutant @ 0x1400E3824
 * Callers:
 *     ExpDeleteMutant @ 0x1400E3810 (ExpDeleteMutant.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KiExitDispatcher @ 0x140067E50 (KiExitDispatcher.c)
 *     KiReleaseThreadLockSafe @ 0x1400E32E0 (KiReleaseThreadLockSafe.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3310 (KiAcquireKobjectLockSafe.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x1400E39A4 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KiAcquireThreadLock @ 0x1401BF200 (KiAcquireThreadLock.c)
 *     KeAbCrossThreadDelete @ 0x1402B0538 (KeAbCrossThreadDelete.c)
 *     KiSignalSynchronizationObjectEx @ 0x1402B1D2C (KiSignalSynchronizationObjectEx.c)
 */

unsigned __int8 __fastcall KeDeleteMutant(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v2; // r12d
  struct _KTHREAD *v3; // rdi
  char v4; // r14
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r15
  int v8; // eax
  unsigned __int8 result; // al
  __int64 v10; // rdx
  _QWORD *v11; // rax
  volatile signed __int32 v12; // [rsp+30h] [rbp-48h]
  __int64 v13; // [rsp+80h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v3 = 0LL;
  v4 = 0;
  v13 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe((volatile signed __int32 *)BugCheckParameter2);
  v8 = *(_DWORD *)(BugCheckParameter2 + 4);
  *(_BYTE *)(BugCheckParameter2 + 48) |= 1u;
  *(_DWORD *)(BugCheckParameter2 + 4) = 1;
  if ( v8 <= 0 )
  {
    v12 = *(_DWORD *)BugCheckParameter2;
    BYTE2(v12) = 0;
    *(_DWORD *)BugCheckParameter2 = v12;
    v3 = *(struct _KTHREAD **)(BugCheckParameter2 + 40);
    v2 = *(unsigned __int8 *)(BugCheckParameter2 + 49);
    KiAcquireThreadLock(v3);
    v10 = *(_QWORD *)(BugCheckParameter2 + 24);
    v11 = *(_QWORD **)(BugCheckParameter2 + 32);
    if ( *(_QWORD *)(v10 + 8) != BugCheckParameter2 + 24 || *v11 != BugCheckParameter2 + 24 )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    if ( (*(_BYTE *)(BugCheckParameter2 + 48) & 2) != 0 )
    {
      v4 = 1;
      if ( v3 != CurrentThread )
        ObfReferenceObject(v3);
    }
    KiReleaseThreadLockSafe((__int64)v3);
    *(_QWORD *)(BugCheckParameter2 + 40) = 0LL;
    KiSignalSynchronizationObjectEx(CurrentPrcb, BugCheckParameter2, &v13);
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
    KiAcquireReleaseObjectRundownLockExclusive(BugCheckParameter2);
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
  }
  result = KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 1u, CurrentIrql);
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
      return (unsigned __int8)KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return result;
}
