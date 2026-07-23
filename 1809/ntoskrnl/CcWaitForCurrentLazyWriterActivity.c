/*
 * XREFs of CcWaitForCurrentLazyWriterActivity @ 0x140161050
 * Callers:
 *     PopGracefulShutdown @ 0x14057D9C0 (PopGracefulShutdown.c)
 * Callees:
 *     CcForEachPartition @ 0x1401200F0 (CcForEachPartition.c)
 */

NTSTATUS CcWaitForCurrentLazyWriterActivity(void)
{
  NTSTATUS v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  CcForEachPartition(
    (__int64 (__fastcall *)(__int64, __int64))CcWaitForCurrentLazyWriterActivityHelper,
    (__int64)&v1,
    0);
  return v1;
}
