/*
 * XREFs of RtlRandomEx @ 0x14013DAA0
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1406D18B8 (MmCreateProcessAddressSpace.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x14087AE3C (PopPublishAndPurgePowerRequestStats.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1408BFE44 (EtwpGetPrivateSessionTraceHandle.c)
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
