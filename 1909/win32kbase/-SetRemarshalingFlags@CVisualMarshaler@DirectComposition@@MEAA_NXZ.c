/*
 * XREFs of ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A6D40
 * Callers:
 *     ?SetRemarshalingFlags@CCursorVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A8DD0 (-SetRemarshalingFlags@CCursorVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CSpriteVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01B02F0 (-SetRemarshalingFlags@CSpriteVisualMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CLayerVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01B03C0 (-SetRemarshalingFlags@CLayerVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CShapeVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01B0980 (-SetRemarshalingFlags@CShapeVisualMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CParticleEmitterVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01B4F70 (-SetRemarshalingFlags@CParticleEmitterVisualMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CGlyphRunVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01B67C0 (-SetRemarshalingFlags@CGlyphRunVisualMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CSceneVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01BB010 (-SetRemarshalingFlags@CSceneVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CRedirectVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01BEDA0 (-SetRemarshalingFlags@CRedirectVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CHostVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01C3650 (-SetRemarshalingFlags@CHostVisualMarshaler@DirectComposition@@UEAA_NXZ.c)
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A717C (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
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
  if ( *((_QWORD *)this + 26) )
    *((_DWORD *)this + 4) |= 0x4000000u;
  if ( *((_QWORD *)this + 36) )
  {
    *((_QWORD *)this + 41) = 0LL;
    *((_DWORD *)this + 86) |= 1u;
  }
  if ( *((_QWORD *)this + 39) )
  {
    *((_QWORD *)this + 42) = 0LL;
    *((_DWORD *)this + 86) |= 2u;
  }
  if ( *((_QWORD *)this + 19) )
    *((_DWORD *)this + 4) |= 0x800u;
  if ( *((_QWORD *)this + 18) )
    *((_DWORD *)this + 4) |= 0x1000u;
  v3 = *((_BYTE *)this + 272);
  if ( v3 >= 0 )
    *((_DWORD *)this + 4) |= 0x800000u;
  if ( *((_DWORD *)this + 54) != -1
    || *((_DWORD *)this + 55) != -1
    || *((_DWORD *)this + 56) != -1
    || *((_DWORD *)this + 57) != -1
    || *((_DWORD *)this + 58) != -1
    || *((_DWORD *)this + 59) != -1 )
  {
    *((_DWORD *)this + 4) |= 0x8000u;
  }
  v4 = *((_BYTE *)this + 273);
  if ( ((unsigned __int8)~(v4 >> 1) & ((v3 & 0x58) == 0)) == 0 )
    *((_DWORD *)this + 4) |= 0x10000u;
  if ( (v3 & 0x20) != 0 )
    *((_DWORD *)this + 4) |= 0x20000u;
  if ( *((_DWORD *)this + 66) )
    *((_DWORD *)this + 4) |= 0x40000u;
  if ( (v3 & 2) != 0 )
    *((_DWORD *)this + 4) |= 0x80000u;
  if ( *((_QWORD *)this + 25) )
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
  if ( *((_DWORD *)this + 60) )
    *((_DWORD *)this + 4) |= 0x8000000u;
  if ( *((_DWORD *)this + 61) )
    *((_DWORD *)this + 4) |= 0x20000000u;
  if ( *((float *)this + 25) != 0.0
    || *((float *)this + 26) != 0.0
    || *((float *)this + 27) != 0.0
    || *((float *)this + 28) != 0.0 )
  {
    *((_DWORD *)this + 4) |= 0x40000000u;
  }
  if ( (v4 & 4) != 0 )
    *((_DWORD *)this + 86) |= 4u;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this)
    || (*((_DWORD *)this + 4) & 0x7F7FDF80) != 0
    || (*((_DWORD *)this + 86) & 7) != 0 )
  {
    return 1;
  }
  return v1;
}
