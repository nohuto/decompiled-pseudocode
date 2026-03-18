/*
 * XREFs of _lambda_2149ae26af8bda672c72659e191929ce_::operator() @ 0x1801D88AC
 * Callers:
 *     ?InsertDependenciesForProperty@CInteractionTracker@@QEAAX_KW4Enum@InteractionTrackerProperty@@@Z @ 0x1801DAD44 (-InsertDependenciesForProperty@CInteractionTracker@@QEAAX_KW4Enum@InteractionTrackerProperty@@@Z.c)
 * Callees:
 *     ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x1801C1438 (-InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV-$CWeakReference@VCResource@@@.c)
 *     ?GetWeakRefToSelf@CInteractionTracker@@AEAAPEAV?$CWeakReference@VCResource@@@@XZ @ 0x1801DAAE0 (-GetWeakRefToSelf@CInteractionTracker@@AEAAPEAV-$CWeakReference@VCResource@@@@XZ.c)
 */

void __fastcall lambda_2149ae26af8bda672c72659e191929ce_::operator()(unsigned __int64 **a1, unsigned __int64 *a2)
{
  unsigned int *v2; // r14
  __int64 v3; // rsi
  unsigned __int64 v5; // rdi
  unsigned int *v6; // rax
  unsigned __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 WeakRefToSelf; // rax

  v2 = (unsigned int *)a2[1];
  v3 = 0LL;
  v5 = *a2;
  v6 = &v2[v5];
  v7 = (v5 * 4) >> 2;
  if ( v2 > v6 )
    v7 = 0LL;
  if ( v7 )
  {
    do
    {
      v8 = *(_QWORD *)((*a1)[2] + 240);
      WeakRefToSelf = CInteractionTracker::GetWeakRefToSelf();
      CExpressionManager::InsertExpressionsInOrderForTarget(v8, *a1[1], WeakRefToSelf, *v2);
      ++v3;
      ++v2;
    }
    while ( v3 != v7 );
  }
}
