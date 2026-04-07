/*
 * XREFs of ?SetOpacity@CImage@@UEAAXN@Z @ 0x180082EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CImage::SetOpacity(CImage *this, double a2)
{
  CVisual::SendSetOpacity(this, a2);
}
