/*
 * XREFs of KiIsKernelCfgActive @ 0x140A0A828
 * Callers:
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14018C150 (VslGetNestedPageProtectionFlags.c)
 */

__int64 KiIsKernelCfgActive()
{
  return ((unsigned int)VslGetNestedPageProtectionFlags() >> 7) & 1;
}
