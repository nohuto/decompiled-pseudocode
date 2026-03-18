/*
 * XREFs of CmpTransUowIsEqual @ 0x14082F2AC
 * Callers:
 *     CmEqualTrans @ 0x140631BF4 (CmEqualTrans.c)
 *     CmpSearchForTrans @ 0x14063339C (CmpSearchForTrans.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401CC1F0 (RtlCompareMemory.c)
 */

bool __fastcall CmpTransUowIsEqual(const void *a1, const void *a2)
{
  return RtlCompareMemory(a1, a2, 0x10uLL) == 16;
}
