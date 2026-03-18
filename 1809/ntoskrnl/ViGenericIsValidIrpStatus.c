/*
 * XREFs of ViGenericIsValidIrpStatus @ 0x140926D90
 * Callers:
 *     <none>
 * Callees:
 *     IoIsValidIrpStatus @ 0x140926C30 (IoIsValidIrpStatus.c)
 */

char __fastcall ViGenericIsValidIrpStatus(__int64 a1, unsigned int a2)
{
  return IoIsValidIrpStatus(a2);
}
