/*
 * XREFs of UsbhPdoPower @ 0x1C000BF10
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPdoPowerWorkerInternal @ 0x1C000BF48 (UsbhPdoPowerWorkerInternal.c)
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     Usbh_HubDeferIrpProcessing @ 0x1C004C264 (Usbh_HubDeferIrpProcessing.c)
 */

__int64 __fastcall UsbhPdoPower(__int64 a1, IRP *a2)
{
  unsigned int v4; // ebx
  __int64 v6; // rax
  int v7; // eax

  if ( KeGetCurrentIrql() >= 2u )
  {
    v6 = PdoExt(a1);
    v7 = Usbh_HubDeferIrpProcessing(*(_QWORD *)(v6 + 1184), a1, UsbhPdoPowerWorker, a2);
    v4 = v7;
    if ( v7 >= 0 )
    {
      return 259;
    }
    else
    {
      a2->IoStatus.Status = v7;
      IofCompleteRequest(a2, 0);
    }
  }
  else
  {
    return (unsigned int)UsbhPdoPowerWorkerInternal();
  }
  return v4;
}
