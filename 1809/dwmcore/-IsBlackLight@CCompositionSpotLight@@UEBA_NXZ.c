/*
 * XREFs of ?IsBlackLight@CCompositionSpotLight@@UEBA_NXZ @ 0x180036C80
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBlackColor@CCompositionLight@@IEBA_NAEBU_D3DCOLORVALUE@@M@Z @ 0x180038070 (-IsBlackColor@CCompositionLight@@IEBA_NAEBU_D3DCOLORVALUE@@M@Z.c)
 */

char __fastcall CCompositionSpotLight::IsBlackLight(CCompositionSpotLight *this)
{
  bool IsBlackColor; // al
  __int64 v2; // rcx
  char v3; // r8
  char v4; // al

  IsBlackColor = CCompositionLight::IsBlackColor(
                   this,
                   (const struct _D3DCOLORVALUE *)((char *)this + 216),
                   *((float *)this + 75));
  v3 = 0;
  if ( IsBlackColor )
  {
    v4 = CCompositionLight::IsBlackColor(
           (CCompositionLight *)v2,
           (const struct _D3DCOLORVALUE *)(v2 + 232),
           *(float *)(v2 + 304));
    if ( v4 != v3 )
      return 1;
  }
  return v3;
}
