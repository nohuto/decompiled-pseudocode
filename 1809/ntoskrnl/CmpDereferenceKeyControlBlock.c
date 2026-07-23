/*
 * XREFs of CmpDereferenceKeyControlBlock @ 0x1406451C0
 * Callers:
 *     CmpLateUnloadHiveWorker @ 0x1405B0C50 (CmpLateUnloadHiveWorker.c)
 *     CmpDelayDerefKCBWorker @ 0x1405B20B0 (CmpDelayDerefKCBWorker.c)
 *     CmLoadDifferencingKey @ 0x1405B5DBC (CmLoadDifferencingKey.c)
 *     CmpCleanupParseContext @ 0x1405B6FC4 (CmpCleanupParseContext.c)
 *     CmReleaseLoadKeyContext @ 0x1405B8C30 (CmReleaseLoadKeyContext.c)
 *     CmEnumerateKey @ 0x1405D3A20 (CmEnumerateKey.c)
 *     CmpWalkOneLevel @ 0x1405D5560 (CmpWalkOneLevel.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405D8CC0 (CmpGetSymbolicLinkTarget.c)
 *     CmOpenKey @ 0x1405E1EA0 (CmOpenKey.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405E6320 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14063FDD0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpDeleteKeyObject @ 0x140640520 (CmpDeleteKeyObject.c)
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 *     CmpDestroyVirtualStack @ 0x1407F3A50 (CmpDestroyVirtualStack.c)
 *     CmpDoBuildVirtualStack @ 0x1407F3C18 (CmpDoBuildVirtualStack.c)
 *     CmpFreeSiloKeyLockEntry @ 0x1407F70D0 (CmpFreeSiloKeyLockEntry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x1407F7110 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x1408009D8 (CmpKeyEnumStackFreeResumeContext.c)
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x140005480 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x140023F40 (ExpReleaseFastMutexContended.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     CmpDeleteHive @ 0x1405B0DEC (CmpDeleteHive.c)
 *     CmpLockKcbExclusive @ 0x1405D2728 (CmpLockKcbExclusive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1405D53B8 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpUnlockKcb @ 0x1405E4580 (CmpUnlockKcb.c)
 *     CmpFreeKeyControlBlock @ 0x140693DB4 (CmpFreeKeyControlBlock.c)
 */

