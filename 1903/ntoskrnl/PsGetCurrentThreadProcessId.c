/*
 * XREFs of PsGetCurrentThreadProcessId @ 0x140036B70
 * Callers:
 *     PiDqIrpQueryCreate @ 0x1405B69F8 (PiDqIrpQueryCreate.c)
 *     CmpCreateKeyBody @ 0x1405EFC00 (CmpCreateKeyBody.c)
 *     ObpCreateHandle @ 0x1405F3220 (ObpCreateHandle.c)
 *     EtwpEnableGuid @ 0x140664144 (EtwpEnableGuid.c)
 *     PiUEventHandleRegistration @ 0x140667FE4 (PiUEventHandleRegistration.c)
 *     NtTraceControl @ 0x1406865C0 (NtTraceControl.c)
 *     EtwpNotifyGuid @ 0x1406B63E0 (EtwpNotifyGuid.c)
 *     SeAuditHandleCreation @ 0x1406DE588 (SeAuditHandleCreation.c)
 *     PoShutdownBugCheck @ 0x1408A87D0 (PoShutdownBugCheck.c)
 *     EtwpDisallowedGuidAddition @ 0x1408F1F54 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1408F2208 (EtwpDisallowedGuidRemoval.c)
 *     EtwpRegisterPrivateSession @ 0x1408FCEB4 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     <none>
 */

unsigned __int64 PsGetCurrentThreadProcessId()
{
  return KeGetCurrentThread()[1].CycleTime;
}
