/*
 * XREFs of CmpIncrementKcbSequenceNumber @ 0x1407F1154
 * Callers:
 *     CmDeleteLayeredKey @ 0x14026CBCC (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x14026D05C (CmpCreateTombstone.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpIncrementKcbSequenceNumber(__int64 a1)
{
  ++*(_QWORD *)(a1 + 296);
}
