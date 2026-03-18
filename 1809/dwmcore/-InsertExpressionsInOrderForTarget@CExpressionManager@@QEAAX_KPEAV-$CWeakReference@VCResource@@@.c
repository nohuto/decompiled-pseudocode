/*
 * XREFs of ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x18018A2B8
 * Callers:
 *     _lambda_7c061d99726d1f4bac322afd65a4fadb_::operator() @ 0x18019DCB4 (_lambda_7c061d99726d1f4bac322afd65a4fadb_--operator().c)
 *     ?InsertDependenciesForAxis@InteractionSourceManager@@QEAAX_KW4ScrollAxis@@@Z @ 0x1801E53C8 (-InsertDependenciesForAxis@InteractionSourceManager@@QEAAX_KW4ScrollAxis@@@Z.c)
 * Callees:
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x18005B880 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 *     ?LookupExpressionsForTarget@CExpressionManager@@QEAAPEAUExpressionListEntry@@PEAV?$CWeakReference@VCResource@@@@I@Z @ 0x18018A304 (-LookupExpressionsForTarget@CExpressionManager@@QEAAPEAUExpressionListEntry@@PEAV-$CWeakReferenc.c)
 */

void __fastcall CExpressionManager::InsertExpressionsInOrderForTarget(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 i; // rbx

  for ( i = CExpressionManager::LookupExpressionsForTarget(a1, a3, a4); i; i = *(_QWORD *)(i + 16) )
    CBaseExpression::InsertInOrder(*(CBaseExpression **)(i + 8), a2);
}
