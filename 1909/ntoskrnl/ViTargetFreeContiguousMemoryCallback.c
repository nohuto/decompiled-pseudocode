/*
 * XREFs of ViTargetFreeContiguousMemoryCallback @ 0x1409745E0
 * Callers:
 *     <none>
 * Callees:
 *     ViTargetFreeContiguousMemoryFromNode @ 0x140974608 (ViTargetFreeContiguousMemoryFromNode.c)
 */

_BOOL8 __fastcall ViTargetFreeContiguousMemoryCallback(__int64 a1, __int64 a2)
{
  return (unsigned int)ViTargetFreeContiguousMemoryFromNode(a2, a1) == 0;
}
