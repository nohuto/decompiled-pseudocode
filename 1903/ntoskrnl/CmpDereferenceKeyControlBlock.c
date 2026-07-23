/*
 * XREFs of CmpDereferenceKeyControlBlock @ 0x140602480
 * Callers:
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405F73E0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 *     CmpCleanupParseContext @ 0x1405FDF30 (CmpCleanupParseContext.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405FE180 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpDeleteKeyObject @ 0x140602160 (CmpDeleteKeyObject.c)
 *     CmpTransMgrFreeVolatileData @ 0x140631678 (CmpTransMgrFreeVolatileData.c)
 *     CmLoadDifferencingKey @ 0x140638BDC (CmLoadDifferencingKey.c)
 *     CmReleaseLoadKeyContext @ 0x14063AD60 (CmReleaseLoadKeyContext.c)
 *     CmEnumerateKey @ 0x14064FF30 (CmEnumerateKey.c)
 *     CmpWalkOneLevel @ 0x140652490 (CmpWalkOneLevel.c)
 *     CmpGetSymbolicLinkTarget @ 0x140655BB0 (CmpGetSymbolicLinkTarget.c)
 *     CmpLateUnloadHiveWorker @ 0x140662850 (CmpLateUnloadHiveWorker.c)
 *     CmpFreeSiloKeyLockEntry @ 0x14082ECE8 (CmpFreeSiloKeyLockEntry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x14082ED28 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x140838B68 (CmpKeyEnumStackFreeResumeContext.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     CmpInitializeDelayDerefContext @ 0x1400440B4 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140045A40 (CmpDrainDelayDerefContext.c)
 *     ExpAcquireFastMutexContended @ 0x14009C690 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x14009E6F0 (ExpReleaseFastMutexContended.c)
 *     CmpArmDelayedCloseTimer @ 0x14011E33C (CmpArmDelayedCloseTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     CmpUnlockKcb @ 0x1405F84A0 (CmpUnlockKcb.c)
 *     CmpLockKcbExclusive @ 0x14064E858 (CmpLockKcbExclusive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140652328 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDeleteHive @ 0x1406629D0 (CmpDeleteHive.c)
 *     CmpFreeKeyControlBlock @ 0x14069B720 (CmpFreeKeyControlBlock.c)
 */

