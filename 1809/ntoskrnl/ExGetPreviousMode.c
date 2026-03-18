/*
 * XREFs of ExGetPreviousMode @ 0x1400DDC50
 * Callers:
 *     NtApphelpCacheControl @ 0x140661D10 (NtApphelpCacheControl.c)
 *     VrpPostEnumerateKey @ 0x14080A620 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x14080B260 (VrpPostQueryKey.c)
 *     AhcCacheQueryHwId @ 0x140905268 (AhcCacheQueryHwId.c)
 * Callees:
 *     <none>
 */

KPROCESSOR_MODE ExGetPreviousMode(void)
{
  return KeGetCurrentThread()->PreviousMode;
}
