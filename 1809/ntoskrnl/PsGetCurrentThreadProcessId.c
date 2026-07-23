/*
 * XREFs of PsGetCurrentThreadProcessId @ 0x14004D240
 * Callers:
 *     PiDqIrpQueryCreate @ 0x140591B08 (PiDqIrpQueryCreate.c)
 *     NtTraceControl @ 0x1405C3F40 (NtTraceControl.c)
 *     CmpCreateKeyBody @ 0x1405E1970 (CmpCreateKeyBody.c)
 *     ObpCreateHandle @ 0x1405E22B0 (ObpCreateHandle.c)
 *     PiUEventHandleRegistration @ 0x140656DA4 (PiUEventHandleRegistration.c)
 *     EtwpEnableGuid @ 0x1406570F8 (EtwpEnableGuid.c)
 *     EtwpNotifyGuid @ 0x140659A48 (EtwpNotifyGuid.c)
 *     SeAuditHandleCreation @ 0x1406BE010 (SeAuditHandleCreation.c)
 *     PoShutdownBugCheck @ 0x14086D120 (PoShutdownBugCheck.c)
 *     EtwpDisallowedGuidAddition @ 0x1408B6364 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1408B6618 (EtwpDisallowedGuidRemoval.c)
 *     EtwpRegisterPrivateSession @ 0x1408C1358 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     <none>
 */

unsigned __int64 PsGetCurrentThreadProcessId()
{
  return KeGetCurrentThread()[1].CycleTime;
}