void __fastcall CmpDereferenceKeyControlBlock(ULONG_PTR BugCheckParameter4)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned int v4; // ebx
  ULONG_PTR v5; // rbp
  ULONG_PTR v6; // rsi
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  __int64 v9; // rax
  bool v10; // dl
  int v11; // ecx
  _RTL_BALANCED_NODE *v12; // rax
  _RTL_BALANCED_NODE *v13; // r14
  unsigned __int8 CurrentIrql; // cl
  int v15; // eax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  int v18; // eax
  unsigned __int8 v19; // r14
  signed __int32 v20; // eax
  int v21; // r14d
  ULONG_PTR v22; // rcx
  __int64 v23; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v25; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *v27[2]; // [rsp+30h] [rbp-48h] BYREF
  char v28; // [rsp+80h] [rbp+8h]
  ULONG_PTR v29; // [rsp+88h] [rbp+10h]
  unsigned __int8 v30; // [rsp+90h] [rbp+18h]

  v27[0] = 0LL;
  v27[1] = 0LL;
  CmpInitializeDelayDerefContext(v27);
  v2 = *(_QWORD *)BugCheckParameter4;
  if ( *(_QWORD *)BugCheckParameter4 <= 1uLL )
  {
LABEL_5:
    v4 = *(_DWORD *)(BugCheckParameter4 + 16);
    v5 = *(_QWORD *)(BugCheckParameter4 + 32);
    v6 = *(_QWORD *)(v5 + 1640)
       + 24
       * ((unsigned int)(*(_DWORD *)(v5 + 1648) - 1) & ((101027 * (v4 ^ (v4 >> 9))) ^ ((unsigned __int64)(101027 * (v4 ^ (v4 >> 9))) >> 9)));
    ExAcquirePushLockExclusiveEx(v6, 0LL);
    *(_QWORD *)(v6 + 8) = KeGetCurrentThread();
    _m_prefetchw((const void *)(v5 + 4272));
    v7 = *(_DWORD *)(v5 + 4272);
    if ( !v7 )
LABEL_57:
      KeBugCheckEx(0x51u, 0x17uLL, v5, 8uLL, BugCheckParameter4);
    while ( 1 )
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 4272), v7 + 1, v7);
      if ( v8 == v7 )
        break;
      if ( !v7 )
        goto LABEL_57;
    }
    ExAcquirePushLockExclusiveEx(BugCheckParameter4 + 48, 0LL);
    *(_QWORD *)(BugCheckParameter4 + 56) = KeGetCurrentThread();
    v9 = *(_QWORD *)(BugCheckParameter4 + 192);
    v29 = 0LL;
    if ( v9 )
    {
      v25 = *(_QWORD *)(v9 + 24);
      if ( v25 )
      {
        v29 = *(_QWORD *)(v25 + 16);
        CmpUnlockKcb(BugCheckParameter4);
        CmpLockKcbExclusive(v29);
        CmpLockKcbExclusive(BugCheckParameter4);
      }
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      if ( (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 )
      {
        v23 = *(_QWORD *)(BugCheckParameter4 + 32);
        CmpCleanUpKcbCacheWithLock(BugCheckParameter4);
        CurrentThread = KeGetCurrentThread();
        *(_DWORD *)(v23 + 160) |= 0x80u;
        *(_QWORD *)(v23 + 4216) = CurrentThread;
        *(_DWORD *)(v23 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v23 + 4276), 1u) & 0x7F) + 4280) = 31;
        if ( (*(_DWORD *)(v23 + 160) & 0x20) == 0
          && _InterlockedExchangeAdd((volatile signed __int32 *)(v23 + 4272), 0xFFFFFFFF) == 1 )
        {
          CmpDeleteHive((PVOID)v23);
        }
      }
      else
      {
        v10 = 0;
        v11 = *(_DWORD *)(BugCheckParameter4 + 8);
        if ( (v11 & 0x20) == 0 )
          v10 = (v11 & 0x20000) == 0;
        if ( CmpHoldLazyFlush
          && (*(_WORD *)(BugCheckParameter4 + 186) & 0x10) == 0
          && (*(_BYTE *)(BugCheckParameter4 + 8) & 8) == 0
          || !v10 )
        {
          CmpCleanUpKcbCacheWithLock(BugCheckParameter4);
          if ( *(struct _KTHREAD **)(BugCheckParameter4 + 56) != KeGetCurrentThread()
            && (*(_DWORD *)(BugCheckParameter4 + 8) & 0x80000) != 0 )
          {
            CmpFreeKeyControlBlock(BugCheckParameter4);
          }
        }
        else
        {
          v28 = 0;
          v12 = KeAbPreAcquire((ULONG_PTR)&CmpDelayedCloseTableLock, 0LL, 0);
          v13 = v12;
          CurrentIrql = KeGetCurrentIrql();
          v30 = CurrentIrql;
          __writecr8(1uLL);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
          {
            ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayedCloseTableLock, v12);
            CurrentIrql = v30;
          }
          if ( v13 )
            BYTE2(v13[1].Left) |= 1u;
          *(&CmpDelayedCloseTableLock + 1) = (ULONG_PTR)KeGetCurrentThread();
          v15 = CurrentIrql;
          v16 = CmpDelayedLRUListHead;
          *((_DWORD *)&CmpDelayedCloseTableLock + 12) = v15;
          v17 = (_QWORD *)(BugCheckParameter4 + 224);
          if ( *(__int64 **)(CmpDelayedLRUListHead + 8) != &CmpDelayedLRUListHead )
            __fastfail(3u);
          *v17 = CmpDelayedLRUListHead;
          *(_QWORD *)(BugCheckParameter4 + 232) = &CmpDelayedLRUListHead;
          *(_QWORD *)(v16 + 8) = v17;
          CmpDelayedLRUListHead = BugCheckParameter4 + 224;
          v18 = CmpDelayedCloseElements;
          *(_BYTE *)(BugCheckParameter4 + 64) |= 2u;
          ++qword_1409AEF38;
          CmpDelayedCloseElements = v18 + 1;
          if ( v18 + 1 > (unsigned int)CmpDelayedCloseSize )
            v28 = 1;
          v19 = *((_BYTE *)&CmpDelayedCloseTableLock + 48);
          *(&CmpDelayedCloseTableLock + 1) = 0LL;
          v20 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayedCloseTableLock, 1, 0);
          if ( v20 )
            ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayedCloseTableLock, v20);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v19 < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
          __writecr8(v19);
          KeAbPostRelease((ULONG_PTR)&CmpDelayedCloseTableLock);
          if ( v28 == 1 )
            CmpArmDelayedCloseTimer();
        }
      }
    }
    v21 = *(_DWORD *)(BugCheckParameter4 + 8) & 0x80000;
    if ( *(struct _KTHREAD **)(BugCheckParameter4 + 56) == KeGetCurrentThread() )
      *(_QWORD *)(BugCheckParameter4 + 56) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter4 + 56));
    ExReleasePushLockEx(BugCheckParameter4 + 48, 0LL);
    if ( v21 && (*(_DWORD *)(BugCheckParameter4 + 8) & 0x80000) != 0 )
      CmpFreeKeyControlBlock(BugCheckParameter4);
    if ( v29 )
      CmpUnlockKcb(v29);
    v22 = *(_QWORD *)(v5 + 1640)
        + 24
        * ((unsigned int)(*(_DWORD *)(v5 + 1648) - 1) & ((101027 * (v4 ^ (v4 >> 9))) ^ ((unsigned __int64)(101027 * (v4 ^ (v4 >> 9))) >> 9)));
    *(_QWORD *)(v22 + 8) = 0LL;
    ExReleasePushLockEx(v22, 0LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 4272), 0xFFFFFFFF) == 1 )
      CmpDeleteHive((PVOID)v5);
    CmpDrainDelayDerefContext(v27);
  }
  else
  {
    while ( 1 )
    {
      v3 = v2 - 1;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter4, v2 - 1, v2);
      if ( v2 == v3 + 1 )
        break;
      if ( v2 <= 1 )
        goto LABEL_5;
    }
    if ( v2 < v3 )
      KeBugCheckEx(0x51u, 0x25uLL, BugCheckParameter4, 0LL, 0LL);
  }
}
