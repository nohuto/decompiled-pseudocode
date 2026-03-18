/*
 * XREFs of MmConfigurePrefetchSeekThreshold @ 0x1406F03C8
 * Callers:
 *     MiInitSystem @ 0x1409F0E88 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall MmConfigurePrefetchSeekThreshold(int a1)
{
  dword_1404667FC = a1;
}
