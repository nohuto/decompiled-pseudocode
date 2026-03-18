/*
 * XREFs of GreSetRegionOwner @ 0x1C00161A0
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0017DEC (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C00B4598 (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     EngCreateRectRgn @ 0x1C012EBC0 (EngCreateRectRgn.c)
 * Callees:
 *     HmgSetOwner @ 0x1C0016200 (HmgSetOwner.c)
 */

__int64 __fastcall GreSetRegionOwner(__int64 a1, unsigned int a2)
{
  __int64 v4; // r8

  PsGetCurrentProcessId();
  if ( a2 == -2147483646 )
    a2 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  LOBYTE(v4) = 4;
  return HmgSetOwner(a1, a2, v4);
}
