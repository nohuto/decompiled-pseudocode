/*
 * XREFs of MmConfigurePrefetchSeekThreshold @ 0x1406D205C
 * Callers:
 *     MiInitSystem @ 0x1409BD5A8 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall MmConfigurePrefetchSeekThreshold(int a1)
{
  dword_14043BE3C = a1;
}
