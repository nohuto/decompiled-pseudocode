/*
 * XREFs of ??$_Emplace_reallocate@UConditionExpressionListEntry@CConditionalExpression@@@?$vector@UConditionExpressionListEntry@CConditionalExpression@@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@QEAAPEAUConditionExpressionListEntry@CConditionalExpression@@QEAU23@$$QEAU23@@Z @ 0x1801D251C
 * Callers:
 *     ?ProcessAddConditionAnimationResources@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CONDITIONALEXPRESSION_ADDCONDITIONANIMATIONRESOURCES@@PEBXI@Z @ 0x1801D328C (-ProcessAddConditionAnimationResources@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUtagM.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Change_array@?$vector@UConditionExpressionListEntry@CConditionalExpression@@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@AEAAXQEAUConditionExpressionListEntry@CConditionalExpression@@_K1@Z @ 0x1801D36EC (-_Change_array@-$vector@UConditionExpressionListEntry@CConditionalExpression@@V-$allocator@UCond.c)
 */

unsigned __int64 __fastcall std::vector<CConditionalExpression::ConditionExpressionListEntry>::_Emplace_reallocate<CConditionalExpression::ConditionExpressionListEntry>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rax
  _QWORD *v6; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbp
  SIZE_T v12; // rcx
  unsigned __int64 v13; // r14
  __int64 v14; // r11
  _QWORD *v15; // r10
  _QWORD *v16; // rcx
  _QWORD *v17; // r8
  _QWORD *v18; // rdx
  _QWORD *v19; // rcx
  _QWORD *v20; // r9
  _QWORD *v21; // r8
  _QWORD *v22; // rcx
  _QWORD *v23; // r10

  v4 = (unsigned __int64)a2 - *(_QWORD *)a1;
  v5 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
  v6 = a2;
  if ( v5 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error((const char *)a1);
  v8 = v5 + 1;
  v9 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 <= 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v5 + 1;
  }
  else
  {
    v11 = v5 + 1;
  }
  v12 = 16 * v11;
  if ( v11 > 0xFFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v15 = (_QWORD *)(v13 + v14);
  *(_QWORD *)(v13 + v14) = 0LL;
  if ( (_QWORD *)(v13 + v14) != a3 )
  {
    *v15 = *a3;
    *a3 = 0LL;
  }
  v16 = a3 + 1;
  v15[1] = 0LL;
  if ( v15 + 1 != a3 + 1 )
  {
    v15[1] = *v16;
    *v16 = 0LL;
  }
  v17 = *(_QWORD **)(a1 + 8);
  v18 = (_QWORD *)v14;
  v19 = *(_QWORD **)a1;
  if ( v6 == v17 )
  {
    if ( v19 != v17 )
    {
      v20 = v19 + 1;
      do
      {
        *v18 = 0LL;
        if ( v18 != v19 )
        {
          *v18 = *v19;
          *v19 = 0LL;
        }
        v18[1] = 0LL;
        if ( v18 + 1 != v20 )
        {
          v18[1] = *v20;
          *v20 = 0LL;
        }
        v18 += 2;
        v19 += 2;
        v20 += 2;
      }
      while ( v19 != v17 );
    }
  }
  else
  {
    if ( v19 != v6 )
    {
      v21 = v19 + 1;
      do
      {
        *v18 = 0LL;
        if ( v18 != v19 )
        {
          *v18 = *v19;
          *v19 = 0LL;
        }
        v18[1] = 0LL;
        if ( v18 + 1 != v21 )
        {
          v18[1] = *v21;
          *v21 = 0LL;
        }
        v18 += 2;
        v19 += 2;
        v21 += 2;
      }
      while ( v19 != v6 );
      v17 = *(_QWORD **)(a1 + 8);
    }
    if ( v6 != v17 )
    {
      v22 = v15 + 2;
      do
      {
        *v22 = 0LL;
        if ( v22 != v6 )
        {
          *v22 = *v6;
          *v6 = 0LL;
        }
        v23 = v6 + 1;
        v22[1] = 0LL;
        if ( v22 + 1 != v6 + 1 )
        {
          v22[1] = *v23;
          *v23 = 0LL;
        }
        v6 += 2;
        v22 += 2;
      }
      while ( v6 != v17 );
    }
  }
  std::vector<CConditionalExpression::ConditionExpressionListEntry>::_Change_array(a1, v14, v8, v11);
  return v13 + *(_QWORD *)a1;
}
