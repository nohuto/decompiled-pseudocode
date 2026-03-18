/*
 * XREFs of ?SetRemarshalingFlags@CGradientBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01B0CA8
 * Callers:
 *     ?SetRemarshalingFlags@CLinearGradientBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01B2C10 (-SetRemarshalingFlags@CLinearGradientBrushMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CRadialGradientBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01C37E0 (-SetRemarshalingFlags@CRadialGradientBrushMarshaler@DirectComposition@@UEAA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CGradientBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CGradientBrushMarshaler *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 4);
  if ( *((_DWORD *)this + 22) )
  {
    *((_DWORD *)this + 23) = 0;
    v1 |= 0x100u;
  }
  *((_DWORD *)this + 4) = v1 | 0x2E0;
  return 1;
}
