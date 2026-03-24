/*
 * XREFs of PsGetCurrentThreadProcessId @ 0x14004D240
 * Callers:
 *     PiDqIrpQueryCreate @ 0x140590B08 (PiDqIrpQueryCreate.c)
 *     NtTraceControl @ 0x1405C2F40 (NtTraceControl.c)
 *     CmpCreateKeyBody @ 0x1405E0970 (CmpCreateKeyBody.c)
 *     ObpCreateHandle @ 0x1405E12B0 (ObpCreateHandle.c)
 *     PiUEventHandleRegistration @ 0x140655BE4 (PiUEventHandleRegistration.c)
 *     EtwpEnableGuid @ 0x140655F38 (EtwpEnableGuid.c)
 *     EtwpNotifyGuid @ 0x140658888 (EtwpNotifyGuid.c)
 *     SeAuditHandleCreation @ 0x1406BCD70 (SeAuditHandleCreation.c)
 *     PoShutdownBugCheck @ 0x14086BEC0 (PoShutdownBugCheck.c)
 *     EtwpDisallowedGuidAddition @ 0x1408B50A4 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1408B5358 (EtwpDisallowedGuidRemoval.c)
 *     EtwpRegisterPrivateSession @ 0x1408C0098 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     <none>
 */

unsigned __int64 PsGetCurrentThreadProcessId()
{
  return KeGetCurrentThread()[1].CycleTime;
}
