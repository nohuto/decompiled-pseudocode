/*
 * XREFs of KiIsKernelCfgActive @ 0x1409D5B94
 * Callers:
 *     sub_14098FE9C @ 0x14098FE9C (sub_14098FE9C.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14018DD30 (VslGetNestedPageProtectionFlags.c)
 */

__int64 KiIsKernelCfgActive()
{
  return ((unsigned int)VslGetNestedPageProtectionFlags() >> 7) & 1;
}
