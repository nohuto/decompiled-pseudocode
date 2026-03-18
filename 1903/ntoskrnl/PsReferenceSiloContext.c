/*
 * XREFs of PsReferenceSiloContext @ 0x14013C250
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsReferenceSiloContext(void *a1)
{
  return ObfReferenceObjectWithTag(a1, 0x746C6644u);
}
