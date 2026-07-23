/*
 * XREFs of ExpSaPageGroupFreeMemory @ 0x14016E774
 * Callers:
 *     ExpSaAllocatorFree @ 0x14016E380 (ExpSaAllocatorFree.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14009C990 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     RtlClearBitsEx @ 0x1400ACE50 (RtlClearBitsEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401BFAF4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

bool __fastcall ExpSaPageGroupFreeMemory(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  ULONG_PTR v3; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v5; // r12
  __int64 v8; // rax
  unsigned int v9; // r15d
  char v10; // cl
  __int64 v11; // rbp
  int SessionId; // eax
  __int64 v13; // rcx
  bool v14; // zf
  bool v15; // bp
  struct _KTHREAD *v16; // rbx
  unsigned __int8 v17; // r14
  unsigned int v18; // edx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  _KLOCK_ENTRY *v22; // rdi
  __int64 v23; // rdx
  $6EAC78A6FCFADE0A5FA44F358736B38F *v24; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v27; // [rsp+70h] [rbp+8h] BYREF
  int v28; // [rsp+88h] [rbp+20h] BYREF

  v28 = 0;
  v3 = a1 + 24;
  CurrentThread = KeGetCurrentThread();
  v5 = a3;
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, a1 + 24, KeGetCurrentIrql(), 0LL);
  LOBYTE(v8) = CurrentThread->AbEntrySummary;
  v9 = -1;
  if ( !(_BYTE)v8 )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v11 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, a1 + 24);
      goto LABEL_36;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    LOBYTE(v8) = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
  }
  v10 = v8;
  _BitScanForward((unsigned int *)&v8, (unsigned __int8)v8);
  CurrentThread->AbEntrySummary = v10 & ~(1 << v8);
  v11 = (__int64)&CurrentThread->LockEntries[v8];
  if ( v11 )
  {
    if ( v3 >= 0xFFFF800000000000uLL && byte_140467440[((v3 >> 39) & 0x1FF) - 256] == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v11 + 40) = SessionId;
    *(_QWORD *)(v11 + 32) = v3 & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_8;
  }
LABEL_36:
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
LABEL_8:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v3, &v28);
  v14 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v14 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v13);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v3, (_RTL_BALANCED_NODE *)v11, v3);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  RtlClearBitsEx(a1 + 48, (a2 >> 4) & 0x1FF, v5);
  *(_DWORD *)(a1 + 36) += v5;
  v15 = *(_DWORD *)(a1 + 36) == 512;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  v27 = 0;
  v16 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
    v9 = MmGetSessionIdEx((__int64)v16->ApcState.Process);
  --v16->SpecialApcDisable;
  v17 = ++v16->AbAllocationRegionCount;
  v18 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v14 = !_BitScanReverse((unsigned int *)&v19, v18);
    if ( v14 )
      break;
    v20 = 1 << v19;
    v21 = v19;
    v22 = &v16->LockEntries[v21];
    v18 &= ~v20;
    if ( (v22->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v22->LockState.0 & 1) == 0
      && (*(_QWORD *)&v22->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v3 & 0x7FFFFFFFFFFFFFFCLL)
      && v22->LockState.SessionId == v9 )
    {
      v22->AcquiredByte &= ~1u;
      if ( v22->LockState.0 )
      {
        if ( v22 )
        {
          v22->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v22->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v16->LockEntries[v21].TreeNode);
          v27 = v22->BoostBitmap.AllFields & 0x1FFFF;
          v22->BoostBitmap.AllFields &= 0xFFFE0000;
          v22->ThreadLocalFlags &= ~1u;
          v22->LockState.0 = 0LL;
          v23 = ((char *)v22 - (char *)v16 - 800) / 96;
          if ( v17 == 1 )
            v16->AbEntrySummary |= 1 << v23;
          else
            _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v23);
          goto LABEL_31;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v16, v3, v9, 0LL);
LABEL_31:
  --v16->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v16, v3, &v27);
  v14 = v16->SpecialApcDisable++ == -1;
  if ( v14 )
  {
    v24 = &v16->152;
    if ( ($6EAC78A6FCFADE0A5FA44F358736B38F *)v24->ApcState.ApcListHead[0].Flink != v24 )
      KiCheckForKernelApcDelivery((__int64)v24);
  }
  return v15;
}
