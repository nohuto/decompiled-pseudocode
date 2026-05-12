/*
 * XREFs of StorCancelDpc @ 0x1C0027370
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E3C0 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall StorCancelDpc(__int64 a1, struct _KDPC *a2)
{
  return KeRemoveQueueDpc(a2);
}
