/*
 * XREFs of KiAreCodePatchesAllowed @ 0x1409D5BB0
 * Callers:
 *     CcInitializeBcbProfiler @ 0x14098E324 (CcInitializeBcbProfiler.c)
 *     sub_14098FE9C @ 0x14098FE9C (sub_14098FE9C.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14018DD30 (VslGetNestedPageProtectionFlags.c)
 */

__int64 KiAreCodePatchesAllowed()
{
  return ((unsigned int)VslGetNestedPageProtectionFlags() >> 8) & 1;
}
