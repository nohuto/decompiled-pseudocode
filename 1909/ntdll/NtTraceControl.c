/*
 * XREFs of NtTraceControl @ 0x1800A0620
 * Callers:
 *     EtwpReceiveReplyDataBlock @ 0x180001CE0 (EtwpReceiveReplyDataBlock.c)
 *     EtwReplyNotification @ 0x180002310 (EtwReplyNotification.c)
 *     EtwpNotificationThread @ 0x180007E90 (EtwpNotificationThread.c)
 *     EtwpSetProviderTraits @ 0x18000A434 (EtwpSetProviderTraits.c)
 *     EtwpRegisterProvider @ 0x18000A68C (EtwpRegisterProvider.c)
 *     EtwEventWriteEndScenario @ 0x180051A70 (EtwEventWriteEndScenario.c)
 *     EtwSendNotification @ 0x1800539F0 (EtwSendNotification.c)
 *     EtwEventActivityIdControl @ 0x1800663E0 (EtwEventActivityIdControl.c)
 *     EtwpRegisterTpNotificationOnce @ 0x18007D3A0 (EtwpRegisterTpNotificationOnce.c)
 *     EtwpGetMaxLogger @ 0x180080870 (EtwpGetMaxLogger.c)
 *     EtwpTrackProviderBinary @ 0x180080930 (EtwpTrackProviderBinary.c)
 *     EtwEventWriteStartScenario @ 0x18008BD40 (EtwEventWriteStartScenario.c)
 *     EtwRegisterSecurityProvider @ 0x18008C0C0 (EtwRegisterSecurityProvider.c)
 *     EtwpUseDescriptorType @ 0x18010CE70 (EtwpUseDescriptorType.c)
 *     EtwpDemuxUmTraceHandle @ 0x18010D344 (EtwpDemuxUmTraceHandle.c)
 *     EtwpRegisterPrivateSession @ 0x18010D964 (EtwpRegisterPrivateSession.c)
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

  result = 445;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
