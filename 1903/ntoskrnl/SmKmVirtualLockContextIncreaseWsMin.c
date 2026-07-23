/*
 * XREFs of SmKmVirtualLockContextIncreaseWsMin @ 0x140325558
 * Callers:
 *     SmKmVirtualLockCtxLockMemory @ 0x140325818 (SmKmVirtualLockCtxLockMemory.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     MmQueryWorkingSetInformation @ 0x14011F1A0 (MmQueryWorkingSetInformation.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14012D4BC (MmAdjustWorkingSetSizeEx.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__int64 __fastcall SmKmVirtualLockContextIncreaseWsMin(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // r14d
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // rax
  struct _KTHREAD *v13; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v15; // r15
  unsigned int v16; // r8d
  int v17; // eax
  __int64 v18; // rcx
  _KLOCK_ENTRY *v19; // rdi
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v25; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v27; // [rsp+40h] [rbp-20h] BYREF
  __int64 v28; // [rsp+48h] [rbp-18h] BYREF
  __int64 v29; // [rsp+50h] [rbp-10h] BYREF
  __int64 v30; // [rsp+58h] [rbp-8h] BYREF
  char v31; // [rsp+A0h] [rbp+40h] BYREF
  int v32; // [rsp+B0h] [rbp+50h] BYREF
  int v33; // [rsp+B8h] [rbp+58h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  if ( a3 >= *(_QWORD *)(BugCheckParameter2 + 16) )
  {
    do
    {
      v7 = MmQueryWorkingSetInformation(&v30, &v29, &v28, &v26, &v27, &v25);
      if ( v7 < 0 )
        break;
      v8 = (a2 + 0x3FFFFF) & 0xFFFFFFFFFFC00000uLL;
      v9 = v8 + v26;
      if ( v8 + v26 <= v26 )
      {
        v7 = -1073741675;
        break;
      }
      v10 = v27;
      v26 += v8;
      if ( v9 > v27 )
        v10 = v9;
      v27 = v10;
      v11 = MmAdjustWorkingSetSizeEx(v9, v10, 0, 1, 0, &v31);
      v7 = v11;
      if ( v11 >= 0 )
      {
        v12 = *(_QWORD *)(BugCheckParameter2 + 16);
        if ( v12 + v8 > v12 )
          *(_QWORD *)(BugCheckParameter2 + 16) = v12 + v8;
        v7 = 0;
        break;
      }
    }
    while ( v11 == -1073741748 );
  }
  else
  {
    v7 = 1075380276;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  v32 = 0;
  v13 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v13->ApcState.Process);
  else
    SessionId = -1;
  --v13->SpecialApcDisable;
  v15 = ++v13->AbAllocationRegionCount;
  v16 = ((char)v13->AbEntrySummary | (char)v13->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v20 = !_BitScanReverse((unsigned int *)&v21, v16);
    v33 = v21;
    if ( v20 )
      goto LABEL_26;
    v17 = 1 << v21;
    v18 = v21;
    v19 = &v13->LockEntries[v18];
    v16 &= ~v17;
    if ( (v19->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v19->LockState.0 & 1) == 0
      && (*(_QWORD *)&v19->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
      && v19->LockState.SessionId == SessionId )
    {
      v19->AcquiredByte &= ~1u;
      if ( v19->LockState.0 )
        break;
    }
  }
  if ( !v19 )
  {
LABEL_26:
    if ( (*((_DWORD *)&v13->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v13, BugCheckParameter2, SessionId, 0LL);
    goto LABEL_33;
  }
  v19->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v19->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v13->LockEntries[v18].TreeNode);
  v32 = v19->BoostBitmap.AllFields & 0x1FFFF;
  v19->BoostBitmap.AllFields &= 0xFFFE0000;
  v19->ThreadLocalFlags &= ~1u;
  v19->LockState.0 = 0LL;
  v22 = ((char *)v19 - (char *)v13 - 800) / 96;
  if ( v15 == 1 )
    v13->AbEntrySummary |= 1 << v22;
  else
    _InterlockedOr8((volatile signed __int8 *)&v13->AbOrphanedEntrySummary, 1 << v22);
LABEL_33:
  --v13->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v13, BugCheckParameter2, &v32);
  v20 = v13->SpecialApcDisable++ == -1;
  if ( v20 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
    KiCheckForKernelApcDelivery(v23);
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
