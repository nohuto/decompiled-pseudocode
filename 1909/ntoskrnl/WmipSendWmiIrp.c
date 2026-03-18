/*
 * XREFs of WmipSendWmiIrp @ 0x140713718
 * Callers:
 *     WmipQueryAllData @ 0x140696674 (WmipQueryAllData.c)
 *     WmipRegisterOrUpdateDS @ 0x14071323C (WmipRegisterOrUpdateDS.c)
 *     WmipQuerySetExecuteSI @ 0x140713490 (WmipQuerySetExecuteSI.c)
 *     WmipSendEnableDisableRequest @ 0x140738420 (WmipSendEnableDisableRequest.c)
 *     WmipDereferenceEvent @ 0x1408F0184 (WmipDereferenceEvent.c)
 *     WmipProcessLegacyEtwCallback @ 0x1408F1370 (WmipProcessLegacyEtwCallback.c)
 *     WmipDeliverWnodeToDS @ 0x1408F1530 (WmipDeliverWnodeToDS.c)
 * Callees:
 *     IoFreeIrp @ 0x140043F40 (IoFreeIrp.c)
 *     IoAllocateIrp @ 0x1400ED860 (IoAllocateIrp.c)
 *     WmipForwardWmiIrp @ 0x140696C4C (WmipForwardWmiIrp.c)
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