void __fastcall CmpDereferenceKeyControlBlock(ULONG_PTR BugCheckParameter2)
{
  unsigned __int32 v1; // eax
  unsigned __int32 v3; // edx
  unsigned int v4; // ebp
  ULONG_PTR v5; // rsi
  ULONG_PTR v6; // rdi
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  ULONG_PTR v9; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  signed __int32 v13; // eax
  unsigned __int32 v14; // ett
  signed __int32 v15; // ecx
  __int64 v16; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int v18; // edi
  int v19; // ecx
  _RTL_BALANCED_NODE *v20; // rax
  _RTL_BALANCED_NODE *v21; // rdi
  unsigned __int8 CurrentIrql; // r12
  _QWORD *v23; // rax
  __int64 v24; // rcx
  unsigned __int8 v25; // di
  bool v26; // r12
  signed __int32 v27; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  ULONG_PTR v29; // rcx

  v1 = *(_DWORD *)BugCheckParameter2;
  if ( *(_DWORD *)BugCheckParameter2 <= 1u )
  {
LABEL_4:
    v4 = *(_DWORD *)(BugCheckParameter2 + 8);
    v5 = *(_QWORD *)(BugCheckParameter2 + 24);
    v6 = *(_QWORD *)(v5 + 1640)
       + 24
       * ((unsigned int)(*(_DWORD *)(v5 + 1648) - 1) & ((101027 * (v4 ^ (v4 >> 9))) ^ ((unsigned __int64)(101027 * (v4 ^ (v4 >> 9))) >> 9)));
    ExAcquirePushLockExclusiveEx(v6, 0LL);
    *(_QWORD *)(v6 + 8) = KeGetCurrentThread();
    _m_prefetchw((const void *)(v5 + 4288));
    v7 = *(_DWORD *)(v5 + 4288);
    if ( !v7 )
LABEL_56:
      KeBugCheckEx(0x51u, 0x17uLL, v5, 8uLL, BugCheckParameter2);
    while ( 1 )
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 4288), v7 + 1, v7);
      if ( v8 == v7 )
        break;
      if ( !v7 )
        goto LABEL_56;
    }
    ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 40, 0LL);
    v9 = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 48) = KeGetCurrentThread();
    v10 = *(_QWORD *)(BugCheckParameter2 + 184);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 24);
      if ( v11 )
      {
        v9 = *(_QWORD *)(v11 + 16);
        CmpUnlockKcb(BugCheckParameter2);
        CmpLockKcbExclusive(v9);
        CmpLockKcbExclusive(BugCheckParameter2);
      }
    }
    v12 = (unsigned int)(*(_DWORD *)BugCheckParameter2 - 1);
    v14 = *(_DWORD *)BugCheckParameter2;
    v13 = _InterlockedCompareExchange((volatile signed __int32 *)BugCheckParameter2, v12, *(_DWORD *)BugCheckParameter2);
    if ( v14 != v13 )
    {
      do
      {
        v15 = v13;
        v12 = (unsigned int)(v13 - 1);
        v13 = _InterlockedCompareExchange((volatile signed __int32 *)BugCheckParameter2, v12, v13);
      }
      while ( v13 != v15 );
    }
    if ( !(_DWORD)v12 )
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 176) & 0x40000) != 0 )
      {
        v16 = *(_QWORD *)(BugCheckParameter2 + 24);
        CmpCleanUpKcbCacheWithLock(BugCheckParameter2, v12);
        CurrentThread = KeGetCurrentThread();
        *(_DWORD *)(v16 + 160) |= 0x80u;
        *(_QWORD *)(v16 + 4216) = CurrentThread;
        *(_DWORD *)(v16 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 4292), 1u) & 0x7F) + 4296) = 31;
        if ( (*(_DWORD *)(v16 + 160) & 0x20) == 0
          && _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 4288), 0xFFFFFFFF) == 1 )
        {
          CmpDeleteHive((_QWORD *)v16);
        }
      }
      else
      {
        v19 = *(_DWORD *)(BugCheckParameter2 + 4);
        if ( (v19 & 0x20) == 0 )
          LOBYTE(v12) = (v19 & 0x20000) == 0;
        if ( (!CmpHoldLazyFlush
           || (*(_DWORD *)(BugCheckParameter2 + 176) & 0x100000) != 0
           || (*(_DWORD *)(BugCheckParameter2 + 4) & 8) != 0)
          && (_BYTE)v12 )
        {
          v20 = KeAbPreAcquire((ULONG_PTR)&CmpDelayedCloseTableLock, 0LL, 0);
          v21 = v20;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
            ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayedCloseTableLock, v20);
          if ( v21 )
            BYTE2(v21[1].Left) |= 1u;
          *(&CmpDelayedCloseTableLock + 1) = (ULONG_PTR)KeGetCurrentThread();
          *((_DWORD *)&CmpDelayedCloseTableLock + 12) = CurrentIrql;
          v23 = (_QWORD *)(BugCheckParameter2 + 216);
          if ( (_QWORD *)*v23 != v23 )
            KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter2, 0LL, 0LL);
          v24 = CmpDelayedLRUListHead;
          if ( *(__int64 **)(CmpDelayedLRUListHead + 8) != &CmpDelayedLRUListHead )
            __fastfail(3u);
          *v23 = CmpDelayedLRUListHead;
          *(_QWORD *)(BugCheckParameter2 + 224) = &CmpDelayedLRUListHead;
          *(_QWORD *)(v24 + 8) = v23;
          CmpDelayedLRUListHead = BugCheckParameter2 + 216;
          *(_BYTE *)(BugCheckParameter2 + 56) |= 2u;
          ++qword_14096FB28;
          v25 = *((_BYTE *)&CmpDelayedCloseTableLock + 48);
          v26 = ++CmpDelayedCloseElements > (unsigned int)CmpDelayedCloseSize;
          *(&CmpDelayedCloseTableLock + 1) = 0LL;
          v27 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayedCloseTableLock, 1, 0);
          if ( v27 )
            ExpReleaseFastMutexContended((__int64)&CmpDelayedCloseTableLock, v27);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v25 < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
          __writecr8(v25);
          KeAbPostRelease((ULONG_PTR)&CmpDelayedCloseTableLock);
          if ( v26 && !_InterlockedExchange(&CmpDelayCloseWorkItemActive, 1) )
            ExQueueWorkItem(&CmpDelayCloseWorkItem, DelayedWorkQueue);
        }
        else
        {
          CmpCleanUpKcbCacheWithLock(BugCheckParameter2, 0LL);
          if ( *(struct _KTHREAD **)(BugCheckParameter2 + 48) != KeGetCurrentThread()
            && (*(_DWORD *)(BugCheckParameter2 + 4) & 0x80000) != 0 )
          {
            CmpFreeKeyControlBlock(BugCheckParameter2);
          }
        }
      }
    }
    v18 = *(_DWORD *)(BugCheckParameter2 + 4) & 0x80000;
    if ( *(struct _KTHREAD **)(BugCheckParameter2 + 48) == KeGetCurrentThread() )
      *(_QWORD *)(BugCheckParameter2 + 48) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 48));
    ExReleasePushLockEx(BugCheckParameter2 + 40, 0LL);
    if ( v18 && (*(_DWORD *)(BugCheckParameter2 + 4) & 0x80000) != 0 )
      CmpFreeKeyControlBlock(BugCheckParameter2);
    if ( v9 )
      CmpUnlockKcb(v9);
    v29 = *(_QWORD *)(v5 + 1640)
        + 24
        * ((unsigned int)(*(_DWORD *)(v5 + 1648) - 1) & ((101027 * (v4 ^ (v4 >> 9))) ^ ((unsigned __int64)(101027 * (v4 ^ (v4 >> 9))) >> 9)));
    *(_QWORD *)(v29 + 8) = 0LL;
    ExReleasePushLockEx(v29, 0LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 4288), 0xFFFFFFFF) == 1 )
      CmpDeleteHive((_QWORD *)v5);
  }
  else
  {
    while ( 1 )
    {
      v3 = v1;
      v1 = _InterlockedCompareExchange((volatile signed __int32 *)BugCheckParameter2, v1 - 1, v1);
      if ( v1 == v3 )
        break;
      if ( v1 <= 1 )
        goto LABEL_4;
    }
  }
}
