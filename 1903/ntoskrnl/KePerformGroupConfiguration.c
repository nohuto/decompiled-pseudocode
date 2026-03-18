/*
 * XREFs of KePerformGroupConfiguration @ 0x1409EDB78
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 * Callees:
 *     KiCommitNodeAssignment @ 0x140186FCC (KiCommitNodeAssignment.c)
 *     KiPerformGroupConfiguration @ 0x1409ED7B0 (KiPerformGroupConfiguration.c)
 */

__int16 __fastcall KePerformGroupConfiguration(void *a1)
{
  byte_14058D2F5 &= 0xF9u;
  byte_14058D2F4 = 0;
  word_14046840C = 0;
  KiPerformGroupConfiguration(a1);
  return KiCommitNodeAssignment((__int64)&ExNode0);
}
