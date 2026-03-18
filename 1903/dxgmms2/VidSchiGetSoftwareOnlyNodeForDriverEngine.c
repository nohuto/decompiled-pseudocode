/*
 * XREFs of VidSchiGetSoftwareOnlyNodeForDriverEngine @ 0x1C0014F4C
 * Callers:
 *     VidSchCreateContext @ 0x1C007B6A0 (VidSchCreateContext.c)
 *     VidSchCreateSystemDevices @ 0x1C0090664 (VidSchCreateSystemDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetSoftwareOnlyNodeForDriverEngine(__int64 a1, int a2)
{
  return (unsigned int)(a2 + *(_DWORD *)(a1 + 68));
}
