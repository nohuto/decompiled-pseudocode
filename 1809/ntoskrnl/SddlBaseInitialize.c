/*
 * XREFs of SddlBaseInitialize @ 0x14017D07C
 * Callers:
 *     SepInitializationPhase1 @ 0x140726F24 (SepInitializationPhase1.c)
 * Callees:
 *     InitializeSidLookupTable @ 0x1407271B8 (InitializeSidLookupTable.c)
 */

__int64 SddlBaseInitialize()
{
  return InitializeSidLookupTable();
}
