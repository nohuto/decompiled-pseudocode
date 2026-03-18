/*
 * XREFs of ?SetRemarshalingFlags@CGradientBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C0174A24
 * Callers:
 *     ?SetRemarshalingFlags@CLinearGradientBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01765C0 (-SetRemarshalingFlags@CLinearGradientBrushMarshaler@DirectComposition@@UEAA_NXZ.c)
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
    v1 |= 0x100u;
    *((_DWORD *)this + 23) = 0;
    *((_DWORD *)this + 4) = v1;
  }
  *((_DWORD *)this + 4) = v1 | 0x2E0;
  return 1;
}
