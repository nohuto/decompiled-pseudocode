/*
 * XREFs of XilRegister_WriteUlong @ 0x1C001D458
 * Callers:
 *     Register_RestoreRyzenFeatureBitsPostReset @ 0x1C0003180 (Register_RestoreRyzenFeatureBitsPostReset.c)
 *     Controller_D0EntryRestoreState @ 0x1C000B688 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C000B9D4 (Controller_D0ExitSaveState.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x1C000BC40 (Controller_DetectFrameMicroframeBoundary.c)
 *     Controller_Start @ 0x1C000DCE8 (Controller_Start.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1C000E0B4 (Controller_StopTimeTrackingForHandle.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C000F650 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C000FF70 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0010DB0 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     Register_BiosHandoff @ 0x1C001C5AC (Register_BiosHandoff.c)
 *     Register_ControllerReset @ 0x1C001C7FC (Register_ControllerReset.c)
 *     Register_ControllerStop @ 0x1C001CAAC (Register_ControllerStop.c)
 *     Register_D0Entry @ 0x1C001CBD4 (Register_D0Entry.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C001CFF8 (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     Register_SetClearSSICPortUnused @ 0x1C001D0D4 (Register_SetClearSSICPortUnused.c)
 *     Register_UpdateKBLUSB2PMCTRLRegister @ 0x1C001D188 (Register_UpdateKBLUSB2PMCTRLRegister.c)
 *     RootHub_D0Entry @ 0x1C001D548 (RootHub_D0Entry.c)
 *     RootHub_D0Exit @ 0x1C001D69C (RootHub_D0Exit.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C001D924 (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_DisableLPMForSlot @ 0x1C001DB74 (RootHub_DisableLPMForSlot.c)
 *     RootHub_ForceU0AndWait @ 0x1C001DF08 (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C001E2A0 (RootHub_ForceU3.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C001E48C (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C001EB88 (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C001EF80 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C00217F0 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x1C00227B4 (RootHub_Update20HardwareLpmParameters.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C002299C (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C0022E94 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     XilCoreDeviceSlot_FreeResources @ 0x1C0042C28 (XilCoreDeviceSlot_FreeResources.c)
 *     XilCoreDeviceSlot_Initialize @ 0x1C0042D08 (XilCoreDeviceSlot_Initialize.c)
 * Callees:
 *     Register_WriteSecureMmio @ 0x1C00606CC (Register_WriteSecureMmio.c)
 */

__int64 __fastcall XilRegister_WriteUlong(__int64 a1, _DWORD *a2, int a3)
{
  __int64 result; // rax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF
  int v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = a3;
  result = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(result + 473) )
    return Register_WriteSecureMmio(a1, a2, 2LL, &v5);
  *a2 = a3;
  _InterlockedOr(v4, 0);
  return result;
}
