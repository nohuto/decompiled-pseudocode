/*
 * XREFs of ?AdvanceInertiaToTimeDefault@CScaleMotion@@MEAAMXZ @ 0x1801E0C50
 * Callers:
 *     <none>
 * Callees:
 *     ?UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z @ 0x1801E0E38 (-UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z.c)
 */

float __fastcall CScaleMotion::AdvanceInertiaToTimeDefault(CScaleMotion *this)
{
  *((float *)this + 5) = CScaleMotion::UnboundedValueAtTime(this, fminf(*((float *)this + 6), *((float *)this + 17)));
  return CMotion::AdvanceInertiaToTimeDefault(this);
}
