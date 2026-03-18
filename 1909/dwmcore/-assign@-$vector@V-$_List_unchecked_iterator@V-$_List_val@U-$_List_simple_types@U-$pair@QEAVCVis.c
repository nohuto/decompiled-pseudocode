/*
 * XREFs of ?assign@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@@2@@std@@QEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@@Z @ 0x1800DA01C
 * Callers:
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800D9F88 (-_Init@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V-$_Uhash_compare@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Buy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@std@@@std@@@std@@@2@@std@@AEAA_N_K@Z @ 0x18016A69C (-_Buy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAVCInter.c)
 */

_UNKNOWN **__fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>>>>::assign(
        __int64 a1,
        unsigned __int64 a2,
        _QWORD *a3)
{
  _UNKNOWN **result; // rax
  _QWORD *v4; // r9
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r10
  __int64 v10; // rbx
  unsigned __int64 v11; // r8
  _QWORD *i; // rcx
  unsigned __int64 j; // rsi
  unsigned __int64 v14; // rsi
  _QWORD *v15; // r8
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = *(_QWORD **)a1;
  v7 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v8 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( a2 > v7 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error((const char *)a1);
    v20 = v7 >> 1;
    if ( v7 <= 0x1FFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v21 = v20 + v7;
      if ( v20 + v7 < a2 )
        v21 = a2;
    }
    else
    {
      v21 = a2;
    }
    if ( v4 )
      std::_Deallocate<16,0>(v4, 8 * v7);
    result = (_UNKNOWN **)std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CInteractionTracker * const,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>>>>>::_Buy(
                            a1,
                            v21);
    for ( i = *(_QWORD **)a1; a2; --a2 )
    {
      result = (_UNKNOWN **)*a3;
      *i++ = *a3;
    }
    goto LABEL_8;
  }
  v10 = 0LL;
  if ( a2 > v8 )
  {
    v11 = (unsigned __int64)(*(_QWORD *)(a1 + 8) - (_QWORD)v4 + 7LL) >> 3;
    if ( (unsigned __int64)v4 > *(_QWORD *)(a1 + 8) )
      v11 = 0LL;
    if ( v11 )
    {
      if ( v11 >= 2 )
      {
        result = (_UNKNOWN **)*a3;
        if ( v4 > a3 || &v4[v11 - 1] < a3 )
        {
          v19 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
          do
            v10 += 2LL;
          while ( v10 != v19 );
          v22 = 8 * v19;
          memset64(v4, (unsigned __int64)result, v22 >> 3);
          v4 = (_QWORD *)((char *)v4 + v22);
        }
      }
      while ( v10 != v11 )
      {
        result = (_UNKNOWN **)*a3;
        ++v10;
        *v4++ = *a3;
      }
    }
    i = *(_QWORD **)(a1 + 8);
    for ( j = a2 - v8; j; --j )
    {
      result = (_UNKNOWN **)*a3;
      *i++ = *a3;
    }
LABEL_8:
    *(_QWORD *)(a1 + 8) = i;
    return result;
  }
  v14 = a2;
  v15 = &v4[v14];
  v16 = (v14 * 8) >> 3;
  if ( v4 > v15 )
    v16 = 0LL;
  if ( v16 )
  {
    if ( v16 >= 2 )
    {
      result = (_UNKNOWN **)*a3;
      if ( v4 > a3 || &v4[v16 - 1] < a3 )
      {
        v17 = v16 & 0xFFFFFFFFFFFFFFFEuLL;
        do
          v10 += 2LL;
        while ( v10 != v17 );
        v18 = 8 * v17;
        memset64(v4, (unsigned __int64)result, v18 >> 3);
        v4 = (_QWORD *)((char *)v4 + v18);
      }
    }
    while ( v10 != v16 )
    {
      result = (_UNKNOWN **)*a3;
      ++v10;
      *v4++ = *a3;
    }
  }
  *(_QWORD *)(a1 + 8) = v15;
  return result;
}
