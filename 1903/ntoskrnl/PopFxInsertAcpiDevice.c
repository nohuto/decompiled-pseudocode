/*
 * XREFs of PopFxInsertAcpiDevice @ 0x1402F34F8
 * Callers:
 *     PopFxAcpiRegisterDevice @ 0x140304C6C (PopFxAcpiRegisterDevice.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

_QWORD *__fastcall PopFxInsertAcpiDevice(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  struct _KTHREAD *v7; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v9; // si
  unsigned int v10; // r8d
  int v11; // eax
  __int64 v12; // rcx
  _KLOCK_ENTRY *v13; // rdi
  bool v14; // zf
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v21; // [rsp+58h] [rbp+10h] BYREF

  v21 = a2;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  v5 = (_QWORD *)qword_140444338;
  v6 = (_QWORD *)(a3 + 200);
  if ( *(__int64 **)qword_140444338 != &PopFxAcpiDeviceList )
    __fastfail(3u);
  v6[1] = qword_140444338;
  *v6 = &PopFxAcpiDeviceList;
  *v5 = v6;
  qword_140444338 = (__int64)v6;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxDeviceListLock);
  LODWORD(v21) = 0;
  v7 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopFxDeviceListLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v7->ApcState.Process);
  else
    SessionId = -1;
  --v7->SpecialApcDisable;
  v9 = ++v7->AbAllocationRegionCount;
  v10 = ((char)v7->AbEntrySummary | (char)v7->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v14 = !_BitScanReverse((unsigned int *)&v15, v10);
    if ( v14 )
      goto LABEL_15;
    v11 = 1 << v15;
    v12 = v15;
    v13 = &v7->LockEntries[v12];
    v10 &= ~v11;
    if ( (v13->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v13->LockState.0 & 1) == 0
      && (*(_QWORD *)&v13->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopFxDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
      && v13->LockState.SessionId == SessionId )
    {
      v13->AcquiredByte &= ~1u;
      if ( v13->LockState.0 )
        break;
    }
  }
  if ( !v13 )
  {
LABEL_15:
    if ( (*((_DWORD *)&v7->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v7, (ULONG_PTR)&PopFxDeviceListLock, SessionId, 0LL);
    goto LABEL_22;
  }
  v13->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v13->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v7->LockEntries[v12].TreeNode);
  v16 = v13->BoostBitmap.AllFields & 0x1FFFF;
  v17 = v13->BoostBitmap.AllFields & 0xFFFE0000;
  v13->ThreadLocalFlags &= ~1u;
  LODWORD(v21) = v16;
  v13->BoostBitmap.AllFields = v17;
  v13->LockState.0 = 0LL;
  v18 = ((char *)v13 - (char *)v7 - 800) / 96;
  if ( v9 == 1 )
    v7->AbEntrySummary |= 1 << v18;
  else
    _InterlockedOr8((volatile signed __int8 *)&v7->AbOrphanedEntrySummary, 1 << v18);
LABEL_22:
  --v7->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v7, (__int64)&PopFxDeviceListLock, &v21);
  v14 = v7->SpecialApcDisable++ == -1;
  if ( v14 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
    KiCheckForKernelApcDelivery(v19);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
