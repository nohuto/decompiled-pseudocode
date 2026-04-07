/*
 * XREFs of ?OnMouseEnter@CButton@@UEAAXXZ @ 0x180007240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CButton::OnMouseEnter(CButton *this)
{
  *((_BYTE *)this + 280) |= 2u;
  CVisual::SetDirtyFlags(this, 0x8000u);
}
