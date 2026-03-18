/*
 * XREFs of XilRegister_ReadUlong @ 0x1C0020D1C
 * Callers:
 *     Register_RestoreRyzenFeatureBitsPostReset @ 0x1C0003A08 (Register_RestoreRyzenFeatureBitsPostReset.c)
 *     RootHub_DetectPortsInComplianceMode @ 0x1C0003BD8 (RootHub_DetectPortsInComplianceMode.c)
 *     Controller_D0EntryRestoreState @ 0x1C000D8D8 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C000DCC0 (Controller_D0ExitSaveState.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x1C000DF94 (Controller_DetectFrameMicroframeBoundary.c)
 *     Controller_ExecuteDSMToSendPORTSCValues @ 0x1C000E590 (Controller_ExecuteDSMToSendPORTSCValues.c)
 *     Controller_Start @ 0x1C00103F0 (Controller_Start.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1C0010818 (Controller_StopTimeTrackingForHandle.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0011FE0 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C00129C0 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0012B90 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0013980 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     Register_BiosHandoff @ 0x1C001FE14 (Register_BiosHandoff.c)
 *     Register_ControllerReset @ 0x1C00200E4 (Register_ControllerReset.c)
 *     Register_ControllerStop @ 0x1C00203FC (Register_ControllerStop.c)
 *     Register_D0Entry @ 0x1C002054C (Register_D0Entry.c)
 *     Register_FindFirstExtendedCapability @ 0x1C00206F8 (Register_FindFirstExtendedCapability.c)
 *     Register_FindNextExtendedCapability @ 0x1C0020764 (Register_FindNextExtendedCapability.c)
 *     Register_GetAllExtendedCapability @ 0x1C00207C8 (Register_GetAllExtendedCapability.c)
 *     Register_GetExtendedCapabilityTotalSize @ 0x1C00208DC (Register_GetExtendedCapabilityTotalSize.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C0020980 (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     Register_SetClearSSICPortUnused @ 0x1C0020A5C (Register_SetClearSSICPortUnused.c)
 *     Register_UpdateKBLUSB2PMCTRLRegister @ 0x1C0020B10 (Register_UpdateKBLUSB2PMCTRLRegister.c)
 *     Register_WaitForControllerReady @ 0x1C0020B64 (Register_WaitForControllerReady.c)
 *     RootHub_D0Entry @ 0x1C0020EF4 (RootHub_D0Entry.c)
 *     RootHub_D0Exit @ 0x1C0021074 (RootHub_D0Exit.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C002127C (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_DisableLPMForSlot @ 0x1C0021508 (RootHub_DisableLPMForSlot.c)
 *     RootHub_DumpPortData @ 0x1C00216E4 (RootHub_DumpPortData.c)
 *     RootHub_ForceU0AndWait @ 0x1C0021948 (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C0021D18 (RootHub_ForceU3.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C0021F30 (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_HideInvalidDebugPortStatusAndChange @ 0x1C0022270 (RootHub_HideInvalidDebugPortStatusAndChange.c)
 *     RootHub_Read30PortSpeeds @ 0x1C002230C (RootHub_Read30PortSpeeds.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C00226B8 (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C0022B40 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C0024740 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C0024AC0 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0025520 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C00259C0 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x1C0026C58 (RootHub_Update20HardwareLpmParameters.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C0026E6C (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     RootHub_WaitForResumeCompletion @ 0x1C0027218 (RootHub_WaitForResumeCompletion.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C0027454 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C003F5FC (Wmi_CreateControllerCapabilities.c)
 *     Controller_ExecuteHSICDisconnectInU3WorkaroundDirect @ 0x1C006079C (Controller_ExecuteHSICDisconnectInU3WorkaroundDirect.c)
 *     Register_ParseCapabilityRegister @ 0x1C0067778 (Register_ParseCapabilityRegister.c)
 *     Register_PrepareHardware @ 0x1C0068064 (Register_PrepareHardware.c)
 *     RootHub_PrepareHardware @ 0x1C00689FC (RootHub_PrepareHardware.c)
 *     DmaEnabler_Create @ 0x1C006A99C (DmaEnabler_Create.c)
 * Callees:
 *     Register_ReadSecureMmio @ 0x1C00683B4 (Register_ReadSecureMmio.c)
 */

__int64 __fastcall XilRegister_ReadUlong(__int64 a1, unsigned int *a2)
{
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 8) + 537LL) )
    return *a2;
  Register_ReadSecureMmio(a1, (int)a2, 2, 1, &v3);
  return v3;
}
