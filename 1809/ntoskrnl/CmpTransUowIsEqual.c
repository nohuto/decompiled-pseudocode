/*
 * XREFs of CmpTransUowIsEqual @ 0x1407F76F0
 * Callers:
 *     CmEqualTrans @ 0x1405AA4E8 (CmEqualTrans.c)
 *     CmpSearchForTrans @ 0x1406FBB88 (CmpSearchForTrans.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401C5D30 (RtlCompareMemory.c)
 */

bool __fastcall CmpTransUowIsEqual(const void *a1, const void *a2)
{
  return RtlCompareMemory(a1, a2, 0x10uLL) == 16;
}
