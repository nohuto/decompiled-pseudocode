/*
 * XREFs of SddlBaseInitialize @ 0x14018B7EC
 * Callers:
 *     SepInitializationPhase1 @ 0x14075C9D4 (SepInitializationPhase1.c)
 * Callees:
 *     InitializeSidLookupTable @ 0x14075CC80 (InitializeSidLookupTable.c)
 */

__int64 SddlBaseInitialize()
{
  return InitializeSidLookupTable();
}
