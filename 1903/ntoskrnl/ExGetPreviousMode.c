/*
 * XREFs of ExGetPreviousMode @ 0x1400BA3B0
 * Callers:
 *     NtApphelpCacheControl @ 0x1406863A0 (NtApphelpCacheControl.c)
 *     VrpPostEnumerateKey @ 0x140844004 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x140844BE0 (VrpPostQueryKey.c)
 *     AhcCacheQueryHwId @ 0x140943860 (AhcCacheQueryHwId.c)
 * Callees:
 *     <none>
 */

KPROCESSOR_MODE ExGetPreviousMode(void)
{
  return KeGetCurrentThread()->PreviousMode;
}
