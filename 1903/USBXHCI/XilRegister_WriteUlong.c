/*
 * XREFs of XilRegister_WriteUlong @ 0x1C0020E08
 * Callers:
 *     Register_RestoreRyzenFeatureBitsPostReset @ 0x1C0003A08 (Register_RestoreRyzenFeatureBitsPostReset.c)
 *     Controller_D0EntryRestoreState @ 0x1C000D8D8 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C000DCC0 (Controller_D0ExitSaveState.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x1C000DF94 (Controller_DetectFrameMicroframeBoundary.c)
 *     Controller_Start @ 0x1C00103F0 (Controller_Start.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1C0010818 (Controller_StopTimeTrackingForHandle.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0011FE0 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C00129C0 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0013980 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     Register_BiosHandoff @ 0x1C001FE14 (Register_BiosHandoff.c)
 *     Register_ControllerReset @ 0x1C00200E4 (Register_ControllerReset.c)
 *     Register_ControllerStop @ 0x1C00203FC (Register_ControllerStop.c)
 *     Register_D0Entry @ 0x1C002054C (Register_D0Entry.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C0020980 (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     Register_SetClearSSICPortUnused @ 0x1C0020A5C (Register_SetClearSSICPortUnused.c)
 *     Register_UpdateKBLUSB2PMCTRLRegister @ 0x1C0020B10 (Register_UpdateKBLUSB2PMCTRLRegister.c)
 *     RootHub_D0Entry @ 0x1C0020EF4 (RootHub_D0Entry.c)
 *     RootHub_D0Exit @ 0x1C0021074 (RootHub_D0Exit.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C002127C (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_DisableLPMForSlot @ 0x1C0021508 (RootHub_DisableLPMForSlot.c)
 *     RootHub_ForceU0AndWait @ 0x1C0021948 (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C0021D18 (RootHub_ForceU3.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C0021F30 (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C00226B8 (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C0022B40 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C00259C0 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x1C0026C58 (RootHub_Update20HardwareLpmParameters.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C0026E6C (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C0027454 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     XilCoreDeviceSlot_FreeResources @ 0x1C0048620 (XilCoreDeviceSlot_FreeResources.c)
 *     XilCoreDeviceSlot_Initialize @ 0x1C0048700 (XilCoreDeviceSlot_Initialize.c)
 * Callees:
 *     Register_WriteSecureMmio @ 0x1C006869C (Register_WriteSecureMmio.c)
 */

__int64 __fastcall XilRegister_WriteUlong(__int64 a1, _DWORD *a2, int a3)
{
  __int64 result; // rax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF
  int v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = a3;
  result = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(result + 537) )
    return Register_WriteSecureMmio(a1, a2, 2LL, &v5);
  *a2 = a3;
  _InterlockedOr(v4, 0);
  return result;
}
