/*
 * XREFs of NdisWdfDeviceControlIrpHandler @ 0x1C009EB20
 * Callers:
 *     <none>
 * Callees:
 *     ndisDeviceControlHandler @ 0x1C0008BE0 (ndisDeviceControlHandler.c)
 */

__int64 __fastcall NdisWdfDeviceControlIrpHandler(_IRP *a1)
{
  void *FsContext; // rcx

  FsContext = a1->Tail.Overlay.CurrentStackLocation->FileObject->FsContext;
  return ndisDeviceControlHandler(*(_QWORD *)FsContext, *((struct _NDIS_MINIPORT_BLOCK **)FsContext + 1), a1);
}
