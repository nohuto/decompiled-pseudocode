/*
 * XREFs of NtTraceControl @ 0x1800A3A70
 * Callers:
 *     EtwpReceiveReplyDataBlock @ 0x18000199C (EtwpReceiveReplyDataBlock.c)
 *     EtwReplyNotification @ 0x180001D60 (EtwReplyNotification.c)
 *     EtwpRegisterProvider @ 0x180020B38 (EtwpRegisterProvider.c)
 *     EtwSendNotification @ 0x18004EC20 (EtwSendNotification.c)
 *     EtwpNotificationThread @ 0x180050590 (EtwpNotificationThread.c)
 *     EtwEventWriteEndScenario @ 0x180068760 (EtwEventWriteEndScenario.c)
 *     EtwEventActivityIdControl @ 0x18006DBD0 (EtwEventActivityIdControl.c)
 *     EtwpSetProviderTraits @ 0x1800760F4 (EtwpSetProviderTraits.c)
 *     EtwpRegisterTpNotificationOnce @ 0x180081C00 (EtwpRegisterTpNotificationOnce.c)
 *     EtwpGetMaxLogger @ 0x1800851A0 (EtwpGetMaxLogger.c)
 *     EtwpTrackProviderBinary @ 0x18008D304 (EtwpTrackProviderBinary.c)
 *     EtwEventWriteStartScenario @ 0x18008F140 (EtwEventWriteStartScenario.c)
 *     EtwRegisterSecurityProvider @ 0x18008F430 (EtwRegisterSecurityProvider.c)
 *     EtwpUseDescriptorType @ 0x18010EDA0 (EtwpUseDescriptorType.c)
 *     EtwpDemuxUmTraceHandle @ 0x18010F274 (EtwpDemuxUmTraceHandle.c)
 *     EtwpRegisterPrivateSession @ 0x18010F744 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtTraceControl(
        ETWTRACECONTROLCODE FunctionCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 444;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
