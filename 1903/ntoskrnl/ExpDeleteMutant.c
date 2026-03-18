/*
 * XREFs of ExpDeleteMutant @ 0x140014460
 * Callers:
 *     <none>
 * Callees:
 *     KeDeleteMutant @ 0x140014474 (KeDeleteMutant.c)
 */

__int64 __fastcall ExpDeleteMutant(ULONG_PTR a1)
{
  return KeDeleteMutant(a1);
}
