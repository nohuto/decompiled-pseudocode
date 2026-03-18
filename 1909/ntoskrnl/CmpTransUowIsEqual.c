/*
 * XREFs of CmpTransUowIsEqual @ 0x14082F11C
 * Callers:
 *     CmEqualTrans @ 0x140635A74 (CmEqualTrans.c)
 *     CmpSearchForTrans @ 0x14063698C (CmpSearchForTrans.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401CCD70 (RtlCompareMemory.c)
 */

bool __fastcall CmpTransUowIsEqual(const void *a1, const void *a2)
{
  return RtlCompareMemory(a1, a2, 0x10uLL) == 16;
}
