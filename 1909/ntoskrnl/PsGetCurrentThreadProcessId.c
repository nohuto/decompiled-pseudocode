/*
 * XREFs of PsGetCurrentThreadProcessId @ 0x140036F60
 * Callers:
 *     PiDqIrpQueryCreate @ 0x1405B6DD8 (PiDqIrpQueryCreate.c)
 *     CmpCreateKeyBody @ 0x1405F03D0 (CmpCreateKeyBody.c)
 *     ObpCreateHandle @ 0x1405F3B50 (ObpCreateHandle.c)
 *     NtTraceControl @ 0x14064C530 (NtTraceControl.c)
 *     EtwpEnableGuid @ 0x140691558 (EtwpEnableGuid.c)
 *     PiUEventHandleRegistration @ 0x140695404 (PiUEventHandleRegistration.c)
 *     EtwpNotifyGuid @ 0x1406A9BCC (EtwpNotifyGuid.c)
 *     SeAuditHandleCreation @ 0x1406DF928 (SeAuditHandleCreation.c)
 *     EtwpRegisterSecurityProvider @ 0x14078CD70 (EtwpRegisterSecurityProvider.c)
 *     PoShutdownBugCheck @ 0x1408A8030 (PoShutdownBugCheck.c)
 *     EtwpDisallowedGuidAddition @ 0x1408F1864 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1408F1B18 (EtwpDisallowedGuidRemoval.c)
 *     EtwpRegisterPrivateSession @ 0x1408FC894 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     <none>
 */

unsigned __int64 PsGetCurrentThreadProcessId()
{
  return KeGetCurrentThread()[1].CycleTime;
}
