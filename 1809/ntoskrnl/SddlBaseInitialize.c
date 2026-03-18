/*
 * XREFs of SddlBaseInitialize @ 0x14017D05C
 * Callers:
 *     SepInitializationPhase1 @ 0x140726F44 (SepInitializationPhase1.c)
 * Callees:
 *     InitializeSidLookupTable @ 0x1407271D8 (InitializeSidLookupTable.c)
 */

__int64 SddlBaseInitialize()
{
  return InitializeSidLookupTable();
}
