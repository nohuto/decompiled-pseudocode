/*
 * XREFs of CmpIncrementKcbSequenceNumber @ 0x14082B420
 * Callers:
 *     CmDeleteLayeredKey @ 0x140280714 (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x140280C1C (CmpCreateTombstone.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpIncrementKcbSequenceNumber(__int64 a1)
{
  ++*(_QWORD *)(a1 + 304);
}
