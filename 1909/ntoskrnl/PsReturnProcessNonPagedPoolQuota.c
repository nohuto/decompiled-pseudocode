/*
 * XREFs of PsReturnProcessNonPagedPoolQuota @ 0x140059100
 * Callers:
 *     MiFreeVadRange @ 0x1400E71E8 (MiFreeVadRange.c)
 *     MiCloneVads @ 0x1402E2C0C (MiCloneVads.c)
 *     MiDeleteCloneDescriptor @ 0x1402E3850 (MiDeleteCloneDescriptor.c)
 *     MiRemoveVadCharges @ 0x140607890 (MiRemoveVadCharges.c)
 *     MiReturnVadQuota @ 0x140608560 (MiReturnVadQuota.c)
 *     MiInsertVadCharges @ 0x14060BC90 (MiInsertVadCharges.c)
 *     PspProcessDelete @ 0x140651970 (PspProcessDelete.c)
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 *     MiFreePlaceholderStorage @ 0x1406F1C80 (MiFreePlaceholderStorage.c)
 *     MiFreeRotateView @ 0x14088AA44 (MiFreeRotateView.c)
 *     MiFreeVadEventBitmap @ 0x14088AC28 (MiFreeVadEventBitmap.c)
 *     MiDeleteAweBitMap @ 0x140895E30 (MiDeleteAweBitMap.c)
 *     MiCreatePlaceholderStorage @ 0x140898A4C (MiCreatePlaceholderStorage.c)
 *     MiBuildNewCloneDescriptor @ 0x14089A550 (MiBuildNewCloneDescriptor.c)
 *     MiCloneProcessAddressSpace @ 0x14089A6F4 (MiCloneProcessAddressSpace.c)
 *     MiFreeCloneDescriptor @ 0x14089AD38 (MiFreeCloneDescriptor.c)
 *     ExDereferenceHandleDebugInfo @ 0x14090AC64 (ExDereferenceHandleDebugInfo.c)
 *     ExEnableHandleTracing @ 0x14090ACC4 (ExEnableHandleTracing.c)
 *     VfIoFreeIrp @ 0x14096EAF8 (VfIoFreeIrp.c)
 *     ViIrpAllocateLockedPacket @ 0x14096EFF0 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspReturnQuota @ 0x140064D10 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessNonPagedPoolQuota(struct _KPROCESS *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].ActiveProcessors.Bitmap[3], a1, 0LL, a2);
  return result;
}
