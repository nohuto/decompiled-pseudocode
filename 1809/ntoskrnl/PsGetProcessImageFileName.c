/*
 * XREFs of PsGetProcessImageFileName @ 0x140129C50
 * Callers:
 *     PspInsertProcess @ 0x1406093A8 (PspInsertProcess.c)
 *     PiUEventHandleVetoEvent @ 0x1406FF7F0 (PiUEventHandleVetoEvent.c)
 *     PnpLogVetoInformation @ 0x1408330F0 (PnpLogVetoInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessImageFileName(__int64 a1)
{
  return a1 + 1104;
}
