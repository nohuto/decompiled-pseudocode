/*
 * XREFs of MiLookupDataTableEntry @ 0x1400F78E8
 * Callers:
 *     MiRemoveWsleList @ 0x140023730 (MiRemoveWsleList.c)
 *     MiRemoveWsle @ 0x14004C540 (MiRemoveWsle.c)
 *     MiProbeLeafPteAccess @ 0x14008F7B0 (MiProbeLeafPteAccess.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x14018F410 (MmVerifyCallbackFunctionCheckFlags.c)
 *     MiShowBadMapper @ 0x1402BCDD8 (MiShowBadMapper.c)
 *     MmReplaceImportEntry @ 0x1402C3DDC (MmReplaceImportEntry.c)
 *     MmMarkImageForHiberPhase @ 0x1405AC5AC (MmMarkImageForHiberPhase.c)
 *     MiImagePagable @ 0x1406A5DA8 (MiImagePagable.c)
 *     MmPageEntireDriver @ 0x1406A5E10 (MmPageEntireDriver.c)
 *     MmLockPagableDataSection @ 0x1406A5EC0 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x1406A5FC0 (MmChangeImageProtection.c)
 *     MmBackSystemImageWithPagefile @ 0x14073978C (MmBackSystemImageWithPagefile.c)
 *     MmGetImageRetpolineCodePage @ 0x14077F7C0 (MmGetImageRetpolineCodePage.c)
 *     MmIsDriverVerifyingByAddress @ 0x140782D40 (MmIsDriverVerifyingByAddress.c)
 *     MmAddVerifierSpecialThunks @ 0x140889410 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x140889510 (MmAddVerifierThunks.c)
 *     MmGetSectionRange @ 0x14088AE9C (MmGetSectionRange.c)
 *     MmDiscardDriverSection @ 0x140A3D50C (MmDiscardDriverSection.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     MmLockLoadedModuleListShared @ 0x14005F070 (MmLockLoadedModuleListShared.c)
 *     MmUnlockLoadedModuleListShared @ 0x1400F79C0 (MmUnlockLoadedModuleListShared.c)
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
