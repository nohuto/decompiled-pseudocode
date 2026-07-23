/*
 * XREFs of KeQueryTimeIncrement @ 0x1400077E0
 * Callers:
 *     ExpTimeRefreshWork @ 0x14056F0E0 (ExpTimeRefreshWork.c)
 *     ExpGenuinePolicyCacheProvider @ 0x1405A2820 (ExpGenuinePolicyCacheProvider.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1405A2E10 (FsRtlCancellableWaitForMultipleObjects.c)
 *     sub_140689660 @ 0x140689660 (sub_140689660.c)
 *     EtwpProcessThreadImageRundown @ 0x140727650 (EtwpProcessThreadImageRundown.c)
 *     PfTInitialize @ 0x140752F48 (PfTInitialize.c)
 *     sub_1408E45B0 @ 0x1408E45B0 (sub_1408E45B0.c)
 *     sub_1409C56A8 @ 0x1409C56A8 (sub_1409C56A8.c)
 * Callees:
 *     <none>
 */

ULONG KeQueryTimeIncrement(void)
{
  return KeMaximumIncrement;
}
