/*
 * XREFs of KeQueryTimeIncrement @ 0x14007D0E0
 * Callers:
 *     ExpTimeRefreshWork @ 0x14059D9F0 (ExpTimeRefreshWork.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x14060ACF0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     EtwpSendDataBlock @ 0x140666224 (EtwpSendDataBlock.c)
 *     sub_140683598 @ 0x140683598 (sub_140683598.c)
 *     ExpGenuinePolicyCacheProvider @ 0x1406AC990 (ExpGenuinePolicyCacheProvider.c)
 *     PfTInitialize @ 0x1407774E0 (PfTInitialize.c)
 *     sub_14091F938 @ 0x14091F938 (sub_14091F938.c)
 *     sub_140A0D93C @ 0x140A0D93C (sub_140A0D93C.c)
 * Callees:
 *     <none>
 */

ULONG KeQueryTimeIncrement(void)
{
  return KeMaximumIncrement;
}
