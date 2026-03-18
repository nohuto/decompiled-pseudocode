/*
 * XREFs of ExpUseSpecialPool @ 0x14031AA70
 * Callers:
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 * Callees:
 *     ExCheckSingleFilter @ 0x1401B73E8 (ExCheckSingleFilter.c)
 */

_BOOL8 __fastcall ExpUseSpecialPool(unsigned __int64 a1, int a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // r9

  return a1 <= 0xFE0
      && MmSpecialPoolTag
      && a1
      && ((unsigned int)ExCheckSingleFilter(a2, MmSpecialPoolTag) || v3 >= v2 + 16 && v3 < v2 + 32);
}
