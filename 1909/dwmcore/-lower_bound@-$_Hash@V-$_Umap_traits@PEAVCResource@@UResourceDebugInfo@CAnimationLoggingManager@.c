/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@AEBQEAVCResource@@@Z @ 0x1800BB144
 * Callers:
 *     ?GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x18004CD5C (-GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z.c)
 *     ?TryGetDebugInfoForResource@CAnimationLoggingManager@@AEAAPEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x18004CDEC (-TryGetDebugInfoForResource@CAnimationLoggingManager@@AEAAPEAUResourceDebugInfo@1@PEAVCResource@.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x1800760D0 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?RemoveResourceDebugInfo@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z @ 0x1800BDD54 (-RemoveResourceDebugInfo@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::lower_bound(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int8 *a3)
{
  __int64 v4; // rax
  unsigned __int8 *v5; // r11
  unsigned __int64 v6; // rax
  __int64 v7; // r11
  __int64 v8; // r9
  __int64 v9; // r10
  _QWORD *i; // rax
  _QWORD *v11; // rcx

  v4 = 0xCBF29CE484222325uLL;
  v5 = a3;
  if ( a3 < a3 + 8 )
  {
    do
    {
      v6 = *v5++ ^ (unsigned __int64)v4;
      v4 = 0x100000001B3LL * v6;
    }
    while ( v5 - a3 != (a3 + 8 >= a3 ? 8 : 0) );
  }
  v7 = a1[3];
  v8 = a1[1];
  v9 = 2 * (v4 & a1[6]);
  for ( i = *(_QWORD **)(v7 + 16 * (v4 & a1[6])); ; i = (_QWORD *)*i )
  {
    v11 = *(_QWORD *)(v7 + 8 * v9) == v8 ? (_QWORD *)a1[1] : **(_QWORD ***)(v7 + 8 * v9 + 8);
    if ( i == v11 )
      break;
    if ( i[2] == *(_QWORD *)a3 )
    {
      *a2 = i;
      return a2;
    }
  }
  *a2 = v8;
  return a2;
}
