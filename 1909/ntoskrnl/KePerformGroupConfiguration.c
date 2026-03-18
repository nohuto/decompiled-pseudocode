/*
 * XREFs of KePerformGroupConfiguration @ 0x1409EDA90
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 * Callees:
 *     KiCommitNodeAssignment @ 0x14018757C (KiCommitNodeAssignment.c)
 *     KiPerformGroupConfiguration @ 0x1409ED6C8 (KiPerformGroupConfiguration.c)
 */

__int16 __fastcall KePerformGroupConfiguration(void *a1)
{
  byte_14058D2F5 &= 0xF9u;
  byte_14058D2F4 = 0;
  word_14046814C = 0;
  KiPerformGroupConfiguration(a1);
  return KiCommitNodeAssignment((__int64)&ExNode0);
}
