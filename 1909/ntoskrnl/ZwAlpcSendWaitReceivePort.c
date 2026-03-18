/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x1401C1D90
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1400D636C (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessages @ 0x1400F0418 (PopUmpoProcessMessages.c)
 *     PopMonitorProcessLoop @ 0x140789728 (PopMonitorProcessLoop.c)
 *     DbgkpSendErrorMessage @ 0x140849EA8 (DbgkpSendErrorMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcSendWaitReceivePort(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
