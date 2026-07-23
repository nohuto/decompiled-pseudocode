/*
 * XREFs of ExGetPreviousMode @ 0x1400DDCF0
 * Callers:
 *     NtApphelpCacheControl @ 0x140662EB0 (NtApphelpCacheControl.c)
 *     VrpPostEnumerateKey @ 0x14080B800 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x14080C440 (VrpPostQueryKey.c)
 *     AhcCacheQueryHwId @ 0x140906508 (AhcCacheQueryHwId.c)
 * Callees:
 *     <none>
 */

KPROCESSOR_MODE ExGetPreviousMode(void)
{
  return KeGetCurrentThread()->PreviousMode;
}
