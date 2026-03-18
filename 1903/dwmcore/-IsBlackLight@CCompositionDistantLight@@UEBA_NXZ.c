/*
 * XREFs of ?IsBlackLight@CCompositionDistantLight@@UEBA_NXZ @ 0x1800BA6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionDistantLight::IsBlackLight(struct _D3DCOLORVALUE *this)
{
  return CCompositionLight::IsBlackColor((CCompositionLight *)this, this + 16, this[17].a);
}
