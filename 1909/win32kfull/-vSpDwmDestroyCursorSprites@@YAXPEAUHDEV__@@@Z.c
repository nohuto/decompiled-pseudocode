/*
 * XREFs of ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x1C0161378
 * Callers:
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C010658C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     DwmDestroyDeviceSpecificResources @ 0x1C013A930 (DwmDestroyDeviceSpecificResources.c)
 * Callees:
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C0089B78 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C00F8954 (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 */

void __fastcall vSpDwmDestroyCursorSprites(HDEV a1)
{
  HSPRITE v2; // rdi
  __int64 NeighborSprite; // rbx

  v2 = (HSPRITE)*((_QWORD *)g_pDwmState + 18);
  if ( v2 )
  {
    do
    {
      NeighborSprite = hspGetNeighborSprite(v2, 1, 0);
      GreDeleteSpriteInternal(a1, 0LL, v2, 1);
      v2 = (HSPRITE)NeighborSprite;
    }
    while ( NeighborSprite );
  }
  *((_QWORD *)g_pDwmState + 17) = 0LL;
  *((_QWORD *)g_pDwmState + 18) = 0LL;
  *((_DWORD *)g_pDwmState + 40) = 0;
}
