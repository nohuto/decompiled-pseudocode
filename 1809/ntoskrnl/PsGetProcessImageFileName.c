/*
 * XREFs of PsGetProcessImageFileName @ 0x140129D40
 * Callers:
 *     PspInsertProcess @ 0x14060A3A8 (PspInsertProcess.c)
 *     PiUEventHandleVetoEvent @ 0x140700A70 (PiUEventHandleVetoEvent.c)
 *     PnpLogVetoInformation @ 0x140834330 (PnpLogVetoInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessImageFileName(__int64 a1)
{
  return a1 + 1104;
}
