/*
 * XREFs of ExpDeleteMutant @ 0x1400E3810
 * Callers:
 *     <none>
 * Callees:
 *     KeDeleteMutant @ 0x1400E3824 (KeDeleteMutant.c)
 */

__int64 __fastcall ExpDeleteMutant(ULONG_PTR a1)
{
  return KeDeleteMutant(a1);
}
