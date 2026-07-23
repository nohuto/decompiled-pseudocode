/*
 * XREFs of PsReturnProcessNonPagedPoolQuota @ 0x140068560
 * Callers:
 *     MiFreeVadRange @ 0x140025674 (MiFreeVadRange.c)
 *     MiCloneVads @ 0x1402C8D58 (MiCloneVads.c)
 *     MiDeleteCloneDescriptor @ 0x1402C998C (MiDeleteCloneDescriptor.c)
 *     MiRemoveVadCharges @ 0x1405ED820 (MiRemoveVadCharges.c)
 *     MiReturnVadQuota @ 0x1405EDB00 (MiReturnVadQuota.c)
 *     MiInsertVadCharges @ 0x1405F2E60 (MiInsertVadCharges.c)
 *     PspProcessDelete @ 0x140608590 (PspProcessDelete.c)
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 *     MiFreePlaceholderStorage @ 0x1406D1E70 (MiFreePlaceholderStorage.c)
 *     MiFreeRotateView @ 0x1408504F4 (MiFreeRotateView.c)
 *     MiFreeVadEventBitmap @ 0x1408506D4 (MiFreeVadEventBitmap.c)
 *     MiDeleteAweBitMap @ 0x140850EF8 (MiDeleteAweBitMap.c)
 *     MiCreatePlaceholderStorage @ 0x14085D918 (MiCreatePlaceholderStorage.c)
 *     MiBuildNewCloneDescriptor @ 0x14085F0E0 (MiBuildNewCloneDescriptor.c)
 *     MiCloneProcessAddressSpace @ 0x14085F284 (MiCloneProcessAddressSpace.c)
 *     MiFreeCloneDescriptor @ 0x14085F8B8 (MiFreeCloneDescriptor.c)
 *     ExDereferenceHandleDebugInfo @ 0x1408CEED4 (ExDereferenceHandleDebugInfo.c)
 *     ExEnableHandleTracing @ 0x1408CEF34 (ExEnableHandleTracing.c)
 *     VfIoFreeIrp @ 0x14093127C (VfIoFreeIrp.c)
 *     ViIrpAllocateLockedPacket @ 0x140931768 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspReturnQuota @ 0x1400BE910 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessNonPagedPoolQuota(struct _KPROCESS *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].ActiveProcessors.Bitmap[4], a1, 0LL, a2);
  return result;
}
