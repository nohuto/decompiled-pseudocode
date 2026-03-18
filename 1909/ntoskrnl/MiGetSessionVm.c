/*
 * XREFs of MiGetSessionVm @ 0x140075FE4
 * Callers:
 *     MiCopyOnWrite @ 0x140059130 (MiCopyOnWrite.c)
 *     MiSystemFault @ 0x140075390 (MiSystemFault.c)
 *     MiInitializeColorBase @ 0x140091860 (MiInitializeColorBase.c)
 *     MiInsertInSystemSpace @ 0x140095820 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x140097494 (MiRemoveFromSystemSpace.c)
 *     MiTrimSharedPageFromViews @ 0x1400C10E0 (MiTrimSharedPageFromViews.c)
 *     MmCopyMemory @ 0x1400C7740 (MmCopyMemory.c)
 *     MiTranslatePageForCopy @ 0x1400C7C68 (MiTranslatePageForCopy.c)
 *     MiProbeAndLockPrepare @ 0x1400CD110 (MiProbeAndLockPrepare.c)
 *     MiReturnSystemVa @ 0x1400E6D50 (MiReturnSystemVa.c)
 *     MmProtectPool @ 0x1400ECD14 (MmProtectPool.c)
 *     MiLockCode @ 0x1400F93D0 (MiLockCode.c)
 *     MiSetSystemCodeProtection @ 0x1400FA778 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x1400FABE4 (MiMakeDriverPagesPrivate.c)
 *     MiLockStealSystemVm @ 0x14012CDC0 (MiLockStealSystemVm.c)
 *     MiMapRetpolineStubs @ 0x140154F68 (MiMapRetpolineStubs.c)
 *     MiSessionRemoveImage @ 0x140168214 (MiSessionRemoveImage.c)
 *     MiDeleteSessionPdes @ 0x140168D80 (MiDeleteSessionPdes.c)
 *     MiCountSystemImageCommitment @ 0x14017ACE4 (MiCountSystemImageCommitment.c)
 *     MiEmptyAccessLogs @ 0x14017D570 (MiEmptyAccessLogs.c)
 *     MiSessionInsertImage @ 0x14017FD04 (MiSessionInsertImage.c)
 *     MiUnmapRetpolineStubs @ 0x14018065C (MiUnmapRetpolineStubs.c)
 *     MiExceptionForMappedVa @ 0x1402BC970 (MiExceptionForMappedVa.c)
 *     MmReplaceImportEntry @ 0x1402C3B3C (MmReplaceImportEntry.c)
 *     MiTrimAllSystemPagableMemory @ 0x1402C8D50 (MiTrimAllSystemPagableMemory.c)
 *     MmPrefetchVirtualMemory @ 0x1406517C8 (MmPrefetchVirtualMemory.c)
 *     MiUnloadSystemImage @ 0x1406A5BC8 (MiUnloadSystemImage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MiGetSessionVm()
{
  unsigned __int64 result; // rax

  result = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1];
  if ( result )
    result += 256LL;
  return result;
}
