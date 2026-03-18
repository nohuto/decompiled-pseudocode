/*
 * XREFs of ?AdvanceInertiaToTimeDefault@CScaleMotion@@MEAAMXZ @ 0x18020F660
 * Callers:
 *     <none>
 * Callees:
 *     ?UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z @ 0x18020F848 (-UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z.c)
 */

float __fastcall CScaleMotion::AdvanceInertiaToTimeDefault(CScaleMotion *this)
{
  *((float *)this + 5) = CScaleMotion::UnboundedValueAtTime(this, fminf(*((float *)this + 6), *((float *)this + 17)));
  return CMotion::AdvanceInertiaToTimeDefault(this);
}
