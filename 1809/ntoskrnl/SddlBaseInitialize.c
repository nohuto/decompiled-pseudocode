/*
 * XREFs of SddlBaseInitialize @ 0x14017D1BC
 * Callers:
 *     SepInitializationPhase1 @ 0x1407281C4 (SepInitializationPhase1.c)
 * Callees:
 *     InitializeSidLookupTable @ 0x140728458 (InitializeSidLookupTable.c)
 */

__int64 SddlBaseInitialize()
{
  return InitializeSidLookupTable();
}
