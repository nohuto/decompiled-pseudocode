/*
 * XREFs of MiLookupDataTableEntry @ 0x1400DA570
 * Callers:
 *     MiProbeLeafPteAccess @ 0x1400420D0 (MiProbeLeafPteAccess.c)
 *     MiRemoveWsle @ 0x14006A870 (MiRemoveWsle.c)
 *     MiRemoveWsleList @ 0x14007AF50 (MiRemoveWsleList.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x140186720 (MmVerifyCallbackFunctionCheckFlags.c)
 *     MiShowBadMapper @ 0x1402A5944 (MiShowBadMapper.c)
 *     MmReplaceImportEntry @ 0x1402AB0CC (MmReplaceImportEntry.c)
 *     MmMarkImageForHiberPhase @ 0x14057C5C8 (MmMarkImageForHiberPhase.c)
 *     MmLockPagableDataSection @ 0x140651680 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x140651780 (MmChangeImageProtection.c)
 *     MmPageEntireDriver @ 0x140653990 (MmPageEntireDriver.c)
 *     MiImagePagable @ 0x140653BA0 (MiImagePagable.c)
 *     MmGetImageRetpolineCodePage @ 0x1406D05A0 (MmGetImageRetpolineCodePage.c)
 *     MmBackSystemImageWithPagefile @ 0x14070D30C (MmBackSystemImageWithPagefile.c)
 *     MmIsDriverVerifyingByAddress @ 0x14075C180 (MmIsDriverVerifyingByAddress.c)
 *     MmAddVerifierSpecialThunks @ 0x14084DA60 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x14084DB60 (MmAddVerifierThunks.c)
 *     MmGetSectionRange @ 0x14084EDC8 (MmGetSectionRange.c)
 *     MmDiscardDriverSection @ 0x1409F7A2C (MmDiscardDriverSection.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     MmLockLoadedModuleListShared @ 0x14009B82C (MmLockLoadedModuleListShared.c)
 *     MmUnlockLoadedModuleListShared @ 0x1400DA668 (MmUnlockLoadedModuleListShared.c)
 */

_QWORD *__fastcall MiLookupDataTableEntry(unsigned __int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v5; // rax
  unsigned __int64 v6; // r8
  _QWORD *v7; // rbx
  unsigned __int8 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 17;
  CurrentThread = 0LL;
  if ( a2 == 2 )
  {
    MmLockLoadedModuleListShared(&v9);
  }
  else if ( a2 == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  }
  v5 = (_QWORD *)BugCheckParameter3;
  if ( BugCheckParameter3 )
  {
    do
    {
      v6 = *(v5 - 23) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( a1 <= *((unsigned int *)v5 - 42) + v6 - 1 )
      {
        if ( a1 >= v6 )
          break;
        v5 = (_QWORD *)*v5;
      }
      else
      {
        v5 = (_QWORD *)v5[1];
      }
    }
    while ( v5 );
  }
  v7 = v5 - 29;
  if ( !v5 )
    v7 = 0LL;
  if ( a2 == 2 )
  {
    MmUnlockLoadedModuleListShared(v9);
  }
  else if ( a2 == 1 )
  {
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return v7;
}
