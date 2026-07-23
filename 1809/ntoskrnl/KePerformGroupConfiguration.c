/*
 * XREFs of KePerformGroupConfiguration @ 0x1409B6C1C
 * Callers:
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     KiCommitNodeAssignment @ 0x14017E978 (KiCommitNodeAssignment.c)
 *     KiPerformGroupConfiguration @ 0x1409B75EC (KiPerformGroupConfiguration.c)
 */

__int16 KePerformGroupConfiguration()
{
  byte_14055D36D &= 0xF9u;
  byte_14055D36C = 0;
  word_14043D964 = 0;
  KiPerformGroupConfiguration();
  return KiCommitNodeAssignment((__int64)&ExNode0);
}
