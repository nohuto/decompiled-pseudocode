/*
 * XREFs of RtlRandomEx @ 0x14013DAC0
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1406D1898 (MmCreateProcessAddressSpace.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x14087AE1C (PopPublishAndPurgePowerRequestStats.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1408BFE24 (EtwpGetPrivateSessionTraceHandle.c)
 *     VfRandomGetNumber @ 0x140925F50 (VfRandomGetNumber.c)
 * Callees:
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandomEx(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
