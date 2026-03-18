/*
 * XREFs of ?StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C008DB70
 * Callers:
 *     <none>
 * Callees:
 *     bDeleteSurface @ 0x1C0054290 (bDeleteSurface.c)
 *     EngAssociateSurface @ 0x1C008DBD0 (EngAssociateSurface.c)
 *     EngCreateDeviceSurface @ 0x1C008DC40 (EngCreateDeviceSurface.c)
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
