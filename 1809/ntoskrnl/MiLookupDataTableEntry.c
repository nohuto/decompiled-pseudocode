/*
 * XREFs of MiLookupDataTableEntry @ 0x1400DA610
 * Callers:
 *     MiProbeLeafPteAccess @ 0x1400420D0 (MiProbeLeafPteAccess.c)
 *     MiRemoveWsle @ 0x14006A860 (MiRemoveWsle.c)
 *     MiRemoveWsleList @ 0x14007AF40 (MiRemoveWsleList.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x140186880 (MmVerifyCallbackFunctionCheckFlags.c)
 *     MiShowBadMapper @ 0x1402A5C34 (MiShowBadMapper.c)
 *     MmReplaceImportEntry @ 0x1402AB3BC (MmReplaceImportEntry.c)
 *     MmMarkImageForHiberPhase @ 0x14057D5C8 (MmMarkImageForHiberPhase.c)
 *     MmLockPagableDataSection @ 0x140652820 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x140652920 (MmChangeImageProtection.c)
 *     MmPageEntireDriver @ 0x140654B30 (MmPageEntireDriver.c)
 *     MiImagePagable @ 0x140654D40 (MiImagePagable.c)
 *     MmGetImageRetpolineCodePage @ 0x1406D1820 (MmGetImageRetpolineCodePage.c)
 *     MmBackSystemImageWithPagefile @ 0x14070E58C (MmBackSystemImageWithPagefile.c)
 *     MmIsDriverVerifyingByAddress @ 0x14075D350 (MmIsDriverVerifyingByAddress.c)
 *     MmAddVerifierSpecialThunks @ 0x14084ECA0 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x14084EDA0 (MmAddVerifierThunks.c)
 *     MmGetSectionRange @ 0x140850008 (MmGetSectionRange.c)
 *     MmDiscardDriverSection @ 0x1409F8A3C (MmDiscardDriverSection.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     MmLockLoadedModuleListShared @ 0x14009B76C (MmLockLoadedModuleListShared.c)
 *     MmUnlockLoadedModuleListShared @ 0x1400DA708 (MmUnlockLoadedModuleListShared.c)
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
