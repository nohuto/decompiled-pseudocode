/*
 * XREFs of NtFlushProcessWriteBuffers @ 0x1400B8D20
 * Callers:
 *     <none>
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x1400B8DE8 (KeFlushProcessWriteBuffers.c)
 */

__int64 NtFlushProcessWriteBuffers()
{
  KeFlushProcessWriteBuffers(0LL);
  return 0LL;
}
