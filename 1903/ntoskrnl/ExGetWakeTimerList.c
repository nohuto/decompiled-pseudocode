/*
 * XREFs of ExGetWakeTimerList @ 0x14033B5D0
 * Callers:
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     ExFreeHeapPool @ 0x140064DB0 (ExFreeHeapPool.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14009C990 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400BEF80 (ExAllocatePoolWithQuotaTag.c)
 *     PoStoreDiagnosticContext @ 0x140167C04 (PoStoreDiagnosticContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401BFAF4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KeQueryTimerDueTime @ 0x1402A6FE8 (KeQueryTimerDueTime.c)
 */

__int64 __fastcall ExGetWakeTimerList(ULONG_PTR *a1, _DWORD *a2)
{
  __int64 TimerDueTime; // r13
  SIZE_T v3; // r15
  ULONG_PTR v4; // r12
  struct _KTHREAD *v5; // rbx
  __int64 v6; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  char v8; // dl
  __int64 v9; // rsi
  int SessionId; // eax
  bool v11; // zf
  __int64 *v13; // rbx
  __int64 v14; // rcx
  char *PoolWithQuotaTag; // rax
  int v16; // r14d
  char *v17; // rsi
  __int64 *v18; // r12
  unsigned __int64 v19; // rbx
  KIRQL v20; // al
  int v21; // ecx
  KIRQL v22; // al
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v24; // rcx
  __int64 v25; // r13
  __int64 *v26; // rsi
  struct _KTHREAD *v27; // rbx
  unsigned int v28; // r9d
  unsigned __int8 v29; // r13
  unsigned int v30; // edx
  int v31; // eax
  __int64 v32; // rcx
  _KLOCK_ENTRY *v33; // rsi
  __int64 v34; // rcx
  int v35; // eax
  unsigned int v36; // ecx
  __int64 v37; // rdx
  SIZE_T v39; // [rsp+30h] [rbp-48h] BYREF
  __int64 v40; // [rsp+38h] [rbp-40h]
  ULONG_PTR v41; // [rsp+40h] [rbp-38h]
  int v42; // [rsp+48h] [rbp-30h] BYREF
  int v43; // [rsp+4Ch] [rbp-2Ch]
  int v44; // [rsp+50h] [rbp-28h]
  int v45; // [rsp+54h] [rbp-24h]
  PKSPIN_LOCK SpinLock; // [rsp+58h] [rbp-20h]
  __int64 v47; // [rsp+60h] [rbp-18h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-10h]
  KIRQL v51; // [rsp+D0h] [rbp+58h]
  int v52; // [rsp+D8h] [rbp+60h] BYREF

  TimerDueTime = 0LL;
  v39 = 0LL;
  v3 = 0LL;
  v40 = 0LL;
  v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeGetCurrentThread();
  v42 = 0;
  --v5->SpecialApcDisable;
  if ( ++v5->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v5, (ULONG_PTR)&ExpWakeTimerLock, KeGetCurrentIrql(), 0LL);
  LOBYTE(v6) = v5->AbEntrySummary;
  if ( !(_BYTE)v6 )
  {
    if ( !v5->AbOrphanedEntrySummary )
    {
      v9 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion((__int64)v5, (__int64)&ExpWakeTimerLock);
      goto LABEL_7;
    }
    AbOrphanedEntrySummary = v5->AbOrphanedEntrySummary;
    v5->AbOrphanedEntrySummary = 0;
    LOBYTE(v6) = AbOrphanedEntrySummary | v5->AbEntrySummary;
  }
  v8 = v6;
  _BitScanForward((unsigned int *)&v6, (unsigned __int8)v6);
  v45 = v6;
  v5->AbEntrySummary = v8 & ~(1 << v6);
  v9 = (__int64)&v5->LockEntries[v6];
  if ( !v9 )
  {
LABEL_7:
    _interlockedbittestandset((volatile signed __int32 *)&v5->116 + 1, 0x10u);
    goto LABEL_15;
  }
  if ( (unsigned __int64)&ExpWakeTimerLock >= 0xFFFF800000000000uLL
    && byte_140467440[(((unsigned __int64)&ExpWakeTimerLock >> 39) & 0x1FF) - 256] == 1 )
  {
    SessionId = MmGetSessionIdEx((__int64)v5->ApcState.Process);
  }
  else
  {
    SessionId = -1;
  }
  *(_DWORD *)(v9 + 40) = SessionId;
  *(_QWORD *)(v9 + 32) = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
LABEL_15:
  --v5->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v5, (__int64)&ExpWakeTimerLock, &v42);
  v11 = v5->SpecialApcDisable++ == -1;
  if ( v11 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v5->ApcState.ApcListHead[0].Flink != &v5->152 )
    KiCheckForKernelApcDelivery(1LL);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, (_RTL_BALANCED_NODE *)v9, (ULONG_PTR)&ExpWakeTimerLock);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v13 = (__int64 *)ExpWakeTimerList;
  if ( (__int64 *)ExpWakeTimerList == &ExpWakeTimerList )
    goto LABEL_27;
  do
  {
    v14 = *(v13 - 1);
    if ( v14 )
    {
      v39 = 0LL;
      PoStoreDiagnosticContext(v14, 0LL, &v39);
      v3 = (v39 + 31 + v3) & 0xFFFFFFFFFFFFFFF8uLL;
      v40 = v3;
      if ( v3 > 0xFFFFFFFF )
      {
        v16 = -1073741789;
        goto LABEL_51;
      }
    }
    v13 = (__int64 *)*v13;
  }
  while ( v13 != &ExpWakeTimerList );
  if ( !v3 )
  {
LABEL_27:
    v3 = 64LL;
    v40 = 64LL;
  }
  PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v3, 0x734C6B57u);
  v41 = (ULONG_PTR)PoolWithQuotaTag;
  v4 = (ULONG_PTR)PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
  {
    v16 = -1073741670;
    goto LABEL_51;
  }
  v16 = 0;
  v17 = PoolWithQuotaTag;
  memset(PoolWithQuotaTag, 0, v3);
  v18 = (__int64 *)ExpWakeTimerList;
  v19 = 0LL;
  v39 = 0LL;
  while ( v18 != &ExpWakeTimerList )
  {
    if ( v3 < 0x40 )
      goto LABEL_55;
    SpinLock = (PKSPIN_LOCK)(v18 - 25);
    v20 = KeAcquireSpinLockRaiseToDpc(SpinLock);
    v21 = *((_DWORD *)v18 - 6);
    v51 = v20;
    v47 = *(v18 - 1);
    v43 = v21;
    if ( v47 )
      TimerDueTime = KeQueryTimerDueTime((__int64)(v18 - 33));
    else
      TimerDueTime = 0LL;
    KxReleaseSpinLock(SpinLock);
    if ( !KiIrqlFlags )
      goto LABEL_41;
    v22 = v51;
    if ( (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v51 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      v19 = v39;
LABEL_41:
      v22 = v51;
    }
    __writecr8(v22);
    if ( TimerDueTime )
    {
      v24 = v47;
      v25 = TimerDueTime - MEMORY[0xFFFFF78000000008];
      *((_DWORD *)v17 + 4) = v43;
      v39 = v3 - 24;
      *((_QWORD *)v17 + 1) = v25;
      TimerDueTime = 0LL;
      v16 = PoStoreDiagnosticContext(v24, (unsigned __int64 *)v17 + 3, &v39);
      if ( v16 < 0 )
        goto LABEL_50;
      v19 = (v39 + 31) & 0xFFFFFFFFFFFFFFF8uLL;
      v39 = v19;
      if ( v3 < v19 )
      {
LABEL_55:
        v16 = -1073741789;
        goto LABEL_50;
      }
      v3 -= v19;
      *(_QWORD *)v17 = v19;
      v17 += v19;
    }
    v18 = (__int64 *)*v18;
  }
  v26 = (__int64 *)&v17[-v19];
  *v26 = TimerDueTime;
  if ( !v19 )
    v26[1] = TimerDueTime;
LABEL_50:
  LODWORD(v3) = v40;
  v4 = v41;
LABEL_51:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
  v27 = KeGetCurrentThread();
  v52 = TimerDueTime;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpWakeTimerLock) == 1 )
    v28 = MmGetSessionIdEx((__int64)v27->ApcState.Process);
  else
    v28 = -1;
  --v27->SpecialApcDisable;
  v29 = ++v27->AbAllocationRegionCount;
  v30 = ((char)v27->AbEntrySummary | (char)v27->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v11 = !_BitScanReverse((unsigned int *)&v34, v30);
    v44 = v34;
    if ( v11 )
      goto LABEL_64;
    v31 = 1 << v34;
    v32 = v34;
    v33 = &v27->LockEntries[v32];
    v30 &= ~v31;
    if ( (v33->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v33->LockState.0 & 1) == 0
      && (*(_QWORD *)&v33->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL)
      && v33->LockState.SessionId == v28 )
    {
      v33->AcquiredByte &= ~1u;
      if ( v33->LockState.0 )
        break;
    }
  }
  if ( !v33 )
  {
LABEL_64:
    if ( (*((_DWORD *)&v27->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v27, (ULONG_PTR)&ExpWakeTimerLock, v28, 0LL);
    goto LABEL_71;
  }
  v33->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v33->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v27->LockEntries[v32].TreeNode);
  v35 = v33->BoostBitmap.AllFields & 0x1FFFF;
  v36 = v33->BoostBitmap.AllFields & 0xFFFE0000;
  v33->ThreadLocalFlags &= ~1u;
  v52 = v35;
  v33->BoostBitmap.AllFields = v36;
  v33->LockState.0 = 0LL;
  v37 = ((char *)v33 - (char *)v27 - 800) / 96;
  if ( v29 == 1 )
    v27->AbEntrySummary |= 1 << v37;
  else
    _InterlockedOr8((volatile signed __int8 *)&v27->AbOrphanedEntrySummary, 1 << v37);
LABEL_71:
  --v27->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v27, (__int64)&ExpWakeTimerLock, &v52);
  v11 = v27->SpecialApcDisable++ == -1;
  if ( v11 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v27->ApcState.ApcListHead[0].Flink != &v27->152 )
    KiCheckForKernelApcDelivery(1LL);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v16 >= 0 )
  {
    *a1 = v4;
    *a2 = v3;
  }
  else if ( v4 )
  {
    ExFreeHeapPool(v4);
  }
  return (unsigned int)v16;
}
