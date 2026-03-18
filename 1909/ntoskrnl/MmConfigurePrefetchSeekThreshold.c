/*
 * XREFs of MmConfigurePrefetchSeekThreshold @ 0x1406F1E68
 * Callers:
 *     MiInitSystem @ 0x1409F0D98 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall MmConfigurePrefetchSeekThreshold(int a1)
{
  dword_1404664FC = a1;
}
