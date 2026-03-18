/*
 * XREFs of RtlRandomEx @ 0x14008F010
 * Callers:
 *     IopInitializeInMemoryDumpData @ 0x140296B74 (IopInitializeInMemoryDumpData.c)
 *     MmCreateProcessAddressSpace @ 0x1406446B4 (MmCreateProcessAddressSpace.c)
 *     MiInitializePartitionHugeIoSpace @ 0x140889178 (MiInitializePartitionHugeIoSpace.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x1408B6CC4 (PopPublishAndPurgePowerRequestStats.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1408FC620 (EtwpGetPrivateSessionTraceHandle.c)
 *     VfRandomGetNumber @ 0x1409643E0 (VfRandomGetNumber.c)
 * Callees:
 *     ExGenRandom @ 0x14009C340 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandomEx(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1LL) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
