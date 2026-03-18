/*
 * XREFs of PsReturnProcessNonPagedPoolQuota @ 0x140059060
 * Callers:
 *     MiFreeVadRange @ 0x1400ABCD8 (MiFreeVadRange.c)
 *     MiCloneVads @ 0x1402E2EAC (MiCloneVads.c)
 *     MiDeleteCloneDescriptor @ 0x1402E3AF0 (MiDeleteCloneDescriptor.c)
 *     MiRemoveVadCharges @ 0x140605D80 (MiRemoveVadCharges.c)
 *     MiReturnVadQuota @ 0x140606A50 (MiReturnVadQuota.c)
 *     MiInsertVadCharges @ 0x14060A180 (MiInsertVadCharges.c)
 *     PspProcessDelete @ 0x140670B40 (PspProcessDelete.c)
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 *     MiFreePlaceholderStorage @ 0x1406F01E0 (MiFreePlaceholderStorage.c)
 *     MiFreeRotateView @ 0x14088B224 (MiFreeRotateView.c)
 *     MiFreeVadEventBitmap @ 0x14088B408 (MiFreeVadEventBitmap.c)
 *     MiDeleteAweBitMap @ 0x140896610 (MiDeleteAweBitMap.c)
 *     MiCreatePlaceholderStorage @ 0x14089922C (MiCreatePlaceholderStorage.c)
 *     MiBuildNewCloneDescriptor @ 0x14089AD30 (MiBuildNewCloneDescriptor.c)
 *     MiCloneProcessAddressSpace @ 0x14089AED4 (MiCloneProcessAddressSpace.c)
 *     MiFreeCloneDescriptor @ 0x14089B518 (MiFreeCloneDescriptor.c)
 *     ExDereferenceHandleDebugInfo @ 0x14090B204 (ExDereferenceHandleDebugInfo.c)
 *     ExEnableHandleTracing @ 0x14090B264 (ExEnableHandleTracing.c)
 *     VfIoFreeIrp @ 0x14096EAF8 (VfIoFreeIrp.c)
 *     ViIrpAllocateLockedPacket @ 0x14096EFF0 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspReturnQuota @ 0x140064C70 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessNonPagedPoolQuota(struct _KPROCESS *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].ActiveProcessors.Bitmap[3], a1, 0LL, a2);
  return result;
}
