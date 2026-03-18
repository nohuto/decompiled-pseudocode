/*
 * XREFs of HvpProtectBin @ 0x1406CDA14
 * Callers:
 *     HvpAddBin @ 0x14065F368 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14065F948 (HvpRemapAndEnlistHiveBins.c)
 *     HvpMapHiveImage @ 0x1408305FC (HvpMapHiveImage.c)
 * Callees:
 *     ExProtectPool @ 0x14012494C (ExProtectPool.c)
 */

__int64 __fastcall HvpProtectBin(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( a4 )
  {
    if ( !(unsigned int)ExProtectPool(a3, a2, 4u) )
      return (unsigned int)-1073741670;
  }
  else
  {
    ExProtectPool(a3, a2, 2u);
  }
  return v4;
}
