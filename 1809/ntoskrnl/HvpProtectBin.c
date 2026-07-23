/*
 * XREFs of HvpProtectBin @ 0x1405A3584
 * Callers:
 *     HvpAddBin @ 0x1405A49BC (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1405FA6A0 (HvpRemapAndEnlistHiveBins.c)
 *     HvpMapHiveImage @ 0x1407F8B4C (HvpMapHiveImage.c)
 * Callees:
 *     ExProtectPool @ 0x14000DEB8 (ExProtectPool.c)
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
