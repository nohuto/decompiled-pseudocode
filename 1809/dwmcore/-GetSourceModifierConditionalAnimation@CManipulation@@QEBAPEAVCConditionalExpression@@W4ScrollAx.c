/*
 * XREFs of ?GetSourceModifierConditionalAnimation@CManipulation@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x1801E5320
 * Callers:
 *     ?GetSourceModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x1801E5350 (-GetSourceModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditionalExpression.c)
 *     ?InsertDependenciesForAxis@InteractionSourceManager@@QEAAX_KW4ScrollAxis@@@Z @ 0x1801E53C8 (-InsertDependenciesForAxis@InteractionSourceManager@@QEAAX_KW4ScrollAxis@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CManipulation::GetSourceModifierConditionalAnimation(_QWORD *a1, int a2)
{
  int v2; // edx

  if ( !a2 )
    return a1[62];
  v2 = a2 - 1;
  if ( !v2 )
    return a1[63];
  if ( v2 == 1 )
    return a1[64];
  return 0LL;
}
