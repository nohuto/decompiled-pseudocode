/*
 * XREFs of VidSchiGetSoftwareOnlyNodeForDriverEngine @ 0x1C0014F3C
 * Callers:
 *     VidSchCreateContext @ 0x1C007C080 (VidSchCreateContext.c)
 *     VidSchCreateSystemDevices @ 0x1C0091A2C (VidSchCreateSystemDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetSoftwareOnlyNodeForDriverEngine(__int64 a1, int a2)
{
  return (unsigned int)(a2 + *(_DWORD *)(a1 + 68));
}
