/*
 * XREFs of PopFxPrepareDevicesForShutdown @ 0x1402F424C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     PopFxActivateDevicesForSx @ 0x14015E0F0 (PopFxActivateDevicesForSx.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

_QWORD *PopFxPrepareDevicesForShutdown()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v1; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v3; // si
  unsigned int v4; // r8d
  int v5; // eax
  __int64 v6; // rcx
  _KLOCK_ENTRY *v7; // rdi
  bool v8; // zf
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v15; // [rsp+50h] [rbp+8h] BYREF
  int v16; // [rsp+58h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  PopFxEnableShutdownActiveBias = 1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxDeviceListLock);
  v15 = 0;
  v1 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopFxDeviceListLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v1->ApcState.Process);
  else
    SessionId = -1;
  --v1->SpecialApcDisable;
  v3 = ++v1->AbAllocationRegionCount;
  v4 = ((char)v1->AbEntrySummary | (char)v1->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v8 = !_BitScanReverse((unsigned int *)&v9, v4);
    v16 = v9;
    if ( v8 )
      goto LABEL_13;
    v5 = 1 << v9;
    v6 = v9;
    v7 = &v1->LockEntries[v6];
    v4 &= ~v5;
    if ( (v7->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v7->LockState.0 & 1) == 0
      && (*(_QWORD *)&v7->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopFxDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
      && v7->LockState.SessionId == SessionId )
    {
      v7->AcquiredByte &= ~1u;
      if ( v7->LockState.0 )
        break;
    }
  }
  if ( !v7 )
  {
LABEL_13:
    if ( (*((_DWORD *)&v1->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v1, (ULONG_PTR)&PopFxDeviceListLock, SessionId, 0LL);
    goto LABEL_20;
  }
  v7->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v7->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v1->LockEntries[v6].TreeNode);
  v10 = v7->BoostBitmap.AllFields & 0x1FFFF;
  v11 = v7->BoostBitmap.AllFields & 0xFFFE0000;
  v7->ThreadLocalFlags &= ~1u;
  v15 = v10;
  v7->BoostBitmap.AllFields = v11;
  v7->LockState.0 = 0LL;
  v12 = ((char *)v7 - (char *)v1 - 800) / 96;
  if ( v3 == 1 )
    v1->AbEntrySummary |= 1 << v12;
  else
    _InterlockedOr8((volatile signed __int8 *)&v1->AbOrphanedEntrySummary, 1 << v12);
LABEL_20:
  --v1->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v1, (__int64)&PopFxDeviceListLock, &v15);
  v8 = v1->SpecialApcDisable++ == -1;
  if ( v8 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v1->ApcState.ApcListHead[0].Flink != &v1->152 )
    KiCheckForKernelApcDelivery(v13);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return PopFxActivateDevicesForSx(4u);
}
