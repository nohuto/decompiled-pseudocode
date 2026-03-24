/*
 * XREFs of MiGetSessionVm @ 0x1400E945C
 * Callers:
 *     MmProtectPool @ 0x14000E16C (MmProtectPool.c)
 *     MiEmptyAccessLogs @ 0x140010D20 (MiEmptyAccessLogs.c)
 *     MiRemoveFromSystemSpace @ 0x140026F90 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x1400273C0 (MiInsertInSystemSpace.c)
 *     MiReturnSystemVa @ 0x14002840C (MiReturnSystemVa.c)
 *     MiProbeAndLockPrepare @ 0x140040790 (MiProbeAndLockPrepare.c)
 *     MiSetSystemCodeProtection @ 0x1400862E0 (MiSetSystemCodeProtection.c)
 *     MiLockCode @ 0x1400975A0 (MiLockCode.c)
 *     MiCopyOnWrite @ 0x1400B45E0 (MiCopyOnWrite.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DB410 (MiMakeDriverPagesPrivate.c)
 *     MiInitializeColorBaseSession @ 0x1400E76F0 (MiInitializeColorBaseSession.c)
 *     MiSystemFault @ 0x1400E8900 (MiSystemFault.c)
 *     MiLockStealSystemVm @ 0x1400E9978 (MiLockStealSystemVm.c)
 *     MiTranslatePageForCopy @ 0x1400E9C30 (MiTranslatePageForCopy.c)
 *     MmCopyMemory @ 0x1400EA870 (MmCopyMemory.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB40C (MiTrimSharedPageFromViews.c)
 *     MiSessionRemoveImage @ 0x140158100 (MiSessionRemoveImage.c)
 *     MiDeleteSessionPdes @ 0x140158D60 (MiDeleteSessionPdes.c)
 *     MiFreePagedPoolPages @ 0x140161A50 (MiFreePagedPoolPages.c)
 *     MiCountSystemImageCommitment @ 0x14017343C (MiCountSystemImageCommitment.c)
 *     MiSessionInsertImage @ 0x14017602C (MiSessionInsertImage.c)
 *     MiExceptionForMappedVa @ 0x1402A587C (MiExceptionForMappedVa.c)
 *     MmReplaceImportEntry @ 0x1402AB1CC (MmReplaceImportEntry.c)
 *     MiDeleteSessionPoolRange @ 0x1402AC224 (MiDeleteSessionPoolRange.c)
 *     MmAllocateSpecialPool @ 0x1402ACB64 (MmAllocateSpecialPool.c)
 *     MmFreeSpecialPool @ 0x1402AD178 (MmFreeSpecialPool.c)
 *     MiTrimAllSystemPagableMemory @ 0x1402B3B90 (MiTrimAllSystemPagableMemory.c)
 *     MiUnloadSystemImage @ 0x140651AA4 (MiUnloadSystemImage.c)
 *     MmPrefetchVirtualMemory @ 0x14066BDA8 (MmPrefetchVirtualMemory.c)
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
