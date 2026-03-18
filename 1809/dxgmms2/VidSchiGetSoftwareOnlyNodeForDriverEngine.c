/*
 * XREFs of VidSchiGetSoftwareOnlyNodeForDriverEngine @ 0x1C0015B78
 * Callers:
 *     VidSchCreateContext @ 0x1C007B2D0 (VidSchCreateContext.c)
 *     VidSchCreateSystemDevices @ 0x1C008CDCC (VidSchCreateSystemDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetSoftwareOnlyNodeForDriverEngine(__int64 a1, int a2)
{
  return (unsigned int)(a2 + *(_DWORD *)(a1 + 68));
}
