/*
 * XREFs of XilRegister_ReadUlong @ 0x1C001D374
 * Callers:
 *     Register_RestoreRyzenFeatureBitsPostReset @ 0x1C0003180 (Register_RestoreRyzenFeatureBitsPostReset.c)
 *     Controller_D0EntryRestoreState @ 0x1C000B688 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C000B9D4 (Controller_D0ExitSaveState.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x1C000BC40 (Controller_DetectFrameMicroframeBoundary.c)
 *     Controller_ExecuteDSMToSendPORTSCValues @ 0x1C000C200 (Controller_ExecuteDSMToSendPORTSCValues.c)
 *     Controller_Start @ 0x1C000DCE8 (Controller_Start.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1C000E0B4 (Controller_StopTimeTrackingForHandle.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C000F650 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C000FF70 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0010120 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0010DB0 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     Register_BiosHandoff @ 0x1C001C5AC (Register_BiosHandoff.c)
 *     Register_ControllerReset @ 0x1C001C7FC (Register_ControllerReset.c)
 *     Register_ControllerStop @ 0x1C001CAAC (Register_ControllerStop.c)
 *     Register_D0Entry @ 0x1C001CBD4 (Register_D0Entry.c)
 *     Register_FindFirstExtendedCapability @ 0x1C001CD80 (Register_FindFirstExtendedCapability.c)
 *     Register_FindNextExtendedCapability @ 0x1C001CDEC (Register_FindNextExtendedCapability.c)
 *     Register_GetAllExtendedCapability @ 0x1C001CE50 (Register_GetAllExtendedCapability.c)
 *     Register_GetExtendedCapabilityTotalSize @ 0x1C001CF54 (Register_GetExtendedCapabilityTotalSize.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C001CFF8 (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     Register_SetClearSSICPortUnused @ 0x1C001D0D4 (Register_SetClearSSICPortUnused.c)
 *     Register_UpdateKBLUSB2PMCTRLRegister @ 0x1C001D188 (Register_UpdateKBLUSB2PMCTRLRegister.c)
 *     Register_WaitForControllerReady @ 0x1C001D1DC (Register_WaitForControllerReady.c)
 *     RootHub_D0Entry @ 0x1C001D548 (RootHub_D0Entry.c)
 *     RootHub_D0Exit @ 0x1C001D69C (RootHub_D0Exit.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C001D924 (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_DisableLPMForSlot @ 0x1C001DB74 (RootHub_DisableLPMForSlot.c)
 *     RootHub_DumpPortData @ 0x1C001DD08 (RootHub_DumpPortData.c)
 *     RootHub_ForceU0AndWait @ 0x1C001DF08 (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C001E2A0 (RootHub_ForceU3.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C001E48C (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_HideInvalidDebugPortStatusAndChange @ 0x1C001E774 (RootHub_HideInvalidDebugPortStatusAndChange.c)
 *     RootHub_Read30PortSpeeds @ 0x1C001E814 (RootHub_Read30PortSpeeds.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C001EB88 (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C001EF80 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C0020710 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C0020A50 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C00213C0 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C00217F0 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x1C00227B4 (RootHub_Update20HardwareLpmParameters.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C002299C (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     RootHub_WaitForResumeCompletion @ 0x1C0022CB0 (RootHub_WaitForResumeCompletion.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C0022E94 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C0039E98 (Wmi_CreateControllerCapabilities.c)
 *     Controller_ExecuteHSICDisconnectInU3WorkaroundDirect @ 0x1C00594E0 (Controller_ExecuteHSICDisconnectInU3WorkaroundDirect.c)
 *     Register_ParseCapabilityRegister @ 0x1C005F990 (Register_ParseCapabilityRegister.c)
 *     Register_PrepareHardware @ 0x1C006014C (Register_PrepareHardware.c)
 *     RootHub_PrepareHardware @ 0x1C0060A08 (RootHub_PrepareHardware.c)
 *     DmaEnabler_Create @ 0x1C00627D8 (DmaEnabler_Create.c)
 * Callees:
 *     Register_ReadSecureMmio @ 0x1C0060404 (Register_ReadSecureMmio.c)
 */

__int64 __fastcall XilRegister_ReadUlong(__int64 a1, unsigned int *a2)
{
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 8) + 473LL) )
    return *a2;
  Register_ReadSecureMmio(a1, (int)a2, 2, 1, &v3);
  return v3;
}
