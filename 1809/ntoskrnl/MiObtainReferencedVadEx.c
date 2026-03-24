/*
 * XREFs of MiObtainReferencedVadEx @ 0x1400747E0
 * Callers:
 *     MiProbeAndLockPrepare @ 0x140040790 (MiProbeAndLockPrepare.c)
 *     MiGetWorkingSetInfoList @ 0x1400965F0 (MiGetWorkingSetInfoList.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140139814 (MiUnmapLockedPagesInUserSpace.c)
 *     MmGetEnclaveModuleList @ 0x1402BEBC0 (MmGetEnclaveModuleList.c)
 *     MmDeleteTeb @ 0x1405DF66C (MmDeleteTeb.c)
 *     MiAllocateVirtualMemory @ 0x1405ED650 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1405EDFD0 (MmProtectVirtualMemory.c)
 *     NtResetWriteWatch @ 0x1405EE780 (NtResetWriteWatch.c)
 *     MmFreeVirtualMemory @ 0x1405EF4F0 (MmFreeVirtualMemory.c)
 *     MmSecureVirtualMemoryEx @ 0x1405F5CB8 (MmSecureVirtualMemoryEx.c)
 *     MiCfgMarkValidEntries @ 0x1405F631C (MiCfgMarkValidEntries.c)
 *     MiUnmapViewOfSection @ 0x1406171B0 (MiUnmapViewOfSection.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140618664 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MmRotatePhysicalView @ 0x14066B910 (MmRotatePhysicalView.c)
 *     MiReferenceCfgVad @ 0x14067AAE4 (MiReferenceCfgVad.c)
 *     MiCheckForUserStackOverflow @ 0x1406A3A0C (MiCheckForUserStackOverflow.c)
 *     MmFlushVirtualMemory @ 0x1406B6C1C (MmFlushVirtualMemory.c)
 *     MiProcessVaRangesInfoClass @ 0x1406BCC38 (MiProcessVaRangesInfoClass.c)
 *     MmStoreFreeVirtualMemory @ 0x1406E0D18 (MmStoreFreeVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x140704CA0 (NtAreMappedFilesTheSame.c)
 *     MmGetFileNameForAddress @ 0x14084BC50 (MmGetFileNameForAddress.c)
 *     MmSetGraphicsPtes @ 0x1408504B0 (MmSetGraphicsPtes.c)
 *     MiSetImageHotPatchAllowed @ 0x140857FC4 (MiSetImageHotPatchAllowed.c)
 *     MiHandleEnclaveFault @ 0x14085901C (MiHandleEnclaveFault.c)
 *     MiInitializeEnclave @ 0x14085A240 (MiInitializeEnclave.c)
 *     MmSelectVsmEnclaveByAddress @ 0x14085A82C (MmSelectVsmEnclaveByAddress.c)
 *     NtLoadEnclaveData @ 0x14085AFB0 (NtLoadEnclaveData.c)
 *     NtTerminateEnclave @ 0x14085B600 (NtTerminateEnclave.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiUnlockVadShared @ 0x14001AF48 (MiUnlockVadShared.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400531B0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVad @ 0x140074550 (MiUnlockAndDereferenceVad.c)
 *     MiUnlockAndDereferenceVadShared @ 0x1400754A0 (MiUnlockAndDereferenceVadShared.c)
 *     MiWaitForVadDeletion @ 0x1402CB150 (MiWaitForVadDeletion.c)
 */

__int64 __fastcall MiObtainReferencedVadEx(unsigned __int64 a1, char a2, int *a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // r15
  _KPROCESS *v8; // rdx
  __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  ULONG_PTR v11; // rcx
  int v12; // r14d
  __int64 v13; // rcx
  bool v14; // zf
  int v16; // edx
  int v17; // eax

  *a3 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx(Process + 872, 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 2u;
  v8 = KeGetCurrentThread()->ApcState.Process;
  v9 = v8[2].Affinity.Bitmap[5];
  if ( !v9 )
  {
LABEL_19:
    v16 = -1073741664;
    if ( (*(_DWORD *)(Process + 772) & 0x20) != 0 )
      v16 = -1073741558;
    goto LABEL_21;
  }
  v10 = a1 >> 12;
  if ( v10 < (*(unsigned int *)(v9 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32))
    || v10 > (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) )
  {
    v9 = v8[2].Affinity.Bitmap[4];
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
            v8[2].Affinity.Bitmap[5] = v9;
            goto LABEL_4;
          }
          v9 = *(_QWORD *)v9;
        }
        if ( !v9 )
          goto LABEL_19;
      }
    }
    goto LABEL_19;
  }
LABEL_4:
  if ( (a2 & 1) == 0 && (*(_DWORD *)(Process + 772) & 0x20) != 0 )
  {
    v16 = -1073741558;
LABEL_21:
    *a3 = v16;
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
    BYTE1(CurrentThread[1].Queue) |= 0x20u;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(v11, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 0x80u;
  }
  v14 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v14 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v13);
  if ( (*(_DWORD *)(v9 + 48) & 0x20000000) != 0 )
  {
    if ( v12 )
    {
      MiUnlockVadShared((__int64)CurrentThread, v9);
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(v9 + 40, 0LL);
      LOBYTE(CurrentThread[1].Queue) |= 0x80u;
    }
    MiWaitForVadDeletion(v9);
    MiUnlockAndDereferenceVad((char *)v9);
    v17 = -1073741558;
    if ( (*(_DWORD *)(Process + 772) & 0x20) == 0 )
      v17 = -1073741664;
    *a3 = v17;
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
