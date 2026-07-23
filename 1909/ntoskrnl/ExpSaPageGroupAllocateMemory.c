/*
 * XREFs of ExpSaPageGroupAllocateMemory @ 0x14016E0C4
 * Callers:
 *     ExpSaAllocatorAllocate @ 0x14016DC2C (ExpSaAllocatorAllocate.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     RtlFindClearBitsAndSetEx @ 0x140082540 (RtlFindClearBitsAndSetEx.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400EF920 (ExfAcquirePushLockExclusiveEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401C0674 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpSaPageGroupAllocateMemory(__int64 a1, unsigned int a2)
{
  unsigned __int64 v3; // r15
  ULONG_PTR v4; // rbp
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 AbEntrySummary; // cl
  unsigned int v7; // r12d
  __int64 v8; // rax
  __int64 v9; // r14
  int SessionId; // eax
  __int64 v11; // rcx
  bool v12; // zf
  unsigned __int64 ClearBitsAndSet; // rax
  __int64 v14; // rdi
  struct _KTHREAD *v15; // rsi
  unsigned __int8 v16; // r14
  unsigned int v17; // edx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  _KLOCK_ENTRY *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v26; // [rsp+80h] [rbp+8h] BYREF
  int v27; // [rsp+88h] [rbp+10h] BYREF
  int v28; // [rsp+90h] [rbp+18h]
  int v29; // [rsp+98h] [rbp+20h]

  v3 = a2;
  if ( *(_DWORD *)(a1 + 36) < a2 )
    return -1LL;
  v26 = 0;
  v4 = a1 + 24;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, a1 + 24, KeGetCurrentIrql(), 0LL);
  AbEntrySummary = CurrentThread->AbEntrySummary;
  v7 = -1;
  if ( !AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v9 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v4);
      goto LABEL_41;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    AbEntrySummary = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v8, AbEntrySummary);
  v29 = v8;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v8);
  v9 = (__int64)&CurrentThread->LockEntries[v8];
  if ( !v9 )
  {
LABEL_41:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_9;
  }
  if ( v4 >= 0xFFFF800000000000uLL && byte_140467140[((v4 >> 39) & 0x1FF) - 256] == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v9 + 40) = SessionId;
  *(_QWORD *)(v9 + 32) = v4 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_9:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v4, &v26);
  v12 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v12 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v11);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v4, (_RTL_BALANCED_NODE *)v9, v4);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( *(_DWORD *)(a1 + 36) < (unsigned int)v3
    || (ClearBitsAndSet = RtlFindClearBitsAndSetEx((unsigned __int64 *)(a1 + 48), v3, *(unsigned int *)(a1 + 44)),
        ClearBitsAndSet == -1LL) )
  {
    v14 = -1LL;
  }
  else
  {
    *(_DWORD *)(a1 + 36) -= v3;
    *(_DWORD *)(a1 + 44) = ClearBitsAndSet + v3;
    v14 = 16 * (ClearBitsAndSet & 0x1FF | ((*(_DWORD *)(a1 + 32) & 0x3FFFFu) << 9));
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  v27 = 0;
  v15 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v4) == 1 )
    v7 = MmGetSessionIdEx((__int64)v15->ApcState.Process);
  --v15->SpecialApcDisable;
  v16 = ++v15->AbAllocationRegionCount;
  v17 = ((char)v15->AbEntrySummary | (char)v15->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v12 = !_BitScanReverse((unsigned int *)&v18, v17);
    v28 = v18;
    if ( v12 )
      break;
    v19 = 1 << v18;
    v20 = v18;
    v21 = &v15->LockEntries[v20];
    v17 &= ~v19;
    if ( (v21->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v21->LockState.0 & 1) == 0
      && (*(_QWORD *)&v21->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
      && v21->LockState.SessionId == v7 )
    {
      v21->AcquiredByte &= ~1u;
      if ( v21->LockState.0 )
      {
        if ( v21 )
        {
          v21->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v21->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v15->LockEntries[v20].TreeNode);
          v27 = v21->BoostBitmap.AllFields & 0x1FFFF;
          v21->BoostBitmap.AllFields &= 0xFFFE0000;
          v21->ThreadLocalFlags &= ~1u;
          v21->LockState.0 = 0LL;
          v22 = ((char *)v21 - (char *)v15 - 800) / 96;
          if ( v16 == 1 )
            v15->AbEntrySummary |= 1 << v22;
          else
            _InterlockedOr8((volatile signed __int8 *)&v15->AbOrphanedEntrySummary, 1 << v22);
          goto LABEL_35;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v15->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v15, v4, v7, 0LL);
LABEL_35:
  --v15->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v15, v4, &v27);
  v12 = v15->SpecialApcDisable++ == -1;
  if ( v12 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
    KiCheckForKernelApcDelivery(v23);
  return v14;
}
