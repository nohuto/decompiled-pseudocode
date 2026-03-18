/*
 * XREFs of ZwAlpcCreatePort @ 0x1401C0FF0
 * Callers:
 *     PopUmpoInitializeChannel @ 0x140A1E820 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140A1F680 (PopUmpoInitializeMonitorChannel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCreatePort(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
