/*
 * XREFs of ViGenericIsValidIrpStatus @ 0x140927D90
 * Callers:
 *     <none>
 * Callees:
 *     IoIsValidIrpStatus @ 0x140927C30 (IoIsValidIrpStatus.c)
 */

char __fastcall ViGenericIsValidIrpStatus(__int64 a1, unsigned int a2)
{
  return IoIsValidIrpStatus(a2);
}
