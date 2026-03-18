/*
 * XREFs of PsGetProcessImageFileName @ 0x14012B7A0
 * Callers:
 *     ObCheckRefTraceProcess @ 0x140672700 (ObCheckRefTraceProcess.c)
 *     PiUEventHandleVetoEvent @ 0x14072C730 (PiUEventHandleVetoEvent.c)
 *     PnpLogVetoInformation @ 0x14086DA20 (PnpLogVetoInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessImageFileName(__int64 a1)
{
  return a1 + 1104;
}
