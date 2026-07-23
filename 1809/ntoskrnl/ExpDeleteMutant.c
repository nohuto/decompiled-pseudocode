/*
 * XREFs of ExpDeleteMutant @ 0x14012AFC0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutant @ 0x1400BF950 (KeReleaseMutant.c)
 */

LONG __fastcall ExpDeleteMutant(struct _KMUTANT *a1)
{
  return KeReleaseMutant(a1, 1, 1u, 0);
}
