/*
 * XREFs of MiReferenceControlAreaFile @ 0x140009BF0
 * Callers:
 *     MiReferenceInPageFile @ 0x140009B08 (MiReferenceInPageFile.c)
 *     MiFlushSectionInternal @ 0x1400515D0 (MiFlushSectionInternal.c)
 *     MmFlushSection @ 0x140077E98 (MmFlushSection.c)
 *     MiGatherMappedPages @ 0x14007B5D8 (MiGatherMappedPages.c)
 *     MiWriteComplete @ 0x1400BDA10 (MiWriteComplete.c)
 *     MiMakeSystemCachePteValid @ 0x1400D3E1C (MiMakeSystemCachePteValid.c)
 *     MiDeprioritizeVad @ 0x14013BBFC (MiDeprioritizeVad.c)
 *     MiCreateSystemSection @ 0x1401552D4 (MiCreateSystemSection.c)
 *     MiSetPagesModified @ 0x1402C315C (MiSetPagesModified.c)
 *     MiCreateSectionCommon @ 0x1405D6CC0 (MiCreateSectionCommon.c)
 *     MiMapViewOfImageSection @ 0x1405EAA40 (MiMapViewOfImageSection.c)
 *     MiAllowImageMap @ 0x1405EB884 (MiAllowImageMap.c)
 *     MmQueryVirtualMemory @ 0x140606470 (MmQueryVirtualMemory.c)
 *     MmCreateSpecialImageSection @ 0x14061A8E8 (MmCreateSpecialImageSection.c)
 *     PsReferenceProcessFilePointer @ 0x14061B380 (PsReferenceProcessFilePointer.c)
 *     MmFlushVirtualMemory @ 0x14062450C (MmFlushVirtualMemory.c)
 *     MmExtendSection @ 0x140624DB0 (MmExtendSection.c)
 *     PspInitializeFullProcessImageName @ 0x14062B0C8 (PspInitializeFullProcessImageName.c)
 *     MiMapImageInSystemSpace @ 0x140643C44 (MiMapImageInSystemSpace.c)
 *     MiParseImageLoadConfig @ 0x140643DC8 (MiParseImageLoadConfig.c)
 *     MmGetFileObjectForSection @ 0x14065095C (MmGetFileObjectForSection.c)
 *     MiUnmapViewOfSection @ 0x1406602D0 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x1406605C4 (MiUnmapVad.c)
 *     MiLogRelocationFaults @ 0x14066BB84 (MiLogRelocationFaults.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1406BDBF0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiParseComImage @ 0x1406DFA74 (MiParseComImage.c)
 *     MmLoadSystemImageEx @ 0x14070F890 (MmLoadSystemImageEx.c)
 *     MiDriverLoadSucceeded @ 0x1407102DC (MiDriverLoadSucceeded.c)
 *     NtAreMappedFilesTheSame @ 0x14072D550 (NtAreMappedFilesTheSame.c)
 *     MiLoadUserSymbols @ 0x140789CE0 (MiLoadUserSymbols.c)
 *     MmGetFileNameForAddress @ 0x14088697C (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x140886A90 (MmGetFileNameForSection.c)
 *     MiFillMapFileInfo @ 0x140886E8C (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x14088B6A0 (MiAllocateFileExtents.c)
 *     MmIsFileMapped @ 0x140892178 (MmIsFileMapped.c)
 *     MmSectionToSectionObjectPointers @ 0x140892308 (MmSectionToSectionObjectPointers.c)
 *     MiMapImageForEnclaveUse @ 0x140894398 (MiMapImageForEnclaveUse.c)
 * Callees:
 *     ObpTraceObjectDereferenceIfActive @ 0x140009AC0 (ObpTraceObjectDereferenceIfActive.c)
 *     ExAcquireSpinLockShared @ 0x140061A20 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ObFastReferenceObjectLocked @ 0x14007FC50 (ObFastReferenceObjectLocked.c)
 *     ObReferenceObjectExWithTag @ 0x14010A6B0 (ObReferenceObjectExWithTag.c)
 *     ObpDeferObjectDeletion @ 0x140128EA4 (ObpDeferObjectDeletion.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
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
