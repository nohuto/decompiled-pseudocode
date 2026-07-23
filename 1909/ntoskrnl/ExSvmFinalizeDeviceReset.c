/*
 * XREFs of ExSvmFinalizeDeviceReset @ 0x14033D060
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

__int64 __fastcall ExSvmFinalizeDeviceReset(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  struct _KTHREAD *v3; // rbx
  unsigned __int8 AbEntrySummary; // cl
  unsigned int v5; // ebp
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v7; // rax
  __int64 v8; // rsi
  int SessionId; // eax
  __int64 v10; // rcx
  bool v11; // zf
  __int64 *v13; // rax
  __int64 *v14; // rcx
  unsigned int v15; // r14d
  struct _KTHREAD *v16; // rbx
  unsigned __int8 v17; // r12
  unsigned int v18; // edx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  _KLOCK_ENTRY *v22; // rsi
  int v23; // eax
  unsigned int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v28; // [rsp+88h] [rbp+10h] BYREF
  int v29; // [rsp+90h] [rbp+18h] BYREF
  int v30; // [rsp+98h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = KeGetCurrentThread();
  v29 = 0;
  --v3->SpecialApcDisable;
  if ( ++v3->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v3, (ULONG_PTR)&ExpSvmDeviceListLock, KeGetCurrentIrql(), 0LL);
  AbEntrySummary = v3->AbEntrySummary;
  v5 = -1;
  if ( !AbEntrySummary )
  {
    if ( !v3->AbOrphanedEntrySummary )
    {
      v8 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion((__int64)v3, (__int64)&ExpSvmDeviceListLock);
      goto LABEL_7;
    }
    AbOrphanedEntrySummary = v3->AbOrphanedEntrySummary;
    v3->AbOrphanedEntrySummary = 0;
    AbEntrySummary = AbOrphanedEntrySummary | v3->AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v7, AbEntrySummary);
  v3->AbEntrySummary = AbEntrySummary & ~(1 << v7);
  v8 = (__int64)&v3->LockEntries[v7];
  if ( v8 )
  {
    if ( (unsigned __int64)&ExpSvmDeviceListLock >= 0xFFFF800000000000uLL
      && byte_140467140[(((unsigned __int64)&ExpSvmDeviceListLock >> 39) & 0x1FF) - 256] == 1 )
    {
      SessionId = MmGetSessionIdEx((__int64)v3->ApcState.Process);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v8 + 40) = SessionId;
    *(_QWORD *)(v8 + 32) = (unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_15;
  }
LABEL_7:
  _interlockedbittestandset((volatile signed __int32 *)&v3->116 + 1, 0x10u);
LABEL_15:
  --v3->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v3, (__int64)&ExpSvmDeviceListLock, &v29);
  v11 = v3->SpecialApcDisable++ == -1;
  if ( v11 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v3->ApcState.ApcListHead[0].Flink != &v3->152 )
    KiCheckForKernelApcDelivery(v10);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpSvmDeviceListLock, (_RTL_BALANCED_NODE *)v8, (ULONG_PTR)&ExpSvmDeviceListLock);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v13 = (__int64 *)ExpSvmDevices;
  if ( (__int64 *)ExpSvmDevices == &ExpSvmDevices )
  {
    v15 = -1073741810;
  }
  else
  {
    do
    {
      v14 = v13;
      if ( v13[2] == a1 )
        break;
      v13 = (__int64 *)*v13;
    }
    while ( v13 != &ExpSvmDevices );
    v15 = ((__int64 (__fastcall *)(__int64))HalIommuDispatch[18])(v14[14]);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpSvmDeviceListLock);
  v28 = 0;
  v16 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpSvmDeviceListLock) == 1 )
    v5 = MmGetSessionIdEx((__int64)v16->ApcState.Process);
  --v16->SpecialApcDisable;
  v17 = ++v16->AbAllocationRegionCount;
  v18 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
  v11 = !_BitScanReverse((unsigned int *)&v19, v18);
  v30 = v19;
  if ( v11 )
    goto LABEL_38;
  while ( 1 )
  {
    v20 = 1 << v19;
    v21 = v19;
    v22 = &v16->LockEntries[v21];
    v18 &= ~v20;
    if ( (v22->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v22->LockState.0 & 1) == 0
      && (*(_QWORD *)&v22->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
      && v22->LockState.SessionId == v5 )
    {
      v22->AcquiredByte &= ~1u;
      if ( v22->LockState.0 )
        break;
    }
    v11 = !_BitScanReverse((unsigned int *)&v19, v18);
    v30 = v19;
    if ( v11 )
      goto LABEL_38;
  }
  if ( !v22 )
  {
LABEL_38:
    if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v16, (ULONG_PTR)&ExpSvmDeviceListLock, v5, 0LL);
  }
  else
  {
    v22->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v22->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v16->LockEntries[v21].TreeNode);
    v23 = v22->BoostBitmap.AllFields & 0x1FFFF;
    v24 = v22->BoostBitmap.AllFields & 0xFFFE0000;
    v22->ThreadLocalFlags &= ~1u;
    v28 = v23;
    v22->BoostBitmap.AllFields = v24;
    v22->LockState.0 = 0LL;
    v25 = ((char *)v22 - (char *)v16 - 800) / 96;
    if ( v17 == 1 )
      v16->AbEntrySummary |= 1 << v25;
    else
      _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v25);
  }
  --v16->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v16, (__int64)&ExpSvmDeviceListLock, &v28);
  v11 = v16->SpecialApcDisable++ == -1;
  if ( v11 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
    KiCheckForKernelApcDelivery(v26);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v15;
}
