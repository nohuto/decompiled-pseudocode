/*
 * XREFs of MiSplitDriverPage @ 0x140887E74
 * Callers:
 *     MiProbeLeafPteAccess @ 0x14008F7B0 (MiProbeLeafPteAccess.c)
 * Callees:
 *     MiMakeDriverPagesPrivate @ 0x1400F7144 (MiMakeDriverPagesPrivate.c)
 */

__int64 __fastcall MiSplitDriverPage(__int64 a1, unsigned __int64 a2)
{
  return MiMakeDriverPagesPrivate(a1, a2, a2, 0);
}
