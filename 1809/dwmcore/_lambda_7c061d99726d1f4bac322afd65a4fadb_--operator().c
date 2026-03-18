/*
 * XREFs of _lambda_7c061d99726d1f4bac322afd65a4fadb_::operator() @ 0x18019DCB4
 * Callers:
 *     ?InsertDependenciesForProperty@CInteractionTracker@@QEAAX_KW4Enum@InteractionTrackerProperty@@@Z @ 0x1801A0024 (-InsertDependenciesForProperty@CInteractionTracker@@QEAAX_KW4Enum@InteractionTrackerProperty@@@Z.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x18018A2B8 (-InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV-$CWeakReference@VCResource@@@.c)
 */

__int64 __fastcall lambda_7c061d99726d1f4bac322afd65a4fadb_::operator()(unsigned __int64 **a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rdi

  result = *a2;
  v3 = 0LL;
  v4 = *a2;
  v5 = 0LL;
  while ( v3 != v4 )
  {
    if ( v3 == result
      || (CExpressionManager::InsertExpressionsInOrderForTarget(
            *(_QWORD *)((*a1)[2] + 224),
            *a1[1],
            (*a1)[8],
            *(_DWORD *)(a2[1] + v5)),
          v5 < 0)
      || (result = *a2, v3 == *a2) )
    {
      gsl::details::terminate((gsl::details *)a1);
      __debugbreak();
    }
    ++v3;
    v5 += 4LL;
  }
  return result;
}
