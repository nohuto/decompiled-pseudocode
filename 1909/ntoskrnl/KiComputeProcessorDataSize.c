/*
 * XREFs of KiComputeProcessorDataSize @ 0x14059F030
 * Callers:
 *     KiStartDynamicProcessor @ 0x14087DF0C (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x1409EDC20 (KeStartAllProcessors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiComputeProcessorDataSize(int a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v3; // ecx

  v3 = ((a1 << 6) + 76351) & 0xFFFFF000;
  *a3 = v3 + 4096;
  *a2 = v3 + 16304;
  return v3 + 28672;
}
