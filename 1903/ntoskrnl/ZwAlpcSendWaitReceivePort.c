/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x1401C1210
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1400ECBB8 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessages @ 0x1400ED558 (PopUmpoProcessMessages.c)
 *     PopMonitorProcessLoop @ 0x1407873C8 (PopMonitorProcessLoop.c)
 *     DbgkpSendErrorMessage @ 0x14084A7A8 (DbgkpSendErrorMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcSendWaitReceivePort(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
