/*
 * XREFs of NormalizationList__Unlock @ 0x14031AFFC
 * Callers:
 *     RtlpGetNormalization @ 0x1408D9070 (RtlpGetNormalization.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

_QWORD *NormalizationList__Unlock()
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v2; // si
  unsigned int v3; // r8d
  int v4; // eax
  __int64 v5; // rcx
  _KLOCK_ENTRY *v6; // rdi
  bool v7; // zf
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v14; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+58h] [rbp+10h]

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&NormalizationListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&NormalizationListLock);
  v14 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&NormalizationListLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v2 = ++CurrentThread->AbAllocationRegionCount;
  v3 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v7 = !_BitScanReverse((unsigned int *)&v8, v3);
    v15 = v8;
    if ( v7 )
      goto LABEL_13;
    v4 = 1 << v8;
    v5 = v8;
    v6 = &CurrentThread->LockEntries[v5];
    v3 &= ~v4;
    if ( (v6->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v6->LockState.0 & 1) == 0
      && (*(_QWORD *)&v6->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&NormalizationListLock & 0x7FFFFFFFFFFFFFFCLL)
      && v6->LockState.SessionId == SessionId )
    {
      v6->AcquiredByte &= ~1u;
      if ( v6->LockState.0 )
        break;
    }
  }
  if ( !v6 )
  {
LABEL_13:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&NormalizationListLock, SessionId, 0LL);
    goto LABEL_20;
  }
  v6->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v6->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v5].TreeNode);
  v9 = v6->BoostBitmap.AllFields & 0x1FFFF;
  v10 = v6->BoostBitmap.AllFields & 0xFFFE0000;
  v6->ThreadLocalFlags &= ~1u;
  v14 = v9;
  v6->BoostBitmap.AllFields = v10;
  v6->LockState.0 = 0LL;
  v11 = ((char *)v6 - (char *)CurrentThread - 800) / 96;
  if ( v2 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v11;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v11);
LABEL_20:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&NormalizationListLock, &v14);
  v7 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v7 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v12);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
