/*
 * XREFs of ExpIsKernelCfgActive @ 0x1408CBA80
 * Callers:
 *     NtSetSystemInformation @ 0x140663DF0 (NtSetSystemInformation.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14018DD50 (VslGetNestedPageProtectionFlags.c)
 */

__int64 ExpIsKernelCfgActive()
{
  return ((unsigned int)VslGetNestedPageProtectionFlags() >> 7) & 1;
}
