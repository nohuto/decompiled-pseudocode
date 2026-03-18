/*
 * XREFs of ZwAlpcAcceptConnectPort @ 0x1401C0F70
 * Callers:
 *     PopUmpoProcessMessage @ 0x1406A0F2C (PopUmpoProcessMessage.c)
 *     PopMonitorProcessLoop @ 0x1407873C8 (PopMonitorProcessLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcAcceptConnectPort(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
