/*
 * XREFs of WmipSendWmiIrp @ 0x1405FBEA0
 * Callers:
 *     WmipQueryAllData @ 0x14059DBCC (WmipQueryAllData.c)
 *     WmipQuerySetExecuteSI @ 0x1405FBF88 (WmipQuerySetExecuteSI.c)
 *     WmipRegisterOrUpdateDS @ 0x1406C9988 (WmipRegisterOrUpdateDS.c)
 *     WmipEnableCollectionForNewGuid @ 0x140708014 (WmipEnableCollectionForNewGuid.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140708610 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipSendEnableDisableRequest @ 0x14070A88C (WmipSendEnableDisableRequest.c)
 *     WmipDereferenceEvent @ 0x1408B33B8 (WmipDereferenceEvent.c)
 *     WmipProcessLegacyEtwCallback @ 0x1408B4590 (WmipProcessLegacyEtwCallback.c)
 * Callees:
 *     IoAllocateIrp @ 0x14008E4E0 (IoAllocateIrp.c)
 *     IoFreeIrp @ 0x1400B9650 (IoFreeIrp.c)
 *     WmipForwardWmiIrp @ 0x1405FB974 (WmipForwardWmiIrp.c)
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
