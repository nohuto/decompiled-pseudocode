/*
 * XREFs of SddlBaseInitialize @ 0x14018AE5C
 * Callers:
 *     SepInitializationPhase1 @ 0x140758140 (SepInitializationPhase1.c)
 * Callees:
 *     InitializeSidLookupTable @ 0x1407583EC (InitializeSidLookupTable.c)
 */

__int64 SddlBaseInitialize()
{
  return InitializeSidLookupTable();
}
