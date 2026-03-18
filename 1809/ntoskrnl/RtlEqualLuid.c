/*
 * XREFs of RtlEqualLuid @ 0x140893D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlEqualLuid(PLUID Luid1, PLUID Luid2)
{
  return Luid1->HighPart == Luid2->HighPart && Luid1->LowPart == Luid2->LowPart;
}
