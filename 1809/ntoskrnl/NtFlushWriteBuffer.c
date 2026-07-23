/*
 * XREFs of NtFlushWriteBuffer @ 0x14085C910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS NtFlushWriteBuffer(void)
{
  KeFlushWriteBuffer();
  return 0;
}
