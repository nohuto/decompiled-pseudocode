/*
 * XREFs of CmpDelayDerefKCBWorker @ 0x1405B20B0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExpReleaseFastMutexContended @ 0x140023F40 (ExpReleaseFastMutexContended.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1405B2550 (CmpDoQueueLateUnloadWorker.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406451C0 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpArmDelayDerefKCBWorker @ 0x14068B2E8 (CmpArmDelayDerefKCBWorker.c)
 */

PVOID CmpDelayDerefKCBWorker()
{
  unsigned int v0; // esi
  char v1; // r14
  __int64 v2; // rcx
  _QWORD *v3; // rax
  __int64 v4; // rcx
  ULONG_PTR v5; // rbp
  unsigned __int8 v6; // bl
  signed __int32 v7; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v9; // rdi
  char v10; // bl
  signed __int32 v12[8]; // [rsp+0h] [rbp-98h] BYREF
  PVOID v13[2]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v14[48]; // [rsp+30h] [rbp-68h] BYREF

  CmpInitializeThreadInfo(v13);
  v0 = 0;
  v1 = 0;
  CmpAttachToRegistryProcess(v14);
  CmpLockRegistry(v2);
  ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayDerefKCBLock);
  while ( 1 )
  {
    v3 = (_QWORD *)CmpDelayDerefKCBListHead;
    if ( (__int64 *)CmpDelayDerefKCBListHead == &CmpDelayDerefKCBListHead )
      break;
    if ( v0 >= CmpDelayDerefKCBLimit )
    {
      if ( (__int64 *)CmpDelayDerefKCBListHead != &CmpDelayDerefKCBListHead )
      {
        v1 = 1;
        goto LABEL_20;
      }
      break;
    }
    v4 = *(_QWORD *)CmpDelayDerefKCBListHead;
    if ( *(__int64 **)(CmpDelayDerefKCBListHead + 8) != &CmpDelayDerefKCBListHead
      || *(_QWORD *)(v4 + 8) != CmpDelayDerefKCBListHead )
    {
      __fastfail(3u);
    }
    CmpDelayDerefKCBListHead = *(_QWORD *)CmpDelayDerefKCBListHead;
    v5 = (ULONG_PTR)(v3 - 27);
    *(_QWORD *)(v4 + 8) = &CmpDelayDerefKCBListHead;
    v3[1] = v3;
    *v3 = v3;
    _InterlockedOr(v12, 0);
    *((_BYTE *)v3 - 160) &= ~1u;
    v6 = *((_BYTE *)&CmpDelayDerefKCBLock + 48);
    *(&CmpDelayDerefKCBLock + 1) = 0LL;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayDerefKCBLock, 1, 0);
    if ( v7 )
      ExpReleaseFastMutexContended((__int64)&CmpDelayDerefKCBLock, v7);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v6);
    KeAbPostRelease((ULONG_PTR)&CmpDelayDerefKCBLock);
    v9 = *(_QWORD *)(v5 + 24);
    v10 = *(_BYTE *)(v9 + 2936);
    CmpDereferenceKeyControlBlock(v5);
    if ( v10 == 1 )
      CmpDoQueueLateUnloadWorker(v9);
    ++v0;
    ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayDerefKCBLock);
  }
  CmpDelayDerefKCBWorkItemActive = 0;
LABEL_20:
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayDerefKCBLock);
  CmpUnlockRegistry();
  if ( v1 )
    CmpArmDelayDerefKCBWorker();
  KiUnstackDetachProcess((__int64)v14, 0LL);
  return CmCleanupThreadInfo(v13);
}
