/*
 * XREFs of EditionKillAccessibilityTimer @ 0x1C01C8590
 * Callers:
 *     <none>
 * Callees:
 *     FindTimer @ 0x1C00BA330 (FindTimer.c)
 */

__int64 __fastcall EditionKillAccessibilityTimer(__int64 a1, __int64 a2)
{
  return FindTimer(a1, a2, 4u, 1, 0LL);
}
