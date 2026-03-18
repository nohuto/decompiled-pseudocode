/*
 * XREFs of PsGetProcessImageFileName @ 0x14012C270
 * Callers:
 *     ObCheckRefTraceProcess @ 0x140677E14 (ObCheckRefTraceProcess.c)
 *     PiUEventHandleVetoEvent @ 0x14072E5D0 (PiUEventHandleVetoEvent.c)
 *     PnpLogVetoInformation @ 0x14086D120 (PnpLogVetoInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessImageFileName(__int64 a1)
{
  return a1 + 1104;
}
