/*
 * XREFs of MmConfigurePrefetchSeekThreshold @ 0x1406D0DDC
 * Callers:
 *     MiInitSystem @ 0x1409BC5A8 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall MmConfigurePrefetchSeekThreshold(int a1)
{
  dword_14043AD7C = a1;
}
