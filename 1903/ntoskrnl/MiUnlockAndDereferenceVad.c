/*
 * XREFs of MiUnlockAndDereferenceVad @ 0x1400504B0
 * Callers:
 *     MiObtainReferencedVadEx @ 0x140050770 (MiObtainReferencedVadEx.c)
 *     NtGetWriteWatch @ 0x14005C1F0 (NtGetWriteWatch.c)
 *     MiObtainReferencedSecureVad @ 0x140073B10 (MiObtainReferencedSecureVad.c)
 *     MiProbeAndLockPages @ 0x14008E9A0 (MiProbeAndLockPages.c)
 *     MiProbeAndLockPrepare @ 0x14008FB20 (MiProbeAndLockPrepare.c)
 *     MiDeprioritizeVad @ 0x14013B5DC (MiDeprioritizeVad.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x14015B1BC (MiUnmapLockedPagesInUserSpace.c)
 *     MiScrubProcessLargePages @ 0x1402ECF14 (MiScrubProcessLargePages.c)
 *     MiCfgMarkValidEntries @ 0x1405EC3AC (MiCfgMarkValidEntries.c)
 *     MiAllocateVirtualMemory @ 0x140603140 (MiAllocateVirtualMemory.c)
 *     NtResetWriteWatch @ 0x140603F30 (NtResetWriteWatch.c)
 *     MmProtectVirtualMemory @ 0x1406040D0 (MmProtectVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x140604960 (MmQueryVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x140606BC0 (MmFreeVirtualMemory.c)
 *     MiReserveUserMemory @ 0x140607B60 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x140609300 (MiMapViewOfDataSection.c)
 *     MmUnsecureVirtualMemory @ 0x14060AA10 (MmUnsecureVirtualMemory.c)
 *     MiCleanVad @ 0x14060AA70 (MiCleanVad.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x14060E890 (MiAllocateFromSubAllocatedRegion.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14064BDA8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiUnmapViewOfSection @ 0x14064C640 (MiUnmapViewOfSection.c)
 *     MiFreeToSubAllocatedRegion @ 0x140670744 (MiFreeToSubAllocatedRegion.c)
 *     MiCfgInitializeProcess @ 0x14067980C (MiCfgInitializeProcess.c)
 *     MiLockVadRange @ 0x140694EA0 (MiLockVadRange.c)
 *     MmSecureVirtualMemoryEx @ 0x1406BEA30 (MmSecureVirtualMemoryEx.c)
 *     MmRotatePhysicalView @ 0x1406BFCA0 (MmRotatePhysicalView.c)
 *     MiProcessVaRangesInfoClass @ 0x1406E0178 (MiProcessVaRangesInfoClass.c)
 *     MmStoreAllocateVirtualMemory @ 0x140718E68 (MmStoreAllocateVirtualMemory.c)
 *     MmSetGraphicsPtes @ 0x140889F60 (MmSetGraphicsPtes.c)
 *     MiPerformImageHotPatch @ 0x1408905D8 (MiPerformImageHotPatch.c)
 *     MiSetImageHotPatchAllowed @ 0x140891BE0 (MiSetImageHotPatchAllowed.c)
 *     MiCreateEnclave @ 0x1408939D0 (MiCreateEnclave.c)
 *     MiInitializeEnclave @ 0x140894190 (MiInitializeEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140894788 (MiLoadSectionIntoVsmEnclave.c)
 *     MmSelectVsmEnclaveByAddress @ 0x140894F0C (MmSelectVsmEnclaveByAddress.c)
 *     NtLoadEnclaveData @ 0x1408956C0 (NtLoadEnclaveData.c)
 *     NtTerminateEnclave @ 0x140895DB0 (NtTerminateEnclave.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceVad(char *P)
{
  BOOL v2; // r15d
  struct _KTHREAD *CurrentThread; // rsi
  struct _KTHREAD *v4; // rbx
  ULONG_PTR SessionId; // r9
  unsigned __int8 v6; // r13
  unsigned int v7; // edx
  bool v8; // zf
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  _KLOCK_ENTRY *v12; // rdi
  __int64 v13; // rdx
  int v14; // [rsp+70h] [rbp+8h] BYREF
  int v15; // [rsp+78h] [rbp+10h]

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)P + 9, 0xFFFFFFFF) == 1 && (*((_DWORD *)P + 12) & 4) != 0;
  CurrentThread = KeGetCurrentThread();
  LOBYTE(CurrentThread[1].Queue) &= ~0x80u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(P + 40);
  v14 = 0;
  v4 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)(P + 40)) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)v4->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v4->SpecialApcDisable;
  v6 = ++v4->AbAllocationRegionCount;
  v7 = ((char)v4->AbEntrySummary | (char)v4->AbOrphanedEntrySummary) ^ 0x3F;
  v8 = !_BitScanReverse((unsigned int *)&v9, v7);
  v15 = v9;
  if ( v8 )
    goto LABEL_30;
  while ( 1 )
  {
    v10 = 1 << v9;
    v11 = v9;
    v12 = &v4->LockEntries[v11];
    v7 &= ~v10;
    if ( (v12->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v12->LockState.0 & 1) == 0
      && (*(_QWORD *)&v12->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)(P + 40) & 0x7FFFFFFFFFFFFFFCLL)
      && v12->LockState.SessionId == (_DWORD)SessionId )
    {
      v12->AcquiredByte &= ~1u;
      if ( v12->LockState.0 )
        break;
    }
    v8 = !_BitScanReverse((unsigned int *)&v9, v7);
    v15 = v9;
    if ( v8 )
      goto LABEL_30;
  }
  if ( !v12 )
  {
LABEL_30:
    if ( (*((_DWORD *)&v4->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v4, (ULONG_PTR)(P + 40), SessionId, 0LL);
  }
  else
  {
    v12->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v12->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v4->LockEntries[v11].TreeNode);
    v14 = v12->BoostBitmap.AllFields & 0x1FFFF;
    v12->BoostBitmap.AllFields &= 0xFFFE0000;
    v12->ThreadLocalFlags &= ~1u;
    v12->LockState.0 = 0LL;
    v13 = ((char *)v12 - (char *)v4 - 800) / 96;
    if ( v6 == 1 )
      v4->AbEntrySummary |= 1 << v13;
    else
      _InterlockedOr8((volatile signed __int8 *)&v4->AbOrphanedEntrySummary, 1 << v13);
  }
  --v4->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v4, (__int64)(P + 40), &v14);
  v8 = v4->SpecialApcDisable++ == -1;
  if ( v8 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v4->ApcState.ApcListHead[0].Flink != &v4->152 )
    KiCheckForKernelApcDelivery();
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v2 )
    ExFreePoolWithTag(P, 0);
}
