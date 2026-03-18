/*
 * XREFs of SepIsDeviceOwnerProtectionDowngradeAllowed @ 0x140171B30
 * Callers:
 *     SeSecurityModelQueryInformation @ 0x14072F980 (SeSecurityModelQueryInformation.c)
 * Callees:
 *     <none>
 */

bool SepIsDeviceOwnerProtectionDowngradeAllowed()
{
  return SeDeviceOwnerProtectionDowngradeAllowed != 0;
}
