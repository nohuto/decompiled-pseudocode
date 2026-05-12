/*
 * XREFs of StorFreeSynchronousScsiRequest @ 0x1C0018A68
 * Callers:
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C0018894 (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaUnitSmartDataIoctl @ 0x1C0045170 (RaUnitSmartDataIoctl.c)
 *     RaUnitSmartReturnStatus @ 0x1C00456D0 (RaUnitSmartReturnStatus.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C0046F60 (RaidUnitAbortSrbCompletion.c)
 *     RaidUnitLogSenseTemperatureSrb @ 0x1C0047884 (RaidUnitLogSenseTemperatureSrb.c)
 *     RaidUnitResetTarget @ 0x1C004806C (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C0048328 (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C0048648 (RaidUnitSendSrbProtocolCommandSynchronously.c)
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
