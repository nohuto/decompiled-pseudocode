/*
 * XREFs of ExSvmBeginDeviceReset @ 0x14033CC30
 * Callers:
 *     <none>
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400EF920 (ExfAcquirePushLockExclusiveEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401C0674 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExSvmBeginDeviceReset(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r15
  struct _KTHREAD *v5; // rbx
  unsigned __int8 AbEntrySummary; // cl
  unsigned int v7; // ebp
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v9; // rax
  __int64 v10; // rsi
  int SessionId; // eax
  __int64 v12; // rcx
  bool v13; // zf
  __int64 *v15; // rax
  __int64 *v16; // rcx
  unsigned int v17; // r14d
  struct _KTHREAD *v18; // rbx
  unsigned __int8 v19; // r12
  unsigned int v20; // edx
  int v21; // eax
  __int64 v22; // rcx
  _KLOCK_ENTRY *v23; // rsi
  __int64 v24; // rcx
  int v25; // eax
  unsigned int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v30; // [rsp+80h] [rbp+18h] BYREF
  int v31; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = KeGetCurrentThread();
  v31 = 0;
  --v5->SpecialApcDisable;
  if ( ++v5->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v5, (ULONG_PTR)&ExpSvmDeviceListLock, KeGetCurrentIrql(), 0LL);
  AbEntrySummary = v5->AbEntrySummary;
  v7 = -1;
  if ( !AbEntrySummary )
  {
    if ( !v5->AbOrphanedEntrySummary )
    {
      v10 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion((__int64)v5, (__int64)&ExpSvmDeviceListLock);
      goto LABEL_7;
    }
    AbOrphanedEntrySummary = v5->AbOrphanedEntrySummary;
    v5->AbOrphanedEntrySummary = 0;
    AbEntrySummary = AbOrphanedEntrySummary | v5->AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v9, AbEntrySummary);
  v5->AbEntrySummary = AbEntrySummary & ~(1 << v9);
  v10 = (__int64)&v5->LockEntries[v9];
  if ( v10 )
  {
    if ( (unsigned __int64)&ExpSvmDeviceListLock >= 0xFFFF800000000000uLL
      && byte_140467140[(((unsigned __int64)&ExpSvmDeviceListLock >> 39) & 0x1FF) - 256] == 1 )
    {
      SessionId = MmGetSessionIdEx((__int64)v5->ApcState.Process);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v10 + 40) = SessionId;
    *(_QWORD *)(v10 + 32) = (unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_15;
  }
LABEL_7:
  _interlockedbittestandset((volatile signed __int32 *)&v5->116 + 1, 0x10u);
LABEL_15:
  --v5->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v5, (__int64)&ExpSvmDeviceListLock, &v31);
  v13 = v5->SpecialApcDisable++ == -1;
  if ( v13 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v5->ApcState.ApcListHead[0].Flink != &v5->152 )
    KiCheckForKernelApcDelivery(v12);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpSvmDeviceListLock, (_RTL_BALANCED_NODE *)v10, (ULONG_PTR)&ExpSvmDeviceListLock);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v15 = (__int64 *)ExpSvmDevices;
  if ( (__int64 *)ExpSvmDevices == &ExpSvmDevices )
  {
    v17 = -1073741810;
  }
  else
  {
    do
    {
      v16 = v15;
      if ( v15[2] == a1 )
        break;
      v15 = (__int64 *)*v15;
    }
    while ( v15 != &ExpSvmDevices );
    v17 = ((__int64 (__fastcall *)(__int64, __int64))HalIommuDispatch[17])(v16[14], a2);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpSvmDeviceListLock);
  v30 = 0;
  v18 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpSvmDeviceListLock) == 1 )
    v7 = MmGetSessionIdEx((__int64)v18->ApcState.Process);
  --v18->SpecialApcDisable;
  v19 = ++v18->AbAllocationRegionCount;
  v20 = ((char)v18->AbEntrySummary | (char)v18->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v13 = !_BitScanReverse((unsigned int *)&v24, v20);
    if ( v13 )
      goto LABEL_38;
    v21 = 1 << v24;
    v22 = v24;
    v23 = &v18->LockEntries[v22];
    v20 &= ~v21;
    if ( (v23->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v23->LockState.0 & 1) == 0
      && (*(_QWORD *)&v23->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
      && v23->LockState.SessionId == v7 )
    {
      v23->AcquiredByte &= ~1u;
      if ( v23->LockState.0 )
        break;
    }
  }
  if ( !v23 )
  {
LABEL_38:
    if ( (*((_DWORD *)&v18->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v18, (ULONG_PTR)&ExpSvmDeviceListLock, v7, 0LL);
    goto LABEL_45;
  }
  v23->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v23->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v18->LockEntries[v22].TreeNode);
  v25 = v23->BoostBitmap.AllFields & 0x1FFFF;
  v26 = v23->BoostBitmap.AllFields & 0xFFFE0000;
  v23->ThreadLocalFlags &= ~1u;
  v30 = v25;
  v23->BoostBitmap.AllFields = v26;
  v23->LockState.0 = 0LL;
  v27 = ((char *)v23 - (char *)v18 - 800) / 96;
  if ( v19 == 1 )
    v18->AbEntrySummary |= 1 << v27;
  else
    _InterlockedOr8((volatile signed __int8 *)&v18->AbOrphanedEntrySummary, 1 << v27);
LABEL_45:
  --v18->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v18, (__int64)&ExpSvmDeviceListLock, &v30);
  v13 = v18->SpecialApcDisable++ == -1;
  if ( v13 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
    KiCheckForKernelApcDelivery(v28);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v17;
}
