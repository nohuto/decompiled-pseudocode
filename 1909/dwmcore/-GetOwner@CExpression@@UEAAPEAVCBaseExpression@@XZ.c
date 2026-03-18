/*
 * XREFs of ?GetOwner@CExpression@@UEAAPEAVCBaseExpression@@XZ @ 0x1800ED120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CBaseExpression *__fastcall CExpression::GetOwner(CExpression *this)
{
  return (struct CBaseExpression *)*((_QWORD *)this + 53);
}
