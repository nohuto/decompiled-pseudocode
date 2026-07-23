/*
 * XREFs of MiReferenceControlAreaFile @ 0x14001CBB0
 * Callers:
 *     MiReferenceInPageFile @ 0x14001CAC8 (MiReferenceInPageFile.c)
 *     MmFlushSection @ 0x14001FFD8 (MmFlushSection.c)
 *     MiWriteComplete @ 0x140021DE0 (MiWriteComplete.c)
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 *     MiGatherMappedPages @ 0x14007E6A0 (MiGatherMappedPages.c)
 *     MiMakeSystemCachePteValid @ 0x1400D7B00 (MiMakeSystemCachePteValid.c)
 *     MiCreateSystemSection @ 0x1400F599C (MiCreateSystemSection.c)
 *     MiDeprioritizeVad @ 0x140136EBC (MiDeprioritizeVad.c)
 *     MiSetPagesModified @ 0x1402AA9DC (MiSetPagesModified.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1405DE340 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiCreateSectionCommon @ 0x1405DE7A0 (MiCreateSectionCommon.c)
 *     MmQueryVirtualMemory @ 0x1405EF910 (MmQueryVirtualMemory.c)
 *     MiMapViewOfImageSection @ 0x1405F4660 (MiMapViewOfImageSection.c)
 *     MiAllowImageMap @ 0x1405F58B8 (MiAllowImageMap.c)
 *     DbgkCreateThread @ 0x1405F8028 (DbgkCreateThread.c)
 *     MmCreateSpecialImageSection @ 0x14060B404 (MmCreateSpecialImageSection.c)
 *     MiUnmapViewOfSection @ 0x1406181B0 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x140618488 (MiUnmapVad.c)
 *     MmGetFileObjectForSection @ 0x14061C2B0 (MmGetFileObjectForSection.c)
 *     MmExtendSection @ 0x14061D8CC (MmExtendSection.c)
 *     PsReferenceProcessFilePointer @ 0x14061DB90 (PsReferenceProcessFilePointer.c)
 *     MiLogRelocationFaults @ 0x1406519C4 (MiLogRelocationFaults.c)
 *     MiParseImageLoadConfig @ 0x140651A9C (MiParseImageLoadConfig.c)
 *     MiMapImageInSystemSpace @ 0x140652000 (MiMapImageInSystemSpace.c)
 *     PspInitializeFullProcessImageName @ 0x14065FCD4 (PspInitializeFullProcessImageName.c)
 *     MmLoadSystemImageEx @ 0x1406821B8 (MmLoadSystemImageEx.c)
 *     MiDriverLoadSucceeded @ 0x140682DA4 (MiDriverLoadSucceeded.c)
 *     MmFlushVirtualMemory @ 0x1406B7EBC (MmFlushVirtualMemory.c)
 *     MiParseComImage @ 0x1406C195C (MiParseComImage.c)
 *     NtAreMappedFilesTheSame @ 0x140705F40 (NtAreMappedFilesTheSame.c)
 *     MiLoadUserSymbols @ 0x140761CA8 (MiLoadUserSymbols.c)
 *     MmGetFileNameForAddress @ 0x14084CEB0 (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x14084CFC4 (MmGetFileNameForSection.c)
 *     MiFillMapFileInfo @ 0x14084D3B8 (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x140853410 (MiAllocateFileExtents.c)
 *     MmIsFileMapped @ 0x140859F20 (MmIsFileMapped.c)
 *     MmSectionToSectionObjectPointers @ 0x14085A09C (MmSectionToSectionObjectPointers.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14085B5DC (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     ObpTraceObjectDereferenceIfActive @ 0x14001E38C (ObpTraceObjectDereferenceIfActive.c)
 *     ObFastReferenceObjectLocked @ 0x14007DFE4 (ObFastReferenceObjectLocked.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     ObReferenceObjectExWithTag @ 0x140111F40 (ObReferenceObjectExWithTag.c)
 *     ObpDeferObjectDeletion @ 0x140125EA0 (ObpDeferObjectDeletion.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
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
    ObpTraceObjectDereferenceIfActive(v5 - 48, 15LL, 1953261124LL);
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
