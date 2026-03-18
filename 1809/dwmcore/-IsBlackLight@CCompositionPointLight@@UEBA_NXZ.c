/*
 * XREFs of ?IsBlackLight@CCompositionPointLight@@UEBA_NXZ @ 0x180190250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionPointLight::IsBlackLight(CCompositionPointLight *this)
{
  return CCompositionLight::IsBlackColor(
           this,
           (const struct _D3DCOLORVALUE *)((char *)this + 168),
           *((float *)this + 54));
}
