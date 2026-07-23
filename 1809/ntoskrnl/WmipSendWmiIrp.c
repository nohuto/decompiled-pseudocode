/*
 * XREFs of WmipSendWmiIrp @ 0x1405FCEA0
 * Callers:
 *     WmipQueryAllData @ 0x14059EBCC (WmipQueryAllData.c)
 *     WmipQuerySetExecuteSI @ 0x1405FCF88 (WmipQuerySetExecuteSI.c)
 *     WmipRegisterOrUpdateDS @ 0x1406CAC08 (WmipRegisterOrUpdateDS.c)
 *     WmipEnableCollectionForNewGuid @ 0x140709294 (WmipEnableCollectionForNewGuid.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140709890 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipSendEnableDisableRequest @ 0x14070BB0C (WmipSendEnableDisableRequest.c)
 *     WmipDereferenceEvent @ 0x1408B45F8 (WmipDereferenceEvent.c)
 *     WmipProcessLegacyEtwCallback @ 0x1408B5830 (WmipProcessLegacyEtwCallback.c)
 * Callees:
 *     IoAllocateIrp @ 0x14008E400 (IoAllocateIrp.c)
 *     IoFreeIrp @ 0x1400B95B0 (IoFreeIrp.c)
 *     WmipForwardWmiIrp @ 0x1405FC974 (WmipForwardWmiIrp.c)
 */

__int64 __fastcall WmipSendWmiIrp(
        UCHAR a1,
        unsigned int a2,
        UNICODE_STRING *a3,
        unsigned int a4,
        __int64 a5,
        _OWORD *a6)
{
  PIRP Irp; // rax
  PIRP v11; // rbx
  unsigned int v12; // edi

  while ( 1 )
  {
    Irp = IoAllocateIrp(WmipServiceDeviceObject->StackSize + 1, 0);
    v11 = Irp;
    if ( !Irp )
      break;
    --Irp->Tail.Overlay.CurrentStackLocation;
    --Irp->CurrentLocation;
    Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = WmipServiceDeviceObject;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    Irp->AssociatedIrp.MasterIrp = (struct _IRP *)a5;
    v12 = WmipForwardWmiIrp(Irp, a1, a2, a3, a4, a5);
    *a6 = *(_OWORD *)&v11->IoStatus.Status;
    IoFreeIrp(v11);
    if ( v12 != -1073741160 )
      return v12;
  }
  return 3221225626LL;
}
