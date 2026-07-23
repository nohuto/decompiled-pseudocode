/*
 * XREFs of NtFlushProcessWriteBuffers @ 0x140098B90
 * Callers:
 *     <none>
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x140098C58 (KeFlushProcessWriteBuffers.c)
 */

NTSTATUS NtFlushProcessWriteBuffers(void)
{
  KeFlushProcessWriteBuffers(0LL);
  return 0;
}
