/*
 * XREFs of ?InsertDependenciesInOrder@CExpression@@UEAAX_K@Z @ 0x1800BDA60
 * Callers:
 *     <none>
 * Callees:
 *     ?LookupExpressionsForTarget@CExpressionManager@@QEAAPEAUExpressionListEntry@@PEAV?$CWeakReference@VCResource@@@@I@Z @ 0x1800BDB0C (-LookupExpressionsForTarget@CExpressionManager@@QEAAPEAUExpressionListEntry@@PEAV-$CWeakReferenc.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x1800BDB78 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 */

void __fastcall CExpression::InsertDependenciesInOrder(CExpression *this, unsigned __int64 a2)
{
  __int64 v2; // rdi
  __int64 i; // r14
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 j; // rsi

  v2 = 0LL;
  for ( i = *(_QWORD *)(*((_QWORD *)this + 2) + 240LL);
        (unsigned int)v2 < *((_DWORD *)this + 104);
        v2 = (unsigned int)(v2 + 1) )
  {
    v6 = *((_QWORD *)this + 51);
    v7 = *(_QWORD *)(*((_QWORD *)this + 49) + 8LL * *(unsigned int *)(v6 + 24 * v2 + 20));
    if ( v7 )
    {
      for ( j = CExpressionManager::LookupExpressionsForTarget(i, v7, *(unsigned int *)(v6 + 24 * v2));
            j;
            j = *(_QWORD *)(j + 16) )
      {
        CBaseExpression::InsertInOrder(*(CBaseExpression **)(j + 8), a2);
      }
    }
  }
}
