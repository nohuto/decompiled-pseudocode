/*
 * XREFs of PsAdjustBasicEnclaveThreadList @ 0x140309A18
 * Callers:
 *     PsDispatchIumService @ 0x1403086B4 (PsDispatchIumService.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140029870 (RtlAvlRemoveNode.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     RtlAvlInsertNodeEx @ 0x140072C40 (RtlAvlInsertNodeEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiHotPatchImageTreeCompare @ 0x14088EAA4 (MiHotPatchImageTreeCompare.c)
 */

__int64 __fastcall PsAdjustBasicEnclaveThreadList(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // rbx
  _QWORD *PoolWithTag; // rax
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v10; // rbp
  bool v11; // zf
  unsigned __int64 *v12; // rdi
  bool v13; // r8
  unsigned __int64 v14; // rax
  int v15; // eax
  struct _KTHREAD *v16; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v18; // r14
  unsigned int v19; // r8d
  int v20; // eax
  __int64 v21; // rcx
  _KLOCK_ENTRY *v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // [rsp+70h] [rbp+18h] BYREF
  int v27; // [rsp+78h] [rbp+20h]

  v3 = 0LL;
  if ( a3 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x74457350u);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    *((_DWORD *)PoolWithTag + 9) = 0;
    PoolWithTag[3] = a2;
    *((_DWORD *)PoolWithTag + 8) = a3;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = a1 + 112;
  ExAcquirePushLockExclusiveEx(a1 + 112, 0LL);
  v11 = a3 == 0;
  v12 = *(unsigned __int64 **)(a1 + 104);
  if ( v11 )
  {
    while ( v12 )
    {
      v15 = MiHotPatchImageTreeCompare(a2, v12);
      if ( v15 >= 0 )
      {
        if ( v15 <= 0 )
          break;
        v12 = (unsigned __int64 *)v12[1];
      }
      else
      {
        v12 = (unsigned __int64 *)*v12;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)(a1 + 104), v12);
    goto LABEL_20;
  }
  v13 = 0;
  if ( !v12 )
    goto LABEL_19;
  while ( (int)MiHotPatchImageTreeCompare(a2, v12) >= 0 )
  {
    v14 = v12[1];
    if ( !v14 )
    {
      v13 = 1;
      goto LABEL_19;
    }
LABEL_17:
    v12 = (unsigned __int64 *)v14;
  }
  v14 = *v12;
  if ( *v12 )
    goto LABEL_17;
  v13 = 0;
LABEL_19:
  RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 104), (unsigned __int64)v12, v13, v3);
  v12 = 0LL;
LABEL_20:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
  v26 = 0;
  v16 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(a1 + 112) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v16->ApcState.Process);
  else
    SessionId = -1;
  --v16->SpecialApcDisable;
  v18 = ++v16->AbAllocationRegionCount;
  v19 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v11 = !_BitScanReverse((unsigned int *)&v23, v19);
    v27 = v23;
    if ( v11 )
      goto LABEL_32;
    v20 = 1 << v23;
    v21 = v23;
    v22 = &v16->LockEntries[v21];
    v19 &= ~v20;
    if ( (v22->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v22->LockState.0 & 1) == 0
      && (*(_QWORD *)&v22->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v10 & 0x7FFFFFFFFFFFFFFCLL)
      && v22->LockState.SessionId == SessionId )
    {
      v22->AcquiredByte &= ~1u;
      if ( v22->LockState.0 )
        break;
    }
  }
  if ( !v22 )
  {
LABEL_32:
    if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v16, v10, SessionId, 0LL);
    goto LABEL_39;
  }
  v22->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v22->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v16->LockEntries[v21].TreeNode);
  v26 = v22->BoostBitmap.AllFields & 0x1FFFF;
  v22->BoostBitmap.AllFields &= 0xFFFE0000;
  v22->ThreadLocalFlags &= ~1u;
  v22->LockState.0 = 0LL;
  v24 = ((char *)v22 - (char *)v16 - 800) / 96;
  if ( v18 == 1 )
    v16->AbEntrySummary |= 1 << v24;
  else
    _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v24);
LABEL_39:
  --v16->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v16, v10, &v26);
  v11 = v16->SpecialApcDisable++ == -1;
  if ( v11 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
    KiCheckForKernelApcDelivery(v25);
  KeLeaveCriticalRegion();
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return 0LL;
}
