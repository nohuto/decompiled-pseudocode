/*
 * XREFs of ZwAlpcAcceptConnectPort @ 0x1401B9010
 * Callers:
 *     PopUmpoProcessMessage @ 0x14058AF88 (PopUmpoProcessMessage.c)
 *     PopMonitorProcessLoop @ 0x140760538 (PopMonitorProcessLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcAcceptConnectPort(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
