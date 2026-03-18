/*
 * XREFs of KeQueryTimeIncrement @ 0x14007D4E0
 * Callers:
 *     ExpTimeRefreshWork @ 0x14059D9D0 (ExpTimeRefreshWork.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x14060C800 (FsRtlCancellableWaitForMultipleObjects.c)
 *     sub_1406494FC @ 0x1406494FC (sub_1406494FC.c)
 *     EtwpSendDataBlock @ 0x140693638 (EtwpSendDataBlock.c)
 *     ExpGenuinePolicyCacheProvider @ 0x1406A3340 (ExpGenuinePolicyCacheProvider.c)
 *     PfTInitialize @ 0x14077AAC0 (PfTInitialize.c)
 *     sub_14091F398 @ 0x14091F398 (sub_14091F398.c)
 *     sub_140A0E0BC @ 0x140A0E0BC (sub_140A0E0BC.c)
 * Callees:
 *     <none>
 */

ULONG KeQueryTimeIncrement(void)
{
  return KeMaximumIncrement;
}
