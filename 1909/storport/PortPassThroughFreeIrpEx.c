/*
 * XREFs of PortPassThroughFreeIrpEx @ 0x1C00247E4
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C000F6CC (RaUnitAtaPassThroughIoctl.c)
 *     PortpCompleteRequestIrp @ 0x1C0052D28 (PortpCompleteRequestIrp.c)
 *     PortPassThroughExSendAsync @ 0x1C00762B4 (PortPassThroughExSendAsync.c)
 *     PortPassThroughSendAsync @ 0x1C0076920 (PortPassThroughSendAsync.c)
 * Callees:
 *     <none>
 */

void __fastcall PortPassThroughFreeIrpEx(PIRP Irp)
{
  struct _MDL *MdlAddress; // rcx

  MdlAddress = Irp->MdlAddress;
  if ( MdlAddress )
  {
    MmUnlockPages(MdlAddress);
    IoFreeMdl(Irp->MdlAddress);
    Irp->MdlAddress = 0LL;
  }
  IoFreeIrp(Irp);
}
