/*
 * XREFs of MiReferenceControlAreaFile @ 0x140009B60
 * Callers:
 *     MiReferenceInPageFile @ 0x140009A78 (MiReferenceInPageFile.c)
 *     MiFlushSectionInternal @ 0x140051530 (MiFlushSectionInternal.c)
 *     MmFlushSection @ 0x140077AD0 (MmFlushSection.c)
 *     MiGatherMappedPages @ 0x14007B1D8 (MiGatherMappedPages.c)
 *     MiMakeSystemCachePteValid @ 0x140096AFC (MiMakeSystemCachePteValid.c)
 *     MiWriteComplete @ 0x1400DDB90 (MiWriteComplete.c)
 *     MiDeprioritizeVad @ 0x14013B5DC (MiDeprioritizeVad.c)
 *     MiCreateSystemSection @ 0x140154C34 (MiCreateSystemSection.c)
 *     MiSetPagesModified @ 0x1402C33FC (MiSetPagesModified.c)
 *     MiCreateSectionCommon @ 0x1405D6500 (MiCreateSectionCommon.c)
 *     MiMapViewOfImageSection @ 0x1405EA270 (MiMapViewOfImageSection.c)
 *     MiAllowImageMap @ 0x1405EB0B4 (MiAllowImageMap.c)
 *     MmQueryVirtualMemory @ 0x140604960 (MmQueryVirtualMemory.c)
 *     MmCreateSpecialImageSection @ 0x140618DD8 (MmCreateSpecialImageSection.c)
 *     PsReferenceProcessFilePointer @ 0x140619870 (PsReferenceProcessFilePointer.c)
 *     PspInitializeFullProcessImageName @ 0x140627218 (PspInitializeFullProcessImageName.c)
 *     MiUnmapViewOfSection @ 0x14064C640 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x14064C934 (MiUnmapVad.c)
 *     MiLogRelocationFaults @ 0x140658B64 (MiLogRelocationFaults.c)
 *     MiParseImageLoadConfig @ 0x140659FF0 (MiParseImageLoadConfig.c)
 *     MiMapImageInSystemSpace @ 0x140670000 (MiMapImageInSystemSpace.c)
 *     MmGetFileObjectForSection @ 0x14068A83C (MmGetFileObjectForSection.c)
 *     MmExtendSection @ 0x14069C8C0 (MmExtendSection.c)
 *     MmFlushVirtualMemory @ 0x14069E9FC (MmFlushVirtualMemory.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1406BE140 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiParseComImage @ 0x1406DE6D4 (MiParseComImage.c)
 *     MmLoadSystemImageEx @ 0x14070DAB0 (MmLoadSystemImageEx.c)
 *     MiDriverLoadSucceeded @ 0x14070E4FC (MiDriverLoadSucceeded.c)
 *     NtAreMappedFilesTheSame @ 0x14072B6B0 (NtAreMappedFilesTheSame.c)
 *     MiLoadUserSymbols @ 0x140787880 (MiLoadUserSymbols.c)
 *     MmGetFileNameForAddress @ 0x140887150 (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x140887264 (MmGetFileNameForSection.c)
 *     MiFillMapFileInfo @ 0x140887660 (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x14088BE80 (MiAllocateFileExtents.c)
 *     MmIsFileMapped @ 0x140892958 (MmIsFileMapped.c)
 *     MmSectionToSectionObjectPointers @ 0x140892AE8 (MmSectionToSectionObjectPointers.c)
 *     MiMapImageForEnclaveUse @ 0x140894B78 (MiMapImageForEnclaveUse.c)
 * Callees:
 *     ObpTraceObjectDereferenceIfActive @ 0x140009A30 (ObpTraceObjectDereferenceIfActive.c)
 *     ExAcquireSpinLockShared @ 0x140061980 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ObFastReferenceObjectLocked @ 0x14007F850 (ObFastReferenceObjectLocked.c)
 *     ObReferenceObjectExWithTag @ 0x14010AAE0 (ObReferenceObjectExWithTag.c)
 *     ObpDeferObjectDeletion @ 0x140128484 (ObpDeferObjectDeletion.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiReferenceControlAreaFile(__int64 a1)
{
  volatile signed __int64 *v2; // rdi
  signed __int64 v3; // r8
  signed __int64 v4; // rax
  ULONG_PTR v5; // rbx
  unsigned int v6; // r8d
  volatile LONG *v8; // rbx
  KIRQL v9; // si
  __int64 v10; // rdi
  __int64 v11; // rdx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  signed __int64 BugCheckParameter4; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = (volatile signed __int64 *)(a1 + 64);
  _m_prefetchw((const void *)(a1 + 64));
  v3 = *(_QWORD *)(a1 + 64);
  if ( (v3 & 0xF) != 0 )
  {
    do
    {
      v4 = _InterlockedCompareExchange64(v2, v3 - 1, v3);
      if ( v3 == v4 )
        break;
      v3 = v4;
    }
    while ( (v4 & 0xF) != 0 );
  }
  v5 = v3 & 0xFFFFFFFFFFFFFFF0uLL;
  v6 = v3 & 0xF;
  if ( v6 <= 1 )
  {
    if ( !v6 )
      goto LABEL_8;
    ObReferenceObjectExWithTag(v5);
    _m_prefetchw((const void *)v2);
    v12 = *v2;
    while ( (v12 & 0xF) == 0 )
    {
      if ( v5 != (v12 & 0xFFFFFFFFFFFFFFF0uLL) )
        break;
      v13 = v12;
      v12 = _InterlockedCompareExchange64(v2, v12 + 15, v12);
      if ( v13 == v12 )
        goto LABEL_4;
    }
    ObpTraceObjectDereferenceIfActive(v5 - 48);
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 - 48), 0xFFFFFFFFFFFFFFF1uLL) - 15;
    if ( BugCheckParameter4 <= 0 )
    {
      if ( *(_QWORD *)(v5 - 40) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v5 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v5 - 48) >> 8)],
          v5,
          6uLL,
          *(_QWORD *)(v5 - 40));
      if ( BugCheckParameter4 < 0 )
        KeBugCheckEx(0x18u, 0LL, v5, 5uLL, BugCheckParameter4);
      ObpDeferObjectDeletion(v5 - 48);
    }
  }
LABEL_4:
  if ( v5 )
    return v5;
LABEL_8:
  v8 = (volatile LONG *)(a1 + 72);
  v9 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
  v10 = ObFastReferenceObjectLocked(v2);
  ExReleaseSpinLockSharedFromDpcLevel(v8);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb, v11);
  }
  __writecr8(v9);
  return v10;
}
