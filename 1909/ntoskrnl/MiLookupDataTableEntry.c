/*
 * XREFs of MiLookupDataTableEntry @ 0x1400FB388
 * Callers:
 *     MiRemoveWsleList @ 0x140023B20 (MiRemoveWsleList.c)
 *     MiRemoveWsle @ 0x14004C5E0 (MiRemoveWsle.c)
 *     MiProbeLeafPteAccess @ 0x1400CCDA0 (MiProbeLeafPteAccess.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x14018A350 (MmVerifyCallbackFunctionCheckFlags.c)
 *     MiShowBadMapper @ 0x1402BCB38 (MiShowBadMapper.c)
 *     MmReplaceImportEntry @ 0x1402C3B3C (MmReplaceImportEntry.c)
 *     MmMarkImageForHiberPhase @ 0x1405AC58C (MmMarkImageForHiberPhase.c)
 *     MiImagePagable @ 0x1406A5638 (MiImagePagable.c)
 *     MmPageEntireDriver @ 0x1406A56A0 (MmPageEntireDriver.c)
 *     MmLockPagableDataSection @ 0x1406A5750 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x1406A5850 (MmChangeImageProtection.c)
 *     MmBackSystemImageWithPagefile @ 0x14073BA1C (MmBackSystemImageWithPagefile.c)
 *     MmGetImageRetpolineCodePage @ 0x1407821E0 (MmGetImageRetpolineCodePage.c)
 *     MmIsDriverVerifyingByAddress @ 0x140785010 (MmIsDriverVerifyingByAddress.c)
 *     MmAddVerifierSpecialThunks @ 0x140888C30 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x140888D30 (MmAddVerifierThunks.c)
 *     MmGetSectionRange @ 0x14088A6BC (MmGetSectionRange.c)
 *     MmDiscardDriverSection @ 0x140A3D2DC (MmDiscardDriverSection.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     MmLockLoadedModuleListShared @ 0x14005F110 (MmLockLoadedModuleListShared.c)
 *     MmUnlockLoadedModuleListShared @ 0x1400FB460 (MmUnlockLoadedModuleListShared.c)
 */

__int64 __fastcall MiLookupDataTableEntry(unsigned __int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v3; // edi
  unsigned __int64 v4; // rbx
  _QWORD *v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rbx
  unsigned __int8 v9; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = 0LL;
  v9 = 17;
  v3 = a2;
  v4 = a1;
  if ( (_DWORD)a2 == 2 )
  {
    MmLockLoadedModuleListShared(&v9, a2);
  }
  else if ( (_DWORD)a2 == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  }
  v5 = (_QWORD *)BugCheckParameter3;
  while ( v5 )
  {
    v6 = *(v5 - 23);
    a1 = v6 + (unsigned int)(*((_DWORD *)v5 - 42) - 1);
    if ( v4 > a1 )
    {
      v5 = (_QWORD *)v5[1];
    }
    else
    {
      if ( v4 >= v6 )
        break;
      v5 = (_QWORD *)*v5;
    }
  }
  v7 = (unsigned __int64)(v5 - 29) & -(__int64)(v5 != 0LL);
  if ( v3 == 2 )
  {
    LOBYTE(a1) = v9;
    MmUnlockLoadedModuleListShared(a1);
  }
  else if ( v3 == 1 )
  {
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return v7;
}
