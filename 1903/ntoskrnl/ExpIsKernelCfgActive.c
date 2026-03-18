/*
 * XREFs of ExpIsKernelCfgActive @ 0x140909454
 * Callers:
 *     NtSetSystemInformation @ 0x1406A6DC0 (NtSetSystemInformation.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14018C150 (VslGetNestedPageProtectionFlags.c)
 */

__int64 ExpIsKernelCfgActive()
{
  return ((unsigned int)VslGetNestedPageProtectionFlags() >> 7) & 1;
}
