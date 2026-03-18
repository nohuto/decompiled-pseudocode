/*
 * XREFs of ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A8FE0
 * Callers:
 *     ?SetRemarshalingFlags@CCursorVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01AAAB0 (-SetRemarshalingFlags@CCursorVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CSpriteVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01B2290 (-SetRemarshalingFlags@CSpriteVisualMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CLayerVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01B2360 (-SetRemarshalingFlags@CLayerVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CShapeVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01B2920 (-SetRemarshalingFlags@CShapeVisualMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CParticleEmitterVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01B6F10 (-SetRemarshalingFlags@CParticleEmitterVisualMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CGlyphRunVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01B8760 (-SetRemarshalingFlags@CGlyphRunVisualMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CSceneVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01BCFB0 (-SetRemarshalingFlags@CSceneVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CRedirectVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01C0D40 (-SetRemarshalingFlags@CRedirectVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CHostVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01C55F0 (-SetRemarshalingFlags@CHostVisualMarshaler@DirectComposition@@UEAA_NXZ.c)
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A941C (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::SetRemarshalingFlags(DirectComposition::CVisualMarshaler *this)
{
  char v1; // di
  char v3; // dl
  unsigned __int8 v4; // r8

  v1 = 0;
  if ( *((_QWORD *)this + 20) )
    *((_DWORD *)this + 4) |= 0x4000u;
  if ( *((float *)this + 14) != 0.0 || *((float *)this + 15) != 0.0 || *((float *)this + 16) != 0.0 )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((_QWORD *)this + 15) )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((_QWORD *)this + 16) )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( *((_QWORD *)this + 17) )
    *((_DWORD *)this + 4) |= 0x400u;
  if ( *((_QWORD *)this + 25) )
    *((_DWORD *)this + 4) |= 0x4000000u;
  if ( *((_QWORD *)this + 35) )
  {
    *((_QWORD *)this + 40) = 0LL;
    *((_DWORD *)this + 84) |= 1u;
  }
  if ( *((_QWORD *)this + 38) )
  {
    *((_QWORD *)this + 41) = 0LL;
    *((_DWORD *)this + 84) |= 2u;
  }
  if ( *((_QWORD *)this + 19) )
    *((_DWORD *)this + 4) |= 0x800u;
  if ( *((_QWORD *)this + 18) )
    *((_DWORD *)this + 4) |= 0x1000u;
  v3 = *((_BYTE *)this + 264);
  if ( v3 >= 0 )
    *((_DWORD *)this + 4) |= 0x800000u;
  if ( *((_DWORD *)this + 52) != -1
    || *((_DWORD *)this + 53) != -1
    || *((_DWORD *)this + 54) != -1
    || *((_DWORD *)this + 55) != -1
    || *((_DWORD *)this + 56) != -1
    || *((_DWORD *)this + 57) != -1 )
  {
    *((_DWORD *)this + 4) |= 0x8000u;
  }
  v4 = *((_BYTE *)this + 265);
  if ( ((unsigned __int8)~(v4 >> 1) & ((v3 & 0x58) == 0)) == 0 )
    *((_DWORD *)this + 4) |= 0x10000u;
  if ( (v3 & 0x20) != 0 )
    *((_DWORD *)this + 4) |= 0x20000u;
  if ( *((_DWORD *)this + 64) )
    *((_DWORD *)this + 4) |= 0x40000u;
  if ( (v3 & 2) != 0 )
    *((_DWORD *)this + 4) |= 0x80000u;
  if ( *((_QWORD *)this + 24) )
    *((_DWORD *)this + 4) |= 0x100000u;
  if ( *((float *)this + 17) != 0.0 || *((float *)this + 18) != 0.0 )
    *((_DWORD *)this + 4) |= 0x200000u;
  if ( *((float *)this + 24) != 1.0 )
    *((_DWORD *)this + 4) |= 0x400000u;
  if ( *((float *)this + 19) != 0.0 || *((float *)this + 20) != 0.0 || *((float *)this + 21) != 0.0 )
    *((_DWORD *)this + 4) |= 0x1000000u;
  if ( *((float *)this + 22) != 0.0 || *((float *)this + 23) != 0.0 )
    *((_DWORD *)this + 4) |= 0x2000000u;
  if ( (v3 & 1) != 0 )
    *((_DWORD *)this + 4) |= 0x10000000u;
  if ( *((_DWORD *)this + 58) )
    *((_DWORD *)this + 4) |= 0x8000000u;
  if ( *((_DWORD *)this + 59) )
    *((_DWORD *)this + 4) |= 0x20000000u;
  if ( *((float *)this + 25) != 0.0
    || *((float *)this + 26) != 0.0
    || *((float *)this + 27) != 0.0
    || *((float *)this + 28) != 0.0 )
  {
    *((_DWORD *)this + 4) |= 0x40000000u;
  }
  if ( (v4 & 4) != 0 )
    *((_DWORD *)this + 84) |= 4u;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this)
    || (*((_DWORD *)this + 4) & 0x7F7FDF80) != 0
    || (*((_DWORD *)this + 84) & 7) != 0 )
  {
    return 1;
  }
  return v1;
}
