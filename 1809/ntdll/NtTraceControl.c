/*
 * XREFs of NtTraceControl @ 0x1800A3A50
 * Callers:
 *     EtwpReceiveReplyDataBlock @ 0x18000199C (EtwpReceiveReplyDataBlock.c)
 *     EtwReplyNotification @ 0x180001D60 (EtwReplyNotification.c)
 *     EtwpRegisterProvider @ 0x180020B38 (EtwpRegisterProvider.c)
 *     EtwSendNotification @ 0x18004EC20 (EtwSendNotification.c)
 *     EtwpNotificationThread @ 0x180050590 (EtwpNotificationThread.c)
 *     EtwEventWriteEndScenario @ 0x180068760 (EtwEventWriteEndScenario.c)
 *     EtwEventActivityIdControl @ 0x18006DBD0 (EtwEventActivityIdControl.c)
 *     EtwpSetProviderTraits @ 0x1800760E4 (EtwpSetProviderTraits.c)
 *     EtwpRegisterTpNotificationOnce @ 0x180081BF0 (EtwpRegisterTpNotificationOnce.c)
 *     EtwpGetMaxLogger @ 0x180085190 (EtwpGetMaxLogger.c)
 *     EtwpTrackProviderBinary @ 0x18008D2F4 (EtwpTrackProviderBinary.c)
 *     EtwEventWriteStartScenario @ 0x18008F130 (EtwEventWriteStartScenario.c)
 *     EtwRegisterSecurityProvider @ 0x18008F420 (EtwRegisterSecurityProvider.c)
 *     EtwpUseDescriptorType @ 0x18010EDA0 (EtwpUseDescriptorType.c)
 *     EtwpDemuxUmTraceHandle @ 0x18010F274 (EtwpDemuxUmTraceHandle.c)
 *     EtwpRegisterPrivateSession @ 0x18010F744 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     <none>
 */

__int64 NtTraceControl()
{
  __int64 result; // rax

  result = 444LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
