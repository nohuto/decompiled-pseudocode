/*
 * XREFs of MiGetSessionVm @ 0x1400E943C
 * Callers:
 *     MmProtectPool @ 0x14000E16C (MmProtectPool.c)
 *     MiEmptyAccessLogs @ 0x140010D20 (MiEmptyAccessLogs.c)
 *     MiRemoveFromSystemSpace @ 0x140026F90 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x1400273C0 (MiInsertInSystemSpace.c)
 *     MiReturnSystemVa @ 0x14002840C (MiReturnSystemVa.c)
 *     MiProbeAndLockPrepare @ 0x140040790 (MiProbeAndLockPrepare.c)
 *     MiSetSystemCodeProtection @ 0x1400862E0 (MiSetSystemCodeProtection.c)
 *     MiLockCode @ 0x1400975A0 (MiLockCode.c)
 *     MiCopyOnWrite @ 0x1400B45C0 (MiCopyOnWrite.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DB3F0 (MiMakeDriverPagesPrivate.c)
 *     MiInitializeColorBaseSession @ 0x1400E76D0 (MiInitializeColorBaseSession.c)
 *     MiSystemFault @ 0x1400E88E0 (MiSystemFault.c)
 *     MiLockStealSystemVm @ 0x1400E9958 (MiLockStealSystemVm.c)
 *     MiTranslatePageForCopy @ 0x1400E9C10 (MiTranslatePageForCopy.c)
 *     MmCopyMemory @ 0x1400EA850 (MmCopyMemory.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB3EC (MiTrimSharedPageFromViews.c)
 *     MiSessionRemoveImage @ 0x1401580E0 (MiSessionRemoveImage.c)
 *     MiDeleteSessionPdes @ 0x140158D40 (MiDeleteSessionPdes.c)
 *     MiFreePagedPoolPages @ 0x140161A30 (MiFreePagedPoolPages.c)
 *     MiCountSystemImageCommitment @ 0x14017341C (MiCountSystemImageCommitment.c)
 *     MiSessionInsertImage @ 0x14017600C (MiSessionInsertImage.c)
 *     MiExceptionForMappedVa @ 0x1402A577C (MiExceptionForMappedVa.c)
 *     MmReplaceImportEntry @ 0x1402AB0CC (MmReplaceImportEntry.c)
 *     MiDeleteSessionPoolRange @ 0x1402AC124 (MiDeleteSessionPoolRange.c)
 *     MmAllocateSpecialPool @ 0x1402ACA64 (MmAllocateSpecialPool.c)
 *     MmFreeSpecialPool @ 0x1402AD078 (MmFreeSpecialPool.c)
 *     MiTrimAllSystemPagableMemory @ 0x1402B3A90 (MiTrimAllSystemPagableMemory.c)
 *     MiUnloadSystemImage @ 0x140651AC4 (MiUnloadSystemImage.c)
 *     MmPrefetchVirtualMemory @ 0x14066BDC8 (MmPrefetchVirtualMemory.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MiGetSessionVm()
{
  unsigned __int64 result; // rax

  result = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  if ( result )
    result += 3008LL;
  return result;
}
