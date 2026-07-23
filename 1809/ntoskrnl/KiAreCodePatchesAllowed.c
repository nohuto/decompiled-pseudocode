/*
 * XREFs of KiAreCodePatchesAllowed @ 0x1409D6BB0
 * Callers:
 *     CcInitializeBcbProfiler @ 0x14098F324 (CcInitializeBcbProfiler.c)
 *     sub_140990E9C @ 0x140990E9C (sub_140990E9C.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14018DE90 (VslGetNestedPageProtectionFlags.c)
 */

__int64 KiAreCodePatchesAllowed()
{
  return ((unsigned int)VslGetNestedPageProtectionFlags() >> 8) & 1;
}
