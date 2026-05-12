/*
 * XREFs of StorFreeSynchronousScsiRequest @ 0x1C0021BCC
 * Callers:
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C00219F8 (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaidUnitLogSenseCommandSrb @ 0x1C00280A0 (RaidUnitLogSenseCommandSrb.c)
 *     RaUnitSmartDataIoctl @ 0x1C0047E5C (RaUnitSmartDataIoctl.c)
 *     RaUnitSmartReturnStatus @ 0x1C00483AC (RaUnitSmartReturnStatus.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C0049830 (RaidUnitAbortSrbCompletion.c)
 *     RaidUnitResetTarget @ 0x1C004A83C (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C004AAEC (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C004AE0C (RaidUnitSendSrbProtocolCommandSynchronously.c)
 * Callees:
 *     <none>
 */

void __fastcall StorFreeSynchronousScsiRequest(PIRP Irp)
{
  struct _MDL *MdlAddress; // rcx

  MdlAddress = Irp->MdlAddress;
  if ( MdlAddress )
  {
    MmUnlockPages(MdlAddress);
    IoFreeMdl(Irp->MdlAddress);
  }
  IoFreeIrp(Irp);
}
