/*
 * XREFs of CmpIncrementKcbSequenceNumber @ 0x1407F1134
 * Callers:
 *     CmDeleteLayeredKey @ 0x14026CCCC (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x14026D15C (CmpCreateTombstone.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpIncrementKcbSequenceNumber(__int64 a1)
{
  ++*(_QWORD *)(a1 + 296);
}
