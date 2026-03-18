/*
 * XREFs of ?GetOwner@CNaturalAnimationScalarForceAdapater@@AEBAPEAVCNaturalAnimation@@XZ @ 0x1801E81BC
 * Callers:
 *     ?Update@CNaturalAnimationScalarForceAdapater@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x1801E82B0 (-Update@CNaturalAnimationScalarForceAdapater@@UEAAMMPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     <none>
 */

struct CNaturalAnimation *__fastcall CNaturalAnimationScalarForceAdapater::GetOwner(
        CNaturalAnimationScalarForceAdapater *this)
{
  struct CNaturalAnimation *result; // rax

  result = (struct CNaturalAnimation *)*((_QWORD *)this + 5);
  if ( result )
    return (struct CNaturalAnimation *)*((_QWORD *)result + 2);
  return result;
}
