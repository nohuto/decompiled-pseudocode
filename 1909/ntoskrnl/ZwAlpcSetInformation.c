/*
 * XREFs of ZwAlpcSetInformation @ 0x1401C1DB0
 * Callers:
 *     PopUmpoInitializeChannel @ 0x140A1EA00 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140A1F860 (PopUmpoInitializeMonitorChannel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcSetInformation(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
