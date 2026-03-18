/*
 * XREFs of SepIsDeviceOwnerProtectionDowngradeAllowed @ 0x140171440
 * Callers:
 *     SeSecurityModelQueryInformation @ 0x14072DAB0 (SeSecurityModelQueryInformation.c)
 * Callees:
 *     <none>
 */

bool SepIsDeviceOwnerProtectionDowngradeAllowed()
{
  return SeDeviceOwnerProtectionDowngradeAllowed != 0;
}
