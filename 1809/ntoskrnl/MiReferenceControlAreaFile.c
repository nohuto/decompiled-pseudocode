/*
 * XREFs of MiReferenceControlAreaFile @ 0x14001CBB0
 * Callers:
 *     MiReferenceInPageFile @ 0x14001CAC8 (MiReferenceInPageFile.c)
 *     MmFlushSection @ 0x14001FFD8 (MmFlushSection.c)
 *     MiWriteComplete @ 0x140021DE0 (MiWriteComplete.c)
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 *     MiGatherMappedPages @ 0x14007E6B0 (MiGatherMappedPages.c)
 *     MiMakeSystemCachePteValid @ 0x1400D7A60 (MiMakeSystemCachePteValid.c)
 *     MiCreateSystemSection @ 0x1400F58FC (MiCreateSystemSection.c)
 *     MiDeprioritizeVad @ 0x140136D9C (MiDeprioritizeVad.c)
 *     MiSetPagesModified @ 0x1402AA6EC (MiSetPagesModified.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1405DD340 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiCreateSectionCommon @ 0x1405DD7A0 (MiCreateSectionCommon.c)
 *     MmQueryVirtualMemory @ 0x1405EE910 (MmQueryVirtualMemory.c)
 *     MiMapViewOfImageSection @ 0x1405F3660 (MiMapViewOfImageSection.c)
 *     MiAllowImageMap @ 0x1405F48B8 (MiAllowImageMap.c)
 *     DbgkCreateThread @ 0x1405F7028 (DbgkCreateThread.c)
 *     MmCreateSpecialImageSection @ 0x14060A404 (MmCreateSpecialImageSection.c)
 *     MiUnmapViewOfSection @ 0x1406171B0 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x140617488 (MiUnmapVad.c)
 *     MmGetFileObjectForSection @ 0x14061B2B0 (MmGetFileObjectForSection.c)
 *     MmExtendSection @ 0x14061C8CC (MmExtendSection.c)
 *     PsReferenceProcessFilePointer @ 0x14061CB90 (PsReferenceProcessFilePointer.c)
 *     MiLogRelocationFaults @ 0x140650824 (MiLogRelocationFaults.c)
 *     MiParseImageLoadConfig @ 0x1406508FC (MiParseImageLoadConfig.c)
 *     MiMapImageInSystemSpace @ 0x140650E60 (MiMapImageInSystemSpace.c)
 *     PspInitializeFullProcessImageName @ 0x14065EB34 (PspInitializeFullProcessImageName.c)
 *     MmLoadSystemImageEx @ 0x140681018 (MmLoadSystemImageEx.c)
 *     MiDriverLoadSucceeded @ 0x140681C04 (MiDriverLoadSucceeded.c)
 *     MmFlushVirtualMemory @ 0x1406B6C3C (MmFlushVirtualMemory.c)
 *     MiParseComImage @ 0x1406C06DC (MiParseComImage.c)
 *     NtAreMappedFilesTheSame @ 0x140704CC0 (NtAreMappedFilesTheSame.c)
 *     MiLoadUserSymbols @ 0x140760AD8 (MiLoadUserSymbols.c)
 *     MmGetFileNameForAddress @ 0x14084BC70 (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x14084BD84 (MmGetFileNameForSection.c)
 *     MiFillMapFileInfo @ 0x14084C178 (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x1408521D0 (MiAllocateFileExtents.c)
 *     MmIsFileMapped @ 0x140858CE0 (MmIsFileMapped.c)
 *     MmSectionToSectionObjectPointers @ 0x140858E5C (MmSectionToSectionObjectPointers.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14085A39C (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     ObpTraceObjectDereferenceIfActive @ 0x14001E38C (ObpTraceObjectDereferenceIfActive.c)
 *     ObFastReferenceObjectLocked @ 0x14007DFF4 (ObFastReferenceObjectLocked.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D110 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D7C0 (ExAcquireSpinLockShared.c)
 *     ObReferenceObjectExWithTag @ 0x140111EB0 (ObReferenceObjectExWithTag.c)
 *     ObpDeferObjectDeletion @ 0x140125DB0 (ObpDeferObjectDeletion.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
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
