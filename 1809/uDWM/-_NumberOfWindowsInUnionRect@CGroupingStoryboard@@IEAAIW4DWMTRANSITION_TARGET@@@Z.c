/*
 * XREFs of ?_NumberOfWindowsInUnionRect@CGroupingStoryboard@@IEAAIW4DWMTRANSITION_TARGET@@@Z @ 0x1800A6464
 * Callers:
 *     ?_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z @ 0x1800A66C0 (-_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     ?_GroupingIndexByTarget@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAI@Z @ 0x1800A5EE8 (-_GroupingIndexByTarget@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAI@Z.c)
 */

__int64 __fastcall CGroupingStoryboard::_NumberOfWindowsInUnionRect(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v5 = 0;
  if ( (int)CGroupingStoryboard::_GroupingIndexByTarget(a1, a2, &v5) >= 0 )
    return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * v5) + 48LL);
  return v2;
}
