/*
 * XREFs of MiObtainReferencedVadEx @ 0x140050770
 * Callers:
 *     MiProbeAndLockPrepare @ 0x14008FB20 (MiProbeAndLockPrepare.c)
 *     MiGetWorkingSetInfoList @ 0x140101184 (MiGetWorkingSetInfoList.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x14015B1BC (MiUnmapLockedPagesInUserSpace.c)
 *     MmGetEnclaveModuleList @ 0x1402D55C0 (MmGetEnclaveModuleList.c)
 *     MiCfgMarkValidEntries @ 0x1405EC3AC (MiCfgMarkValidEntries.c)
 *     MiAllocateVirtualMemory @ 0x140603140 (MiAllocateVirtualMemory.c)
 *     NtResetWriteWatch @ 0x140603F30 (NtResetWriteWatch.c)
 *     MmProtectVirtualMemory @ 0x1406040D0 (MmProtectVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x140606BC0 (MmFreeVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14064BDA8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiUnmapViewOfSection @ 0x14064C640 (MiUnmapViewOfSection.c)
 *     MmDeleteTeb @ 0x140670684 (MmDeleteTeb.c)
 *     MmFlushVirtualMemory @ 0x14069E9FC (MmFlushVirtualMemory.c)
 *     MiReferenceCfgVad @ 0x1406BE04C (MiReferenceCfgVad.c)
 *     MmSecureVirtualMemoryEx @ 0x1406BEA30 (MmSecureVirtualMemoryEx.c)
 *     MmRotatePhysicalView @ 0x1406BFCA0 (MmRotatePhysicalView.c)
 *     MiCheckForUserStackOverflow @ 0x1406C7DD8 (MiCheckForUserStackOverflow.c)
 *     MiProcessVaRangesInfoClass @ 0x1406E0178 (MiProcessVaRangesInfoClass.c)
 *     MmStoreFreeVirtualMemory @ 0x140727EB4 (MmStoreFreeVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x14072B6B0 (NtAreMappedFilesTheSame.c)
 *     MmGetFileNameForAddress @ 0x140887150 (MmGetFileNameForAddress.c)
 *     MmSetGraphicsPtes @ 0x140889F60 (MmSetGraphicsPtes.c)
 *     MiSetImageHotPatchAllowed @ 0x140891BE0 (MiSetImageHotPatchAllowed.c)
 *     MiHandleEnclaveFault @ 0x140892F00 (MiHandleEnclaveFault.c)
 *     MiInitializeEnclave @ 0x140894190 (MiInitializeEnclave.c)
 *     MmSelectVsmEnclaveByAddress @ 0x140894F0C (MmSelectVsmEnclaveByAddress.c)
 *     NtLoadEnclaveData @ 0x1408956C0 (NtLoadEnclaveData.c)
 *     NtTerminateEnclave @ 0x140895DB0 (NtTerminateEnclave.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14003FCE0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVad @ 0x1400504B0 (MiUnlockAndDereferenceVad.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140053990 (MiUnlockAndDereferenceVadShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     MiUnlockVadShared @ 0x140114C44 (MiUnlockVadShared.c)
 *     MiWaitForVadDeletion @ 0x1402E5678 (MiWaitForVadDeletion.c)
 */

unsigned __int64 __fastcall MiObtainReferencedVadEx(unsigned __int64 a1, char a2, int *a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // rbp
  _KPROCESS *v8; // rdx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  ULONG_PTR v11; // rcx
  int v12; // r15d
  bool v13; // zf
  int v15; // eax
  int v16; // eax

  *a3 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx(Process + 880, 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 2u;
  v8 = KeGetCurrentThread()->ApcState.Process;
  v9 = v8[2].Affinity.Bitmap[9];
  if ( !v9 )
  {
LABEL_14:
    v15 = -1073741558;
    if ( (*(_DWORD *)(Process + 780) & 0x20) == 0 )
      v15 = -1073741664;
    goto LABEL_16;
  }
  v10 = a1 >> 12;
  if ( v10 < (*(unsigned int *)(v9 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32))
    || v10 > (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) )
  {
    v9 = v8[2].Affinity.Bitmap[8];
    if ( v9 )
    {
      while ( 1 )
      {
        if ( v10 > (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) )
        {
          v9 = *(_QWORD *)(v9 + 8);
        }
        else
        {
          if ( v10 >= (*(unsigned int *)(v9 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32)) )
          {
            v8[2].Affinity.Bitmap[9] = v9;
            goto LABEL_4;
          }
          v9 = *(_QWORD *)v9;
        }
        if ( !v9 )
          goto LABEL_14;
      }
    }
    goto LABEL_14;
  }
LABEL_4:
  if ( (a2 & 1) == 0 && (*(_DWORD *)(Process + 780) & 0x20) != 0 )
  {
    v15 = -1073741558;
LABEL_16:
    *a3 = v15;
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return 0LL;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v9 + 36));
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  --CurrentThread->SpecialApcDisable;
  v11 = v9 + 40;
  v12 = a2 & 2;
  if ( v12 )
  {
    ExAcquirePushLockSharedEx(v11, 0LL);
    BYTE1(CurrentThread[1].Queue) |= 0x40u;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(v11, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 0x80u;
  }
  v13 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v13 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( (*(_DWORD *)(v9 + 48) & 4) != 0 )
  {
    if ( v12 )
    {
      MiUnlockVadShared(CurrentThread, v9);
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(v9 + 40, 0LL);
      LOBYTE(CurrentThread[1].Queue) |= 0x80u;
    }
    MiWaitForVadDeletion(v9);
    MiUnlockAndDereferenceVad((char *)v9);
    v16 = -1073741558;
    if ( (*(_DWORD *)(Process + 780) & 0x20) == 0 )
      v16 = -1073741664;
    *a3 = v16;
  }
  else
  {
    if ( v10 >= (*(unsigned int *)(v9 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32))
      && v10 <= (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) )
    {
      return v9;
    }
    if ( v12 )
      MiUnlockAndDereferenceVadShared((PVOID)v9);
    else
      MiUnlockAndDereferenceVad((char *)v9);
    *a3 = -1073741664;
  }
  return 0LL;
}
