/*
 * XREFs of ExpIsKernelCfgActive @ 0x140908EB4
 * Callers:
 *     NtSetSystemInformation @ 0x1406A6650 (NtSetSystemInformation.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14018C9D0 (VslGetNestedPageProtectionFlags.c)
 */

__int64 ExpIsKernelCfgActive()
{
  return ((unsigned int)VslGetNestedPageProtectionFlags() >> 7) & 1;
}
