/*
 * XREFs of ExGetPreviousMode @ 0x1400DDC70
 * Callers:
 *     NtApphelpCacheControl @ 0x140661CF0 (NtApphelpCacheControl.c)
 *     VrpPostEnumerateKey @ 0x14080A600 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x14080B240 (VrpPostQueryKey.c)
 *     AhcCacheQueryHwId @ 0x140905248 (AhcCacheQueryHwId.c)
 * Callees:
 *     <none>
 */

KPROCESSOR_MODE ExGetPreviousMode(void)
{
  return KeGetCurrentThread()->PreviousMode;
}
