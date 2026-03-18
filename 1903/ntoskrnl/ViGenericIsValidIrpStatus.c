/*
 * XREFs of ViGenericIsValidIrpStatus @ 0x1409652C0
 * Callers:
 *     <none>
 * Callees:
 *     IoIsValidIrpStatus @ 0x140965160 (IoIsValidIrpStatus.c)
 */

char __fastcall ViGenericIsValidIrpStatus(__int64 a1, unsigned int a2)
{
  return IoIsValidIrpStatus(a2);
}
