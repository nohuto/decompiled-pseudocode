/*
 * XREFs of MiInitializePagedPoolEvents @ 0x1409F1BD0
 * Callers:
 *     MiInitializeMemoryEvents @ 0x14074EE8C (MiInitializeMemoryEvents.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     MiFreePoolPagesLeft @ 0x1400F1C2C (MiFreePoolPagesLeft.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__int64 MiInitializePagedPoolEvents()
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v1; // rbx
  char v2; // al
  struct _KTHREAD *v3; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v5; // bp
  unsigned int v6; // r8d
  bool v7; // zf
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  _KLOCK_ENTRY *v11; // rdi
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v17; // [rsp+60h] [rbp+8h] BYREF
  int v18; // [rsp+68h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&BugCheckParameter2, 0LL);
  v1 = MiFreePoolPagesLeft(6);
  if ( v1 < qword_1404644E8 )
    KeResetEvent(qword_140468578);
  else
    KeSetEvent(qword_140468578, 0, 0);
  if ( v1 <= qword_1404644E0 )
    KeSetEvent(qword_140468570, 0, 0);
  else
    KeResetEvent(qword_140468570);
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&BugCheckParameter2);
  v17 = 0;
  v3 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&BugCheckParameter2) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v3->ApcState.Process);
  else
    SessionId = -1;
  --v3->SpecialApcDisable;
  v5 = ++v3->AbAllocationRegionCount;
  v6 = ((char)v3->AbEntrySummary | (char)v3->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v7 = !_BitScanReverse((unsigned int *)&v8, v6);
    v18 = v8;
    if ( v7 )
      break;
    v9 = 1 << v8;
    v10 = v8;
    v11 = &v3->LockEntries[v10];
    v6 &= ~v9;
    if ( (v11->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v11->LockState.0 & 1) == 0
      && (*(_QWORD *)&v11->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
      && v11->LockState.SessionId == SessionId )
    {
      v11->AcquiredByte &= ~1u;
      if ( v11->LockState.0 )
      {
        if ( v11 )
        {
          v11->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v11->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v3->LockEntries[v10].TreeNode);
          v12 = v11->BoostBitmap.AllFields & 0x1FFFF;
          v13 = v11->BoostBitmap.AllFields & 0xFFFE0000;
          v11->ThreadLocalFlags &= ~1u;
          v17 = v12;
          v11->BoostBitmap.AllFields = v13;
          v11->LockState.0 = 0LL;
          v14 = ((char *)v11 - (char *)v3 - 800) / 96;
          if ( v5 == 1 )
            v3->AbEntrySummary |= 1 << v14;
          else
            _InterlockedOr8((volatile signed __int8 *)&v3->AbOrphanedEntrySummary, 1 << v14);
          goto LABEL_20;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v3->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v3, (ULONG_PTR)&BugCheckParameter2, SessionId, 0LL);
LABEL_20:
  --v3->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v3, (__int64)&BugCheckParameter2, &v17);
  v7 = v3->SpecialApcDisable++ == -1;
  if ( v7 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v3->ApcState.ApcListHead[0].Flink != &v3->152 )
    KiCheckForKernelApcDelivery(v15);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
