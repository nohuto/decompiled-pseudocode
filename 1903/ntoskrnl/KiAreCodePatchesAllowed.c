/*
 * XREFs of KiAreCodePatchesAllowed @ 0x140A0A844
 * Callers:
 *     CcInitializeBcbProfiler @ 0x1409D0324 (CcInitializeBcbProfiler.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14018C150 (VslGetNestedPageProtectionFlags.c)
 */

__int64 KiAreCodePatchesAllowed()
{
  return ((unsigned int)VslGetNestedPageProtectionFlags() >> 8) & 1;
}
