/*
 * XREFs of PortPassThroughFreeIrpEx @ 0x1C002BE04
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001008 (RaUnitAtaPassThroughIoctl.c)
 *     PortpCompleteRequestIrp @ 0x1C0022034 (PortpCompleteRequestIrp.c)
 *     PortPassThroughExSendAsync @ 0x1C006F178 (PortPassThroughExSendAsync.c)
 *     PortPassThroughSendAsync @ 0x1C006F55C (PortPassThroughSendAsync.c)
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
