/*
 * XREFs of ?SupportsInteractionType@CInteractionRoot@@UEBAHW4InputType@@I@Z @ 0x1801F93D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CInteractionRoot::SupportsInteractionType(__int64 a1, int a2, unsigned int a3)
{
  return CInteractionProcessor::SupportsInteractionType(a1 + 32, a2, a3);
}
