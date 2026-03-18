/*
 * XREFs of RtlRandomEx @ 0x1400E3D90
 * Callers:
 *     IopInitializeInMemoryDumpData @ 0x140296E14 (IopInitializeInMemoryDumpData.c)
 *     MmCreateProcessAddressSpace @ 0x14068D3A4 (MmCreateProcessAddressSpace.c)
 *     MiInitializePartitionHugeIoSpace @ 0x140889958 (MiInitializePartitionHugeIoSpace.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x1408B73F4 (PopPublishAndPurgePowerRequestStats.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1408FCC40 (EtwpGetPrivateSessionTraceHandle.c)
 *     VfRandomGetNumber @ 0x1409643E0 (VfRandomGetNumber.c)
 * Callees:
 *     ExGenRandom @ 0x1400BC4C0 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandomEx(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
