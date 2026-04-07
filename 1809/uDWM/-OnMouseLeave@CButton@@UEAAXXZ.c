/*
 * XREFs of ?OnMouseLeave@CButton@@UEAAXXZ @ 0x180007220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CButton::OnMouseLeave(CButton *this)
{
  *((_BYTE *)this + 280) &= 0xF1u;
  CVisual::SetDirtyFlags(this, 0x8000u);
}
