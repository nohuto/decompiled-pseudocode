/*
 * XREFs of KePerformGroupConfiguration @ 0x1409B5C1C
 * Callers:
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     KiCommitNodeAssignment @ 0x14017E838 (KiCommitNodeAssignment.c)
 *     KiPerformGroupConfiguration @ 0x1409B65EC (KiPerformGroupConfiguration.c)
 */

__int16 KePerformGroupConfiguration()
{
  byte_14055C36D &= 0xF9u;
  byte_14055C36C = 0;
  word_14043C8A4 = 0;
  KiPerformGroupConfiguration();
  return KiCommitNodeAssignment((__int64)&ExNode0);
}
