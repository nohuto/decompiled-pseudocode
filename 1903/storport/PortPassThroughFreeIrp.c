/*
 * XREFs of PortPassThroughFreeIrp @ 0x1C00018D0
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C000F99C (RaUnitAtaPassThroughIoctl.c)
 *     PortpCompleteRequestIrp @ 0x1C0051BA8 (PortpCompleteRequestIrp.c)
 *     PortPassThroughExSendAsync @ 0x1C0075388 (PortPassThroughExSendAsync.c)
 *     PortPassThroughSendAsync @ 0x1C007597C (PortPassThroughSendAsync.c)
 * Callees:
 *     <none>
 */

void __fastcall PortPassThroughFreeIrp(PIRP Irp)
{
  struct _MDL *MdlAddress; // rcx

  MdlAddress = Irp->MdlAddress;
  if ( MdlAddress )
  {
    MmUnlockPages(MdlAddress);
    IoFreeMdl(Irp->MdlAddress);
  }
  Irp->MdlAddress = 0LL;
  IoFreeIrp(Irp);
}
