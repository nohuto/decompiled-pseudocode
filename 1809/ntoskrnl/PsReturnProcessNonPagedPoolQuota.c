/*
 * XREFs of PsReturnProcessNonPagedPoolQuota @ 0x140068570
 * Callers:
 *     MiFreeVadRange @ 0x140025674 (MiFreeVadRange.c)
 *     MiCloneVads @ 0x1402C8B68 (MiCloneVads.c)
 *     MiDeleteCloneDescriptor @ 0x1402C979C (MiDeleteCloneDescriptor.c)
 *     MiRemoveVadCharges @ 0x1405EC820 (MiRemoveVadCharges.c)
 *     MiReturnVadQuota @ 0x1405ECB00 (MiReturnVadQuota.c)
 *     MiInsertVadCharges @ 0x1405F1E60 (MiInsertVadCharges.c)
 *     PspProcessDelete @ 0x140607590 (PspProcessDelete.c)
 *     NtSetInformationProcess @ 0x140671C40 (NtSetInformationProcess.c)
 *     MiFreePlaceholderStorage @ 0x1406D0BD0 (MiFreePlaceholderStorage.c)
 *     MiFreeRotateView @ 0x14084F294 (MiFreeRotateView.c)
 *     MiFreeVadEventBitmap @ 0x14084F474 (MiFreeVadEventBitmap.c)
 *     MiDeleteAweBitMap @ 0x14084FC98 (MiDeleteAweBitMap.c)
 *     MiCreatePlaceholderStorage @ 0x14085C6B8 (MiCreatePlaceholderStorage.c)
 *     MiBuildNewCloneDescriptor @ 0x14085DE80 (MiBuildNewCloneDescriptor.c)
 *     MiCloneProcessAddressSpace @ 0x14085E024 (MiCloneProcessAddressSpace.c)
 *     MiFreeCloneDescriptor @ 0x14085E658 (MiFreeCloneDescriptor.c)
 *     ExDereferenceHandleDebugInfo @ 0x1408CDC14 (ExDereferenceHandleDebugInfo.c)
 *     ExEnableHandleTracing @ 0x1408CDC74 (ExEnableHandleTracing.c)
 *     VfIoFreeIrp @ 0x14093027C (VfIoFreeIrp.c)
 *     ViIrpAllocateLockedPacket @ 0x140930768 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspReturnQuota @ 0x1400BE9D0 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessNonPagedPoolQuota(struct _KPROCESS *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].ActiveProcessors.Bitmap[4], a1, 0LL, a2);
  return result;
}
