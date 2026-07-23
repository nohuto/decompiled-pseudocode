/*
 * XREFs of CmpIncrementKcbSequenceNumber @ 0x1407F2334
 * Callers:
 *     CmDeleteLayeredKey @ 0x14026CEBC (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x14026D34C (CmpCreateTombstone.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpIncrementKcbSequenceNumber(__int64 a1)
{
  ++*(_QWORD *)(a1 + 296);
}
