/*
 * XREFs of ?StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00869E0
 * Callers:
 *     <none>
 * Callees:
 *     bDeleteSurface @ 0x1C0044990 (bDeleteSurface.c)
 *     EngAssociateSurface @ 0x1C0086A40 (EngAssociateSurface.c)
 *     EngCreateDeviceSurface @ 0x1C0086B00 (EngCreateDeviceSurface.c)
 */

HSURF __fastcall StubDispEnableSurface(struct DHPDEV__ *a1)
{
  HSURF DeviceSurface; // rax
  HSURF v3; // rbx

  DeviceSurface = EngCreateDeviceSurface(0LL, *(SIZEL *)(a1 + 4), 6u);
  v3 = DeviceSurface;
  if ( DeviceSurface )
  {
    if ( EngAssociateSurface(DeviceSurface, *(HDEV *)a1, 0x479u) )
    {
      *((_QWORD *)a1 + 1) = v3;
      return v3;
    }
    bDeleteSurface((unsigned int)v3);
  }
  return 0LL;
}
