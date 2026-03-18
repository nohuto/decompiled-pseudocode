/*
 * XREFs of ExGetPreviousMode @ 0x14009A220
 * Callers:
 *     NtApphelpCacheControl @ 0x14064C310 (NtApphelpCacheControl.c)
 *     VrpPostEnumerateKey @ 0x140843678 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x140844254 (VrpPostQueryKey.c)
 *     AhcCacheQueryHwId @ 0x1409432D0 (AhcCacheQueryHwId.c)
 * Callees:
 *     <none>
 */

KPROCESSOR_MODE ExGetPreviousMode(void)
{
  return KeGetCurrentThread()->PreviousMode;
}
