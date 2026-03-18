/*
 * XREFs of KeQueryTimeIncrement @ 0x1400077E0
 * Callers:
 *     ExpTimeRefreshWork @ 0x14056E0E0 (ExpTimeRefreshWork.c)
 *     ExpGenuinePolicyCacheProvider @ 0x1405A1820 (ExpGenuinePolicyCacheProvider.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1405A1E10 (FsRtlCancellableWaitForMultipleObjects.c)
 *     sub_1406884C0 @ 0x1406884C0 (sub_1406884C0.c)
 *     EtwpProcessThreadImageRundown @ 0x1407263D0 (EtwpProcessThreadImageRundown.c)
 *     PfTInitialize @ 0x140751D78 (PfTInitialize.c)
 *     sub_1408E3310 @ 0x1408E3310 (sub_1408E3310.c)
 *     sub_1409C46A8 @ 0x1409C46A8 (sub_1409C46A8.c)
 * Callees:
 *     <none>
 */

ULONG KeQueryTimeIncrement(void)
{
  return KeMaximumIncrement;
}
