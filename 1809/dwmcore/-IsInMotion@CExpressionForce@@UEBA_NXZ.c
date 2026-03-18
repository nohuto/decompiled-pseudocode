/*
 * XREFs of ?IsInMotion@CExpressionForce@@UEBA_NXZ @ 0x1801E6D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CExpressionForce::IsInMotion(CExpressionForce *this)
{
  return CScalarForceEvaluator::IsInMotion((CExpressionForce *)((char *)this + 24));
}
