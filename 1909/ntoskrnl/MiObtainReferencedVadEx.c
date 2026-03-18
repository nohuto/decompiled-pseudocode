/*
 * XREFs of MiObtainReferencedVadEx @ 0x140050810
 * Callers:
 *     MiProbeAndLockPrepare @ 0x1400CD110 (MiProbeAndLockPrepare.c)
 *     MiGetWorkingSetInfoList @ 0x14011DB2C (MiGetWorkingSetInfoList.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x14015B85C (MiUnmapLockedPagesInUserSpace.c)
 *     MmGetEnclaveModuleList @ 0x1402D5320 (MmGetEnclaveModuleList.c)
 *     MiCfgMarkValidEntries @ 0x1405ECB7C (MiCfgMarkValidEntries.c)
 *     MiAllocateVirtualMemory @ 0x140604C50 (MiAllocateVirtualMemory.c)
 *     NtResetWriteWatch @ 0x140605A40 (NtResetWriteWatch.c)
 *     MmProtectVirtualMemory @ 0x140605BE0 (MmProtectVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x1406086D0 (MmFreeVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x14062450C (MmFlushVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14065FA38 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiUnmapViewOfSection @ 0x1406602D0 (MiUnmapViewOfSection.c)
 *     MmDeleteTeb @ 0x14067F450 (MmDeleteTeb.c)
 *     MmRotatePhysicalView @ 0x1406A4CA0 (MmRotatePhysicalView.c)
 *     MiReferenceCfgVad @ 0x1406BDAFC (MiReferenceCfgVad.c)
 *     MmSecureVirtualMemoryEx @ 0x1406BE4E0 (MmSecureVirtualMemoryEx.c)
 *     MiCheckForUserStackOverflow @ 0x1406C610C (MiCheckForUserStackOverflow.c)
 *     MiProcessVaRangesInfoClass @ 0x1406E18AC (MiProcessVaRangesInfoClass.c)
 *     MmStoreFreeVirtualMemory @ 0x140729224 (MmStoreFreeVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x14072D550 (NtAreMappedFilesTheSame.c)
 *     MmGetFileNameForAddress @ 0x14088697C (MmGetFileNameForAddress.c)
 *     MmSetGraphicsPtes @ 0x140889780 (MmSetGraphicsPtes.c)
 *     MiSetImageHotPatchAllowed @ 0x140891400 (MiSetImageHotPatchAllowed.c)
 *     MiHandleEnclaveFault @ 0x140892720 (MiHandleEnclaveFault.c)
 *     MiInitializeEnclave @ 0x1408939B0 (MiInitializeEnclave.c)
 *     MmSelectVsmEnclaveByAddress @ 0x14089472C (MmSelectVsmEnclaveByAddress.c)
 *     NtLoadEnclaveData @ 0x140894EE0 (NtLoadEnclaveData.c)
 *     NtTerminateEnclave @ 0x1408955D0 (NtTerminateEnclave.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14003FA20 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVad @ 0x140050550 (MiUnlockAndDereferenceVad.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140053A30 (MiUnlockAndDereferenceVadShared.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     MiUnlockVadShared @ 0x1401162B4 (MiUnlockVadShared.c)
 *     MiWaitForVadDeletion @ 0x1402E53D8 (MiWaitForVadDeletion.c)
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
  if ( v13 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
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
